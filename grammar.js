const WHITE_SPACE = /[\x01-\x09\x11-\x20\x80-\xA0]+/;

module.exports = grammar({
  name: "edoc",

  extras: ($) => [WHITE_SPACE],

  rules: {
    source: ($) =>
      seq(repeat($._terminator), repeat(seq($._line, repeat1($._terminator)))),

    _line: ($) => choice($.section, $._tag_line, $._text_line),

    _tag_line: ($) =>
      choice($._author_line, seq($.tag, optional($._text_line))),

    _author_line: ($) =>
      seq(
        alias("@author", $.tag),
        repeat($._word),
        optional(alias($.xhtml_tag, $.email_address))
      ),

    _text_line: ($) =>
      repeat1(
        choice(
          $.macro,
          $._word,
          $._xhtml_tag,
          $.inline_quote,
          $.block_quote,
          $.quote_escape
        )
      ),

    section: ($) =>
      choice(section($, "=="), section($, "==="), section($, "====")),

    macro: ($) =>
      choice(
        $._link_macro,
        seq("{", $.tag, optional(seq(/\s+/, $.argument)), "}")
      ),

    _link_macro: ($) =>
      seq(
        "{",
        alias("@link", $.tag),
        alias($._link_expression, $.expression),
        optional(seq(".", alias($.argument, $.description))),
        "}"
      ),

    _link_expression: ($) =>
      prec.right(repeat1(choice(/[^\.}]/, $.macro_escape, "."))),

    tag: ($) => /@\w+/,
    argument: ($) => repeat1(choice(/[^}]/, $.macro_escape)),

    _xhtml_tag: ($) => choice($.em_xhtml_tag, $.strong_xhtml_tag, $.xhtml_tag),

    em_xhtml_tag: ($) => special_xhtml_tag($, "em"),
    strong_xhtml_tag: ($) => special_xhtml_tag($, "strong"),

    xhtml_tag: ($) => seq("<", repeat(/[^>]/), ">"),

    xhtml_tag_content: ($) =>
      repeat1(
        choice(
          $._word,
          $.xhtml_tag,
          $.inline_quote,
          $.quote_escape,
          $._terminator
        )
      ),

    macro_escape: ($) => choice("@{", "@}", "@@"),

    quote_escape: ($) => /`'/,

    inline_quote: ($) =>
      choice($._inline_quote, $._double_inline_quote, $._triple_inline_quote),

    _inline_quote: ($) => seq("`", /[^'\r\n]+/, "'"),
    _double_inline_quote: ($) => seq("``", repeat(/([^'\r\n]|')/), "''"),
    _triple_inline_quote: ($) => seq("```", repeat(/([^'\r\n]|')/), "'''"),

    block_quote: ($) =>
      seq(
        alias("```", $.quote_marker),
        optional(field("language", $.language_identifier)),
        $.quote_content,
        alias("'''", $.quote_marker)
      ),

    language_identifier: ($) => /[\w_-]+\r?\n/,

    quote_content: ($) => repeat1(/([^']|')/),

    _terminator: ($) => /\r?\n/,

    _double_terminator: ($) => /\r?\n\r?\n+/,

    _word: ($) => token(prec(-1, /([^ \t\n\r<{`]|<\{`)+/)),
  },
});

function sep1(rule, separator) {
  return seq(rule, repeat1(seq(separator, rule)));
}

function section($, marker) {
  return seq(
    alias(marker, $.section_marker),
    alias($._text_line, $.section_content),
    alias(marker, $.section_marker)
  );
}

function special_xhtml_tag($, tagname) {
  return seq(
    alias(`<${tagname}>`, $.open_xhtml_tag),
    $.xhtml_tag_content,
    alias(`</${tagname}>`, $.close_xhtml_tag)
  );
}

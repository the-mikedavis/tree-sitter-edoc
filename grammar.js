const WHITE_SPACE = /[\x01-\x09\x11-\x20\x80-\xA0]+/;

module.exports = grammar({
  name: "edoc",

  extras: ($) => [WHITE_SPACE],

  rules: {
    source: ($) =>
      seq(repeat($._terminator), repeat(seq($.line, repeat1($._terminator)))),

    line: ($) => choice($.section, $._tag_line, $._text_line),

    _tag_line: ($) => seq($.tag, optional($._text_line)),

    _text_line: ($) =>
      repeat1(
        choice(
          $.macro,
          $._word,
          $.xhtml_tag,
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

    xhtml_tag: ($) => seq("<", repeat(/[^>]/), ">"),

    macro_escape: ($) => choice("@{", "@}", "@@"),

    quote_escape: ($) => /`'/,

    inline_quote: ($) => choice($._inline_quote, $._double_inline_quote),

    _inline_quote: ($) => seq("`", /[^']+/, "'"),
    _double_inline_quote: ($) => seq("``", repeat(/([^']|')/), "''"),

    block_quote: ($) =>
      seq(
        alias("```", $.quote_marker),
        optional(choice($._block_quote_with_identifier_body, $.quote_content)),
        alias("'''", $.quote_marker)
      ),

    _block_quote_with_identifier_body: ($) =>
      seq(
        alias($._word, $.language_identifier),
        $._terminator,
        $.quote_content
      ),

    quote_content: ($) => repeat1(/([^']|')/),

    _terminator: ($) => /\r?\n/,

    _double_terminator: ($) => /\r?\n\r?\n+/,

    _word: ($) => token(prec(-1, /[^ \t\n\r]+/)),
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

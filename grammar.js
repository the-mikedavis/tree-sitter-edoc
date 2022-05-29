const WHITE_SPACE = /[\x01-\x09\x11-\x20\x80-\xA0]+/;

module.exports = grammar({
  name: "edoc",

  extras: ($) => [WHITE_SPACE],

  rules: {
    source: ($) =>
      repeat(seq($.line, repeat1($._terminator))),
      // seq(sep1($.line, repeat1($._terminator)), optional($._terminator)),

    line: ($) => repeat1(choice($.macro, $._word, $.xhtml_tag)),

    macro: ($) =>
      choice(
        $._link_macro,
        seq("{", $.tag, optional(seq(/\s+/, $.argument)), "}")
      ),

    _link_macro: ($) =>
      seq(
        "{",
        alias("@link", $.tag),
        $.expression,
        optional(seq(".", alias($.argument, $.description))),
        "}"
      ),

    expression: ($) =>
      prec.right(repeat1(choice(/[^\.}]/, $.macro_escape, "."))),

    tag: ($) => /@\w+/,
    argument: ($) => repeat1(choice(/[^}]/, $.macro_escape)),

    xhtml_tag: ($) => seq("<", repeat(/[^>]/), ">"),

    macro_escape: ($) => choice("@{", "@}", "@@"),

    _terminator: ($) => /\r?\n/,

    _double_terminator: ($) => /\r?\n\r?\n+/,

    _word: ($) => token(prec(-1, /[^ \t\n\r]+/)),
  },
});

function sep1(rule, separator) {
  return seq(rule, repeat1(seq(separator, rule)));
}

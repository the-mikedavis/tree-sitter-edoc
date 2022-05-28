module.exports = grammar({
  name: "edoc",

  rules: {
    source: ($) => repeat($.line),

    line: ($) => $.macro,

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

    xhtml_tag: ($) => /<.*>/,

    macro_escape: ($) => choice("@{", "@}", "@@"),

    double_break: ($) => /\r?\n\r?\n+/,
  },
});

function sep1(rule, separator) {
  return seq(rule, repeat1(seq(separator, rule)));
}

#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 158
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 3
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_EQ_EQ = 1,
  anon_sym_EQ_EQ_EQ = 2,
  anon_sym_EQ_EQ_EQ_EQ = 3,
  anon_sym_LBRACE = 4,
  aux_sym_macro_token1 = 5,
  anon_sym_RBRACE = 6,
  anon_sym_ATlink = 7,
  anon_sym_DOT = 8,
  aux_sym__link_expression_token1 = 9,
  sym_tag = 10,
  aux_sym_argument_token1 = 11,
  anon_sym_LT = 12,
  aux_sym_xhtml_tag_token1 = 13,
  anon_sym_GT = 14,
  anon_sym_AT_LBRACE = 15,
  anon_sym_AT_RBRACE = 16,
  anon_sym_AT_AT = 17,
  sym_quote_escape = 18,
  anon_sym_BQUOTE = 19,
  aux_sym__inline_quote_token1 = 20,
  anon_sym_SQUOTE = 21,
  anon_sym_BQUOTE_BQUOTE = 22,
  aux_sym__double_inline_quote_token1 = 23,
  anon_sym_SQUOTE_SQUOTE = 24,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 25,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 26,
  sym__terminator = 27,
  sym__word = 28,
  sym_source = 29,
  sym_line = 30,
  sym__tag_line = 31,
  aux_sym__text_line = 32,
  sym_section = 33,
  sym_macro = 34,
  sym__link_macro = 35,
  sym__link_expression = 36,
  sym_argument = 37,
  sym_xhtml_tag = 38,
  sym_macro_escape = 39,
  sym_inline_quote = 40,
  sym__inline_quote = 41,
  sym__double_inline_quote = 42,
  sym_block_quote = 43,
  sym__block_quote_with_identifier_body = 44,
  sym_quote_content = 45,
  aux_sym_source_repeat1 = 46,
  aux_sym_source_repeat2 = 47,
  aux_sym__link_expression_repeat1 = 48,
  aux_sym_argument_repeat1 = 49,
  aux_sym_xhtml_tag_repeat1 = 50,
  aux_sym__double_inline_quote_repeat1 = 51,
  alias_sym_description = 52,
  alias_sym_language_identifier = 53,
  alias_sym_section_content = 54,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ_EQ] = "section_marker",
  [anon_sym_EQ_EQ_EQ] = "section_marker",
  [anon_sym_EQ_EQ_EQ_EQ] = "section_marker",
  [anon_sym_LBRACE] = "{",
  [aux_sym_macro_token1] = "macro_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_ATlink] = "tag",
  [anon_sym_DOT] = ".",
  [aux_sym__link_expression_token1] = "_link_expression_token1",
  [sym_tag] = "tag",
  [aux_sym_argument_token1] = "argument_token1",
  [anon_sym_LT] = "<",
  [aux_sym_xhtml_tag_token1] = "xhtml_tag_token1",
  [anon_sym_GT] = ">",
  [anon_sym_AT_LBRACE] = "@{",
  [anon_sym_AT_RBRACE] = "@}",
  [anon_sym_AT_AT] = "@@",
  [sym_quote_escape] = "quote_escape",
  [anon_sym_BQUOTE] = "`",
  [aux_sym__inline_quote_token1] = "_inline_quote_token1",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE_BQUOTE] = "``",
  [aux_sym__double_inline_quote_token1] = "_double_inline_quote_token1",
  [anon_sym_SQUOTE_SQUOTE] = "''",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "quote_marker",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "quote_marker",
  [sym__terminator] = "_terminator",
  [sym__word] = "_word",
  [sym_source] = "source",
  [sym_line] = "line",
  [sym__tag_line] = "_tag_line",
  [aux_sym__text_line] = "_text_line",
  [sym_section] = "section",
  [sym_macro] = "macro",
  [sym__link_macro] = "_link_macro",
  [sym__link_expression] = "expression",
  [sym_argument] = "argument",
  [sym_xhtml_tag] = "xhtml_tag",
  [sym_macro_escape] = "macro_escape",
  [sym_inline_quote] = "inline_quote",
  [sym__inline_quote] = "_inline_quote",
  [sym__double_inline_quote] = "_double_inline_quote",
  [sym_block_quote] = "block_quote",
  [sym__block_quote_with_identifier_body] = "_block_quote_with_identifier_body",
  [sym_quote_content] = "quote_content",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_source_repeat2] = "source_repeat2",
  [aux_sym__link_expression_repeat1] = "_link_expression_repeat1",
  [aux_sym_argument_repeat1] = "argument_repeat1",
  [aux_sym_xhtml_tag_repeat1] = "xhtml_tag_repeat1",
  [aux_sym__double_inline_quote_repeat1] = "_double_inline_quote_repeat1",
  [alias_sym_description] = "description",
  [alias_sym_language_identifier] = "language_identifier",
  [alias_sym_section_content] = "section_content",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_EQ_EQ_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_macro_token1] = aux_sym_macro_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_ATlink] = sym_tag,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym__link_expression_token1] = aux_sym__link_expression_token1,
  [sym_tag] = sym_tag,
  [aux_sym_argument_token1] = aux_sym_argument_token1,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_xhtml_tag_token1] = aux_sym_xhtml_tag_token1,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_AT_LBRACE] = anon_sym_AT_LBRACE,
  [anon_sym_AT_RBRACE] = anon_sym_AT_RBRACE,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [sym_quote_escape] = sym_quote_escape,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym__inline_quote_token1] = aux_sym__inline_quote_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE,
  [aux_sym__double_inline_quote_token1] = aux_sym__double_inline_quote_token1,
  [anon_sym_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [sym__terminator] = sym__terminator,
  [sym__word] = sym__word,
  [sym_source] = sym_source,
  [sym_line] = sym_line,
  [sym__tag_line] = sym__tag_line,
  [aux_sym__text_line] = aux_sym__text_line,
  [sym_section] = sym_section,
  [sym_macro] = sym_macro,
  [sym__link_macro] = sym__link_macro,
  [sym__link_expression] = sym__link_expression,
  [sym_argument] = sym_argument,
  [sym_xhtml_tag] = sym_xhtml_tag,
  [sym_macro_escape] = sym_macro_escape,
  [sym_inline_quote] = sym_inline_quote,
  [sym__inline_quote] = sym__inline_quote,
  [sym__double_inline_quote] = sym__double_inline_quote,
  [sym_block_quote] = sym_block_quote,
  [sym__block_quote_with_identifier_body] = sym__block_quote_with_identifier_body,
  [sym_quote_content] = sym_quote_content,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_source_repeat2] = aux_sym_source_repeat2,
  [aux_sym__link_expression_repeat1] = aux_sym__link_expression_repeat1,
  [aux_sym_argument_repeat1] = aux_sym_argument_repeat1,
  [aux_sym_xhtml_tag_repeat1] = aux_sym_xhtml_tag_repeat1,
  [aux_sym__double_inline_quote_repeat1] = aux_sym__double_inline_quote_repeat1,
  [alias_sym_description] = alias_sym_description,
  [alias_sym_language_identifier] = alias_sym_language_identifier,
  [alias_sym_section_content] = alias_sym_section_content,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_EQ_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_EQ_EQ_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_macro_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATlink] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__link_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_argument_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_xhtml_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_quote_escape] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__inline_quote_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__double_inline_quote_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = true,
  },
  [sym__terminator] = {
    .visible = false,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym__tag_line] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__text_line] = {
    .visible = false,
    .named = false,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym__link_macro] = {
    .visible = false,
    .named = true,
  },
  [sym__link_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_xhtml_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_quote] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_quote] = {
    .visible = false,
    .named = true,
  },
  [sym__double_inline_quote] = {
    .visible = false,
    .named = true,
  },
  [sym_block_quote] = {
    .visible = true,
    .named = true,
  },
  [sym__block_quote_with_identifier_body] = {
    .visible = false,
    .named = true,
  },
  [sym_quote_content] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__link_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xhtml_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__double_inline_quote_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_description] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_language_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_section_content] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_section_content,
  },
  [2] = {
    [0] = alias_sym_language_identifier,
  },
  [3] = {
    [4] = alias_sym_description,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__text_line, 2,
    aux_sym__text_line,
    alias_sym_section_content,
  sym_argument, 2,
    sym_argument,
    alias_sym_description,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '`') ADVANCE(55);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '}') ADVANCE(34);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(71);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '@') ADVANCE(87);
      if (lookahead == '`') ADVANCE(55);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(72);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '`') ADVANCE(55);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(73);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(60);
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(61);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(70);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(63);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(65);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(6);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(64);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(66);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '}') ADVANCE(34);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(39);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '@') ADVANCE(87);
      if (lookahead == '`') ADVANCE(55);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(88);
      END_STATE();
    case 12:
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == '`') ADVANCE(55);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(88);
      END_STATE();
    case 13:
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '`') ADVANCE(55);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(88);
      END_STATE();
    case 14:
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '`') ADVANCE(55);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(88);
      END_STATE();
    case 15:
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '`') ADVANCE(55);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(88);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(50);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(49);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '}') ADVANCE(34);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(46);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(33);
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) SKIP(20)
      END_STATE();
    case 21:
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(57);
      END_STATE();
    case 22:
      if (lookahead != 0 &&
          (lookahead < 1 || '\t' < lookahead) &&
          (lookahead < 17 || ' ' < lookahead) &&
          (lookahead < 128 || 160 < lookahead)) ADVANCE(60);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(67);
      END_STATE();
    case 23:
      if (eof) ADVANCE(25);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '@') ADVANCE(87);
      if (lookahead == '`') ADVANCE(55);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(72);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '@') ADVANCE(87);
      if (lookahead == '`') ADVANCE(55);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(88);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_macro_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_macro_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_ATlink);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__link_expression_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__link_expression_token1);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(52);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__link_expression_token1);
      if (lookahead == '@') ADVANCE(38);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != '}') ADVANCE(37);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'i') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'k') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'n') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_tag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(52);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '@') ADVANCE(45);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(44);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_xhtml_tag_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_xhtml_tag_token1);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_AT_RBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_quote_escape);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '`') ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__inline_quote_token1);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__inline_quote_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
      if (lookahead == '`') ADVANCE(69);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(60);
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(61);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(74);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(68);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(5);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(63);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(65);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(64);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(66);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead != 0 &&
          (lookahead < 1 || '\t' < lookahead) &&
          (lookahead < 17 || ' ' < lookahead) &&
          (lookahead < 128 || 160 < lookahead)) ADVANCE(60);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__terminator);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '@') ADVANCE(87);
      if (lookahead == '`') ADVANCE(55);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(72);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '`') ADVANCE(55);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(73);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(88);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '@') ADVANCE(87);
      if (lookahead == '`') ADVANCE(55);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(88);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == '`') ADVANCE(55);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(88);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '`') ADVANCE(55);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(88);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '`') ADVANCE(55);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(88);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '`') ADVANCE(55);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(88);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(88);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(88);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(88);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(88);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(88);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(88);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(88);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 23},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 12},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 13},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 13},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 13},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 14},
  [83] = {.lex_state = 19},
  [84] = {.lex_state = 19},
  [85] = {.lex_state = 19},
  [86] = {.lex_state = 19},
  [87] = {.lex_state = 19},
  [88] = {.lex_state = 19},
  [89] = {.lex_state = 19},
  [90] = {.lex_state = 19},
  [91] = {.lex_state = 19},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 19},
  [99] = {.lex_state = 17},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 17},
  [102] = {.lex_state = 17},
  [103] = {.lex_state = 17},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 17},
  [110] = {.lex_state = 17},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 17},
  [114] = {.lex_state = 17},
  [115] = {.lex_state = 22},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 17},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 20},
  [125] = {.lex_state = 20},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 20},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 20},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 21},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 21},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 21},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 21},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_ATlink] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_AT_RBRACE] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [sym_quote_escape] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [sym__terminator] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(155),
    [sym_line] = STATE(130),
    [sym__tag_line] = STATE(145),
    [aux_sym__text_line] = STATE(13),
    [sym_section] = STATE(145),
    [sym_macro] = STATE(70),
    [sym__link_macro] = STATE(27),
    [sym_xhtml_tag] = STATE(70),
    [sym_inline_quote] = STATE(70),
    [sym__inline_quote] = STATE(28),
    [sym__double_inline_quote] = STATE(28),
    [sym_block_quote] = STATE(70),
    [aux_sym_source_repeat1] = STATE(2),
    [aux_sym_source_repeat2] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_EQ_EQ] = ACTIONS(5),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(7),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_tag] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [sym_quote_escape] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(23),
    [sym__terminator] = ACTIONS(25),
    [sym__word] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(5), 1,
      anon_sym_EQ_EQ,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_tag,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym__terminator,
    STATE(4), 1,
      aux_sym_source_repeat2,
    STATE(13), 1,
      aux_sym__text_line,
    STATE(20), 1,
      aux_sym_source_repeat1,
    STATE(27), 1,
      sym__link_macro,
    STATE(130), 1,
      sym_line,
    ACTIONS(17), 2,
      sym_quote_escape,
      sym__word,
    STATE(28), 2,
      sym__inline_quote,
      sym__double_inline_quote,
    STATE(145), 2,
      sym__tag_line,
      sym_section,
    STATE(70), 4,
      sym_macro,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [67] = 18,
    ACTIONS(5), 1,
      anon_sym_EQ_EQ,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_tag,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_source_repeat2,
    STATE(13), 1,
      aux_sym__text_line,
    STATE(27), 1,
      sym__link_macro,
    STATE(130), 1,
      sym_line,
    ACTIONS(17), 2,
      sym_quote_escape,
      sym__word,
    STATE(28), 2,
      sym__inline_quote,
      sym__double_inline_quote,
    STATE(145), 2,
      sym__tag_line,
      sym_section,
    STATE(70), 4,
      sym_macro,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [128] = 18,
    ACTIONS(5), 1,
      anon_sym_EQ_EQ,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_tag,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_source_repeat2,
    STATE(13), 1,
      aux_sym__text_line,
    STATE(27), 1,
      sym__link_macro,
    STATE(130), 1,
      sym_line,
    ACTIONS(17), 2,
      sym_quote_escape,
      sym__word,
    STATE(28), 2,
      sym__inline_quote,
      sym__double_inline_quote,
    STATE(145), 2,
      sym__tag_line,
      sym_section,
    STATE(70), 4,
      sym_macro,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [189] = 18,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_EQ_EQ,
    ACTIONS(38), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(41), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(44), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      sym_tag,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(56), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(62), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(5), 1,
      aux_sym_source_repeat2,
    STATE(13), 1,
      aux_sym__text_line,
    STATE(27), 1,
      sym__link_macro,
    STATE(130), 1,
      sym_line,
    ACTIONS(53), 2,
      sym_quote_escape,
      sym__word,
    STATE(28), 2,
      sym__inline_quote,
      sym__double_inline_quote,
    STATE(145), 2,
      sym__tag_line,
      sym_section,
    STATE(70), 4,
      sym_macro,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [250] = 11,
    ACTIONS(65), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(77), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(14), 1,
      aux_sym__text_line,
    STATE(47), 1,
      sym__link_macro,
    ACTIONS(71), 2,
      sym_quote_escape,
      sym__word,
    STATE(44), 2,
      sym__inline_quote,
      sym__double_inline_quote,
    STATE(50), 4,
      sym_macro,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [289] = 11,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(79), 1,
      sym__terminator,
    STATE(11), 1,
      aux_sym__text_line,
    STATE(27), 1,
      sym__link_macro,
    ACTIONS(17), 2,
      sym_quote_escape,
      sym__word,
    STATE(28), 2,
      sym__inline_quote,
      sym__double_inline_quote,
    STATE(70), 4,
      sym_macro,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [328] = 11,
    ACTIONS(81), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_LT,
    ACTIONS(92), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(98), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(8), 1,
      aux_sym__text_line,
    STATE(81), 1,
      sym__link_macro,
    ACTIONS(89), 2,
      sym_quote_escape,
      sym__word,
    STATE(82), 2,
      sym__inline_quote,
      sym__double_inline_quote,
    STATE(80), 4,
      sym_macro,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [367] = 11,
    ACTIONS(81), 1,
      anon_sym_EQ_EQ,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(104), 1,
      anon_sym_LT,
    ACTIONS(110), 1,
      anon_sym_BQUOTE,
    ACTIONS(113), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(116), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(9), 1,
      aux_sym__text_line,
    STATE(64), 1,
      sym__link_macro,
    ACTIONS(107), 2,
      sym_quote_escape,
      sym__word,
    STATE(65), 2,
      sym__inline_quote,
      sym__double_inline_quote,
    STATE(63), 4,
      sym_macro,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [406] = 11,
    ACTIONS(65), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(121), 1,
      anon_sym_LT,
    ACTIONS(125), 1,
      anon_sym_BQUOTE,
    ACTIONS(127), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(129), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(8), 1,
      aux_sym__text_line,
    STATE(81), 1,
      sym__link_macro,
    ACTIONS(123), 2,
      sym_quote_escape,
      sym__word,
    STATE(82), 2,
      sym__inline_quote,
      sym__double_inline_quote,
    STATE(80), 4,
      sym_macro,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [445] = 11,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(131), 1,
      sym__terminator,
    STATE(12), 1,
      aux_sym__text_line,
    STATE(27), 1,
      sym__link_macro,
    ACTIONS(17), 2,
      sym_quote_escape,
      sym__word,
    STATE(28), 2,
      sym__inline_quote,
      sym__double_inline_quote,
    STATE(70), 4,
      sym_macro,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [484] = 11,
    ACTIONS(81), 1,
      sym__terminator,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
    ACTIONS(136), 1,
      anon_sym_LT,
    ACTIONS(142), 1,
      anon_sym_BQUOTE,
    ACTIONS(145), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(148), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(12), 1,
      aux_sym__text_line,
    STATE(27), 1,
      sym__link_macro,
    ACTIONS(139), 2,
      sym_quote_escape,
      sym__word,
    STATE(28), 2,
      sym__inline_quote,
      sym__double_inline_quote,
    STATE(70), 4,
      sym_macro,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [523] = 11,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(151), 1,
      sym__terminator,
    STATE(12), 1,
      aux_sym__text_line,
    STATE(27), 1,
      sym__link_macro,
    ACTIONS(17), 2,
      sym_quote_escape,
      sym__word,
    STATE(28), 2,
      sym__inline_quote,
      sym__double_inline_quote,
    STATE(70), 4,
      sym_macro,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [562] = 11,
    ACTIONS(81), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(156), 1,
      anon_sym_LT,
    ACTIONS(162), 1,
      anon_sym_BQUOTE,
    ACTIONS(165), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(168), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(14), 1,
      aux_sym__text_line,
    STATE(47), 1,
      sym__link_macro,
    ACTIONS(159), 2,
      sym_quote_escape,
      sym__word,
    STATE(44), 2,
      sym__inline_quote,
      sym__double_inline_quote,
    STATE(50), 4,
      sym_macro,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [601] = 11,
    ACTIONS(65), 1,
      anon_sym_EQ_EQ,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(173), 1,
      anon_sym_LT,
    ACTIONS(177), 1,
      anon_sym_BQUOTE,
    ACTIONS(179), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(181), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(9), 1,
      aux_sym__text_line,
    STATE(64), 1,
      sym__link_macro,
    ACTIONS(175), 2,
      sym_quote_escape,
      sym__word,
    STATE(65), 2,
      sym__inline_quote,
      sym__double_inline_quote,
    STATE(63), 4,
      sym_macro,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [640] = 10,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(173), 1,
      anon_sym_LT,
    ACTIONS(177), 1,
      anon_sym_BQUOTE,
    ACTIONS(179), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(181), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(15), 1,
      aux_sym__text_line,
    STATE(64), 1,
      sym__link_macro,
    ACTIONS(175), 2,
      sym_quote_escape,
      sym__word,
    STATE(65), 2,
      sym__inline_quote,
      sym__double_inline_quote,
    STATE(63), 4,
      sym_macro,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [676] = 10,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(77), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(6), 1,
      aux_sym__text_line,
    STATE(47), 1,
      sym__link_macro,
    ACTIONS(71), 2,
      sym_quote_escape,
      sym__word,
    STATE(44), 2,
      sym__inline_quote,
      sym__double_inline_quote,
    STATE(50), 4,
      sym_macro,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [712] = 10,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(121), 1,
      anon_sym_LT,
    ACTIONS(125), 1,
      anon_sym_BQUOTE,
    ACTIONS(127), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(129), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(10), 1,
      aux_sym__text_line,
    STATE(81), 1,
      sym__link_macro,
    ACTIONS(123), 2,
      sym_quote_escape,
      sym__word,
    STATE(82), 2,
      sym__inline_quote,
      sym__double_inline_quote,
    STATE(80), 4,
      sym_macro,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [748] = 4,
    ACTIONS(29), 1,
      sym__terminator,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      aux_sym_source_repeat1,
    ACTIONS(183), 11,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      sym_tag,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [771] = 4,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(189), 1,
      sym__terminator,
    STATE(20), 1,
      aux_sym_source_repeat1,
    ACTIONS(187), 11,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      sym_tag,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [794] = 1,
    ACTIONS(192), 8,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [805] = 1,
    ACTIONS(194), 8,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [816] = 4,
    STATE(120), 1,
      sym__link_expression,
    ACTIONS(196), 2,
      anon_sym_DOT,
      aux_sym__link_expression_token1,
    STATE(43), 2,
      sym_macro_escape,
      aux_sym__link_expression_repeat1,
    ACTIONS(198), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [833] = 4,
    STATE(127), 1,
      sym__link_expression,
    ACTIONS(196), 2,
      anon_sym_DOT,
      aux_sym__link_expression_token1,
    STATE(43), 2,
      sym_macro_escape,
      aux_sym__link_expression_repeat1,
    ACTIONS(198), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [850] = 4,
    STATE(121), 1,
      sym__link_expression,
    ACTIONS(196), 2,
      anon_sym_DOT,
      aux_sym__link_expression_token1,
    STATE(43), 2,
      sym_macro_escape,
      aux_sym__link_expression_repeat1,
    ACTIONS(198), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [867] = 1,
    ACTIONS(200), 8,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [878] = 1,
    ACTIONS(202), 8,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [889] = 1,
    ACTIONS(204), 8,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [900] = 4,
    STATE(132), 1,
      sym__link_expression,
    ACTIONS(196), 2,
      anon_sym_DOT,
      aux_sym__link_expression_token1,
    STATE(43), 2,
      sym_macro_escape,
      aux_sym__link_expression_repeat1,
    ACTIONS(198), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [917] = 1,
    ACTIONS(192), 8,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [928] = 1,
    ACTIONS(194), 8,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [939] = 1,
    ACTIONS(206), 8,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [950] = 1,
    ACTIONS(208), 8,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [961] = 1,
    ACTIONS(210), 8,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [972] = 1,
    ACTIONS(212), 8,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [983] = 1,
    ACTIONS(214), 8,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [994] = 1,
    ACTIONS(216), 8,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1005] = 1,
    ACTIONS(218), 8,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1016] = 1,
    ACTIONS(220), 8,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1027] = 1,
    ACTIONS(214), 8,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1038] = 1,
    ACTIONS(210), 8,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1049] = 1,
    ACTIONS(194), 8,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1060] = 4,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    ACTIONS(224), 2,
      anon_sym_DOT,
      aux_sym__link_expression_token1,
    STATE(55), 2,
      sym_macro_escape,
      aux_sym__link_expression_repeat1,
    ACTIONS(198), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [1077] = 1,
    ACTIONS(204), 8,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1088] = 1,
    ACTIONS(220), 8,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1099] = 1,
    ACTIONS(218), 8,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1110] = 1,
    ACTIONS(202), 8,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1121] = 1,
    ACTIONS(216), 8,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1132] = 1,
    ACTIONS(212), 8,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1143] = 1,
    ACTIONS(226), 8,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1154] = 1,
    ACTIONS(200), 8,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1165] = 1,
    ACTIONS(208), 8,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1176] = 1,
    ACTIONS(206), 8,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1187] = 1,
    ACTIONS(192), 8,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1198] = 4,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    ACTIONS(230), 2,
      anon_sym_DOT,
      aux_sym__link_expression_token1,
    STATE(55), 2,
      sym_macro_escape,
      aux_sym__link_expression_repeat1,
    ACTIONS(233), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [1215] = 1,
    ACTIONS(206), 8,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1226] = 1,
    ACTIONS(208), 8,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1237] = 1,
    ACTIONS(212), 8,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1248] = 1,
    ACTIONS(216), 8,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1259] = 1,
    ACTIONS(192), 8,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1270] = 1,
    ACTIONS(210), 8,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1281] = 1,
    ACTIONS(200), 8,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1292] = 1,
    ACTIONS(226), 8,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1303] = 1,
    ACTIONS(202), 8,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1314] = 1,
    ACTIONS(204), 8,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1325] = 1,
    ACTIONS(194), 8,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1336] = 1,
    ACTIONS(210), 8,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1347] = 1,
    ACTIONS(214), 8,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1358] = 1,
    ACTIONS(214), 8,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1369] = 1,
    ACTIONS(226), 8,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1380] = 1,
    ACTIONS(220), 8,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1391] = 1,
    ACTIONS(218), 8,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1402] = 1,
    ACTIONS(216), 8,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1413] = 1,
    ACTIONS(212), 8,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1424] = 1,
    ACTIONS(220), 8,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1435] = 1,
    ACTIONS(208), 8,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1446] = 1,
    ACTIONS(206), 8,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1457] = 1,
    ACTIONS(218), 8,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1468] = 1,
    ACTIONS(200), 8,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1479] = 1,
    ACTIONS(226), 8,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1490] = 1,
    ACTIONS(202), 8,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1501] = 1,
    ACTIONS(204), 8,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1512] = 4,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    ACTIONS(238), 1,
      aux_sym_argument_token1,
    STATE(87), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(240), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [1528] = 4,
    ACTIONS(242), 1,
      aux_sym_argument_token1,
    STATE(134), 1,
      sym_argument,
    STATE(83), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(240), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [1544] = 4,
    ACTIONS(242), 1,
      aux_sym_argument_token1,
    STATE(142), 1,
      sym_argument,
    STATE(83), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(240), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [1560] = 4,
    ACTIONS(242), 1,
      aux_sym_argument_token1,
    STATE(141), 1,
      sym_argument,
    STATE(83), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(240), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [1576] = 4,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    ACTIONS(246), 1,
      aux_sym_argument_token1,
    STATE(87), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(249), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [1592] = 4,
    ACTIONS(242), 1,
      aux_sym_argument_token1,
    STATE(133), 1,
      sym_argument,
    STATE(83), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(240), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [1608] = 4,
    ACTIONS(242), 1,
      aux_sym_argument_token1,
    STATE(135), 1,
      sym_argument,
    STATE(83), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(240), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [1624] = 4,
    ACTIONS(242), 1,
      aux_sym_argument_token1,
    STATE(157), 1,
      sym_argument,
    STATE(83), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(240), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [1640] = 4,
    ACTIONS(242), 1,
      aux_sym_argument_token1,
    STATE(143), 1,
      sym_argument,
    STATE(83), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(240), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [1656] = 4,
    ACTIONS(242), 1,
      aux_sym_argument_token1,
    STATE(153), 1,
      sym_argument,
    STATE(83), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(240), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [1672] = 5,
    ACTIONS(252), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(254), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(256), 1,
      sym__word,
    STATE(104), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(139), 2,
      sym__block_quote_with_identifier_body,
      sym_quote_content,
  [1689] = 5,
    ACTIONS(252), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(256), 1,
      sym__word,
    ACTIONS(258), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(104), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(136), 2,
      sym__block_quote_with_identifier_body,
      sym_quote_content,
  [1706] = 5,
    ACTIONS(252), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(256), 1,
      sym__word,
    ACTIONS(260), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(104), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(151), 2,
      sym__block_quote_with_identifier_body,
      sym_quote_content,
  [1723] = 5,
    ACTIONS(252), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(256), 1,
      sym__word,
    ACTIONS(262), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(104), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(146), 2,
      sym__block_quote_with_identifier_body,
      sym_quote_content,
  [1740] = 1,
    ACTIONS(264), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      aux_sym__link_expression_token1,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [1749] = 1,
    ACTIONS(264), 5,
      anon_sym_RBRACE,
      aux_sym_argument_token1,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [1757] = 3,
    ACTIONS(266), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(268), 1,
      anon_sym_GT,
    STATE(101), 1,
      aux_sym_xhtml_tag_repeat1,
  [1767] = 3,
    ACTIONS(270), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(272), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(116), 1,
      aux_sym__double_inline_quote_repeat1,
  [1777] = 3,
    ACTIONS(274), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(277), 1,
      anon_sym_GT,
    STATE(101), 1,
      aux_sym_xhtml_tag_repeat1,
  [1787] = 3,
    ACTIONS(266), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(279), 1,
      anon_sym_GT,
    STATE(101), 1,
      aux_sym_xhtml_tag_repeat1,
  [1797] = 3,
    ACTIONS(281), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(283), 1,
      anon_sym_GT,
    STATE(99), 1,
      aux_sym_xhtml_tag_repeat1,
  [1807] = 3,
    ACTIONS(285), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(287), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(105), 1,
      aux_sym__double_inline_quote_repeat1,
  [1817] = 3,
    ACTIONS(289), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(292), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(105), 1,
      aux_sym__double_inline_quote_repeat1,
  [1827] = 3,
    ACTIONS(294), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(296), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(108), 1,
      aux_sym__double_inline_quote_repeat1,
  [1837] = 3,
    ACTIONS(270), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(298), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(116), 1,
      aux_sym__double_inline_quote_repeat1,
  [1847] = 3,
    ACTIONS(270), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(300), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(116), 1,
      aux_sym__double_inline_quote_repeat1,
  [1857] = 3,
    ACTIONS(302), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(304), 1,
      anon_sym_GT,
    STATE(102), 1,
      aux_sym_xhtml_tag_repeat1,
  [1867] = 3,
    ACTIONS(306), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(308), 1,
      anon_sym_GT,
    STATE(114), 1,
      aux_sym_xhtml_tag_repeat1,
  [1877] = 3,
    ACTIONS(310), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(312), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(100), 1,
      aux_sym__double_inline_quote_repeat1,
  [1887] = 3,
    ACTIONS(270), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(314), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(116), 1,
      aux_sym__double_inline_quote_repeat1,
  [1897] = 3,
    ACTIONS(266), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(316), 1,
      anon_sym_GT,
    STATE(101), 1,
      aux_sym_xhtml_tag_repeat1,
  [1907] = 3,
    ACTIONS(266), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(318), 1,
      anon_sym_GT,
    STATE(101), 1,
      aux_sym_xhtml_tag_repeat1,
  [1917] = 3,
    ACTIONS(320), 1,
      aux_sym__double_inline_quote_token1,
    STATE(104), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(156), 1,
      sym_quote_content,
  [1927] = 3,
    ACTIONS(292), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(322), 1,
      aux_sym__double_inline_quote_token1,
    STATE(116), 1,
      aux_sym__double_inline_quote_repeat1,
  [1937] = 3,
    ACTIONS(325), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(327), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(112), 1,
      aux_sym__double_inline_quote_repeat1,
  [1947] = 3,
    ACTIONS(329), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(331), 1,
      anon_sym_GT,
    STATE(113), 1,
      aux_sym_xhtml_tag_repeat1,
  [1957] = 3,
    ACTIONS(333), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(335), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(107), 1,
      aux_sym__double_inline_quote_repeat1,
  [1967] = 2,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    ACTIONS(339), 1,
      anon_sym_DOT,
  [1974] = 2,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    ACTIONS(343), 1,
      anon_sym_DOT,
  [1981] = 2,
    ACTIONS(345), 1,
      anon_sym_ATlink,
    ACTIONS(347), 1,
      sym_tag,
  [1988] = 2,
    ACTIONS(349), 1,
      anon_sym_ATlink,
    ACTIONS(351), 1,
      sym_tag,
  [1995] = 2,
    ACTIONS(353), 1,
      aux_sym_macro_token1,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
  [2002] = 2,
    ACTIONS(357), 1,
      aux_sym_macro_token1,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
  [2009] = 2,
    ACTIONS(361), 1,
      anon_sym_ATlink,
    ACTIONS(363), 1,
      sym_tag,
  [2016] = 2,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    ACTIONS(367), 1,
      anon_sym_DOT,
  [2023] = 2,
    ACTIONS(369), 1,
      aux_sym_macro_token1,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
  [2030] = 2,
    ACTIONS(373), 1,
      anon_sym_ATlink,
    ACTIONS(375), 1,
      sym_tag,
  [2037] = 2,
    ACTIONS(377), 1,
      sym__terminator,
    STATE(19), 1,
      aux_sym_source_repeat1,
  [2044] = 2,
    ACTIONS(379), 1,
      aux_sym_macro_token1,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
  [2051] = 2,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    ACTIONS(385), 1,
      anon_sym_DOT,
  [2058] = 1,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
  [2062] = 1,
    ACTIONS(389), 1,
      anon_sym_RBRACE,
  [2066] = 1,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
  [2070] = 1,
    ACTIONS(393), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [2074] = 1,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
  [2078] = 1,
    ACTIONS(397), 1,
      anon_sym_SQUOTE,
  [2082] = 1,
    ACTIONS(399), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [2086] = 1,
    ACTIONS(401), 1,
      aux_sym__inline_quote_token1,
  [2090] = 1,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
  [2094] = 1,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
  [2098] = 1,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
  [2102] = 1,
    ACTIONS(409), 1,
      aux_sym__inline_quote_token1,
  [2106] = 1,
    ACTIONS(411), 1,
      sym__terminator,
  [2110] = 1,
    ACTIONS(413), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [2114] = 1,
    ACTIONS(415), 1,
      anon_sym_SQUOTE,
  [2118] = 1,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
  [2122] = 1,
    ACTIONS(419), 1,
      aux_sym__inline_quote_token1,
  [2126] = 1,
    ACTIONS(421), 1,
      sym__terminator,
  [2130] = 1,
    ACTIONS(423), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [2134] = 1,
    ACTIONS(425), 1,
      sym__terminator,
  [2138] = 1,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
  [2142] = 1,
    ACTIONS(429), 1,
      aux_sym__inline_quote_token1,
  [2146] = 1,
    ACTIONS(431), 1,
      ts_builtin_sym_end,
  [2150] = 1,
    ACTIONS(433), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [2154] = 1,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 67,
  [SMALL_STATE(4)] = 128,
  [SMALL_STATE(5)] = 189,
  [SMALL_STATE(6)] = 250,
  [SMALL_STATE(7)] = 289,
  [SMALL_STATE(8)] = 328,
  [SMALL_STATE(9)] = 367,
  [SMALL_STATE(10)] = 406,
  [SMALL_STATE(11)] = 445,
  [SMALL_STATE(12)] = 484,
  [SMALL_STATE(13)] = 523,
  [SMALL_STATE(14)] = 562,
  [SMALL_STATE(15)] = 601,
  [SMALL_STATE(16)] = 640,
  [SMALL_STATE(17)] = 676,
  [SMALL_STATE(18)] = 712,
  [SMALL_STATE(19)] = 748,
  [SMALL_STATE(20)] = 771,
  [SMALL_STATE(21)] = 794,
  [SMALL_STATE(22)] = 805,
  [SMALL_STATE(23)] = 816,
  [SMALL_STATE(24)] = 833,
  [SMALL_STATE(25)] = 850,
  [SMALL_STATE(26)] = 867,
  [SMALL_STATE(27)] = 878,
  [SMALL_STATE(28)] = 889,
  [SMALL_STATE(29)] = 900,
  [SMALL_STATE(30)] = 917,
  [SMALL_STATE(31)] = 928,
  [SMALL_STATE(32)] = 939,
  [SMALL_STATE(33)] = 950,
  [SMALL_STATE(34)] = 961,
  [SMALL_STATE(35)] = 972,
  [SMALL_STATE(36)] = 983,
  [SMALL_STATE(37)] = 994,
  [SMALL_STATE(38)] = 1005,
  [SMALL_STATE(39)] = 1016,
  [SMALL_STATE(40)] = 1027,
  [SMALL_STATE(41)] = 1038,
  [SMALL_STATE(42)] = 1049,
  [SMALL_STATE(43)] = 1060,
  [SMALL_STATE(44)] = 1077,
  [SMALL_STATE(45)] = 1088,
  [SMALL_STATE(46)] = 1099,
  [SMALL_STATE(47)] = 1110,
  [SMALL_STATE(48)] = 1121,
  [SMALL_STATE(49)] = 1132,
  [SMALL_STATE(50)] = 1143,
  [SMALL_STATE(51)] = 1154,
  [SMALL_STATE(52)] = 1165,
  [SMALL_STATE(53)] = 1176,
  [SMALL_STATE(54)] = 1187,
  [SMALL_STATE(55)] = 1198,
  [SMALL_STATE(56)] = 1215,
  [SMALL_STATE(57)] = 1226,
  [SMALL_STATE(58)] = 1237,
  [SMALL_STATE(59)] = 1248,
  [SMALL_STATE(60)] = 1259,
  [SMALL_STATE(61)] = 1270,
  [SMALL_STATE(62)] = 1281,
  [SMALL_STATE(63)] = 1292,
  [SMALL_STATE(64)] = 1303,
  [SMALL_STATE(65)] = 1314,
  [SMALL_STATE(66)] = 1325,
  [SMALL_STATE(67)] = 1336,
  [SMALL_STATE(68)] = 1347,
  [SMALL_STATE(69)] = 1358,
  [SMALL_STATE(70)] = 1369,
  [SMALL_STATE(71)] = 1380,
  [SMALL_STATE(72)] = 1391,
  [SMALL_STATE(73)] = 1402,
  [SMALL_STATE(74)] = 1413,
  [SMALL_STATE(75)] = 1424,
  [SMALL_STATE(76)] = 1435,
  [SMALL_STATE(77)] = 1446,
  [SMALL_STATE(78)] = 1457,
  [SMALL_STATE(79)] = 1468,
  [SMALL_STATE(80)] = 1479,
  [SMALL_STATE(81)] = 1490,
  [SMALL_STATE(82)] = 1501,
  [SMALL_STATE(83)] = 1512,
  [SMALL_STATE(84)] = 1528,
  [SMALL_STATE(85)] = 1544,
  [SMALL_STATE(86)] = 1560,
  [SMALL_STATE(87)] = 1576,
  [SMALL_STATE(88)] = 1592,
  [SMALL_STATE(89)] = 1608,
  [SMALL_STATE(90)] = 1624,
  [SMALL_STATE(91)] = 1640,
  [SMALL_STATE(92)] = 1656,
  [SMALL_STATE(93)] = 1672,
  [SMALL_STATE(94)] = 1689,
  [SMALL_STATE(95)] = 1706,
  [SMALL_STATE(96)] = 1723,
  [SMALL_STATE(97)] = 1740,
  [SMALL_STATE(98)] = 1749,
  [SMALL_STATE(99)] = 1757,
  [SMALL_STATE(100)] = 1767,
  [SMALL_STATE(101)] = 1777,
  [SMALL_STATE(102)] = 1787,
  [SMALL_STATE(103)] = 1797,
  [SMALL_STATE(104)] = 1807,
  [SMALL_STATE(105)] = 1817,
  [SMALL_STATE(106)] = 1827,
  [SMALL_STATE(107)] = 1837,
  [SMALL_STATE(108)] = 1847,
  [SMALL_STATE(109)] = 1857,
  [SMALL_STATE(110)] = 1867,
  [SMALL_STATE(111)] = 1877,
  [SMALL_STATE(112)] = 1887,
  [SMALL_STATE(113)] = 1897,
  [SMALL_STATE(114)] = 1907,
  [SMALL_STATE(115)] = 1917,
  [SMALL_STATE(116)] = 1927,
  [SMALL_STATE(117)] = 1937,
  [SMALL_STATE(118)] = 1947,
  [SMALL_STATE(119)] = 1957,
  [SMALL_STATE(120)] = 1967,
  [SMALL_STATE(121)] = 1974,
  [SMALL_STATE(122)] = 1981,
  [SMALL_STATE(123)] = 1988,
  [SMALL_STATE(124)] = 1995,
  [SMALL_STATE(125)] = 2002,
  [SMALL_STATE(126)] = 2009,
  [SMALL_STATE(127)] = 2016,
  [SMALL_STATE(128)] = 2023,
  [SMALL_STATE(129)] = 2030,
  [SMALL_STATE(130)] = 2037,
  [SMALL_STATE(131)] = 2044,
  [SMALL_STATE(132)] = 2051,
  [SMALL_STATE(133)] = 2058,
  [SMALL_STATE(134)] = 2062,
  [SMALL_STATE(135)] = 2066,
  [SMALL_STATE(136)] = 2070,
  [SMALL_STATE(137)] = 2074,
  [SMALL_STATE(138)] = 2078,
  [SMALL_STATE(139)] = 2082,
  [SMALL_STATE(140)] = 2086,
  [SMALL_STATE(141)] = 2090,
  [SMALL_STATE(142)] = 2094,
  [SMALL_STATE(143)] = 2098,
  [SMALL_STATE(144)] = 2102,
  [SMALL_STATE(145)] = 2106,
  [SMALL_STATE(146)] = 2110,
  [SMALL_STATE(147)] = 2114,
  [SMALL_STATE(148)] = 2118,
  [SMALL_STATE(149)] = 2122,
  [SMALL_STATE(150)] = 2126,
  [SMALL_STATE(151)] = 2130,
  [SMALL_STATE(152)] = 2134,
  [SMALL_STATE(153)] = 2138,
  [SMALL_STATE(154)] = 2142,
  [SMALL_STATE(155)] = 2146,
  [SMALL_STATE(156)] = 2150,
  [SMALL_STATE(157)] = 2154,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(16),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(18),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(17),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(126),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(7),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(103),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(70),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(140),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(119),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(95),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_line, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_line, 2),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(129),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(118),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(80),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(149),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(117),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(94),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(122),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(110),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(63),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(144),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(111),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(96),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_line, 2),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(126),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(103),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(70),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(140),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(119),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(95),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(123),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(109),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(50),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(154),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(106),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(93),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(20),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 5),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xhtml_tag, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_macro, 6, .production_id = 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_quote, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_macro, 4),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_quote, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_inline_quote, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_inline_quote, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_quote, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_quote, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xhtml_tag, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_expression, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_line, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__link_expression_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__link_expression_repeat1, 2), SHIFT_REPEAT(55),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__link_expression_repeat1, 2), SHIFT_REPEAT(97),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(87),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(98),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_escape, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xhtml_tag_repeat1, 2), SHIFT_REPEAT(101),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_repeat1, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote_content, 1),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_inline_quote_repeat1, 2), SHIFT_REPEAT(105),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_inline_quote_repeat1, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_inline_quote_repeat1, 2), SHIFT_REPEAT(116),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, .production_id = 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [431] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_quote_with_identifier_body, 3, .production_id = 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_edoc(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

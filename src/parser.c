#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 236
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 3
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

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
  anon_sym_LTem_GT = 12,
  anon_sym_LT_SLASHem_GT = 13,
  anon_sym_LTstrong_GT = 14,
  anon_sym_LT_SLASHstrong_GT = 15,
  anon_sym_LT = 16,
  aux_sym_xhtml_tag_token1 = 17,
  anon_sym_GT = 18,
  aux_sym_xhtml_tag_content_token1 = 19,
  anon_sym_AT_LBRACE = 20,
  anon_sym_AT_RBRACE = 21,
  anon_sym_AT_AT = 22,
  sym_quote_escape = 23,
  anon_sym_BQUOTE = 24,
  aux_sym__inline_quote_token1 = 25,
  anon_sym_SQUOTE = 26,
  anon_sym_BQUOTE_BQUOTE = 27,
  aux_sym__double_inline_quote_token1 = 28,
  anon_sym_SQUOTE_SQUOTE = 29,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 30,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 31,
  sym_language_identifier = 32,
  aux_sym_quote_content_token1 = 33,
  sym__terminator = 34,
  sym__word = 35,
  sym_source = 36,
  sym_line = 37,
  sym__tag_line = 38,
  aux_sym__text_line = 39,
  sym_section = 40,
  sym_macro = 41,
  sym__link_macro = 42,
  sym__link_expression = 43,
  sym_argument = 44,
  sym__xhtml_tag = 45,
  sym_em_xhtml_tag = 46,
  sym_strong_xhtml_tag = 47,
  sym_xhtml_tag = 48,
  sym_xhtml_tag_content = 49,
  sym_macro_escape = 50,
  sym_inline_quote = 51,
  sym__inline_quote = 52,
  sym__double_inline_quote = 53,
  sym__triple_inline_quote = 54,
  sym_block_quote = 55,
  sym_quote_content = 56,
  aux_sym_source_repeat1 = 57,
  aux_sym_source_repeat2 = 58,
  aux_sym__link_expression_repeat1 = 59,
  aux_sym_argument_repeat1 = 60,
  aux_sym_xhtml_tag_repeat1 = 61,
  aux_sym_xhtml_tag_content_repeat1 = 62,
  aux_sym__double_inline_quote_repeat1 = 63,
  aux_sym_quote_content_repeat1 = 64,
  alias_sym_description = 65,
  alias_sym_quote_marker = 66,
  alias_sym_section_content = 67,
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
  [anon_sym_LTem_GT] = "open_xhtml_tag",
  [anon_sym_LT_SLASHem_GT] = "close_xhtml_tag",
  [anon_sym_LTstrong_GT] = "open_xhtml_tag",
  [anon_sym_LT_SLASHstrong_GT] = "close_xhtml_tag",
  [anon_sym_LT] = "<",
  [aux_sym_xhtml_tag_token1] = "xhtml_tag_token1",
  [anon_sym_GT] = ">",
  [aux_sym_xhtml_tag_content_token1] = "xhtml_tag_content_token1",
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
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [sym_language_identifier] = "language_identifier",
  [aux_sym_quote_content_token1] = "quote_content_token1",
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
  [sym__xhtml_tag] = "_xhtml_tag",
  [sym_em_xhtml_tag] = "em_xhtml_tag",
  [sym_strong_xhtml_tag] = "strong_xhtml_tag",
  [sym_xhtml_tag] = "xhtml_tag",
  [sym_xhtml_tag_content] = "xhtml_tag_content",
  [sym_macro_escape] = "macro_escape",
  [sym_inline_quote] = "inline_quote",
  [sym__inline_quote] = "_inline_quote",
  [sym__double_inline_quote] = "_double_inline_quote",
  [sym__triple_inline_quote] = "_triple_inline_quote",
  [sym_block_quote] = "block_quote",
  [sym_quote_content] = "quote_content",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_source_repeat2] = "source_repeat2",
  [aux_sym__link_expression_repeat1] = "_link_expression_repeat1",
  [aux_sym_argument_repeat1] = "argument_repeat1",
  [aux_sym_xhtml_tag_repeat1] = "xhtml_tag_repeat1",
  [aux_sym_xhtml_tag_content_repeat1] = "xhtml_tag_content_repeat1",
  [aux_sym__double_inline_quote_repeat1] = "_double_inline_quote_repeat1",
  [aux_sym_quote_content_repeat1] = "quote_content_repeat1",
  [alias_sym_description] = "description",
  [alias_sym_quote_marker] = "quote_marker",
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
  [anon_sym_LTem_GT] = anon_sym_LTem_GT,
  [anon_sym_LT_SLASHem_GT] = anon_sym_LT_SLASHem_GT,
  [anon_sym_LTstrong_GT] = anon_sym_LTem_GT,
  [anon_sym_LT_SLASHstrong_GT] = anon_sym_LT_SLASHem_GT,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_xhtml_tag_token1] = aux_sym_xhtml_tag_token1,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_xhtml_tag_content_token1] = aux_sym_xhtml_tag_content_token1,
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
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [sym_language_identifier] = sym_language_identifier,
  [aux_sym_quote_content_token1] = aux_sym_quote_content_token1,
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
  [sym__xhtml_tag] = sym__xhtml_tag,
  [sym_em_xhtml_tag] = sym_em_xhtml_tag,
  [sym_strong_xhtml_tag] = sym_strong_xhtml_tag,
  [sym_xhtml_tag] = sym_xhtml_tag,
  [sym_xhtml_tag_content] = sym_xhtml_tag_content,
  [sym_macro_escape] = sym_macro_escape,
  [sym_inline_quote] = sym_inline_quote,
  [sym__inline_quote] = sym__inline_quote,
  [sym__double_inline_quote] = sym__double_inline_quote,
  [sym__triple_inline_quote] = sym__triple_inline_quote,
  [sym_block_quote] = sym_block_quote,
  [sym_quote_content] = sym_quote_content,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_source_repeat2] = aux_sym_source_repeat2,
  [aux_sym__link_expression_repeat1] = aux_sym__link_expression_repeat1,
  [aux_sym_argument_repeat1] = aux_sym_argument_repeat1,
  [aux_sym_xhtml_tag_repeat1] = aux_sym_xhtml_tag_repeat1,
  [aux_sym_xhtml_tag_content_repeat1] = aux_sym_xhtml_tag_content_repeat1,
  [aux_sym__double_inline_quote_repeat1] = aux_sym__double_inline_quote_repeat1,
  [aux_sym_quote_content_repeat1] = aux_sym_quote_content_repeat1,
  [alias_sym_description] = alias_sym_description,
  [alias_sym_quote_marker] = alias_sym_quote_marker,
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
  [anon_sym_LTem_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_SLASHem_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LTstrong_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_SLASHstrong_GT] = {
    .visible = true,
    .named = true,
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
  [aux_sym_xhtml_tag_content_token1] = {
    .visible = false,
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
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_language_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_quote_content_token1] = {
    .visible = false,
    .named = false,
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
  [sym__xhtml_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_em_xhtml_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_strong_xhtml_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_xhtml_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_xhtml_tag_content] = {
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
  [sym__triple_inline_quote] = {
    .visible = false,
    .named = true,
  },
  [sym_block_quote] = {
    .visible = true,
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
  [aux_sym_xhtml_tag_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__double_inline_quote_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quote_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_description] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_quote_marker] = {
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
    [0] = alias_sym_quote_marker,
    [2] = alias_sym_quote_marker,
  },
  [3] = {
    [0] = alias_sym_quote_marker,
    [3] = alias_sym_quote_marker,
  },
  [4] = {
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
      if (eof) ADVANCE(50);
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '}') ADVANCE(59);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) SKIP(0)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(113);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(121);
      if (lookahead == '@') ADVANCE(136);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(114);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(115);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(84);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(84);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(84);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(108);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(101);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(97);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(107);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(110);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(111);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(102);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(97);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(11);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == '}') ADVANCE(59);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(64);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 17:
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(121);
      if (lookahead == '@') ADVANCE(136);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(137);
      END_STATE();
    case 18:
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(125);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(137);
      END_STATE();
    case 19:
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(137);
      END_STATE();
    case 20:
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(127);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(137);
      END_STATE();
    case 21:
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(137);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(83);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(82);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(72);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(73);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(74);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(75);
      END_STATE();
    case 28:
      if (lookahead == '@') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == '}') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 29:
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == '}') ADVANCE(59);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(71);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 45:
      if (lookahead == '}') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(58);
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) SKIP(45)
      END_STATE();
    case 46:
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(93);
      END_STATE();
    case 47:
      if (lookahead != 0 &&
          (lookahead < 1 || '\t' < lookahead) &&
          (lookahead < 17 || ' ' < lookahead) &&
          (lookahead < 128 || 160 < lookahead)) ADVANCE(109);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(112);
      END_STATE();
    case 48:
      if (eof) ADVANCE(50);
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(121);
      if (lookahead == '@') ADVANCE(136);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(114);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(121);
      if (lookahead == '@') ADVANCE(136);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(49)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(137);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_macro_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_macro_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_ATlink);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__link_expression_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__link_expression_token1);
      if (lookahead == '@') ADVANCE(88);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == '}') ADVANCE(87);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__link_expression_token1);
      if (lookahead == '@') ADVANCE(63);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'i') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'k') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'n') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '@') ADVANCE(88);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == '}') ADVANCE(87);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '@') ADVANCE(70);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(69);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LTem_GT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LT_SLASHem_GT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LTstrong_GT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LT_SLASHstrong_GT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(42);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(30);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_xhtml_tag_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_xhtml_tag_token1);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(81);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_xhtml_tag_content_token1);
      if (lookahead == '`') ADVANCE(91);
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_xhtml_tag_content_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_AT_RBRACE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_quote_escape);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\'') ADVANCE(89);
      if (lookahead == '`') ADVANCE(95);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead == '`') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(85);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__inline_quote_token1);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__inline_quote_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
      if (lookahead == '`') ADVANCE(105);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
      if (lookahead == '`') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(85);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(101);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(97);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(101);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(97);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(12);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(102);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(97);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(85);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_language_identifier);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_quote_content_token1);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_quote_content_token1);
      if (lookahead == '\'') ADVANCE(12);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_quote_content_token1);
      if (lookahead == '\'') ADVANCE(110);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(111);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_quote_content_token1);
      if (lookahead != 0 &&
          (lookahead < 1 || '\t' < lookahead) &&
          (lookahead < 17 || ' ' < lookahead) &&
          (lookahead < 128 || 160 < lookahead)) ADVANCE(109);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__terminator);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(121);
      if (lookahead == '@') ADVANCE(136);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(114);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(115);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(121);
      if (lookahead == '@') ADVANCE(136);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(137);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(125);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(137);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(137);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(127);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(137);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(137);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '=') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '=') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '>') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 48},
  [3] = {.lex_state = 49},
  [4] = {.lex_state = 49},
  [5] = {.lex_state = 49},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 21},
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 48},
  [20] = {.lex_state = 48},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 20},
  [34] = {.lex_state = 20},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 20},
  [39] = {.lex_state = 20},
  [40] = {.lex_state = 20},
  [41] = {.lex_state = 20},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 20},
  [44] = {.lex_state = 20},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 20},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 20},
  [49] = {.lex_state = 20},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 20},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 20},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 20},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 18},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 18},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 18},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 18},
  [71] = {.lex_state = 18},
  [72] = {.lex_state = 18},
  [73] = {.lex_state = 18},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 18},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 18},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 19},
  [80] = {.lex_state = 19},
  [81] = {.lex_state = 19},
  [82] = {.lex_state = 19},
  [83] = {.lex_state = 19},
  [84] = {.lex_state = 19},
  [85] = {.lex_state = 18},
  [86] = {.lex_state = 19},
  [87] = {.lex_state = 19},
  [88] = {.lex_state = 19},
  [89] = {.lex_state = 19},
  [90] = {.lex_state = 19},
  [91] = {.lex_state = 19},
  [92] = {.lex_state = 18},
  [93] = {.lex_state = 19},
  [94] = {.lex_state = 19},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 19},
  [97] = {.lex_state = 19},
  [98] = {.lex_state = 19},
  [99] = {.lex_state = 18},
  [100] = {.lex_state = 18},
  [101] = {.lex_state = 18},
  [102] = {.lex_state = 18},
  [103] = {.lex_state = 18},
  [104] = {.lex_state = 18},
  [105] = {.lex_state = 16},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 16},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 16},
  [114] = {.lex_state = 16},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 16},
  [119] = {.lex_state = 16},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 29},
  [128] = {.lex_state = 29},
  [129] = {.lex_state = 29},
  [130] = {.lex_state = 29},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 29},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 29},
  [137] = {.lex_state = 29},
  [138] = {.lex_state = 29},
  [139] = {.lex_state = 29},
  [140] = {.lex_state = 29},
  [141] = {.lex_state = 16},
  [142] = {.lex_state = 29},
  [143] = {.lex_state = 23},
  [144] = {.lex_state = 13},
  [145] = {.lex_state = 47},
  [146] = {.lex_state = 14},
  [147] = {.lex_state = 13},
  [148] = {.lex_state = 23},
  [149] = {.lex_state = 47},
  [150] = {.lex_state = 23},
  [151] = {.lex_state = 10},
  [152] = {.lex_state = 14},
  [153] = {.lex_state = 23},
  [154] = {.lex_state = 23},
  [155] = {.lex_state = 14},
  [156] = {.lex_state = 47},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 14},
  [159] = {.lex_state = 47},
  [160] = {.lex_state = 23},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 14},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 10},
  [165] = {.lex_state = 14},
  [166] = {.lex_state = 23},
  [167] = {.lex_state = 14},
  [168] = {.lex_state = 23},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 14},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 14},
  [173] = {.lex_state = 23},
  [174] = {.lex_state = 23},
  [175] = {.lex_state = 14},
  [176] = {.lex_state = 14},
  [177] = {.lex_state = 23},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 14},
  [181] = {.lex_state = 23},
  [182] = {.lex_state = 14},
  [183] = {.lex_state = 23},
  [184] = {.lex_state = 45},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 45},
  [187] = {.lex_state = 45},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 45},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 15},
  [199] = {.lex_state = 15},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 15},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 15},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 46},
  [214] = {.lex_state = 15},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 15},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 46},
  [221] = {.lex_state = 46},
  [222] = {.lex_state = 15},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 46},
  [230] = {.lex_state = 15},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 46},
  [235] = {.lex_state = 46},
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
    [anon_sym_LTem_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHem_GT] = ACTIONS(1),
    [anon_sym_LTstrong_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHstrong_GT] = ACTIONS(1),
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
    [sym_language_identifier] = ACTIONS(1),
    [sym__terminator] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(211),
    [sym_line] = STATE(192),
    [sym__tag_line] = STATE(227),
    [aux_sym__text_line] = STATE(15),
    [sym_section] = STATE(227),
    [sym_macro] = STATE(37),
    [sym__link_macro] = STATE(35),
    [sym__xhtml_tag] = STATE(37),
    [sym_em_xhtml_tag] = STATE(37),
    [sym_strong_xhtml_tag] = STATE(37),
    [sym_xhtml_tag] = STATE(37),
    [sym_inline_quote] = STATE(37),
    [sym__inline_quote] = STATE(36),
    [sym__double_inline_quote] = STATE(36),
    [sym__triple_inline_quote] = STATE(36),
    [sym_block_quote] = STATE(37),
    [aux_sym_source_repeat1] = STATE(2),
    [aux_sym_source_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_EQ_EQ] = ACTIONS(5),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(7),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_tag] = ACTIONS(13),
    [anon_sym_LTem_GT] = ACTIONS(15),
    [anon_sym_LTstrong_GT] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [sym_quote_escape] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(27),
    [sym__terminator] = ACTIONS(29),
    [sym__word] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
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
      anon_sym_LTem_GT,
    ACTIONS(17), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      sym__terminator,
    STATE(5), 1,
      aux_sym_source_repeat2,
    STATE(15), 1,
      aux_sym__text_line,
    STATE(19), 1,
      aux_sym_source_repeat1,
    STATE(35), 1,
      sym__link_macro,
    STATE(192), 1,
      sym_line,
    ACTIONS(21), 2,
      sym_quote_escape,
      sym__word,
    STATE(227), 2,
      sym__tag_line,
      sym_section,
    STATE(36), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(37), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [77] = 20,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_EQ_EQ,
    ACTIONS(40), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(43), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      sym_tag,
    ACTIONS(52), 1,
      anon_sym_LTem_GT,
    ACTIONS(55), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(58), 1,
      anon_sym_LT,
    ACTIONS(64), 1,
      anon_sym_BQUOTE,
    ACTIONS(67), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(70), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(3), 1,
      aux_sym_source_repeat2,
    STATE(15), 1,
      aux_sym__text_line,
    STATE(35), 1,
      sym__link_macro,
    STATE(192), 1,
      sym_line,
    ACTIONS(61), 2,
      sym_quote_escape,
      sym__word,
    STATE(227), 2,
      sym__tag_line,
      sym_section,
    STATE(36), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(37), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [148] = 20,
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
      anon_sym_LTem_GT,
    ACTIONS(17), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_repeat2,
    STATE(15), 1,
      aux_sym__text_line,
    STATE(35), 1,
      sym__link_macro,
    STATE(192), 1,
      sym_line,
    ACTIONS(21), 2,
      sym_quote_escape,
      sym__word,
    STATE(227), 2,
      sym__tag_line,
      sym_section,
    STATE(36), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(37), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [219] = 20,
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
      anon_sym_LTem_GT,
    ACTIONS(17), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_repeat2,
    STATE(15), 1,
      aux_sym__text_line,
    STATE(35), 1,
      sym__link_macro,
    STATE(192), 1,
      sym_line,
    ACTIONS(21), 2,
      sym_quote_escape,
      sym__word,
    STATE(227), 2,
      sym__tag_line,
      sym_section,
    STATE(36), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(37), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [290] = 13,
    ACTIONS(75), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_LTem_GT,
    ACTIONS(83), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(86), 1,
      anon_sym_LT,
    ACTIONS(92), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(98), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(6), 1,
      aux_sym__text_line,
    STATE(100), 1,
      sym__link_macro,
    ACTIONS(89), 2,
      sym_quote_escape,
      sym__word,
    STATE(101), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(99), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [339] = 13,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LTem_GT,
    ACTIONS(17), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(101), 1,
      sym__terminator,
    STATE(9), 1,
      aux_sym__text_line,
    STATE(35), 1,
      sym__link_macro,
    ACTIONS(21), 2,
      sym_quote_escape,
      sym__word,
    STATE(36), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(37), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [388] = 13,
    ACTIONS(75), 1,
      anon_sym_EQ_EQ,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(106), 1,
      anon_sym_LTem_GT,
    ACTIONS(109), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(112), 1,
      anon_sym_LT,
    ACTIONS(118), 1,
      anon_sym_BQUOTE,
    ACTIONS(121), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(124), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(8), 1,
      aux_sym__text_line,
    STATE(80), 1,
      sym__link_macro,
    ACTIONS(115), 2,
      sym_quote_escape,
      sym__word,
    STATE(81), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(79), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [437] = 13,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LTem_GT,
    ACTIONS(17), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(127), 1,
      sym__terminator,
    STATE(14), 1,
      aux_sym__text_line,
    STATE(35), 1,
      sym__link_macro,
    ACTIONS(21), 2,
      sym_quote_escape,
      sym__word,
    STATE(36), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(37), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [486] = 13,
    ACTIONS(129), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_LTem_GT,
    ACTIONS(135), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(137), 1,
      anon_sym_LT,
    ACTIONS(141), 1,
      anon_sym_BQUOTE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(145), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(13), 1,
      aux_sym__text_line,
    STATE(33), 1,
      sym__link_macro,
    ACTIONS(139), 2,
      sym_quote_escape,
      sym__word,
    STATE(55), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(56), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [535] = 13,
    ACTIONS(129), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    ACTIONS(149), 1,
      anon_sym_LTem_GT,
    ACTIONS(151), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(153), 1,
      anon_sym_LT,
    ACTIONS(157), 1,
      anon_sym_BQUOTE,
    ACTIONS(159), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(161), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(6), 1,
      aux_sym__text_line,
    STATE(100), 1,
      sym__link_macro,
    ACTIONS(155), 2,
      sym_quote_escape,
      sym__word,
    STATE(101), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(99), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [584] = 13,
    ACTIONS(129), 1,
      anon_sym_EQ_EQ,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      anon_sym_LTem_GT,
    ACTIONS(167), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(169), 1,
      anon_sym_LT,
    ACTIONS(173), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(177), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(8), 1,
      aux_sym__text_line,
    STATE(80), 1,
      sym__link_macro,
    ACTIONS(171), 2,
      sym_quote_escape,
      sym__word,
    STATE(81), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(79), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [633] = 13,
    ACTIONS(75), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    ACTIONS(182), 1,
      anon_sym_LTem_GT,
    ACTIONS(185), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(194), 1,
      anon_sym_BQUOTE,
    ACTIONS(197), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(200), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(13), 1,
      aux_sym__text_line,
    STATE(33), 1,
      sym__link_macro,
    ACTIONS(191), 2,
      sym_quote_escape,
      sym__word,
    STATE(55), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(56), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [682] = 13,
    ACTIONS(75), 1,
      sym__terminator,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      anon_sym_LTem_GT,
    ACTIONS(209), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(212), 1,
      anon_sym_LT,
    ACTIONS(218), 1,
      anon_sym_BQUOTE,
    ACTIONS(221), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(224), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(14), 1,
      aux_sym__text_line,
    STATE(35), 1,
      sym__link_macro,
    ACTIONS(215), 2,
      sym_quote_escape,
      sym__word,
    STATE(36), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(37), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [731] = 13,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LTem_GT,
    ACTIONS(17), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(227), 1,
      sym__terminator,
    STATE(14), 1,
      aux_sym__text_line,
    STATE(35), 1,
      sym__link_macro,
    ACTIONS(21), 2,
      sym_quote_escape,
      sym__word,
    STATE(36), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(37), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [780] = 12,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      anon_sym_LTem_GT,
    ACTIONS(167), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(169), 1,
      anon_sym_LT,
    ACTIONS(173), 1,
      anon_sym_BQUOTE,
    ACTIONS(175), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(177), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(12), 1,
      aux_sym__text_line,
    STATE(80), 1,
      sym__link_macro,
    ACTIONS(171), 2,
      sym_quote_escape,
      sym__word,
    STATE(81), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(79), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [826] = 12,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    ACTIONS(149), 1,
      anon_sym_LTem_GT,
    ACTIONS(151), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(153), 1,
      anon_sym_LT,
    ACTIONS(157), 1,
      anon_sym_BQUOTE,
    ACTIONS(159), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(161), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(11), 1,
      aux_sym__text_line,
    STATE(100), 1,
      sym__link_macro,
    ACTIONS(155), 2,
      sym_quote_escape,
      sym__word,
    STATE(101), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(99), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [872] = 12,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_LTem_GT,
    ACTIONS(135), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(137), 1,
      anon_sym_LT,
    ACTIONS(141), 1,
      anon_sym_BQUOTE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(145), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(10), 1,
      aux_sym__text_line,
    STATE(33), 1,
      sym__link_macro,
    ACTIONS(139), 2,
      sym_quote_escape,
      sym__word,
    STATE(55), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(56), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [918] = 4,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    ACTIONS(233), 1,
      sym__terminator,
    STATE(19), 1,
      aux_sym_source_repeat1,
    ACTIONS(231), 13,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      sym_tag,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [943] = 4,
    ACTIONS(33), 1,
      sym__terminator,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_source_repeat1,
    ACTIONS(236), 13,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      sym_tag,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [968] = 8,
    ACTIONS(238), 1,
      anon_sym_LT,
    ACTIONS(242), 1,
      anon_sym_BQUOTE,
    ACTIONS(244), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(246), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(225), 1,
      sym_xhtml_tag_content,
    ACTIONS(240), 3,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      sym__terminator,
    STATE(27), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(126), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [999] = 8,
    ACTIONS(248), 1,
      anon_sym_LT,
    ACTIONS(252), 1,
      anon_sym_BQUOTE,
    ACTIONS(254), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(256), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(219), 1,
      sym_xhtml_tag_content,
    ACTIONS(250), 3,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      sym__terminator,
    STATE(31), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(116), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1030] = 8,
    ACTIONS(238), 1,
      anon_sym_LT,
    ACTIONS(242), 1,
      anon_sym_BQUOTE,
    ACTIONS(244), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(246), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(215), 1,
      sym_xhtml_tag_content,
    ACTIONS(240), 3,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      sym__terminator,
    STATE(27), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(126), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1061] = 8,
    ACTIONS(248), 1,
      anon_sym_LT,
    ACTIONS(252), 1,
      anon_sym_BQUOTE,
    ACTIONS(254), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(256), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(203), 1,
      sym_xhtml_tag_content,
    ACTIONS(250), 3,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      sym__terminator,
    STATE(31), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(116), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1092] = 8,
    ACTIONS(238), 1,
      anon_sym_LT,
    ACTIONS(242), 1,
      anon_sym_BQUOTE,
    ACTIONS(244), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(246), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(201), 1,
      sym_xhtml_tag_content,
    ACTIONS(240), 3,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      sym__terminator,
    STATE(27), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(126), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1123] = 8,
    ACTIONS(258), 1,
      anon_sym_LT_SLASHstrong_GT,
    ACTIONS(260), 1,
      anon_sym_LT,
    ACTIONS(266), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(272), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(263), 3,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      sym__terminator,
    STATE(26), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(126), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1154] = 8,
    ACTIONS(238), 1,
      anon_sym_LT,
    ACTIONS(242), 1,
      anon_sym_BQUOTE,
    ACTIONS(244), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(246), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(275), 1,
      anon_sym_LT_SLASHstrong_GT,
    ACTIONS(277), 3,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      sym__terminator,
    STATE(26), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(126), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1185] = 8,
    ACTIONS(248), 1,
      anon_sym_LT,
    ACTIONS(252), 1,
      anon_sym_BQUOTE,
    ACTIONS(254), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(256), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(226), 1,
      sym_xhtml_tag_content,
    ACTIONS(250), 3,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      sym__terminator,
    STATE(31), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(116), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1216] = 8,
    ACTIONS(258), 1,
      anon_sym_LT_SLASHem_GT,
    ACTIONS(279), 1,
      anon_sym_LT,
    ACTIONS(285), 1,
      anon_sym_BQUOTE,
    ACTIONS(288), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(291), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(282), 3,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      sym__terminator,
    STATE(29), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(116), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1247] = 8,
    ACTIONS(238), 1,
      anon_sym_LT,
    ACTIONS(242), 1,
      anon_sym_BQUOTE,
    ACTIONS(244), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(246), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(231), 1,
      sym_xhtml_tag_content,
    ACTIONS(240), 3,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      sym__terminator,
    STATE(27), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(126), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1278] = 8,
    ACTIONS(248), 1,
      anon_sym_LT,
    ACTIONS(252), 1,
      anon_sym_BQUOTE,
    ACTIONS(254), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(256), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(275), 1,
      anon_sym_LT_SLASHem_GT,
    ACTIONS(294), 3,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      sym__terminator,
    STATE(29), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(116), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1309] = 8,
    ACTIONS(248), 1,
      anon_sym_LT,
    ACTIONS(252), 1,
      anon_sym_BQUOTE,
    ACTIONS(254), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(256), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(228), 1,
      sym_xhtml_tag_content,
    ACTIONS(250), 3,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      sym__terminator,
    STATE(31), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(116), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1340] = 1,
    ACTIONS(296), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1353] = 1,
    ACTIONS(298), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1366] = 1,
    ACTIONS(296), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1379] = 1,
    ACTIONS(300), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1392] = 1,
    ACTIONS(302), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1405] = 1,
    ACTIONS(304), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1418] = 1,
    ACTIONS(306), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1431] = 1,
    ACTIONS(308), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1444] = 1,
    ACTIONS(310), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1457] = 1,
    ACTIONS(312), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1470] = 1,
    ACTIONS(314), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1483] = 1,
    ACTIONS(316), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1496] = 1,
    ACTIONS(318), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1509] = 1,
    ACTIONS(320), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1522] = 1,
    ACTIONS(322), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1535] = 1,
    ACTIONS(324), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1548] = 1,
    ACTIONS(326), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1561] = 1,
    ACTIONS(328), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1574] = 1,
    ACTIONS(330), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1587] = 1,
    ACTIONS(322), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1600] = 1,
    ACTIONS(318), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1613] = 1,
    ACTIONS(312), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1626] = 1,
    ACTIONS(300), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1639] = 1,
    ACTIONS(302), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1652] = 1,
    ACTIONS(330), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1665] = 1,
    ACTIONS(328), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1678] = 1,
    ACTIONS(326), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1691] = 1,
    ACTIONS(324), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1704] = 1,
    ACTIONS(304), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1717] = 1,
    ACTIONS(320), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1730] = 1,
    ACTIONS(316), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1743] = 1,
    ACTIONS(298), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1756] = 1,
    ACTIONS(306), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1769] = 1,
    ACTIONS(314), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1782] = 1,
    ACTIONS(310), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1795] = 1,
    ACTIONS(308), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1808] = 1,
    ACTIONS(308), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1821] = 1,
    ACTIONS(310), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1834] = 1,
    ACTIONS(314), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1847] = 1,
    ACTIONS(316), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1860] = 1,
    ACTIONS(320), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1873] = 1,
    ACTIONS(306), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1886] = 1,
    ACTIONS(324), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1899] = 1,
    ACTIONS(298), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1912] = 1,
    ACTIONS(326), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1925] = 1,
    ACTIONS(304), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1938] = 1,
    ACTIONS(302), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1951] = 1,
    ACTIONS(296), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1964] = 1,
    ACTIONS(300), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1977] = 1,
    ACTIONS(312), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1990] = 1,
    ACTIONS(318), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2003] = 1,
    ACTIONS(322), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2016] = 1,
    ACTIONS(328), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2029] = 1,
    ACTIONS(330), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2042] = 1,
    ACTIONS(328), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2055] = 1,
    ACTIONS(326), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2068] = 1,
    ACTIONS(324), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2081] = 1,
    ACTIONS(320), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2094] = 1,
    ACTIONS(316), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2107] = 1,
    ACTIONS(330), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2120] = 1,
    ACTIONS(314), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2133] = 1,
    ACTIONS(310), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2146] = 1,
    ACTIONS(308), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2159] = 1,
    ACTIONS(306), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2172] = 1,
    ACTIONS(298), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2185] = 1,
    ACTIONS(304), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2198] = 1,
    ACTIONS(302), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2211] = 1,
    ACTIONS(296), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2224] = 1,
    ACTIONS(300), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2237] = 1,
    ACTIONS(312), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2250] = 1,
    ACTIONS(318), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2263] = 1,
    ACTIONS(322), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2276] = 4,
    STATE(196), 1,
      sym__link_expression,
    ACTIONS(332), 2,
      anon_sym_DOT,
      aux_sym__link_expression_token1,
    STATE(119), 2,
      sym_macro_escape,
      aux_sym__link_expression_repeat1,
    ACTIONS(334), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2293] = 1,
    ACTIONS(310), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
  [2304] = 1,
    ACTIONS(316), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
  [2315] = 1,
    ACTIONS(310), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
  [2326] = 1,
    ACTIONS(324), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
  [2337] = 1,
    ACTIONS(322), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
  [2348] = 4,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    ACTIONS(338), 2,
      anon_sym_DOT,
      aux_sym__link_expression_token1,
    STATE(111), 2,
      sym_macro_escape,
      aux_sym__link_expression_repeat1,
    ACTIONS(341), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2365] = 1,
    ACTIONS(318), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
  [2376] = 4,
    STATE(194), 1,
      sym__link_expression,
    ACTIONS(332), 2,
      anon_sym_DOT,
      aux_sym__link_expression_token1,
    STATE(119), 2,
      sym_macro_escape,
      aux_sym__link_expression_repeat1,
    ACTIONS(334), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2393] = 4,
    STATE(190), 1,
      sym__link_expression,
    ACTIONS(332), 2,
      anon_sym_DOT,
      aux_sym__link_expression_token1,
    STATE(119), 2,
      sym_macro_escape,
      aux_sym__link_expression_repeat1,
    ACTIONS(334), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2410] = 1,
    ACTIONS(312), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
  [2421] = 1,
    ACTIONS(300), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
  [2432] = 1,
    ACTIONS(320), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
  [2443] = 4,
    STATE(193), 1,
      sym__link_expression,
    ACTIONS(332), 2,
      anon_sym_DOT,
      aux_sym__link_expression_token1,
    STATE(119), 2,
      sym_macro_escape,
      aux_sym__link_expression_repeat1,
    ACTIONS(334), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2460] = 4,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    ACTIONS(346), 2,
      anon_sym_DOT,
      aux_sym__link_expression_token1,
    STATE(111), 2,
      sym_macro_escape,
      aux_sym__link_expression_repeat1,
    ACTIONS(334), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2477] = 1,
    ACTIONS(324), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
  [2488] = 1,
    ACTIONS(322), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
  [2499] = 1,
    ACTIONS(318), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
  [2510] = 1,
    ACTIONS(320), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
  [2521] = 1,
    ACTIONS(316), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
  [2532] = 1,
    ACTIONS(312), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
  [2543] = 1,
    ACTIONS(300), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      aux_sym_xhtml_tag_content_token1,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
  [2554] = 4,
    ACTIONS(348), 1,
      aux_sym_argument_token1,
    STATE(216), 1,
      sym_argument,
    STATE(138), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(350), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2570] = 4,
    ACTIONS(348), 1,
      aux_sym_argument_token1,
    STATE(205), 1,
      sym_argument,
    STATE(138), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(350), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2586] = 4,
    ACTIONS(348), 1,
      aux_sym_argument_token1,
    STATE(204), 1,
      sym_argument,
    STATE(138), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(350), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2602] = 4,
    ACTIONS(348), 1,
      aux_sym_argument_token1,
    STATE(233), 1,
      sym_argument,
    STATE(138), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(350), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2618] = 7,
    ACTIONS(352), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(354), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(356), 1,
      sym_language_identifier,
    ACTIONS(358), 1,
      aux_sym_quote_content_token1,
    STATE(144), 1,
      aux_sym_quote_content_repeat1,
    STATE(161), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(214), 1,
      sym_quote_content,
  [2640] = 7,
    ACTIONS(358), 1,
      aux_sym_quote_content_token1,
    ACTIONS(360), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(362), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(364), 1,
      sym_language_identifier,
    STATE(144), 1,
      aux_sym_quote_content_repeat1,
    STATE(164), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(209), 1,
      sym_quote_content,
  [2662] = 7,
    ACTIONS(358), 1,
      aux_sym_quote_content_token1,
    ACTIONS(366), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(368), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(370), 1,
      sym_language_identifier,
    STATE(144), 1,
      aux_sym_quote_content_repeat1,
    STATE(178), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(199), 1,
      sym_quote_content,
  [2684] = 4,
    ACTIONS(348), 1,
      aux_sym_argument_token1,
    STATE(224), 1,
      sym_argument,
    STATE(138), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(350), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2700] = 7,
    ACTIONS(358), 1,
      aux_sym_quote_content_token1,
    ACTIONS(372), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(374), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(376), 1,
      sym_language_identifier,
    STATE(144), 1,
      aux_sym_quote_content_repeat1,
    STATE(179), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(218), 1,
      sym_quote_content,
  [2722] = 4,
    ACTIONS(348), 1,
      aux_sym_argument_token1,
    STATE(208), 1,
      sym_argument,
    STATE(138), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(350), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2738] = 4,
    ACTIONS(348), 1,
      aux_sym_argument_token1,
    STATE(210), 1,
      sym_argument,
    STATE(138), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(350), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2754] = 4,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    ACTIONS(380), 1,
      aux_sym_argument_token1,
    STATE(140), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(350), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2770] = 4,
    ACTIONS(348), 1,
      aux_sym_argument_token1,
    STATE(197), 1,
      sym_argument,
    STATE(138), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(350), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2786] = 4,
    ACTIONS(382), 1,
      anon_sym_RBRACE,
    ACTIONS(384), 1,
      aux_sym_argument_token1,
    STATE(140), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(387), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2802] = 1,
    ACTIONS(390), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      aux_sym__link_expression_token1,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2811] = 1,
    ACTIONS(390), 5,
      anon_sym_RBRACE,
      aux_sym_argument_token1,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2819] = 3,
    ACTIONS(392), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(394), 1,
      anon_sym_GT,
    STATE(174), 1,
      aux_sym_xhtml_tag_repeat1,
  [2829] = 3,
    ACTIONS(396), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(398), 1,
      aux_sym_quote_content_token1,
    STATE(147), 1,
      aux_sym_quote_content_repeat1,
  [2839] = 3,
    ACTIONS(400), 1,
      aux_sym_quote_content_token1,
    STATE(144), 1,
      aux_sym_quote_content_repeat1,
    STATE(230), 1,
      sym_quote_content,
  [2849] = 3,
    ACTIONS(402), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(404), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(152), 1,
      aux_sym__double_inline_quote_repeat1,
  [2859] = 3,
    ACTIONS(406), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(408), 1,
      aux_sym_quote_content_token1,
    STATE(147), 1,
      aux_sym_quote_content_repeat1,
  [2869] = 3,
    ACTIONS(411), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(413), 1,
      anon_sym_GT,
    STATE(153), 1,
      aux_sym_xhtml_tag_repeat1,
  [2879] = 3,
    ACTIONS(400), 1,
      aux_sym_quote_content_token1,
    STATE(144), 1,
      aux_sym_quote_content_repeat1,
    STATE(198), 1,
      sym_quote_content,
  [2889] = 3,
    ACTIONS(415), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(417), 1,
      anon_sym_GT,
    STATE(148), 1,
      aux_sym_xhtml_tag_repeat1,
  [2899] = 3,
    ACTIONS(419), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(421), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(171), 1,
      aux_sym__double_inline_quote_repeat1,
  [2909] = 3,
    ACTIONS(423), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(426), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(152), 1,
      aux_sym__double_inline_quote_repeat1,
  [2919] = 3,
    ACTIONS(428), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(431), 1,
      anon_sym_GT,
    STATE(153), 1,
      aux_sym_xhtml_tag_repeat1,
  [2929] = 3,
    ACTIONS(433), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(435), 1,
      anon_sym_GT,
    STATE(160), 1,
      aux_sym_xhtml_tag_repeat1,
  [2939] = 3,
    ACTIONS(437), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(439), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(162), 1,
      aux_sym__double_inline_quote_repeat1,
  [2949] = 3,
    ACTIONS(400), 1,
      aux_sym_quote_content_token1,
    STATE(144), 1,
      aux_sym_quote_content_repeat1,
    STATE(222), 1,
      sym_quote_content,
  [2959] = 3,
    ACTIONS(441), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(443), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(163), 1,
      aux_sym__double_inline_quote_repeat1,
  [2969] = 3,
    ACTIONS(445), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(447), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(146), 1,
      aux_sym__double_inline_quote_repeat1,
  [2979] = 3,
    ACTIONS(400), 1,
      aux_sym_quote_content_token1,
    STATE(144), 1,
      aux_sym_quote_content_repeat1,
    STATE(206), 1,
      sym_quote_content,
  [2989] = 3,
    ACTIONS(411), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(449), 1,
      anon_sym_GT,
    STATE(153), 1,
      aux_sym_xhtml_tag_repeat1,
  [2999] = 3,
    ACTIONS(451), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(453), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(169), 1,
      aux_sym__double_inline_quote_repeat1,
  [3009] = 3,
    ACTIONS(402), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(455), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(152), 1,
      aux_sym__double_inline_quote_repeat1,
  [3019] = 3,
    ACTIONS(451), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(457), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(169), 1,
      aux_sym__double_inline_quote_repeat1,
  [3029] = 3,
    ACTIONS(451), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(459), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(169), 1,
      aux_sym__double_inline_quote_repeat1,
  [3039] = 3,
    ACTIONS(402), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(461), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(152), 1,
      aux_sym__double_inline_quote_repeat1,
  [3049] = 3,
    ACTIONS(411), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(463), 1,
      anon_sym_GT,
    STATE(153), 1,
      aux_sym_xhtml_tag_repeat1,
  [3059] = 3,
    ACTIONS(465), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(467), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(165), 1,
      aux_sym__double_inline_quote_repeat1,
  [3069] = 3,
    ACTIONS(469), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(471), 1,
      anon_sym_GT,
    STATE(166), 1,
      aux_sym_xhtml_tag_repeat1,
  [3079] = 3,
    ACTIONS(426), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(473), 1,
      aux_sym__double_inline_quote_token1,
    STATE(169), 1,
      aux_sym__double_inline_quote_repeat1,
  [3089] = 3,
    ACTIONS(476), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(478), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(176), 1,
      aux_sym__double_inline_quote_repeat1,
  [3099] = 3,
    ACTIONS(451), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(480), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(169), 1,
      aux_sym__double_inline_quote_repeat1,
  [3109] = 3,
    ACTIONS(402), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(482), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(152), 1,
      aux_sym__double_inline_quote_repeat1,
  [3119] = 3,
    ACTIONS(411), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(484), 1,
      anon_sym_GT,
    STATE(153), 1,
      aux_sym_xhtml_tag_repeat1,
  [3129] = 3,
    ACTIONS(411), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(486), 1,
      anon_sym_GT,
    STATE(153), 1,
      aux_sym_xhtml_tag_repeat1,
  [3139] = 3,
    ACTIONS(488), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(490), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(172), 1,
      aux_sym__double_inline_quote_repeat1,
  [3149] = 3,
    ACTIONS(402), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(492), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(152), 1,
      aux_sym__double_inline_quote_repeat1,
  [3159] = 3,
    ACTIONS(494), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(496), 1,
      anon_sym_GT,
    STATE(173), 1,
      aux_sym_xhtml_tag_repeat1,
  [3169] = 3,
    ACTIONS(451), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(498), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(169), 1,
      aux_sym__double_inline_quote_repeat1,
  [3179] = 3,
    ACTIONS(451), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(500), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(169), 1,
      aux_sym__double_inline_quote_repeat1,
  [3189] = 3,
    ACTIONS(402), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(502), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(152), 1,
      aux_sym__double_inline_quote_repeat1,
  [3199] = 3,
    ACTIONS(411), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(504), 1,
      anon_sym_GT,
    STATE(153), 1,
      aux_sym_xhtml_tag_repeat1,
  [3209] = 3,
    ACTIONS(506), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(508), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(180), 1,
      aux_sym__double_inline_quote_repeat1,
  [3219] = 3,
    ACTIONS(510), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(512), 1,
      anon_sym_GT,
    STATE(181), 1,
      aux_sym_xhtml_tag_repeat1,
  [3229] = 2,
    ACTIONS(514), 1,
      aux_sym_macro_token1,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
  [3236] = 2,
    ACTIONS(518), 1,
      anon_sym_ATlink,
    ACTIONS(520), 1,
      sym_tag,
  [3243] = 2,
    ACTIONS(522), 1,
      aux_sym_macro_token1,
    ACTIONS(524), 1,
      anon_sym_RBRACE,
  [3250] = 2,
    ACTIONS(526), 1,
      aux_sym_macro_token1,
    ACTIONS(528), 1,
      anon_sym_RBRACE,
  [3257] = 2,
    ACTIONS(530), 1,
      anon_sym_ATlink,
    ACTIONS(532), 1,
      sym_tag,
  [3264] = 2,
    ACTIONS(534), 1,
      aux_sym_macro_token1,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
  [3271] = 2,
    ACTIONS(538), 1,
      anon_sym_RBRACE,
    ACTIONS(540), 1,
      anon_sym_DOT,
  [3278] = 2,
    ACTIONS(542), 1,
      anon_sym_ATlink,
    ACTIONS(544), 1,
      sym_tag,
  [3285] = 2,
    ACTIONS(546), 1,
      sym__terminator,
    STATE(20), 1,
      aux_sym_source_repeat1,
  [3292] = 2,
    ACTIONS(548), 1,
      anon_sym_RBRACE,
    ACTIONS(550), 1,
      anon_sym_DOT,
  [3299] = 2,
    ACTIONS(552), 1,
      anon_sym_RBRACE,
    ACTIONS(554), 1,
      anon_sym_DOT,
  [3306] = 2,
    ACTIONS(556), 1,
      anon_sym_ATlink,
    ACTIONS(558), 1,
      sym_tag,
  [3313] = 2,
    ACTIONS(560), 1,
      anon_sym_RBRACE,
    ACTIONS(562), 1,
      anon_sym_DOT,
  [3320] = 1,
    ACTIONS(564), 1,
      anon_sym_RBRACE,
  [3324] = 1,
    ACTIONS(566), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3328] = 1,
    ACTIONS(568), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3332] = 1,
    ACTIONS(570), 1,
      anon_sym_SQUOTE,
  [3336] = 1,
    ACTIONS(572), 1,
      anon_sym_LT_SLASHstrong_GT,
  [3340] = 1,
    ACTIONS(574), 1,
      anon_sym_SQUOTE,
  [3344] = 1,
    ACTIONS(576), 1,
      anon_sym_LT_SLASHem_GT,
  [3348] = 1,
    ACTIONS(578), 1,
      anon_sym_RBRACE,
  [3352] = 1,
    ACTIONS(580), 1,
      anon_sym_RBRACE,
  [3356] = 1,
    ACTIONS(582), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3360] = 1,
    ACTIONS(584), 1,
      anon_sym_SQUOTE,
  [3364] = 1,
    ACTIONS(586), 1,
      anon_sym_RBRACE,
  [3368] = 1,
    ACTIONS(588), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3372] = 1,
    ACTIONS(590), 1,
      anon_sym_RBRACE,
  [3376] = 1,
    ACTIONS(592), 1,
      ts_builtin_sym_end,
  [3380] = 1,
    ACTIONS(594), 1,
      anon_sym_SQUOTE,
  [3384] = 1,
    ACTIONS(596), 1,
      aux_sym__inline_quote_token1,
  [3388] = 1,
    ACTIONS(598), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3392] = 1,
    ACTIONS(600), 1,
      anon_sym_LT_SLASHstrong_GT,
  [3396] = 1,
    ACTIONS(602), 1,
      anon_sym_RBRACE,
  [3400] = 1,
    ACTIONS(604), 1,
      sym__terminator,
  [3404] = 1,
    ACTIONS(606), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3408] = 1,
    ACTIONS(608), 1,
      anon_sym_LT_SLASHem_GT,
  [3412] = 1,
    ACTIONS(610), 1,
      aux_sym__inline_quote_token1,
  [3416] = 1,
    ACTIONS(612), 1,
      aux_sym__inline_quote_token1,
  [3420] = 1,
    ACTIONS(614), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3424] = 1,
    ACTIONS(616), 1,
      anon_sym_SQUOTE,
  [3428] = 1,
    ACTIONS(618), 1,
      anon_sym_RBRACE,
  [3432] = 1,
    ACTIONS(620), 1,
      anon_sym_LT_SLASHstrong_GT,
  [3436] = 1,
    ACTIONS(622), 1,
      anon_sym_LT_SLASHem_GT,
  [3440] = 1,
    ACTIONS(624), 1,
      sym__terminator,
  [3444] = 1,
    ACTIONS(626), 1,
      anon_sym_LT_SLASHem_GT,
  [3448] = 1,
    ACTIONS(628), 1,
      aux_sym__inline_quote_token1,
  [3452] = 1,
    ACTIONS(630), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3456] = 1,
    ACTIONS(632), 1,
      anon_sym_LT_SLASHstrong_GT,
  [3460] = 1,
    ACTIONS(634), 1,
      anon_sym_SQUOTE,
  [3464] = 1,
    ACTIONS(636), 1,
      anon_sym_RBRACE,
  [3468] = 1,
    ACTIONS(638), 1,
      aux_sym__inline_quote_token1,
  [3472] = 1,
    ACTIONS(640), 1,
      aux_sym__inline_quote_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 148,
  [SMALL_STATE(5)] = 219,
  [SMALL_STATE(6)] = 290,
  [SMALL_STATE(7)] = 339,
  [SMALL_STATE(8)] = 388,
  [SMALL_STATE(9)] = 437,
  [SMALL_STATE(10)] = 486,
  [SMALL_STATE(11)] = 535,
  [SMALL_STATE(12)] = 584,
  [SMALL_STATE(13)] = 633,
  [SMALL_STATE(14)] = 682,
  [SMALL_STATE(15)] = 731,
  [SMALL_STATE(16)] = 780,
  [SMALL_STATE(17)] = 826,
  [SMALL_STATE(18)] = 872,
  [SMALL_STATE(19)] = 918,
  [SMALL_STATE(20)] = 943,
  [SMALL_STATE(21)] = 968,
  [SMALL_STATE(22)] = 999,
  [SMALL_STATE(23)] = 1030,
  [SMALL_STATE(24)] = 1061,
  [SMALL_STATE(25)] = 1092,
  [SMALL_STATE(26)] = 1123,
  [SMALL_STATE(27)] = 1154,
  [SMALL_STATE(28)] = 1185,
  [SMALL_STATE(29)] = 1216,
  [SMALL_STATE(30)] = 1247,
  [SMALL_STATE(31)] = 1278,
  [SMALL_STATE(32)] = 1309,
  [SMALL_STATE(33)] = 1340,
  [SMALL_STATE(34)] = 1353,
  [SMALL_STATE(35)] = 1366,
  [SMALL_STATE(36)] = 1379,
  [SMALL_STATE(37)] = 1392,
  [SMALL_STATE(38)] = 1405,
  [SMALL_STATE(39)] = 1418,
  [SMALL_STATE(40)] = 1431,
  [SMALL_STATE(41)] = 1444,
  [SMALL_STATE(42)] = 1457,
  [SMALL_STATE(43)] = 1470,
  [SMALL_STATE(44)] = 1483,
  [SMALL_STATE(45)] = 1496,
  [SMALL_STATE(46)] = 1509,
  [SMALL_STATE(47)] = 1522,
  [SMALL_STATE(48)] = 1535,
  [SMALL_STATE(49)] = 1548,
  [SMALL_STATE(50)] = 1561,
  [SMALL_STATE(51)] = 1574,
  [SMALL_STATE(52)] = 1587,
  [SMALL_STATE(53)] = 1600,
  [SMALL_STATE(54)] = 1613,
  [SMALL_STATE(55)] = 1626,
  [SMALL_STATE(56)] = 1639,
  [SMALL_STATE(57)] = 1652,
  [SMALL_STATE(58)] = 1665,
  [SMALL_STATE(59)] = 1678,
  [SMALL_STATE(60)] = 1691,
  [SMALL_STATE(61)] = 1704,
  [SMALL_STATE(62)] = 1717,
  [SMALL_STATE(63)] = 1730,
  [SMALL_STATE(64)] = 1743,
  [SMALL_STATE(65)] = 1756,
  [SMALL_STATE(66)] = 1769,
  [SMALL_STATE(67)] = 1782,
  [SMALL_STATE(68)] = 1795,
  [SMALL_STATE(69)] = 1808,
  [SMALL_STATE(70)] = 1821,
  [SMALL_STATE(71)] = 1834,
  [SMALL_STATE(72)] = 1847,
  [SMALL_STATE(73)] = 1860,
  [SMALL_STATE(74)] = 1873,
  [SMALL_STATE(75)] = 1886,
  [SMALL_STATE(76)] = 1899,
  [SMALL_STATE(77)] = 1912,
  [SMALL_STATE(78)] = 1925,
  [SMALL_STATE(79)] = 1938,
  [SMALL_STATE(80)] = 1951,
  [SMALL_STATE(81)] = 1964,
  [SMALL_STATE(82)] = 1977,
  [SMALL_STATE(83)] = 1990,
  [SMALL_STATE(84)] = 2003,
  [SMALL_STATE(85)] = 2016,
  [SMALL_STATE(86)] = 2029,
  [SMALL_STATE(87)] = 2042,
  [SMALL_STATE(88)] = 2055,
  [SMALL_STATE(89)] = 2068,
  [SMALL_STATE(90)] = 2081,
  [SMALL_STATE(91)] = 2094,
  [SMALL_STATE(92)] = 2107,
  [SMALL_STATE(93)] = 2120,
  [SMALL_STATE(94)] = 2133,
  [SMALL_STATE(95)] = 2146,
  [SMALL_STATE(96)] = 2159,
  [SMALL_STATE(97)] = 2172,
  [SMALL_STATE(98)] = 2185,
  [SMALL_STATE(99)] = 2198,
  [SMALL_STATE(100)] = 2211,
  [SMALL_STATE(101)] = 2224,
  [SMALL_STATE(102)] = 2237,
  [SMALL_STATE(103)] = 2250,
  [SMALL_STATE(104)] = 2263,
  [SMALL_STATE(105)] = 2276,
  [SMALL_STATE(106)] = 2293,
  [SMALL_STATE(107)] = 2304,
  [SMALL_STATE(108)] = 2315,
  [SMALL_STATE(109)] = 2326,
  [SMALL_STATE(110)] = 2337,
  [SMALL_STATE(111)] = 2348,
  [SMALL_STATE(112)] = 2365,
  [SMALL_STATE(113)] = 2376,
  [SMALL_STATE(114)] = 2393,
  [SMALL_STATE(115)] = 2410,
  [SMALL_STATE(116)] = 2421,
  [SMALL_STATE(117)] = 2432,
  [SMALL_STATE(118)] = 2443,
  [SMALL_STATE(119)] = 2460,
  [SMALL_STATE(120)] = 2477,
  [SMALL_STATE(121)] = 2488,
  [SMALL_STATE(122)] = 2499,
  [SMALL_STATE(123)] = 2510,
  [SMALL_STATE(124)] = 2521,
  [SMALL_STATE(125)] = 2532,
  [SMALL_STATE(126)] = 2543,
  [SMALL_STATE(127)] = 2554,
  [SMALL_STATE(128)] = 2570,
  [SMALL_STATE(129)] = 2586,
  [SMALL_STATE(130)] = 2602,
  [SMALL_STATE(131)] = 2618,
  [SMALL_STATE(132)] = 2640,
  [SMALL_STATE(133)] = 2662,
  [SMALL_STATE(134)] = 2684,
  [SMALL_STATE(135)] = 2700,
  [SMALL_STATE(136)] = 2722,
  [SMALL_STATE(137)] = 2738,
  [SMALL_STATE(138)] = 2754,
  [SMALL_STATE(139)] = 2770,
  [SMALL_STATE(140)] = 2786,
  [SMALL_STATE(141)] = 2802,
  [SMALL_STATE(142)] = 2811,
  [SMALL_STATE(143)] = 2819,
  [SMALL_STATE(144)] = 2829,
  [SMALL_STATE(145)] = 2839,
  [SMALL_STATE(146)] = 2849,
  [SMALL_STATE(147)] = 2859,
  [SMALL_STATE(148)] = 2869,
  [SMALL_STATE(149)] = 2879,
  [SMALL_STATE(150)] = 2889,
  [SMALL_STATE(151)] = 2899,
  [SMALL_STATE(152)] = 2909,
  [SMALL_STATE(153)] = 2919,
  [SMALL_STATE(154)] = 2929,
  [SMALL_STATE(155)] = 2939,
  [SMALL_STATE(156)] = 2949,
  [SMALL_STATE(157)] = 2959,
  [SMALL_STATE(158)] = 2969,
  [SMALL_STATE(159)] = 2979,
  [SMALL_STATE(160)] = 2989,
  [SMALL_STATE(161)] = 2999,
  [SMALL_STATE(162)] = 3009,
  [SMALL_STATE(163)] = 3019,
  [SMALL_STATE(164)] = 3029,
  [SMALL_STATE(165)] = 3039,
  [SMALL_STATE(166)] = 3049,
  [SMALL_STATE(167)] = 3059,
  [SMALL_STATE(168)] = 3069,
  [SMALL_STATE(169)] = 3079,
  [SMALL_STATE(170)] = 3089,
  [SMALL_STATE(171)] = 3099,
  [SMALL_STATE(172)] = 3109,
  [SMALL_STATE(173)] = 3119,
  [SMALL_STATE(174)] = 3129,
  [SMALL_STATE(175)] = 3139,
  [SMALL_STATE(176)] = 3149,
  [SMALL_STATE(177)] = 3159,
  [SMALL_STATE(178)] = 3169,
  [SMALL_STATE(179)] = 3179,
  [SMALL_STATE(180)] = 3189,
  [SMALL_STATE(181)] = 3199,
  [SMALL_STATE(182)] = 3209,
  [SMALL_STATE(183)] = 3219,
  [SMALL_STATE(184)] = 3229,
  [SMALL_STATE(185)] = 3236,
  [SMALL_STATE(186)] = 3243,
  [SMALL_STATE(187)] = 3250,
  [SMALL_STATE(188)] = 3257,
  [SMALL_STATE(189)] = 3264,
  [SMALL_STATE(190)] = 3271,
  [SMALL_STATE(191)] = 3278,
  [SMALL_STATE(192)] = 3285,
  [SMALL_STATE(193)] = 3292,
  [SMALL_STATE(194)] = 3299,
  [SMALL_STATE(195)] = 3306,
  [SMALL_STATE(196)] = 3313,
  [SMALL_STATE(197)] = 3320,
  [SMALL_STATE(198)] = 3324,
  [SMALL_STATE(199)] = 3328,
  [SMALL_STATE(200)] = 3332,
  [SMALL_STATE(201)] = 3336,
  [SMALL_STATE(202)] = 3340,
  [SMALL_STATE(203)] = 3344,
  [SMALL_STATE(204)] = 3348,
  [SMALL_STATE(205)] = 3352,
  [SMALL_STATE(206)] = 3356,
  [SMALL_STATE(207)] = 3360,
  [SMALL_STATE(208)] = 3364,
  [SMALL_STATE(209)] = 3368,
  [SMALL_STATE(210)] = 3372,
  [SMALL_STATE(211)] = 3376,
  [SMALL_STATE(212)] = 3380,
  [SMALL_STATE(213)] = 3384,
  [SMALL_STATE(214)] = 3388,
  [SMALL_STATE(215)] = 3392,
  [SMALL_STATE(216)] = 3396,
  [SMALL_STATE(217)] = 3400,
  [SMALL_STATE(218)] = 3404,
  [SMALL_STATE(219)] = 3408,
  [SMALL_STATE(220)] = 3412,
  [SMALL_STATE(221)] = 3416,
  [SMALL_STATE(222)] = 3420,
  [SMALL_STATE(223)] = 3424,
  [SMALL_STATE(224)] = 3428,
  [SMALL_STATE(225)] = 3432,
  [SMALL_STATE(226)] = 3436,
  [SMALL_STATE(227)] = 3440,
  [SMALL_STATE(228)] = 3444,
  [SMALL_STATE(229)] = 3448,
  [SMALL_STATE(230)] = 3452,
  [SMALL_STATE(231)] = 3456,
  [SMALL_STATE(232)] = 3460,
  [SMALL_STATE(233)] = 3464,
  [SMALL_STATE(234)] = 3468,
  [SMALL_STATE(235)] = 3472,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(16),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(17),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(18),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(188),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(7),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(32),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(30),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(150),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(37),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(220),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(158),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(131),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_line, 2),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(191),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(24),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(25),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(143),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(99),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(221),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(170),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(133),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_line, 1),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(195),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(22),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(23),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(154),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(79),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(213),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(155),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(132),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_line, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(185),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(28),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(21),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(183),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(56),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(229),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(182),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(135),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(188),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(32),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(30),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(150),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(37),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(220),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(158),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(131),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(19),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(168),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(26),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(235),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(167),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(157),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xhtml_tag_content, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(177),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(29),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(234),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(175),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(151),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 5),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_quote, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_line, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_macro, 6, .production_id = 4),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_quote, 4, .production_id = 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_macro, 4),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_inline_quote, 3),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xhtml_tag, 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_quote, 3, .production_id = 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_inline_quote, 3),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_inline_quote, 2),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_quote, 3),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_inline_quote, 2),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xhtml_tag, 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_strong_xhtml_tag, 3),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_em_xhtml_tag, 3),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__link_expression_repeat1, 2),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__link_expression_repeat1, 2), SHIFT_REPEAT(111),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__link_expression_repeat1, 2), SHIFT_REPEAT(141),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_expression, 1),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(140),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(142),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_escape, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote_content, 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quote_content_repeat1, 2),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_content_repeat1, 2), SHIFT_REPEAT(147),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_inline_quote_repeat1, 2), SHIFT_REPEAT(152),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_inline_quote_repeat1, 2),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xhtml_tag_repeat1, 2), SHIFT_REPEAT(153),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_repeat1, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_inline_quote_repeat1, 2), SHIFT_REPEAT(169),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [592] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, .production_id = 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
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

#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 260
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 4
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_ATauthor = 1,
  anon_sym_EQ_EQ = 2,
  anon_sym_EQ_EQ_EQ = 3,
  anon_sym_EQ_EQ_EQ_EQ = 4,
  anon_sym_LBRACE = 5,
  aux_sym_macro_token1 = 6,
  anon_sym_RBRACE = 7,
  sym_tag = 8,
  aux_sym_argument_token1 = 9,
  anon_sym_ATlink = 10,
  anon_sym_DOT = 11,
  anon_sym_SLASH = 12,
  anon_sym_COLON = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  sym_arity = 16,
  anon_sym_LTem_GT = 17,
  anon_sym_LT_SLASHem_GT = 18,
  anon_sym_LTstrong_GT = 19,
  anon_sym_LT_SLASHstrong_GT = 20,
  anon_sym_LT = 21,
  aux_sym_xhtml_tag_token1 = 22,
  anon_sym_GT = 23,
  anon_sym_AT_LBRACE = 24,
  anon_sym_AT_RBRACE = 25,
  anon_sym_AT_AT = 26,
  sym_quote_escape = 27,
  anon_sym_BQUOTE = 28,
  aux_sym__inline_quote_token1 = 29,
  anon_sym_SQUOTE = 30,
  anon_sym_BQUOTE_BQUOTE = 31,
  aux_sym__double_inline_quote_token1 = 32,
  anon_sym_SQUOTE_SQUOTE = 33,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 34,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 35,
  sym_language_identifier = 36,
  aux_sym_quote_content_token1 = 37,
  sym__terminator = 38,
  sym__word = 39,
  sym__unquoted_atom = 40,
  sym__escape_sequence = 41,
  sym__quoted_content = 42,
  sym_source = 43,
  sym__line = 44,
  sym__tag_line = 45,
  sym__author_line = 46,
  aux_sym__text_line = 47,
  sym_section = 48,
  sym_macro = 49,
  sym_argument = 50,
  sym__link_macro = 51,
  sym__link_expression = 52,
  sym_module = 53,
  sym_function = 54,
  sym_type = 55,
  sym__xhtml_tag = 56,
  sym_em_xhtml_tag = 57,
  sym_strong_xhtml_tag = 58,
  sym_xhtml_tag = 59,
  sym_xhtml_tag_content = 60,
  sym_macro_escape = 61,
  sym_inline_quote = 62,
  sym__inline_quote = 63,
  sym__double_inline_quote = 64,
  sym__triple_inline_quote = 65,
  sym_block_quote = 66,
  sym_quote_content = 67,
  sym__atom = 68,
  sym__quoted_atom = 69,
  aux_sym_source_repeat1 = 70,
  aux_sym_source_repeat2 = 71,
  aux_sym__author_line_repeat1 = 72,
  aux_sym_argument_repeat1 = 73,
  aux_sym_xhtml_tag_repeat1 = 74,
  aux_sym_xhtml_tag_content_repeat1 = 75,
  aux_sym__double_inline_quote_repeat1 = 76,
  aux_sym_quote_content_repeat1 = 77,
  aux_sym__quoted_atom_repeat1 = 78,
  alias_sym_description = 79,
  alias_sym_email_address = 80,
  alias_sym_quote_marker = 81,
  alias_sym_section_content = 82,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATauthor] = "tag",
  [anon_sym_EQ_EQ] = "section_marker",
  [anon_sym_EQ_EQ_EQ] = "section_marker",
  [anon_sym_EQ_EQ_EQ_EQ] = "section_marker",
  [anon_sym_LBRACE] = "{",
  [aux_sym_macro_token1] = "macro_token1",
  [anon_sym_RBRACE] = "}",
  [sym_tag] = "tag",
  [aux_sym_argument_token1] = "argument_token1",
  [anon_sym_ATlink] = "tag",
  [anon_sym_DOT] = ".",
  [anon_sym_SLASH] = "/",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_arity] = "arity",
  [anon_sym_LTem_GT] = "open_xhtml_tag",
  [anon_sym_LT_SLASHem_GT] = "close_xhtml_tag",
  [anon_sym_LTstrong_GT] = "open_xhtml_tag",
  [anon_sym_LT_SLASHstrong_GT] = "close_xhtml_tag",
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
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [sym_language_identifier] = "language_identifier",
  [aux_sym_quote_content_token1] = "quote_content_token1",
  [sym__terminator] = "_terminator",
  [sym__word] = "_word",
  [sym__unquoted_atom] = "_unquoted_atom",
  [sym__escape_sequence] = "_escape_sequence",
  [sym__quoted_content] = "_quoted_content",
  [sym_source] = "source",
  [sym__line] = "_line",
  [sym__tag_line] = "_tag_line",
  [sym__author_line] = "_author_line",
  [aux_sym__text_line] = "_text_line",
  [sym_section] = "section",
  [sym_macro] = "macro",
  [sym_argument] = "argument",
  [sym__link_macro] = "_link_macro",
  [sym__link_expression] = "expression",
  [sym_module] = "module",
  [sym_function] = "function",
  [sym_type] = "type",
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
  [sym__atom] = "_atom",
  [sym__quoted_atom] = "_quoted_atom",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_source_repeat2] = "source_repeat2",
  [aux_sym__author_line_repeat1] = "_author_line_repeat1",
  [aux_sym_argument_repeat1] = "argument_repeat1",
  [aux_sym_xhtml_tag_repeat1] = "xhtml_tag_repeat1",
  [aux_sym_xhtml_tag_content_repeat1] = "xhtml_tag_content_repeat1",
  [aux_sym__double_inline_quote_repeat1] = "_double_inline_quote_repeat1",
  [aux_sym_quote_content_repeat1] = "quote_content_repeat1",
  [aux_sym__quoted_atom_repeat1] = "_quoted_atom_repeat1",
  [alias_sym_description] = "description",
  [alias_sym_email_address] = "email_address",
  [alias_sym_quote_marker] = "quote_marker",
  [alias_sym_section_content] = "section_content",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATauthor] = sym_tag,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_EQ_EQ_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_macro_token1] = aux_sym_macro_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_tag] = sym_tag,
  [aux_sym_argument_token1] = aux_sym_argument_token1,
  [anon_sym_ATlink] = sym_tag,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_arity] = sym_arity,
  [anon_sym_LTem_GT] = anon_sym_LTem_GT,
  [anon_sym_LT_SLASHem_GT] = anon_sym_LT_SLASHem_GT,
  [anon_sym_LTstrong_GT] = anon_sym_LTem_GT,
  [anon_sym_LT_SLASHstrong_GT] = anon_sym_LT_SLASHem_GT,
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
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [sym_language_identifier] = sym_language_identifier,
  [aux_sym_quote_content_token1] = aux_sym_quote_content_token1,
  [sym__terminator] = sym__terminator,
  [sym__word] = sym__word,
  [sym__unquoted_atom] = sym__unquoted_atom,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym__quoted_content] = sym__quoted_content,
  [sym_source] = sym_source,
  [sym__line] = sym__line,
  [sym__tag_line] = sym__tag_line,
  [sym__author_line] = sym__author_line,
  [aux_sym__text_line] = aux_sym__text_line,
  [sym_section] = sym_section,
  [sym_macro] = sym_macro,
  [sym_argument] = sym_argument,
  [sym__link_macro] = sym__link_macro,
  [sym__link_expression] = sym__link_expression,
  [sym_module] = sym_module,
  [sym_function] = sym_function,
  [sym_type] = sym_type,
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
  [sym__atom] = sym__atom,
  [sym__quoted_atom] = sym__quoted_atom,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_source_repeat2] = aux_sym_source_repeat2,
  [aux_sym__author_line_repeat1] = aux_sym__author_line_repeat1,
  [aux_sym_argument_repeat1] = aux_sym_argument_repeat1,
  [aux_sym_xhtml_tag_repeat1] = aux_sym_xhtml_tag_repeat1,
  [aux_sym_xhtml_tag_content_repeat1] = aux_sym_xhtml_tag_content_repeat1,
  [aux_sym__double_inline_quote_repeat1] = aux_sym__double_inline_quote_repeat1,
  [aux_sym_quote_content_repeat1] = aux_sym_quote_content_repeat1,
  [aux_sym__quoted_atom_repeat1] = aux_sym__quoted_atom_repeat1,
  [alias_sym_description] = alias_sym_description,
  [alias_sym_email_address] = alias_sym_email_address,
  [alias_sym_quote_marker] = alias_sym_quote_marker,
  [alias_sym_section_content] = alias_sym_section_content,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATauthor] = {
    .visible = true,
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
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_argument_token1] = {
    .visible = false,
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
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_arity] = {
    .visible = true,
    .named = true,
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
  [sym__unquoted_atom] = {
    .visible = false,
    .named = true,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_content] = {
    .visible = false,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym__tag_line] = {
    .visible = false,
    .named = true,
  },
  [sym__author_line] = {
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
  [sym_argument] = {
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
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
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
  [sym__atom] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_atom] = {
    .visible = false,
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
  [aux_sym__author_line_repeat1] = {
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
  [aux_sym__quoted_atom_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_description] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_email_address] = {
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

enum {
  field_language = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_language] = "language",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [5] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_language, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_email_address,
  },
  [2] = {
    [2] = alias_sym_email_address,
  },
  [3] = {
    [1] = alias_sym_section_content,
  },
  [4] = {
    [0] = alias_sym_quote_marker,
    [2] = alias_sym_quote_marker,
  },
  [5] = {
    [0] = alias_sym_quote_marker,
    [3] = alias_sym_quote_marker,
  },
  [6] = {
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
  sym_xhtml_tag, 2,
    sym_xhtml_tag,
    alias_sym_email_address,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(59);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '<') ADVANCE(95);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(101);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '`') ADVANCE(106);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '}') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(9);
      if ((224 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(148);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(126);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(138);
      if (lookahead == '@') ADVANCE(145);
      if (lookahead == '`') ADVANCE(106);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(127);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '`') ADVANCE(106);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(128);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == '`') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(146);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(146);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '`') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(146);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '`') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(146);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(121);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(154);
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(156);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(155);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead == '@') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z') ||
          (224 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(148);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(115);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(111);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(120);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(123);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(124);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(116);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(111);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(14);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(138);
      if (lookahead == '@') ADVANCE(145);
      if (lookahead == '`') ADVANCE(106);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(146);
      END_STATE();
    case 20:
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(142);
      if (lookahead == '`') ADVANCE(106);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(146);
      END_STATE();
    case 21:
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(141);
      if (lookahead == '`') ADVANCE(106);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(146);
      END_STATE();
    case 22:
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == '`') ADVANCE(106);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(22)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(146);
      END_STATE();
    case 23:
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '`') ADVANCE(106);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(146);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(101);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(100);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(90);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(91);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(92);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(93);
      END_STATE();
    case 30:
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '}') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 31:
      if (lookahead == '@') ADVANCE(80);
      if (lookahead == '}') ADVANCE(69);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(81);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 32:
      if (lookahead == '^') ADVANCE(153);
      if (lookahead == 'x') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(152);
      if ((' ' <= lookahead && lookahead <= 127)) ADVANCE(149);
      END_STATE();
    case 33:
      if (lookahead == '`') ADVANCE(146);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 50:
      if (lookahead == '{') ADVANCE(33);
      END_STATE();
    case 51:
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) SKIP(51)
      END_STATE();
    case 52:
      if (lookahead == '}') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 55:
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(108);
      END_STATE();
    case 56:
      if (lookahead != 0 &&
          (lookahead < 1 || '\t' < lookahead) &&
          (lookahead < 17 || ' ' < lookahead) &&
          (lookahead < 128 || 160 < lookahead)) ADVANCE(122);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(125);
      END_STATE();
    case 57:
      if (eof) ADVANCE(59);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(138);
      if (lookahead == '@') ADVANCE(145);
      if (lookahead == '`') ADVANCE(106);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(57)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(127);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 58:
      if (eof) ADVANCE(59);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(138);
      if (lookahead == '@') ADVANCE(145);
      if (lookahead == '`') ADVANCE(106);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(58)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(146);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_ATauthor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_macro_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_macro_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'h') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'i') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'k') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'n') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'o') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'r') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 't') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'u') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_tag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '}') ADVANCE(103);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '@') ADVANCE(80);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(79);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_ATlink);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_arity);
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '\r') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_arity);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LTem_GT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LT_SLASHem_GT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LTstrong_GT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LT_SLASHstrong_GT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(47);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_xhtml_tag_token1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_xhtml_tag_token1);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_AT_RBRACE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_quote_escape);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '`') ADVANCE(110);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__inline_quote_token1);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__inline_quote_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
      if (lookahead == '`') ADVANCE(119);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(115);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(111);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(115);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(111);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(15);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(116);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(111);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_language_identifier);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_quote_content_token1);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_quote_content_token1);
      if (lookahead == '\'') ADVANCE(15);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_quote_content_token1);
      if (lookahead == '\'') ADVANCE(123);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(124);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_quote_content_token1);
      if (lookahead != 0 &&
          (lookahead < 1 || '\t' < lookahead) &&
          (lookahead < 17 || ' ' < lookahead) &&
          (lookahead < 128 || 160 < lookahead)) ADVANCE(122);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__terminator);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(138);
      if (lookahead == '@') ADVANCE(145);
      if (lookahead == '`') ADVANCE(106);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(127);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '`') ADVANCE(106);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(128);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == '`') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(146);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(146);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '`') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(146);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '`') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(146);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(138);
      if (lookahead == '@') ADVANCE(145);
      if (lookahead == '`') ADVANCE(106);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(146);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(142);
      if (lookahead == '`') ADVANCE(106);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(146);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(141);
      if (lookahead == '`') ADVANCE(106);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(146);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == '`') ADVANCE(106);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(22)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(146);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '`') ADVANCE(106);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(146);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(146);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(146);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(146);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(146);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '`' || '{' < lookahead)) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__unquoted_atom);
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '-') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead == '@' ||
          (192 <= lookahead && lookahead <= 255)) ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__unquoted_atom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 255)) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (lookahead == '{') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(149);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(151);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__quoted_content);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__quoted_content);
      if (lookahead == '"') ADVANCE(154);
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(156);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(155);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__quoted_content);
      if (lookahead == '^') ADVANCE(153);
      if (lookahead == 'x') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(152);
      if ((' ' <= lookahead && lookahead <= 127)) ADVANCE(149);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__quoted_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(157);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 57},
  [2] = {.lex_state = 57},
  [3] = {.lex_state = 58},
  [4] = {.lex_state = 58},
  [5] = {.lex_state = 58},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 21},
  [13] = {.lex_state = 22},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 57},
  [20] = {.lex_state = 57},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 20},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 22},
  [39] = {.lex_state = 20},
  [40] = {.lex_state = 22},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 20},
  [43] = {.lex_state = 22},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 22},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 22},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 20},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 20},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 20},
  [57] = {.lex_state = 21},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 20},
  [60] = {.lex_state = 20},
  [61] = {.lex_state = 20},
  [62] = {.lex_state = 22},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 20},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 21},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 20},
  [72] = {.lex_state = 20},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 20},
  [76] = {.lex_state = 21},
  [77] = {.lex_state = 21},
  [78] = {.lex_state = 21},
  [79] = {.lex_state = 21},
  [80] = {.lex_state = 21},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 21},
  [83] = {.lex_state = 22},
  [84] = {.lex_state = 21},
  [85] = {.lex_state = 22},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 21},
  [89] = {.lex_state = 22},
  [90] = {.lex_state = 21},
  [91] = {.lex_state = 22},
  [92] = {.lex_state = 22},
  [93] = {.lex_state = 22},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 22},
  [96] = {.lex_state = 22},
  [97] = {.lex_state = 22},
  [98] = {.lex_state = 21},
  [99] = {.lex_state = 21},
  [100] = {.lex_state = 21},
  [101] = {.lex_state = 22},
  [102] = {.lex_state = 21},
  [103] = {.lex_state = 21},
  [104] = {.lex_state = 21},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 11},
  [111] = {.lex_state = 11},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 31},
  [126] = {.lex_state = 31},
  [127] = {.lex_state = 31},
  [128] = {.lex_state = 31},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 31},
  [134] = {.lex_state = 31},
  [135] = {.lex_state = 31},
  [136] = {.lex_state = 31},
  [137] = {.lex_state = 31},
  [138] = {.lex_state = 31},
  [139] = {.lex_state = 11},
  [140] = {.lex_state = 31},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 10},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 13},
  [151] = {.lex_state = 13},
  [152] = {.lex_state = 13},
  [153] = {.lex_state = 56},
  [154] = {.lex_state = 17},
  [155] = {.lex_state = 25},
  [156] = {.lex_state = 25},
  [157] = {.lex_state = 56},
  [158] = {.lex_state = 17},
  [159] = {.lex_state = 56},
  [160] = {.lex_state = 56},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 17},
  [163] = {.lex_state = 16},
  [164] = {.lex_state = 25},
  [165] = {.lex_state = 16},
  [166] = {.lex_state = 25},
  [167] = {.lex_state = 17},
  [168] = {.lex_state = 25},
  [169] = {.lex_state = 17},
  [170] = {.lex_state = 25},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 25},
  [173] = {.lex_state = 25},
  [174] = {.lex_state = 25},
  [175] = {.lex_state = 17},
  [176] = {.lex_state = 13},
  [177] = {.lex_state = 17},
  [178] = {.lex_state = 13},
  [179] = {.lex_state = 25},
  [180] = {.lex_state = 17},
  [181] = {.lex_state = 25},
  [182] = {.lex_state = 25},
  [183] = {.lex_state = 17},
  [184] = {.lex_state = 13},
  [185] = {.lex_state = 13},
  [186] = {.lex_state = 17},
  [187] = {.lex_state = 25},
  [188] = {.lex_state = 17},
  [189] = {.lex_state = 17},
  [190] = {.lex_state = 25},
  [191] = {.lex_state = 17},
  [192] = {.lex_state = 13},
  [193] = {.lex_state = 25},
  [194] = {.lex_state = 51},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 51},
  [197] = {.lex_state = 51},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 11},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 11},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 11},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 11},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 51},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 18},
  [216] = {.lex_state = 18},
  [217] = {.lex_state = 18},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 18},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 18},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 11},
  [237] = {.lex_state = 55},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 55},
  [240] = {.lex_state = 18},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 55},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 55},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 18},
  [252] = {.lex_state = 18},
  [253] = {.lex_state = 11},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 55},
  [259] = {.lex_state = 55},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATauthor] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [anon_sym_ATlink] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_arity] = ACTIONS(1),
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
    [sym__unquoted_atom] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(227),
    [sym__line] = STATE(205),
    [sym__tag_line] = STATE(205),
    [sym__author_line] = STATE(205),
    [aux_sym__text_line] = STATE(14),
    [sym_section] = STATE(205),
    [sym_macro] = STATE(46),
    [sym__link_macro] = STATE(35),
    [sym__xhtml_tag] = STATE(46),
    [sym_em_xhtml_tag] = STATE(46),
    [sym_strong_xhtml_tag] = STATE(46),
    [sym_xhtml_tag] = STATE(46),
    [sym_inline_quote] = STATE(46),
    [sym__inline_quote] = STATE(36),
    [sym__double_inline_quote] = STATE(36),
    [sym__triple_inline_quote] = STATE(36),
    [sym_block_quote] = STATE(46),
    [aux_sym_source_repeat1] = STATE(2),
    [aux_sym_source_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_EQ_EQ] = ACTIONS(7),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(9),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_tag] = ACTIONS(15),
    [anon_sym_LTem_GT] = ACTIONS(17),
    [anon_sym_LTstrong_GT] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(21),
    [sym_quote_escape] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(29),
    [sym__terminator] = ACTIONS(31),
    [sym__word] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(5), 1,
      anon_sym_ATauthor,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(11), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_tag,
    ACTIONS(17), 1,
      anon_sym_LTem_GT,
    ACTIONS(19), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym__terminator,
    STATE(4), 1,
      aux_sym_source_repeat2,
    STATE(14), 1,
      aux_sym__text_line,
    STATE(20), 1,
      aux_sym_source_repeat1,
    STATE(35), 1,
      sym__link_macro,
    ACTIONS(23), 2,
      sym_quote_escape,
      sym__word,
    STATE(36), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(205), 4,
      sym__line,
      sym__tag_line,
      sym__author_line,
      sym_section,
    STATE(46), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [79] = 20,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_ATauthor,
    ACTIONS(42), 1,
      anon_sym_EQ_EQ,
    ACTIONS(45), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(48), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(54), 1,
      sym_tag,
    ACTIONS(57), 1,
      anon_sym_LTem_GT,
    ACTIONS(60), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(63), 1,
      anon_sym_LT,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(72), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(75), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(3), 1,
      aux_sym_source_repeat2,
    STATE(14), 1,
      aux_sym__text_line,
    STATE(35), 1,
      sym__link_macro,
    ACTIONS(66), 2,
      sym_quote_escape,
      sym__word,
    STATE(36), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(205), 4,
      sym__line,
      sym__tag_line,
      sym__author_line,
      sym_section,
    STATE(46), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [152] = 20,
    ACTIONS(5), 1,
      anon_sym_ATauthor,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(11), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_tag,
    ACTIONS(17), 1,
      anon_sym_LTem_GT,
    ACTIONS(19), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_repeat2,
    STATE(14), 1,
      aux_sym__text_line,
    STATE(35), 1,
      sym__link_macro,
    ACTIONS(23), 2,
      sym_quote_escape,
      sym__word,
    STATE(36), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(205), 4,
      sym__line,
      sym__tag_line,
      sym__author_line,
      sym_section,
    STATE(46), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [225] = 20,
    ACTIONS(5), 1,
      anon_sym_ATauthor,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(11), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_tag,
    ACTIONS(17), 1,
      anon_sym_LTem_GT,
    ACTIONS(19), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_repeat2,
    STATE(14), 1,
      aux_sym__text_line,
    STATE(35), 1,
      sym__link_macro,
    ACTIONS(23), 2,
      sym_quote_escape,
      sym__word,
    STATE(36), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(205), 4,
      sym__line,
      sym__tag_line,
      sym__author_line,
      sym_section,
    STATE(46), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [298] = 13,
    ACTIONS(80), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(82), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_LTem_GT,
    ACTIONS(88), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(91), 1,
      anon_sym_LT,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(100), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(103), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(6), 1,
      aux_sym__text_line,
    STATE(72), 1,
      sym__link_macro,
    ACTIONS(94), 2,
      sym_quote_escape,
      sym__word,
    STATE(71), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(75), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [347] = 13,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LTem_GT,
    ACTIONS(19), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(106), 1,
      sym__terminator,
    STATE(15), 1,
      aux_sym__text_line,
    STATE(35), 1,
      sym__link_macro,
    ACTIONS(23), 2,
      sym_quote_escape,
      sym__word,
    STATE(36), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(46), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [396] = 13,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LTem_GT,
    ACTIONS(19), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(108), 1,
      sym__terminator,
    STATE(7), 1,
      aux_sym__text_line,
    STATE(35), 1,
      sym__link_macro,
    ACTIONS(23), 2,
      sym_quote_escape,
      sym__word,
    STATE(36), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(46), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [445] = 13,
    ACTIONS(80), 1,
      anon_sym_EQ_EQ,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      anon_sym_LTem_GT,
    ACTIONS(116), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(119), 1,
      anon_sym_LT,
    ACTIONS(125), 1,
      anon_sym_BQUOTE,
    ACTIONS(128), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(131), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(9), 1,
      aux_sym__text_line,
    STATE(99), 1,
      sym__link_macro,
    ACTIONS(122), 2,
      sym_quote_escape,
      sym__word,
    STATE(100), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(98), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [494] = 13,
    ACTIONS(134), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      anon_sym_LTem_GT,
    ACTIONS(140), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(142), 1,
      anon_sym_LT,
    ACTIONS(146), 1,
      anon_sym_BQUOTE,
    ACTIONS(148), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(150), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(13), 1,
      aux_sym__text_line,
    STATE(45), 1,
      sym__link_macro,
    ACTIONS(144), 2,
      sym_quote_escape,
      sym__word,
    STATE(43), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(48), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [543] = 13,
    ACTIONS(134), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
    ACTIONS(154), 1,
      anon_sym_LTem_GT,
    ACTIONS(156), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(158), 1,
      anon_sym_LT,
    ACTIONS(162), 1,
      anon_sym_BQUOTE,
    ACTIONS(164), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(166), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(6), 1,
      aux_sym__text_line,
    STATE(72), 1,
      sym__link_macro,
    ACTIONS(160), 2,
      sym_quote_escape,
      sym__word,
    STATE(71), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(75), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [592] = 13,
    ACTIONS(134), 1,
      anon_sym_EQ_EQ,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(170), 1,
      anon_sym_LTem_GT,
    ACTIONS(172), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(174), 1,
      anon_sym_LT,
    ACTIONS(178), 1,
      anon_sym_BQUOTE,
    ACTIONS(180), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(182), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(9), 1,
      aux_sym__text_line,
    STATE(99), 1,
      sym__link_macro,
    ACTIONS(176), 2,
      sym_quote_escape,
      sym__word,
    STATE(100), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(98), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [641] = 13,
    ACTIONS(80), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_LTem_GT,
    ACTIONS(190), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(193), 1,
      anon_sym_LT,
    ACTIONS(199), 1,
      anon_sym_BQUOTE,
    ACTIONS(202), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(205), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(13), 1,
      aux_sym__text_line,
    STATE(45), 1,
      sym__link_macro,
    ACTIONS(196), 2,
      sym_quote_escape,
      sym__word,
    STATE(43), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(48), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [690] = 13,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LTem_GT,
    ACTIONS(19), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(208), 1,
      sym__terminator,
    STATE(15), 1,
      aux_sym__text_line,
    STATE(35), 1,
      sym__link_macro,
    ACTIONS(23), 2,
      sym_quote_escape,
      sym__word,
    STATE(36), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(46), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [739] = 13,
    ACTIONS(80), 1,
      sym__terminator,
    ACTIONS(210), 1,
      anon_sym_LBRACE,
    ACTIONS(213), 1,
      anon_sym_LTem_GT,
    ACTIONS(216), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(219), 1,
      anon_sym_LT,
    ACTIONS(225), 1,
      anon_sym_BQUOTE,
    ACTIONS(228), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(231), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(15), 1,
      aux_sym__text_line,
    STATE(35), 1,
      sym__link_macro,
    ACTIONS(222), 2,
      sym_quote_escape,
      sym__word,
    STATE(36), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(46), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [788] = 12,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(170), 1,
      anon_sym_LTem_GT,
    ACTIONS(172), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(174), 1,
      anon_sym_LT,
    ACTIONS(178), 1,
      anon_sym_BQUOTE,
    ACTIONS(180), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(182), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(12), 1,
      aux_sym__text_line,
    STATE(99), 1,
      sym__link_macro,
    ACTIONS(176), 2,
      sym_quote_escape,
      sym__word,
    STATE(100), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(98), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [834] = 12,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
    ACTIONS(154), 1,
      anon_sym_LTem_GT,
    ACTIONS(156), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(158), 1,
      anon_sym_LT,
    ACTIONS(162), 1,
      anon_sym_BQUOTE,
    ACTIONS(164), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(166), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(11), 1,
      aux_sym__text_line,
    STATE(72), 1,
      sym__link_macro,
    ACTIONS(160), 2,
      sym_quote_escape,
      sym__word,
    STATE(71), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(75), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [880] = 12,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      anon_sym_LTem_GT,
    ACTIONS(140), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(142), 1,
      anon_sym_LT,
    ACTIONS(146), 1,
      anon_sym_BQUOTE,
    ACTIONS(148), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(150), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(10), 1,
      aux_sym__text_line,
    STATE(45), 1,
      sym__link_macro,
    ACTIONS(144), 2,
      sym_quote_escape,
      sym__word,
    STATE(43), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(48), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [926] = 4,
    ACTIONS(35), 1,
      sym__terminator,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      aux_sym_source_repeat1,
    ACTIONS(234), 14,
      anon_sym_ATauthor,
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
  [952] = 4,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    ACTIONS(240), 1,
      sym__terminator,
    STATE(20), 1,
      aux_sym_source_repeat1,
    ACTIONS(238), 14,
      anon_sym_ATauthor,
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
  [978] = 8,
    ACTIONS(243), 1,
      anon_sym_LT,
    ACTIONS(247), 1,
      anon_sym_BQUOTE,
    ACTIONS(249), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(251), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(212), 1,
      sym_xhtml_tag_content,
    ACTIONS(245), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(22), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(120), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1009] = 8,
    ACTIONS(243), 1,
      anon_sym_LT,
    ACTIONS(247), 1,
      anon_sym_BQUOTE,
    ACTIONS(249), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(251), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(253), 1,
      anon_sym_LT_SLASHstrong_GT,
    ACTIONS(255), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(28), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(120), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1040] = 8,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(265), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(224), 1,
      sym_xhtml_tag_content,
    ACTIONS(259), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(32), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(107), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1071] = 8,
    ACTIONS(243), 1,
      anon_sym_LT,
    ACTIONS(247), 1,
      anon_sym_BQUOTE,
    ACTIONS(249), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(251), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(222), 1,
      sym_xhtml_tag_content,
    ACTIONS(245), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(22), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(120), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1102] = 8,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(265), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(228), 1,
      sym_xhtml_tag_content,
    ACTIONS(259), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(32), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(107), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1133] = 8,
    ACTIONS(243), 1,
      anon_sym_LT,
    ACTIONS(247), 1,
      anon_sym_BQUOTE,
    ACTIONS(249), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(251), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(257), 1,
      sym_xhtml_tag_content,
    ACTIONS(245), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(22), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(120), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1164] = 8,
    ACTIONS(243), 1,
      anon_sym_LT,
    ACTIONS(247), 1,
      anon_sym_BQUOTE,
    ACTIONS(249), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(251), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(249), 1,
      sym_xhtml_tag_content,
    ACTIONS(245), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(22), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(120), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1195] = 8,
    ACTIONS(267), 1,
      anon_sym_LT_SLASHstrong_GT,
    ACTIONS(269), 1,
      anon_sym_LT,
    ACTIONS(275), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(281), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(272), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(28), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(120), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1226] = 8,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(265), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(248), 1,
      sym_xhtml_tag_content,
    ACTIONS(259), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(32), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(107), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1257] = 8,
    ACTIONS(267), 1,
      anon_sym_LT_SLASHem_GT,
    ACTIONS(284), 1,
      anon_sym_LT,
    ACTIONS(290), 1,
      anon_sym_BQUOTE,
    ACTIONS(293), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(296), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(287), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(30), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(107), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1288] = 8,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(265), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(235), 1,
      sym_xhtml_tag_content,
    ACTIONS(259), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(32), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(107), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1319] = 8,
    ACTIONS(253), 1,
      anon_sym_LT_SLASHem_GT,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(261), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(265), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(299), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(30), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(107), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1350] = 1,
    ACTIONS(301), 10,
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
  [1363] = 1,
    ACTIONS(303), 10,
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
  [1376] = 1,
    ACTIONS(305), 10,
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
  [1389] = 1,
    ACTIONS(307), 10,
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
  [1402] = 1,
    ACTIONS(309), 10,
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
  [1415] = 1,
    ACTIONS(311), 10,
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
  [1428] = 1,
    ACTIONS(313), 10,
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
  [1441] = 1,
    ACTIONS(315), 10,
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
  [1454] = 1,
    ACTIONS(317), 10,
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
  [1467] = 1,
    ACTIONS(303), 10,
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
  [1480] = 1,
    ACTIONS(307), 10,
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
  [1493] = 1,
    ACTIONS(303), 10,
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
  [1506] = 1,
    ACTIONS(305), 10,
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
  [1519] = 1,
    ACTIONS(319), 10,
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
  [1532] = 1,
    ACTIONS(317), 10,
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
  [1545] = 1,
    ACTIONS(319), 10,
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
  [1558] = 1,
    ACTIONS(315), 10,
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
  [1571] = 1,
    ACTIONS(321), 10,
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
  [1584] = 1,
    ACTIONS(323), 10,
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
  [1597] = 1,
    ACTIONS(325), 10,
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
  [1610] = 1,
    ACTIONS(327), 10,
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
  [1623] = 1,
    ACTIONS(329), 10,
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
  [1636] = 1,
    ACTIONS(331), 10,
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
  [1649] = 1,
    ACTIONS(333), 10,
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
  [1662] = 1,
    ACTIONS(313), 10,
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
  [1675] = 1,
    ACTIONS(311), 10,
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
  [1688] = 1,
    ACTIONS(335), 10,
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
  [1701] = 1,
    ACTIONS(309), 10,
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
  [1714] = 1,
    ACTIONS(311), 10,
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
  [1727] = 1,
    ACTIONS(335), 10,
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
  [1740] = 1,
    ACTIONS(315), 10,
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
  [1753] = 1,
    ACTIONS(317), 10,
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
  [1766] = 1,
    ACTIONS(309), 10,
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
  [1779] = 1,
    ACTIONS(335), 10,
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
  [1792] = 1,
    ACTIONS(313), 10,
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
  [1805] = 1,
    ACTIONS(309), 10,
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
  [1818] = 1,
    ACTIONS(333), 10,
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
  [1831] = 1,
    ACTIONS(301), 10,
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
  [1844] = 1,
    ACTIONS(307), 10,
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
  [1857] = 1,
    ACTIONS(305), 10,
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
  [1870] = 1,
    ACTIONS(331), 10,
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
  [1883] = 1,
    ACTIONS(329), 10,
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
  [1896] = 1,
    ACTIONS(319), 10,
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
  [1909] = 1,
    ACTIONS(321), 10,
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
  [1922] = 1,
    ACTIONS(323), 10,
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
  [1935] = 1,
    ACTIONS(325), 10,
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
  [1948] = 1,
    ACTIONS(327), 10,
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
  [1961] = 1,
    ACTIONS(329), 10,
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
  [1974] = 1,
    ACTIONS(327), 10,
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
  [1987] = 1,
    ACTIONS(331), 10,
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
  [2000] = 1,
    ACTIONS(333), 10,
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
  [2013] = 1,
    ACTIONS(301), 10,
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
  [2026] = 1,
    ACTIONS(313), 10,
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
  [2039] = 1,
    ACTIONS(325), 10,
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
  [2052] = 1,
    ACTIONS(323), 10,
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
  [2065] = 1,
    ACTIONS(333), 10,
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
  [2078] = 1,
    ACTIONS(301), 10,
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
  [2091] = 1,
    ACTIONS(335), 10,
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
  [2104] = 1,
    ACTIONS(303), 10,
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
  [2117] = 1,
    ACTIONS(321), 10,
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
  [2130] = 1,
    ACTIONS(323), 10,
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
  [2143] = 1,
    ACTIONS(321), 10,
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
  [2156] = 1,
    ACTIONS(325), 10,
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
  [2169] = 1,
    ACTIONS(327), 10,
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
  [2182] = 1,
    ACTIONS(329), 10,
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
  [2195] = 1,
    ACTIONS(319), 10,
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
  [2208] = 1,
    ACTIONS(305), 10,
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
  [2221] = 1,
    ACTIONS(307), 10,
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
  [2234] = 1,
    ACTIONS(331), 10,
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
  [2247] = 1,
    ACTIONS(317), 10,
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
  [2260] = 1,
    ACTIONS(315), 10,
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
  [2273] = 1,
    ACTIONS(311), 10,
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
  [2286] = 1,
    ACTIONS(333), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2297] = 7,
    ACTIONS(337), 1,
      anon_sym_SQUOTE,
    ACTIONS(339), 1,
      sym__unquoted_atom,
    STATE(171), 1,
      sym_module,
    STATE(209), 1,
      sym__link_expression,
    STATE(230), 1,
      sym_function,
    STATE(232), 1,
      sym_type,
    STATE(143), 2,
      sym__atom,
      sym__quoted_atom,
  [2320] = 1,
    ACTIONS(307), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2331] = 7,
    ACTIONS(337), 1,
      anon_sym_SQUOTE,
    ACTIONS(339), 1,
      sym__unquoted_atom,
    STATE(171), 1,
      sym_module,
    STATE(207), 1,
      sym__link_expression,
    STATE(230), 1,
      sym_function,
    STATE(232), 1,
      sym_type,
    STATE(143), 2,
      sym__atom,
      sym__quoted_atom,
  [2354] = 1,
    ACTIONS(315), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2365] = 7,
    ACTIONS(337), 1,
      anon_sym_SQUOTE,
    ACTIONS(339), 1,
      sym__unquoted_atom,
    STATE(171), 1,
      sym_module,
    STATE(195), 1,
      sym__link_expression,
    STATE(230), 1,
      sym_function,
    STATE(232), 1,
      sym_type,
    STATE(143), 2,
      sym__atom,
      sym__quoted_atom,
  [2388] = 7,
    ACTIONS(337), 1,
      anon_sym_SQUOTE,
    ACTIONS(339), 1,
      sym__unquoted_atom,
    STATE(171), 1,
      sym_module,
    STATE(201), 1,
      sym__link_expression,
    STATE(230), 1,
      sym_function,
    STATE(232), 1,
      sym_type,
    STATE(143), 2,
      sym__atom,
      sym__quoted_atom,
  [2411] = 1,
    ACTIONS(333), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2422] = 1,
    ACTIONS(317), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2433] = 1,
    ACTIONS(313), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2444] = 1,
    ACTIONS(301), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2455] = 1,
    ACTIONS(303), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2466] = 1,
    ACTIONS(329), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2477] = 1,
    ACTIONS(329), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2488] = 1,
    ACTIONS(301), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2499] = 1,
    ACTIONS(307), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2510] = 1,
    ACTIONS(303), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2521] = 1,
    ACTIONS(317), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2532] = 1,
    ACTIONS(315), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2543] = 1,
    ACTIONS(313), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2554] = 4,
    ACTIONS(341), 1,
      aux_sym_argument_token1,
    STATE(250), 1,
      sym_argument,
    STATE(126), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(343), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2570] = 4,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    ACTIONS(347), 1,
      aux_sym_argument_token1,
    STATE(135), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(343), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2586] = 4,
    ACTIONS(341), 1,
      aux_sym_argument_token1,
    STATE(211), 1,
      sym_argument,
    STATE(126), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(343), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2602] = 4,
    ACTIONS(341), 1,
      aux_sym_argument_token1,
    STATE(241), 1,
      sym_argument,
    STATE(126), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(343), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2618] = 7,
    ACTIONS(349), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(351), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(353), 1,
      sym_language_identifier,
    ACTIONS(355), 1,
      aux_sym_quote_content_token1,
    STATE(163), 1,
      aux_sym_quote_content_repeat1,
    STATE(185), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(220), 1,
      sym_quote_content,
  [2640] = 7,
    ACTIONS(355), 1,
      aux_sym_quote_content_token1,
    ACTIONS(357), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(359), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(361), 1,
      sym_language_identifier,
    STATE(151), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(163), 1,
      aux_sym_quote_content_repeat1,
    STATE(252), 1,
      sym_quote_content,
  [2662] = 7,
    ACTIONS(355), 1,
      aux_sym_quote_content_token1,
    ACTIONS(363), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(365), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(367), 1,
      sym_language_identifier,
    STATE(163), 1,
      aux_sym_quote_content_repeat1,
    STATE(184), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(216), 1,
      sym_quote_content,
  [2684] = 7,
    ACTIONS(355), 1,
      aux_sym_quote_content_token1,
    ACTIONS(369), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(371), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(373), 1,
      sym_language_identifier,
    STATE(161), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(163), 1,
      aux_sym_quote_content_repeat1,
    STATE(240), 1,
      sym_quote_content,
  [2706] = 4,
    ACTIONS(341), 1,
      aux_sym_argument_token1,
    STATE(213), 1,
      sym_argument,
    STATE(126), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(343), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2722] = 4,
    ACTIONS(341), 1,
      aux_sym_argument_token1,
    STATE(226), 1,
      sym_argument,
    STATE(126), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(343), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2738] = 4,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    ACTIONS(377), 1,
      aux_sym_argument_token1,
    STATE(135), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(380), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2754] = 4,
    ACTIONS(341), 1,
      aux_sym_argument_token1,
    STATE(254), 1,
      sym_argument,
    STATE(126), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(343), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2770] = 4,
    ACTIONS(341), 1,
      aux_sym_argument_token1,
    STATE(219), 1,
      sym_argument,
    STATE(126), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(343), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2786] = 4,
    ACTIONS(341), 1,
      aux_sym_argument_token1,
    STATE(218), 1,
      sym_argument,
    STATE(126), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(343), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2802] = 5,
    ACTIONS(337), 1,
      anon_sym_SQUOTE,
    ACTIONS(383), 1,
      sym__unquoted_atom,
    STATE(244), 1,
      sym_function,
    STATE(247), 1,
      sym_type,
    STATE(203), 2,
      sym__atom,
      sym__quoted_atom,
  [2819] = 1,
    ACTIONS(385), 5,
      anon_sym_RBRACE,
      aux_sym_argument_token1,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2827] = 1,
    ACTIONS(387), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [2835] = 5,
    ACTIONS(389), 1,
      anon_sym_LT,
    ACTIONS(391), 1,
      sym__terminator,
    ACTIONS(393), 1,
      sym__word,
    STATE(145), 1,
      aux_sym__author_line_repeat1,
    STATE(231), 1,
      sym_xhtml_tag,
  [2851] = 3,
    ACTIONS(397), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COLON,
  [2863] = 1,
    ACTIONS(401), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [2871] = 5,
    ACTIONS(389), 1,
      anon_sym_LT,
    ACTIONS(403), 1,
      sym__terminator,
    ACTIONS(405), 1,
      sym__word,
    STATE(148), 1,
      aux_sym__author_line_repeat1,
    STATE(234), 1,
      sym_xhtml_tag,
  [2887] = 3,
    ACTIONS(407), 1,
      anon_sym_SQUOTE,
    STATE(146), 1,
      aux_sym__quoted_atom_repeat1,
    ACTIONS(409), 2,
      sym__escape_sequence,
      sym__quoted_content,
  [2898] = 3,
    ACTIONS(412), 1,
      anon_sym_SQUOTE,
    STATE(146), 1,
      aux_sym__quoted_atom_repeat1,
    ACTIONS(414), 2,
      sym__escape_sequence,
      sym__quoted_content,
  [2909] = 3,
    ACTIONS(418), 1,
      sym__word,
    STATE(148), 1,
      aux_sym__author_line_repeat1,
    ACTIONS(416), 2,
      anon_sym_LT,
      sym__terminator,
  [2920] = 3,
    ACTIONS(421), 1,
      anon_sym_SQUOTE,
    STATE(147), 1,
      aux_sym__quoted_atom_repeat1,
    ACTIONS(423), 2,
      sym__escape_sequence,
      sym__quoted_content,
  [2931] = 3,
    ACTIONS(425), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(427), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(192), 1,
      aux_sym__double_inline_quote_repeat1,
  [2941] = 3,
    ACTIONS(425), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(429), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(192), 1,
      aux_sym__double_inline_quote_repeat1,
  [2951] = 3,
    ACTIONS(431), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(433), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(176), 1,
      aux_sym__double_inline_quote_repeat1,
  [2961] = 3,
    ACTIONS(435), 1,
      aux_sym_quote_content_token1,
    STATE(163), 1,
      aux_sym_quote_content_repeat1,
    STATE(217), 1,
      sym_quote_content,
  [2971] = 3,
    ACTIONS(437), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(439), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(186), 1,
      aux_sym__double_inline_quote_repeat1,
  [2981] = 3,
    ACTIONS(441), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(443), 1,
      anon_sym_GT,
    STATE(156), 1,
      aux_sym_xhtml_tag_repeat1,
  [2991] = 3,
    ACTIONS(445), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(447), 1,
      anon_sym_GT,
    STATE(168), 1,
      aux_sym_xhtml_tag_repeat1,
  [3001] = 3,
    ACTIONS(435), 1,
      aux_sym_quote_content_token1,
    STATE(163), 1,
      aux_sym_quote_content_repeat1,
    STATE(251), 1,
      sym_quote_content,
  [3011] = 3,
    ACTIONS(449), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(451), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(167), 1,
      aux_sym__double_inline_quote_repeat1,
  [3021] = 3,
    ACTIONS(435), 1,
      aux_sym_quote_content_token1,
    STATE(163), 1,
      aux_sym_quote_content_repeat1,
    STATE(233), 1,
      sym_quote_content,
  [3031] = 3,
    ACTIONS(435), 1,
      aux_sym_quote_content_token1,
    STATE(163), 1,
      aux_sym_quote_content_repeat1,
    STATE(215), 1,
      sym_quote_content,
  [3041] = 3,
    ACTIONS(425), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(453), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(192), 1,
      aux_sym__double_inline_quote_repeat1,
  [3051] = 3,
    ACTIONS(455), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(457), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(158), 1,
      aux_sym__double_inline_quote_repeat1,
  [3061] = 3,
    ACTIONS(459), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(461), 1,
      aux_sym_quote_content_token1,
    STATE(165), 1,
      aux_sym_quote_content_repeat1,
  [3071] = 3,
    ACTIONS(445), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(463), 1,
      anon_sym_GT,
    STATE(168), 1,
      aux_sym_xhtml_tag_repeat1,
  [3081] = 3,
    ACTIONS(465), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(467), 1,
      aux_sym_quote_content_token1,
    STATE(165), 1,
      aux_sym_quote_content_repeat1,
  [3091] = 3,
    ACTIONS(470), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(472), 1,
      anon_sym_GT,
    STATE(164), 1,
      aux_sym_xhtml_tag_repeat1,
  [3101] = 3,
    ACTIONS(474), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(477), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(167), 1,
      aux_sym__double_inline_quote_repeat1,
  [3111] = 3,
    ACTIONS(479), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(482), 1,
      anon_sym_GT,
    STATE(168), 1,
      aux_sym_xhtml_tag_repeat1,
  [3121] = 3,
    ACTIONS(449), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(484), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(167), 1,
      aux_sym__double_inline_quote_repeat1,
  [3131] = 3,
    ACTIONS(445), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(486), 1,
      anon_sym_GT,
    STATE(168), 1,
      aux_sym_xhtml_tag_repeat1,
  [3141] = 2,
    ACTIONS(490), 1,
      anon_sym_COLON,
    ACTIONS(488), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [3149] = 3,
    ACTIONS(492), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(494), 1,
      anon_sym_GT,
    STATE(187), 1,
      aux_sym_xhtml_tag_repeat1,
  [3159] = 3,
    ACTIONS(496), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(498), 1,
      anon_sym_GT,
    STATE(170), 1,
      aux_sym_xhtml_tag_repeat1,
  [3169] = 3,
    ACTIONS(500), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(502), 1,
      anon_sym_GT,
    STATE(181), 1,
      aux_sym_xhtml_tag_repeat1,
  [3179] = 3,
    ACTIONS(504), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(506), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(183), 1,
      aux_sym__double_inline_quote_repeat1,
  [3189] = 3,
    ACTIONS(425), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(508), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(192), 1,
      aux_sym__double_inline_quote_repeat1,
  [3199] = 3,
    ACTIONS(449), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(510), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(167), 1,
      aux_sym__double_inline_quote_repeat1,
  [3209] = 3,
    ACTIONS(512), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(514), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(150), 1,
      aux_sym__double_inline_quote_repeat1,
  [3219] = 3,
    ACTIONS(445), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(516), 1,
      anon_sym_GT,
    STATE(168), 1,
      aux_sym_xhtml_tag_repeat1,
  [3229] = 3,
    ACTIONS(518), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(520), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(177), 1,
      aux_sym__double_inline_quote_repeat1,
  [3239] = 3,
    ACTIONS(445), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(522), 1,
      anon_sym_GT,
    STATE(168), 1,
      aux_sym_xhtml_tag_repeat1,
  [3249] = 3,
    ACTIONS(524), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(526), 1,
      anon_sym_GT,
    STATE(179), 1,
      aux_sym_xhtml_tag_repeat1,
  [3259] = 3,
    ACTIONS(449), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(528), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(167), 1,
      aux_sym__double_inline_quote_repeat1,
  [3269] = 3,
    ACTIONS(425), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(530), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(192), 1,
      aux_sym__double_inline_quote_repeat1,
  [3279] = 3,
    ACTIONS(425), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(532), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(192), 1,
      aux_sym__double_inline_quote_repeat1,
  [3289] = 3,
    ACTIONS(449), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(534), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(167), 1,
      aux_sym__double_inline_quote_repeat1,
  [3299] = 3,
    ACTIONS(445), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(536), 1,
      anon_sym_GT,
    STATE(168), 1,
      aux_sym_xhtml_tag_repeat1,
  [3309] = 3,
    ACTIONS(538), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(540), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(169), 1,
      aux_sym__double_inline_quote_repeat1,
  [3319] = 3,
    ACTIONS(449), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(542), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(167), 1,
      aux_sym__double_inline_quote_repeat1,
  [3329] = 3,
    ACTIONS(544), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(546), 1,
      anon_sym_GT,
    STATE(193), 1,
      aux_sym_xhtml_tag_repeat1,
  [3339] = 3,
    ACTIONS(548), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(550), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(189), 1,
      aux_sym__double_inline_quote_repeat1,
  [3349] = 3,
    ACTIONS(477), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(552), 1,
      aux_sym__double_inline_quote_token1,
    STATE(192), 1,
      aux_sym__double_inline_quote_repeat1,
  [3359] = 3,
    ACTIONS(445), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(555), 1,
      anon_sym_GT,
    STATE(168), 1,
      aux_sym_xhtml_tag_repeat1,
  [3369] = 2,
    ACTIONS(557), 1,
      aux_sym_macro_token1,
    ACTIONS(559), 1,
      anon_sym_RBRACE,
  [3376] = 2,
    ACTIONS(561), 1,
      anon_sym_RBRACE,
    ACTIONS(563), 1,
      anon_sym_DOT,
  [3383] = 2,
    ACTIONS(565), 1,
      aux_sym_macro_token1,
    ACTIONS(567), 1,
      anon_sym_RBRACE,
  [3390] = 2,
    ACTIONS(569), 1,
      aux_sym_macro_token1,
    ACTIONS(571), 1,
      anon_sym_RBRACE,
  [3397] = 1,
    ACTIONS(573), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [3402] = 2,
    ACTIONS(575), 1,
      sym_tag,
    ACTIONS(577), 1,
      anon_sym_ATlink,
  [3409] = 1,
    ACTIONS(579), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [3414] = 2,
    ACTIONS(581), 1,
      anon_sym_RBRACE,
    ACTIONS(583), 1,
      anon_sym_DOT,
  [3421] = 2,
    ACTIONS(585), 1,
      sym_tag,
    ACTIONS(587), 1,
      anon_sym_ATlink,
  [3428] = 2,
    ACTIONS(397), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
  [3435] = 2,
    ACTIONS(589), 1,
      sym_tag,
    ACTIONS(591), 1,
      anon_sym_ATlink,
  [3442] = 2,
    ACTIONS(593), 1,
      sym__terminator,
    STATE(19), 1,
      aux_sym_source_repeat1,
  [3449] = 2,
    ACTIONS(595), 1,
      sym_tag,
    ACTIONS(597), 1,
      anon_sym_ATlink,
  [3456] = 2,
    ACTIONS(599), 1,
      anon_sym_RBRACE,
    ACTIONS(601), 1,
      anon_sym_DOT,
  [3463] = 2,
    ACTIONS(603), 1,
      aux_sym_macro_token1,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
  [3470] = 2,
    ACTIONS(607), 1,
      anon_sym_RBRACE,
    ACTIONS(609), 1,
      anon_sym_DOT,
  [3477] = 1,
    ACTIONS(611), 1,
      sym__terminator,
  [3481] = 1,
    ACTIONS(613), 1,
      anon_sym_RBRACE,
  [3485] = 1,
    ACTIONS(615), 1,
      anon_sym_LT_SLASHstrong_GT,
  [3489] = 1,
    ACTIONS(617), 1,
      anon_sym_RBRACE,
  [3493] = 1,
    ACTIONS(619), 1,
      anon_sym_SQUOTE,
  [3497] = 1,
    ACTIONS(621), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3501] = 1,
    ACTIONS(623), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3505] = 1,
    ACTIONS(625), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3509] = 1,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
  [3513] = 1,
    ACTIONS(629), 1,
      anon_sym_RBRACE,
  [3517] = 1,
    ACTIONS(631), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3521] = 1,
    ACTIONS(633), 1,
      anon_sym_SQUOTE,
  [3525] = 1,
    ACTIONS(635), 1,
      anon_sym_LT_SLASHstrong_GT,
  [3529] = 1,
    ACTIONS(637), 1,
      anon_sym_SQUOTE,
  [3533] = 1,
    ACTIONS(639), 1,
      anon_sym_LT_SLASHem_GT,
  [3537] = 1,
    ACTIONS(641), 1,
      sym__terminator,
  [3541] = 1,
    ACTIONS(643), 1,
      anon_sym_RBRACE,
  [3545] = 1,
    ACTIONS(645), 1,
      ts_builtin_sym_end,
  [3549] = 1,
    ACTIONS(647), 1,
      anon_sym_LT_SLASHem_GT,
  [3553] = 1,
    ACTIONS(649), 1,
      anon_sym_SQUOTE,
  [3557] = 1,
    ACTIONS(651), 1,
      anon_sym_SLASH,
  [3561] = 1,
    ACTIONS(653), 1,
      sym__terminator,
  [3565] = 1,
    ACTIONS(655), 1,
      anon_sym_LPAREN,
  [3569] = 1,
    ACTIONS(657), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3573] = 1,
    ACTIONS(659), 1,
      sym__terminator,
  [3577] = 1,
    ACTIONS(661), 1,
      anon_sym_LT_SLASHem_GT,
  [3581] = 1,
    ACTIONS(663), 1,
      sym_arity,
  [3585] = 1,
    ACTIONS(665), 1,
      aux_sym__inline_quote_token1,
  [3589] = 1,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
  [3593] = 1,
    ACTIONS(667), 1,
      aux_sym__inline_quote_token1,
  [3597] = 1,
    ACTIONS(669), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3601] = 1,
    ACTIONS(671), 1,
      anon_sym_RBRACE,
  [3605] = 1,
    ACTIONS(673), 1,
      sym__terminator,
  [3609] = 1,
    ACTIONS(675), 1,
      aux_sym__inline_quote_token1,
  [3613] = 1,
    ACTIONS(677), 1,
      anon_sym_SLASH,
  [3617] = 1,
    ACTIONS(679), 1,
      aux_sym__inline_quote_token1,
  [3621] = 1,
    ACTIONS(681), 1,
      anon_sym_SQUOTE,
  [3625] = 1,
    ACTIONS(683), 1,
      anon_sym_LPAREN,
  [3629] = 1,
    ACTIONS(685), 1,
      anon_sym_LT_SLASHem_GT,
  [3633] = 1,
    ACTIONS(687), 1,
      anon_sym_LT_SLASHstrong_GT,
  [3637] = 1,
    ACTIONS(689), 1,
      anon_sym_RBRACE,
  [3641] = 1,
    ACTIONS(691), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3645] = 1,
    ACTIONS(693), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3649] = 1,
    ACTIONS(695), 1,
      sym_arity,
  [3653] = 1,
    ACTIONS(697), 1,
      anon_sym_RBRACE,
  [3657] = 1,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
  [3661] = 1,
    ACTIONS(699), 1,
      anon_sym_SQUOTE,
  [3665] = 1,
    ACTIONS(701), 1,
      anon_sym_LT_SLASHstrong_GT,
  [3669] = 1,
    ACTIONS(703), 1,
      aux_sym__inline_quote_token1,
  [3673] = 1,
    ACTIONS(705), 1,
      aux_sym__inline_quote_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 79,
  [SMALL_STATE(4)] = 152,
  [SMALL_STATE(5)] = 225,
  [SMALL_STATE(6)] = 298,
  [SMALL_STATE(7)] = 347,
  [SMALL_STATE(8)] = 396,
  [SMALL_STATE(9)] = 445,
  [SMALL_STATE(10)] = 494,
  [SMALL_STATE(11)] = 543,
  [SMALL_STATE(12)] = 592,
  [SMALL_STATE(13)] = 641,
  [SMALL_STATE(14)] = 690,
  [SMALL_STATE(15)] = 739,
  [SMALL_STATE(16)] = 788,
  [SMALL_STATE(17)] = 834,
  [SMALL_STATE(18)] = 880,
  [SMALL_STATE(19)] = 926,
  [SMALL_STATE(20)] = 952,
  [SMALL_STATE(21)] = 978,
  [SMALL_STATE(22)] = 1009,
  [SMALL_STATE(23)] = 1040,
  [SMALL_STATE(24)] = 1071,
  [SMALL_STATE(25)] = 1102,
  [SMALL_STATE(26)] = 1133,
  [SMALL_STATE(27)] = 1164,
  [SMALL_STATE(28)] = 1195,
  [SMALL_STATE(29)] = 1226,
  [SMALL_STATE(30)] = 1257,
  [SMALL_STATE(31)] = 1288,
  [SMALL_STATE(32)] = 1319,
  [SMALL_STATE(33)] = 1350,
  [SMALL_STATE(34)] = 1363,
  [SMALL_STATE(35)] = 1376,
  [SMALL_STATE(36)] = 1389,
  [SMALL_STATE(37)] = 1402,
  [SMALL_STATE(38)] = 1415,
  [SMALL_STATE(39)] = 1428,
  [SMALL_STATE(40)] = 1441,
  [SMALL_STATE(41)] = 1454,
  [SMALL_STATE(42)] = 1467,
  [SMALL_STATE(43)] = 1480,
  [SMALL_STATE(44)] = 1493,
  [SMALL_STATE(45)] = 1506,
  [SMALL_STATE(46)] = 1519,
  [SMALL_STATE(47)] = 1532,
  [SMALL_STATE(48)] = 1545,
  [SMALL_STATE(49)] = 1558,
  [SMALL_STATE(50)] = 1571,
  [SMALL_STATE(51)] = 1584,
  [SMALL_STATE(52)] = 1597,
  [SMALL_STATE(53)] = 1610,
  [SMALL_STATE(54)] = 1623,
  [SMALL_STATE(55)] = 1636,
  [SMALL_STATE(56)] = 1649,
  [SMALL_STATE(57)] = 1662,
  [SMALL_STATE(58)] = 1675,
  [SMALL_STATE(59)] = 1688,
  [SMALL_STATE(60)] = 1701,
  [SMALL_STATE(61)] = 1714,
  [SMALL_STATE(62)] = 1727,
  [SMALL_STATE(63)] = 1740,
  [SMALL_STATE(64)] = 1753,
  [SMALL_STATE(65)] = 1766,
  [SMALL_STATE(66)] = 1779,
  [SMALL_STATE(67)] = 1792,
  [SMALL_STATE(68)] = 1805,
  [SMALL_STATE(69)] = 1818,
  [SMALL_STATE(70)] = 1831,
  [SMALL_STATE(71)] = 1844,
  [SMALL_STATE(72)] = 1857,
  [SMALL_STATE(73)] = 1870,
  [SMALL_STATE(74)] = 1883,
  [SMALL_STATE(75)] = 1896,
  [SMALL_STATE(76)] = 1909,
  [SMALL_STATE(77)] = 1922,
  [SMALL_STATE(78)] = 1935,
  [SMALL_STATE(79)] = 1948,
  [SMALL_STATE(80)] = 1961,
  [SMALL_STATE(81)] = 1974,
  [SMALL_STATE(82)] = 1987,
  [SMALL_STATE(83)] = 2000,
  [SMALL_STATE(84)] = 2013,
  [SMALL_STATE(85)] = 2026,
  [SMALL_STATE(86)] = 2039,
  [SMALL_STATE(87)] = 2052,
  [SMALL_STATE(88)] = 2065,
  [SMALL_STATE(89)] = 2078,
  [SMALL_STATE(90)] = 2091,
  [SMALL_STATE(91)] = 2104,
  [SMALL_STATE(92)] = 2117,
  [SMALL_STATE(93)] = 2130,
  [SMALL_STATE(94)] = 2143,
  [SMALL_STATE(95)] = 2156,
  [SMALL_STATE(96)] = 2169,
  [SMALL_STATE(97)] = 2182,
  [SMALL_STATE(98)] = 2195,
  [SMALL_STATE(99)] = 2208,
  [SMALL_STATE(100)] = 2221,
  [SMALL_STATE(101)] = 2234,
  [SMALL_STATE(102)] = 2247,
  [SMALL_STATE(103)] = 2260,
  [SMALL_STATE(104)] = 2273,
  [SMALL_STATE(105)] = 2286,
  [SMALL_STATE(106)] = 2297,
  [SMALL_STATE(107)] = 2320,
  [SMALL_STATE(108)] = 2331,
  [SMALL_STATE(109)] = 2354,
  [SMALL_STATE(110)] = 2365,
  [SMALL_STATE(111)] = 2388,
  [SMALL_STATE(112)] = 2411,
  [SMALL_STATE(113)] = 2422,
  [SMALL_STATE(114)] = 2433,
  [SMALL_STATE(115)] = 2444,
  [SMALL_STATE(116)] = 2455,
  [SMALL_STATE(117)] = 2466,
  [SMALL_STATE(118)] = 2477,
  [SMALL_STATE(119)] = 2488,
  [SMALL_STATE(120)] = 2499,
  [SMALL_STATE(121)] = 2510,
  [SMALL_STATE(122)] = 2521,
  [SMALL_STATE(123)] = 2532,
  [SMALL_STATE(124)] = 2543,
  [SMALL_STATE(125)] = 2554,
  [SMALL_STATE(126)] = 2570,
  [SMALL_STATE(127)] = 2586,
  [SMALL_STATE(128)] = 2602,
  [SMALL_STATE(129)] = 2618,
  [SMALL_STATE(130)] = 2640,
  [SMALL_STATE(131)] = 2662,
  [SMALL_STATE(132)] = 2684,
  [SMALL_STATE(133)] = 2706,
  [SMALL_STATE(134)] = 2722,
  [SMALL_STATE(135)] = 2738,
  [SMALL_STATE(136)] = 2754,
  [SMALL_STATE(137)] = 2770,
  [SMALL_STATE(138)] = 2786,
  [SMALL_STATE(139)] = 2802,
  [SMALL_STATE(140)] = 2819,
  [SMALL_STATE(141)] = 2827,
  [SMALL_STATE(142)] = 2835,
  [SMALL_STATE(143)] = 2851,
  [SMALL_STATE(144)] = 2863,
  [SMALL_STATE(145)] = 2871,
  [SMALL_STATE(146)] = 2887,
  [SMALL_STATE(147)] = 2898,
  [SMALL_STATE(148)] = 2909,
  [SMALL_STATE(149)] = 2920,
  [SMALL_STATE(150)] = 2931,
  [SMALL_STATE(151)] = 2941,
  [SMALL_STATE(152)] = 2951,
  [SMALL_STATE(153)] = 2961,
  [SMALL_STATE(154)] = 2971,
  [SMALL_STATE(155)] = 2981,
  [SMALL_STATE(156)] = 2991,
  [SMALL_STATE(157)] = 3001,
  [SMALL_STATE(158)] = 3011,
  [SMALL_STATE(159)] = 3021,
  [SMALL_STATE(160)] = 3031,
  [SMALL_STATE(161)] = 3041,
  [SMALL_STATE(162)] = 3051,
  [SMALL_STATE(163)] = 3061,
  [SMALL_STATE(164)] = 3071,
  [SMALL_STATE(165)] = 3081,
  [SMALL_STATE(166)] = 3091,
  [SMALL_STATE(167)] = 3101,
  [SMALL_STATE(168)] = 3111,
  [SMALL_STATE(169)] = 3121,
  [SMALL_STATE(170)] = 3131,
  [SMALL_STATE(171)] = 3141,
  [SMALL_STATE(172)] = 3149,
  [SMALL_STATE(173)] = 3159,
  [SMALL_STATE(174)] = 3169,
  [SMALL_STATE(175)] = 3179,
  [SMALL_STATE(176)] = 3189,
  [SMALL_STATE(177)] = 3199,
  [SMALL_STATE(178)] = 3209,
  [SMALL_STATE(179)] = 3219,
  [SMALL_STATE(180)] = 3229,
  [SMALL_STATE(181)] = 3239,
  [SMALL_STATE(182)] = 3249,
  [SMALL_STATE(183)] = 3259,
  [SMALL_STATE(184)] = 3269,
  [SMALL_STATE(185)] = 3279,
  [SMALL_STATE(186)] = 3289,
  [SMALL_STATE(187)] = 3299,
  [SMALL_STATE(188)] = 3309,
  [SMALL_STATE(189)] = 3319,
  [SMALL_STATE(190)] = 3329,
  [SMALL_STATE(191)] = 3339,
  [SMALL_STATE(192)] = 3349,
  [SMALL_STATE(193)] = 3359,
  [SMALL_STATE(194)] = 3369,
  [SMALL_STATE(195)] = 3376,
  [SMALL_STATE(196)] = 3383,
  [SMALL_STATE(197)] = 3390,
  [SMALL_STATE(198)] = 3397,
  [SMALL_STATE(199)] = 3402,
  [SMALL_STATE(200)] = 3409,
  [SMALL_STATE(201)] = 3414,
  [SMALL_STATE(202)] = 3421,
  [SMALL_STATE(203)] = 3428,
  [SMALL_STATE(204)] = 3435,
  [SMALL_STATE(205)] = 3442,
  [SMALL_STATE(206)] = 3449,
  [SMALL_STATE(207)] = 3456,
  [SMALL_STATE(208)] = 3463,
  [SMALL_STATE(209)] = 3470,
  [SMALL_STATE(210)] = 3477,
  [SMALL_STATE(211)] = 3481,
  [SMALL_STATE(212)] = 3485,
  [SMALL_STATE(213)] = 3489,
  [SMALL_STATE(214)] = 3493,
  [SMALL_STATE(215)] = 3497,
  [SMALL_STATE(216)] = 3501,
  [SMALL_STATE(217)] = 3505,
  [SMALL_STATE(218)] = 3509,
  [SMALL_STATE(219)] = 3513,
  [SMALL_STATE(220)] = 3517,
  [SMALL_STATE(221)] = 3521,
  [SMALL_STATE(222)] = 3525,
  [SMALL_STATE(223)] = 3529,
  [SMALL_STATE(224)] = 3533,
  [SMALL_STATE(225)] = 3537,
  [SMALL_STATE(226)] = 3541,
  [SMALL_STATE(227)] = 3545,
  [SMALL_STATE(228)] = 3549,
  [SMALL_STATE(229)] = 3553,
  [SMALL_STATE(230)] = 3557,
  [SMALL_STATE(231)] = 3561,
  [SMALL_STATE(232)] = 3565,
  [SMALL_STATE(233)] = 3569,
  [SMALL_STATE(234)] = 3573,
  [SMALL_STATE(235)] = 3577,
  [SMALL_STATE(236)] = 3581,
  [SMALL_STATE(237)] = 3585,
  [SMALL_STATE(238)] = 3589,
  [SMALL_STATE(239)] = 3593,
  [SMALL_STATE(240)] = 3597,
  [SMALL_STATE(241)] = 3601,
  [SMALL_STATE(242)] = 3605,
  [SMALL_STATE(243)] = 3609,
  [SMALL_STATE(244)] = 3613,
  [SMALL_STATE(245)] = 3617,
  [SMALL_STATE(246)] = 3621,
  [SMALL_STATE(247)] = 3625,
  [SMALL_STATE(248)] = 3629,
  [SMALL_STATE(249)] = 3633,
  [SMALL_STATE(250)] = 3637,
  [SMALL_STATE(251)] = 3641,
  [SMALL_STATE(252)] = 3645,
  [SMALL_STATE(253)] = 3649,
  [SMALL_STATE(254)] = 3653,
  [SMALL_STATE(255)] = 3657,
  [SMALL_STATE(256)] = 3661,
  [SMALL_STATE(257)] = 3665,
  [SMALL_STATE(258)] = 3669,
  [SMALL_STATE(259)] = 3673,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(142),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(16),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(17),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(18),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(199),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(8),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(29),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(27),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(155),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(46),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(243),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(162),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(132),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_line, 2),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(204),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(25),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(26),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(172),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(75),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(245),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(191),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(130),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_line, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_line, 1),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(206),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(23),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(24),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(190),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(98),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(237),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(175),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(129),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(202),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(31),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(21),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(182),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(48),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(239),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(154),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(131),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 1),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(199),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(29),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(27),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(155),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(46),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(243),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(162),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(132),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(20),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xhtml_tag_content, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(166),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(28),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(259),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(188),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(178),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(173),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(30),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(258),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(180),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(152),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_inline_quote, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xhtml_tag, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_quote, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_em_xhtml_tag, 3),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 3),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xhtml_tag, 3),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_inline_quote, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_inline_quote, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_line, 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_macro, 6, .production_id = 6),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 5),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_quote, 4, .production_id = 5),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_macro, 4),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_inline_quote, 3),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_quote, 3, .production_id = 4),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_quote, 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_strong_xhtml_tag, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(135),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(140),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_escape, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_atom, 2),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__author_line, 1),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_atom, 3),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__author_line, 2),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_atom_repeat1, 2),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_atom_repeat1, 2), SHIFT_REPEAT(146),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__author_line_repeat1, 2),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__author_line_repeat1, 2), SHIFT_REPEAT(148),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote_content, 1),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quote_content_repeat1, 2),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_content_repeat1, 2), SHIFT_REPEAT(165),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_inline_quote_repeat1, 2), SHIFT_REPEAT(167),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_inline_quote_repeat1, 2),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xhtml_tag_repeat1, 2), SHIFT_REPEAT(168),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_repeat1, 2),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_expression, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [552] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_inline_quote_repeat1, 2), SHIFT_REPEAT(192),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_expression, 5),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_expression, 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, .production_id = 3),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xhtml_tag, 3),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [645] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__author_line, 2, .production_id = 1),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__author_line, 3, .production_id = 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xhtml_tag, 2),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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

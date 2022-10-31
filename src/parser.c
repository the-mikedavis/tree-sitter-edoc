#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 267
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 5
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 8

enum {
  anon_sym_ATauthor = 1,
  anon_sym_ATsee = 2,
  anon_sym_ATparam = 3,
  anon_sym_EQ_EQ = 4,
  anon_sym_EQ_EQ_EQ = 5,
  anon_sym_EQ_EQ_EQ_EQ = 6,
  anon_sym_LBRACE = 7,
  aux_sym_macro_token1 = 8,
  anon_sym_RBRACE = 9,
  anon_sym_TODO_COLON = 10,
  aux_sym_tag_token1 = 11,
  aux_sym_argument_token1 = 12,
  anon_sym_ATlink = 13,
  anon_sym_DOT = 14,
  anon_sym_SLASH = 15,
  anon_sym_COLON = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  sym_arity = 19,
  anon_sym_LTem_GT = 20,
  anon_sym_LT_SLASHem_GT = 21,
  anon_sym_LTstrong_GT = 22,
  anon_sym_LT_SLASHstrong_GT = 23,
  anon_sym_LT = 24,
  aux_sym_xhtml_tag_token1 = 25,
  anon_sym_GT = 26,
  anon_sym_AT_LBRACE = 27,
  anon_sym_AT_RBRACE = 28,
  anon_sym_AT_AT = 29,
  sym_quote_escape = 30,
  anon_sym_BQUOTE = 31,
  aux_sym__inline_quote_token1 = 32,
  anon_sym_SQUOTE = 33,
  anon_sym_BQUOTE_BQUOTE = 34,
  aux_sym__double_inline_quote_token1 = 35,
  anon_sym_SQUOTE_SQUOTE = 36,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 37,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 38,
  sym_language_identifier = 39,
  aux_sym_quote_content_token1 = 40,
  sym__terminator = 41,
  sym__word = 42,
  sym__unquoted_atom = 43,
  sym__escape_sequence = 44,
  sym__quoted_content = 45,
  sym_source = 46,
  sym__line = 47,
  sym__tag_line = 48,
  sym__author_line = 49,
  sym__see_line = 50,
  sym__param_line = 51,
  aux_sym__text_line = 52,
  sym_section = 53,
  sym_macro = 54,
  sym_tag = 55,
  sym_argument = 56,
  sym__link_macro = 57,
  sym_expression = 58,
  sym_module = 59,
  sym_function = 60,
  sym_type = 61,
  sym__xhtml_tag = 62,
  sym_em_xhtml_tag = 63,
  sym_strong_xhtml_tag = 64,
  sym_xhtml_tag = 65,
  sym_xhtml_tag_content = 66,
  sym_macro_escape = 67,
  sym_inline_quote = 68,
  sym__inline_quote = 69,
  sym__double_inline_quote = 70,
  sym__triple_inline_quote = 71,
  sym_block_quote = 72,
  sym_quote_content = 73,
  sym__atom = 74,
  sym__quoted_atom = 75,
  aux_sym_source_repeat1 = 76,
  aux_sym_source_repeat2 = 77,
  aux_sym__author_line_repeat1 = 78,
  aux_sym_argument_repeat1 = 79,
  aux_sym_xhtml_tag_repeat1 = 80,
  aux_sym_xhtml_tag_content_repeat1 = 81,
  aux_sym__double_inline_quote_repeat1 = 82,
  aux_sym_quote_content_repeat1 = 83,
  aux_sym__quoted_atom_repeat1 = 84,
  alias_sym_description = 85,
  alias_sym_email_address = 86,
  alias_sym_parameter = 87,
  alias_sym_quote_marker = 88,
  alias_sym_section_content = 89,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATauthor] = "tag",
  [anon_sym_ATsee] = "tag",
  [anon_sym_ATparam] = "tag",
  [anon_sym_EQ_EQ] = "section_marker",
  [anon_sym_EQ_EQ_EQ] = "section_marker",
  [anon_sym_EQ_EQ_EQ_EQ] = "section_marker",
  [anon_sym_LBRACE] = "{",
  [aux_sym_macro_token1] = "macro_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_TODO_COLON] = "TODO:",
  [aux_sym_tag_token1] = "tag_token1",
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
  [sym__see_line] = "_see_line",
  [sym__param_line] = "_param_line",
  [aux_sym__text_line] = "_text_line",
  [sym_section] = "section",
  [sym_macro] = "macro",
  [sym_tag] = "tag",
  [sym_argument] = "argument",
  [sym__link_macro] = "_link_macro",
  [sym_expression] = "expression",
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
  [alias_sym_parameter] = "parameter",
  [alias_sym_quote_marker] = "quote_marker",
  [alias_sym_section_content] = "section_content",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATauthor] = sym_tag,
  [anon_sym_ATsee] = sym_tag,
  [anon_sym_ATparam] = sym_tag,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_EQ_EQ_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_macro_token1] = aux_sym_macro_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_TODO_COLON] = anon_sym_TODO_COLON,
  [aux_sym_tag_token1] = aux_sym_tag_token1,
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
  [sym__see_line] = sym__see_line,
  [sym__param_line] = sym__param_line,
  [aux_sym__text_line] = aux_sym__text_line,
  [sym_section] = sym_section,
  [sym_macro] = sym_macro,
  [sym_tag] = sym_tag,
  [sym_argument] = sym_argument,
  [sym__link_macro] = sym__link_macro,
  [sym_expression] = sym_expression,
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
  [alias_sym_parameter] = alias_sym_parameter,
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
  [anon_sym_ATsee] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATparam] = {
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
  [anon_sym_TODO_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tag_token1] = {
    .visible = false,
    .named = false,
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
  [sym__see_line] = {
    .visible = false,
    .named = true,
  },
  [sym__param_line] = {
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
  [sym_tag] = {
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
  [sym_expression] = {
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
  [alias_sym_parameter] = {
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
  [6] = {.index = 0, .length = 1},
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
    [1] = alias_sym_parameter,
  },
  [3] = {
    [2] = alias_sym_email_address,
  },
  [4] = {
    [1] = alias_sym_section_content,
  },
  [5] = {
    [0] = alias_sym_quote_marker,
    [2] = alias_sym_quote_marker,
  },
  [6] = {
    [0] = alias_sym_quote_marker,
    [3] = alias_sym_quote_marker,
  },
  [7] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 10,
  [12] = 10,
  [13] = 13,
  [14] = 10,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 25,
  [27] = 24,
  [28] = 28,
  [29] = 24,
  [30] = 24,
  [31] = 25,
  [32] = 25,
  [33] = 23,
  [34] = 28,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 37,
  [46] = 46,
  [47] = 35,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 46,
  [53] = 48,
  [54] = 38,
  [55] = 39,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 58,
  [61] = 57,
  [62] = 56,
  [63] = 40,
  [64] = 48,
  [65] = 35,
  [66] = 59,
  [67] = 37,
  [68] = 38,
  [69] = 39,
  [70] = 56,
  [71] = 57,
  [72] = 42,
  [73] = 58,
  [74] = 59,
  [75] = 40,
  [76] = 51,
  [77] = 50,
  [78] = 44,
  [79] = 41,
  [80] = 49,
  [81] = 46,
  [82] = 44,
  [83] = 43,
  [84] = 59,
  [85] = 42,
  [86] = 37,
  [87] = 41,
  [88] = 40,
  [89] = 39,
  [90] = 38,
  [91] = 51,
  [92] = 41,
  [93] = 35,
  [94] = 48,
  [95] = 50,
  [96] = 56,
  [97] = 57,
  [98] = 49,
  [99] = 58,
  [100] = 42,
  [101] = 51,
  [102] = 50,
  [103] = 43,
  [104] = 49,
  [105] = 46,
  [106] = 44,
  [107] = 43,
  [108] = 59,
  [109] = 46,
  [110] = 110,
  [111] = 48,
  [112] = 35,
  [113] = 37,
  [114] = 114,
  [115] = 38,
  [116] = 46,
  [117] = 38,
  [118] = 50,
  [119] = 35,
  [120] = 114,
  [121] = 114,
  [122] = 51,
  [123] = 114,
  [124] = 37,
  [125] = 48,
  [126] = 51,
  [127] = 59,
  [128] = 50,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 129,
  [134] = 131,
  [135] = 135,
  [136] = 135,
  [137] = 135,
  [138] = 135,
  [139] = 129,
  [140] = 131,
  [141] = 131,
  [142] = 129,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 150,
  [155] = 150,
  [156] = 156,
  [157] = 150,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 159,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 163,
  [167] = 167,
  [168] = 168,
  [169] = 163,
  [170] = 170,
  [171] = 171,
  [172] = 163,
  [173] = 168,
  [174] = 174,
  [175] = 159,
  [176] = 161,
  [177] = 177,
  [178] = 171,
  [179] = 168,
  [180] = 164,
  [181] = 159,
  [182] = 164,
  [183] = 159,
  [184] = 160,
  [185] = 167,
  [186] = 171,
  [187] = 168,
  [188] = 168,
  [189] = 164,
  [190] = 171,
  [191] = 159,
  [192] = 160,
  [193] = 160,
  [194] = 171,
  [195] = 168,
  [196] = 160,
  [197] = 164,
  [198] = 164,
  [199] = 199,
  [200] = 159,
  [201] = 160,
  [202] = 171,
  [203] = 168,
  [204] = 204,
  [205] = 205,
  [206] = 205,
  [207] = 204,
  [208] = 204,
  [209] = 36,
  [210] = 210,
  [211] = 205,
  [212] = 212,
  [213] = 204,
  [214] = 205,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 217,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 224,
  [227] = 222,
  [228] = 217,
  [229] = 225,
  [230] = 223,
  [231] = 221,
  [232] = 223,
  [233] = 220,
  [234] = 234,
  [235] = 235,
  [236] = 223,
  [237] = 223,
  [238] = 238,
  [239] = 224,
  [240] = 222,
  [241] = 225,
  [242] = 242,
  [243] = 224,
  [244] = 244,
  [245] = 223,
  [246] = 222,
  [247] = 247,
  [248] = 221,
  [249] = 220,
  [250] = 250,
  [251] = 220,
  [252] = 244,
  [253] = 253,
  [254] = 217,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 225,
  [259] = 259,
  [260] = 244,
  [261] = 221,
  [262] = 37,
  [263] = 244,
  [264] = 59,
  [265] = 244,
  [266] = 244,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(63);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '(') ADVANCE(99);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(113);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '}') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('a' <= lookahead && lookahead <= 'z') ||
          (224 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(164);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(138);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == '@') ADVANCE(161);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(139);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(140);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(163);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(163);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(163);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(163);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(133);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(133);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(172);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(171);
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(127);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(127);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(123);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(132);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(135);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(136);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(128);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(123);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == 'T') ADVANCE(34);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(76);
      END_STATE();
    case 19:
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == '@') ADVANCE(161);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(163);
      END_STATE();
    case 20:
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(163);
      END_STATE();
    case 21:
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(163);
      END_STATE();
    case 22:
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '=') ADVANCE(156);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(22)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(163);
      END_STATE();
    case 23:
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(163);
      END_STATE();
    case 24:
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(163);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(113);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(112);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(102);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(103);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(104);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(105);
      END_STATE();
    case 31:
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead == 'p') ADVANCE(77);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == '{') ADVANCE(114);
      if (lookahead == '}') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 32:
      if (lookahead == '@') ADVANCE(93);
      if (lookahead == '}') ADVANCE(75);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(94);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 33:
      if (lookahead == 'D') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 'O') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 'O') ADVANCE(18);
      END_STATE();
    case 36:
      if (lookahead == '^') ADVANCE(169);
      if (lookahead == 'x') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(168);
      if ((' ' <= lookahead && lookahead <= 127)) ADVANCE(165);
      END_STATE();
    case 37:
      if (lookahead == '`') ADVANCE(163);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 41:
      if (lookahead == 'g') ADVANCE(30);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 54:
      if (lookahead == '{') ADVANCE(37);
      END_STATE();
    case 55:
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) SKIP(55)
      END_STATE();
    case 56:
      if (lookahead == '}') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 59:
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(120);
      END_STATE();
    case 60:
      if (lookahead != 0 &&
          (lookahead < 1 || '\t' < lookahead) &&
          (lookahead < 17 || ' ' < lookahead) &&
          (lookahead < 128 || 160 < lookahead)) ADVANCE(134);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(137);
      END_STATE();
    case 61:
      if (eof) ADVANCE(63);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == '@') ADVANCE(161);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(61)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(139);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == '@') ADVANCE(161);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(62)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(163);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_ATauthor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_ATsee);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_ATparam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_macro_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_macro_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_TODO_COLON);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'h') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'i') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'k') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'm') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'n') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'o') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'u') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == '{') ADVANCE(114);
      if (lookahead == '}') ADVANCE(115);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '@') ADVANCE(93);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(92);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_ATlink);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_arity);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LTem_GT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LT_SLASHem_GT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LTstrong_GT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LT_SLASHstrong_GT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(51);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_xhtml_tag_token1);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_xhtml_tag_token1);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(111);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_AT_RBRACE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_quote_escape);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead == '`') ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__inline_quote_token1);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__inline_quote_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
      if (lookahead == '`') ADVANCE(131);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\n') ADVANCE(133);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(127);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(123);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(127);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(123);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(14);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(128);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(123);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_language_identifier);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_quote_content_token1);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_quote_content_token1);
      if (lookahead == '\'') ADVANCE(14);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_quote_content_token1);
      if (lookahead == '\'') ADVANCE(135);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(136);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_quote_content_token1);
      if (lookahead != 0 &&
          (lookahead < 1 || '\t' < lookahead) &&
          (lookahead < 17 || ' ' < lookahead) &&
          (lookahead < 128 || 160 < lookahead)) ADVANCE(134);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__terminator);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == '@') ADVANCE(161);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(139);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(140);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(163);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(163);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(163);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(163);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(163);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == '@') ADVANCE(161);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(163);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(163);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(163);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '=') ADVANCE(156);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(22)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(163);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '`') ADVANCE(118);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(163);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(163);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(163);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(163);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(163);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(163);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(163);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(163);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == 'D') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(163);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == 'O') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(163);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == 'O') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(163);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'p') ADVANCE(77);
      if (lookahead == 's') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '`' || '{' < lookahead)) ADVANCE(163);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__unquoted_atom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 255)) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (lookahead == '{') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(165);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(167);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__quoted_content);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__quoted_content);
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(172);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(171);
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__quoted_content);
      if (lookahead == '^') ADVANCE(169);
      if (lookahead == 'x') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(168);
      if ((' ' <= lookahead && lookahead <= 127)) ADVANCE(165);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__quoted_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(173);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 61},
  [2] = {.lex_state = 61},
  [3] = {.lex_state = 62},
  [4] = {.lex_state = 62},
  [5] = {.lex_state = 62},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 22},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 23},
  [21] = {.lex_state = 61},
  [22] = {.lex_state = 61},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 20},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 20},
  [39] = {.lex_state = 20},
  [40] = {.lex_state = 20},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 22},
  [44] = {.lex_state = 22},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 22},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 22},
  [50] = {.lex_state = 22},
  [51] = {.lex_state = 22},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 20},
  [57] = {.lex_state = 20},
  [58] = {.lex_state = 20},
  [59] = {.lex_state = 21},
  [60] = {.lex_state = 22},
  [61] = {.lex_state = 22},
  [62] = {.lex_state = 22},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 22},
  [65] = {.lex_state = 22},
  [66] = {.lex_state = 22},
  [67] = {.lex_state = 21},
  [68] = {.lex_state = 22},
  [69] = {.lex_state = 22},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 21},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 22},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 20},
  [79] = {.lex_state = 21},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 20},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 20},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 21},
  [89] = {.lex_state = 21},
  [90] = {.lex_state = 21},
  [91] = {.lex_state = 20},
  [92] = {.lex_state = 20},
  [93] = {.lex_state = 21},
  [94] = {.lex_state = 21},
  [95] = {.lex_state = 20},
  [96] = {.lex_state = 21},
  [97] = {.lex_state = 21},
  [98] = {.lex_state = 20},
  [99] = {.lex_state = 21},
  [100] = {.lex_state = 20},
  [101] = {.lex_state = 21},
  [102] = {.lex_state = 21},
  [103] = {.lex_state = 20},
  [104] = {.lex_state = 21},
  [105] = {.lex_state = 21},
  [106] = {.lex_state = 21},
  [107] = {.lex_state = 21},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 32},
  [130] = {.lex_state = 32},
  [131] = {.lex_state = 32},
  [132] = {.lex_state = 32},
  [133] = {.lex_state = 32},
  [134] = {.lex_state = 32},
  [135] = {.lex_state = 11},
  [136] = {.lex_state = 11},
  [137] = {.lex_state = 11},
  [138] = {.lex_state = 11},
  [139] = {.lex_state = 32},
  [140] = {.lex_state = 32},
  [141] = {.lex_state = 32},
  [142] = {.lex_state = 32},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 32},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 17},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 17},
  [155] = {.lex_state = 17},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 17},
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 26},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 26},
  [163] = {.lex_state = 60},
  [164] = {.lex_state = 16},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 60},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 26},
  [169] = {.lex_state = 60},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 16},
  [172] = {.lex_state = 60},
  [173] = {.lex_state = 26},
  [174] = {.lex_state = 15},
  [175] = {.lex_state = 26},
  [176] = {.lex_state = 16},
  [177] = {.lex_state = 26},
  [178] = {.lex_state = 16},
  [179] = {.lex_state = 26},
  [180] = {.lex_state = 16},
  [181] = {.lex_state = 26},
  [182] = {.lex_state = 16},
  [183] = {.lex_state = 26},
  [184] = {.lex_state = 12},
  [185] = {.lex_state = 12},
  [186] = {.lex_state = 16},
  [187] = {.lex_state = 26},
  [188] = {.lex_state = 26},
  [189] = {.lex_state = 16},
  [190] = {.lex_state = 16},
  [191] = {.lex_state = 26},
  [192] = {.lex_state = 12},
  [193] = {.lex_state = 12},
  [194] = {.lex_state = 16},
  [195] = {.lex_state = 26},
  [196] = {.lex_state = 12},
  [197] = {.lex_state = 16},
  [198] = {.lex_state = 16},
  [199] = {.lex_state = 15},
  [200] = {.lex_state = 26},
  [201] = {.lex_state = 12},
  [202] = {.lex_state = 16},
  [203] = {.lex_state = 26},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 55},
  [206] = {.lex_state = 55},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 55},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 55},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 55},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 17},
  [225] = {.lex_state = 17},
  [226] = {.lex_state = 17},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 17},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 24},
  [239] = {.lex_state = 17},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 17},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 17},
  [244] = {.lex_state = 59},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 59},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 17},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 59},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 59},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 59},
  [266] = {.lex_state = 59},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATauthor] = ACTIONS(1),
    [anon_sym_ATsee] = ACTIONS(1),
    [anon_sym_ATparam] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_TODO_COLON] = ACTIONS(1),
    [aux_sym_tag_token1] = ACTIONS(1),
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
    [sym__terminator] = ACTIONS(1),
    [sym__unquoted_atom] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(259),
    [sym__line] = STATE(210),
    [sym__tag_line] = STATE(210),
    [sym__author_line] = STATE(210),
    [sym__see_line] = STATE(210),
    [sym__param_line] = STATE(210),
    [aux_sym__text_line] = STATE(16),
    [sym_section] = STATE(210),
    [sym_macro] = STATE(63),
    [sym_tag] = STATE(17),
    [sym__link_macro] = STATE(55),
    [sym__xhtml_tag] = STATE(63),
    [sym_em_xhtml_tag] = STATE(63),
    [sym_strong_xhtml_tag] = STATE(63),
    [sym_xhtml_tag] = STATE(63),
    [sym_inline_quote] = STATE(63),
    [sym__inline_quote] = STATE(54),
    [sym__double_inline_quote] = STATE(54),
    [sym__triple_inline_quote] = STATE(54),
    [sym_block_quote] = STATE(63),
    [aux_sym_source_repeat1] = STATE(2),
    [aux_sym_source_repeat2] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_ATsee] = ACTIONS(7),
    [anon_sym_ATparam] = ACTIONS(9),
    [anon_sym_EQ_EQ] = ACTIONS(11),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(13),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_TODO_COLON] = ACTIONS(19),
    [aux_sym_tag_token1] = ACTIONS(19),
    [anon_sym_LTem_GT] = ACTIONS(21),
    [anon_sym_LTstrong_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [sym_quote_escape] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [sym__terminator] = ACTIONS(35),
    [sym__word] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(5), 1,
      anon_sym_ATauthor,
    ACTIONS(7), 1,
      anon_sym_ATsee,
    ACTIONS(9), 1,
      anon_sym_ATparam,
    ACTIONS(11), 1,
      anon_sym_EQ_EQ,
    ACTIONS(13), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(15), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LTem_GT,
    ACTIONS(23), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      sym__terminator,
    STATE(5), 1,
      aux_sym_source_repeat2,
    STATE(16), 1,
      aux_sym__text_line,
    STATE(17), 1,
      sym_tag,
    STATE(21), 1,
      aux_sym_source_repeat1,
    STATE(55), 1,
      sym__link_macro,
    ACTIONS(19), 2,
      anon_sym_TODO_COLON,
      aux_sym_tag_token1,
    ACTIONS(27), 2,
      sym_quote_escape,
      sym__word,
    STATE(54), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(210), 6,
      sym__line,
      sym__tag_line,
      sym__author_line,
      sym__see_line,
      sym__param_line,
      sym_section,
    STATE(63), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [91] = 23,
    ACTIONS(5), 1,
      anon_sym_ATauthor,
    ACTIONS(7), 1,
      anon_sym_ATsee,
    ACTIONS(9), 1,
      anon_sym_ATparam,
    ACTIONS(11), 1,
      anon_sym_EQ_EQ,
    ACTIONS(13), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(15), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LTem_GT,
    ACTIONS(23), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_source_repeat2,
    STATE(16), 1,
      aux_sym__text_line,
    STATE(17), 1,
      sym_tag,
    STATE(55), 1,
      sym__link_macro,
    ACTIONS(19), 2,
      anon_sym_TODO_COLON,
      aux_sym_tag_token1,
    ACTIONS(27), 2,
      sym_quote_escape,
      sym__word,
    STATE(54), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(210), 6,
      sym__line,
      sym__tag_line,
      sym__author_line,
      sym__see_line,
      sym__param_line,
      sym_section,
    STATE(63), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [176] = 23,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_ATauthor,
    ACTIONS(46), 1,
      anon_sym_ATsee,
    ACTIONS(49), 1,
      anon_sym_ATparam,
    ACTIONS(52), 1,
      anon_sym_EQ_EQ,
    ACTIONS(55), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(58), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LTem_GT,
    ACTIONS(70), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(79), 1,
      anon_sym_BQUOTE,
    ACTIONS(82), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(85), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(4), 1,
      aux_sym_source_repeat2,
    STATE(16), 1,
      aux_sym__text_line,
    STATE(17), 1,
      sym_tag,
    STATE(55), 1,
      sym__link_macro,
    ACTIONS(64), 2,
      anon_sym_TODO_COLON,
      aux_sym_tag_token1,
    ACTIONS(76), 2,
      sym_quote_escape,
      sym__word,
    STATE(54), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(210), 6,
      sym__line,
      sym__tag_line,
      sym__author_line,
      sym__see_line,
      sym__param_line,
      sym_section,
    STATE(63), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [261] = 23,
    ACTIONS(5), 1,
      anon_sym_ATauthor,
    ACTIONS(7), 1,
      anon_sym_ATsee,
    ACTIONS(9), 1,
      anon_sym_ATparam,
    ACTIONS(11), 1,
      anon_sym_EQ_EQ,
    ACTIONS(13), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(15), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LTem_GT,
    ACTIONS(23), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_source_repeat2,
    STATE(16), 1,
      aux_sym__text_line,
    STATE(17), 1,
      sym_tag,
    STATE(55), 1,
      sym__link_macro,
    ACTIONS(19), 2,
      anon_sym_TODO_COLON,
      aux_sym_tag_token1,
    ACTIONS(27), 2,
      sym_quote_escape,
      sym__word,
    STATE(54), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(210), 6,
      sym__line,
      sym__tag_line,
      sym__author_line,
      sym__see_line,
      sym__param_line,
      sym_section,
    STATE(63), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [346] = 13,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LTem_GT,
    ACTIONS(23), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(90), 1,
      sym__terminator,
    STATE(8), 1,
      aux_sym__text_line,
    STATE(55), 1,
      sym__link_macro,
    ACTIONS(27), 2,
      sym_quote_escape,
      sym__word,
    STATE(54), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(63), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [395] = 13,
    ACTIONS(92), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_LTem_GT,
    ACTIONS(98), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(104), 1,
      anon_sym_BQUOTE,
    ACTIONS(106), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(108), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(10), 1,
      aux_sym__text_line,
    STATE(39), 1,
      sym__link_macro,
    ACTIONS(102), 2,
      sym_quote_escape,
      sym__word,
    STATE(38), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(40), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [444] = 13,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LTem_GT,
    ACTIONS(23), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(110), 1,
      sym__terminator,
    STATE(12), 1,
      aux_sym__text_line,
    STATE(55), 1,
      sym__link_macro,
    ACTIONS(27), 2,
      sym_quote_escape,
      sym__word,
    STATE(54), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(63), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [493] = 13,
    ACTIONS(92), 1,
      anon_sym_EQ_EQ,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_LTem_GT,
    ACTIONS(116), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(118), 1,
      anon_sym_LT,
    ACTIONS(122), 1,
      anon_sym_BQUOTE,
    ACTIONS(124), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(126), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(14), 1,
      aux_sym__text_line,
    STATE(89), 1,
      sym__link_macro,
    ACTIONS(120), 2,
      sym_quote_escape,
      sym__word,
    STATE(90), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(88), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [542] = 13,
    ACTIONS(128), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_LTem_GT,
    ACTIONS(136), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(139), 1,
      anon_sym_LT,
    ACTIONS(145), 1,
      anon_sym_BQUOTE,
    ACTIONS(148), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(151), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(10), 1,
      aux_sym__text_line,
    STATE(39), 1,
      sym__link_macro,
    ACTIONS(142), 2,
      sym_quote_escape,
      sym__word,
    STATE(38), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(40), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [591] = 13,
    ACTIONS(128), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      anon_sym_LTem_GT,
    ACTIONS(160), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(163), 1,
      anon_sym_LT,
    ACTIONS(169), 1,
      anon_sym_BQUOTE,
    ACTIONS(172), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(175), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(11), 1,
      aux_sym__text_line,
    STATE(69), 1,
      sym__link_macro,
    ACTIONS(166), 2,
      sym_quote_escape,
      sym__word,
    STATE(68), 3,
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
  [640] = 13,
    ACTIONS(128), 1,
      sym__terminator,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    ACTIONS(181), 1,
      anon_sym_LTem_GT,
    ACTIONS(184), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(187), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      anon_sym_BQUOTE,
    ACTIONS(196), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(199), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(12), 1,
      aux_sym__text_line,
    STATE(55), 1,
      sym__link_macro,
    ACTIONS(190), 2,
      sym_quote_escape,
      sym__word,
    STATE(54), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(63), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [689] = 13,
    ACTIONS(92), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(204), 1,
      anon_sym_LTem_GT,
    ACTIONS(206), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(208), 1,
      anon_sym_LT,
    ACTIONS(212), 1,
      anon_sym_BQUOTE,
    ACTIONS(214), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(216), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(11), 1,
      aux_sym__text_line,
    STATE(69), 1,
      sym__link_macro,
    ACTIONS(210), 2,
      sym_quote_escape,
      sym__word,
    STATE(68), 3,
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
  [738] = 13,
    ACTIONS(128), 1,
      anon_sym_EQ_EQ,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(221), 1,
      anon_sym_LTem_GT,
    ACTIONS(224), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(227), 1,
      anon_sym_LT,
    ACTIONS(233), 1,
      anon_sym_BQUOTE,
    ACTIONS(236), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(239), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(14), 1,
      aux_sym__text_line,
    STATE(89), 1,
      sym__link_macro,
    ACTIONS(230), 2,
      sym_quote_escape,
      sym__word,
    STATE(90), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(88), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [787] = 13,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LTem_GT,
    ACTIONS(23), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(242), 1,
      sym__terminator,
    STATE(12), 1,
      aux_sym__text_line,
    STATE(55), 1,
      sym__link_macro,
    ACTIONS(27), 2,
      sym_quote_escape,
      sym__word,
    STATE(54), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(63), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [836] = 13,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LTem_GT,
    ACTIONS(23), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(244), 1,
      sym__terminator,
    STATE(12), 1,
      aux_sym__text_line,
    STATE(55), 1,
      sym__link_macro,
    ACTIONS(27), 2,
      sym_quote_escape,
      sym__word,
    STATE(54), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(63), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [885] = 13,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LTem_GT,
    ACTIONS(23), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(246), 1,
      sym__terminator,
    STATE(15), 1,
      aux_sym__text_line,
    STATE(55), 1,
      sym__link_macro,
    ACTIONS(27), 2,
      sym_quote_escape,
      sym__word,
    STATE(54), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(63), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [934] = 12,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_LTem_GT,
    ACTIONS(116), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(118), 1,
      anon_sym_LT,
    ACTIONS(122), 1,
      anon_sym_BQUOTE,
    ACTIONS(124), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(126), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(9), 1,
      aux_sym__text_line,
    STATE(89), 1,
      sym__link_macro,
    ACTIONS(120), 2,
      sym_quote_escape,
      sym__word,
    STATE(90), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(88), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [980] = 12,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(204), 1,
      anon_sym_LTem_GT,
    ACTIONS(206), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(208), 1,
      anon_sym_LT,
    ACTIONS(212), 1,
      anon_sym_BQUOTE,
    ACTIONS(214), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(216), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(13), 1,
      aux_sym__text_line,
    STATE(69), 1,
      sym__link_macro,
    ACTIONS(210), 2,
      sym_quote_escape,
      sym__word,
    STATE(68), 3,
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
  [1026] = 12,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_LTem_GT,
    ACTIONS(98), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(104), 1,
      anon_sym_BQUOTE,
    ACTIONS(106), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(108), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(7), 1,
      aux_sym__text_line,
    STATE(39), 1,
      sym__link_macro,
    ACTIONS(102), 2,
      sym_quote_escape,
      sym__word,
    STATE(38), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(40), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [1072] = 4,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 1,
      sym__terminator,
    STATE(21), 1,
      aux_sym_source_repeat1,
    ACTIONS(250), 17,
      anon_sym_ATauthor,
      anon_sym_ATsee,
      anon_sym_ATparam,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_TODO_COLON,
      aux_sym_tag_token1,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1101] = 4,
    ACTIONS(39), 1,
      sym__terminator,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      aux_sym_source_repeat1,
    ACTIONS(255), 17,
      anon_sym_ATauthor,
      anon_sym_ATsee,
      anon_sym_ATparam,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_TODO_COLON,
      aux_sym_tag_token1,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1130] = 8,
    ACTIONS(257), 1,
      anon_sym_LT_SLASHstrong_GT,
    ACTIONS(259), 1,
      anon_sym_LT,
    ACTIONS(265), 1,
      anon_sym_BQUOTE,
    ACTIONS(268), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(271), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(262), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(23), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(115), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1161] = 8,
    ACTIONS(274), 1,
      anon_sym_LT,
    ACTIONS(278), 1,
      anon_sym_BQUOTE,
    ACTIONS(280), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(282), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(220), 1,
      sym_xhtml_tag_content,
    ACTIONS(276), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(28), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(117), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1192] = 8,
    ACTIONS(284), 1,
      anon_sym_LT,
    ACTIONS(288), 1,
      anon_sym_BQUOTE,
    ACTIONS(290), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(292), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(221), 1,
      sym_xhtml_tag_content,
    ACTIONS(286), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(34), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(115), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1223] = 8,
    ACTIONS(284), 1,
      anon_sym_LT,
    ACTIONS(288), 1,
      anon_sym_BQUOTE,
    ACTIONS(290), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(292), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(248), 1,
      sym_xhtml_tag_content,
    ACTIONS(286), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(34), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(115), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1254] = 8,
    ACTIONS(274), 1,
      anon_sym_LT,
    ACTIONS(278), 1,
      anon_sym_BQUOTE,
    ACTIONS(280), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(282), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(249), 1,
      sym_xhtml_tag_content,
    ACTIONS(276), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(28), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(117), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1285] = 8,
    ACTIONS(274), 1,
      anon_sym_LT,
    ACTIONS(278), 1,
      anon_sym_BQUOTE,
    ACTIONS(280), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(282), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(294), 1,
      anon_sym_LT_SLASHem_GT,
    ACTIONS(296), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(33), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(117), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1316] = 8,
    ACTIONS(274), 1,
      anon_sym_LT,
    ACTIONS(278), 1,
      anon_sym_BQUOTE,
    ACTIONS(280), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(282), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(251), 1,
      sym_xhtml_tag_content,
    ACTIONS(276), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(28), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(117), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1347] = 8,
    ACTIONS(274), 1,
      anon_sym_LT,
    ACTIONS(278), 1,
      anon_sym_BQUOTE,
    ACTIONS(280), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(282), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(233), 1,
      sym_xhtml_tag_content,
    ACTIONS(276), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(28), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(117), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1378] = 8,
    ACTIONS(284), 1,
      anon_sym_LT,
    ACTIONS(288), 1,
      anon_sym_BQUOTE,
    ACTIONS(290), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(292), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(261), 1,
      sym_xhtml_tag_content,
    ACTIONS(286), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(34), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(115), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1409] = 8,
    ACTIONS(284), 1,
      anon_sym_LT,
    ACTIONS(288), 1,
      anon_sym_BQUOTE,
    ACTIONS(290), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(292), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(231), 1,
      sym_xhtml_tag_content,
    ACTIONS(286), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(34), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(115), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1440] = 8,
    ACTIONS(257), 1,
      anon_sym_LT_SLASHem_GT,
    ACTIONS(298), 1,
      anon_sym_LT,
    ACTIONS(304), 1,
      anon_sym_BQUOTE,
    ACTIONS(307), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(310), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(301), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(33), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(117), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1471] = 8,
    ACTIONS(284), 1,
      anon_sym_LT,
    ACTIONS(288), 1,
      anon_sym_BQUOTE,
    ACTIONS(290), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(292), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(294), 1,
      anon_sym_LT_SLASHstrong_GT,
    ACTIONS(313), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(23), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(115), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1502] = 1,
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
  [1515] = 1,
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
  [1528] = 1,
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
  [1541] = 1,
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
  [1554] = 1,
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
  [1567] = 1,
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
  [1580] = 1,
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
  [1593] = 1,
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
  [1606] = 1,
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
  [1619] = 1,
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
  [1632] = 1,
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
  [1645] = 1,
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
  [1658] = 1,
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
  [1671] = 1,
    ACTIONS(337), 10,
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
  [1684] = 1,
    ACTIONS(339), 10,
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
  [1697] = 1,
    ACTIONS(341), 10,
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
  [1710] = 1,
    ACTIONS(343), 10,
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
  [1723] = 1,
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
  [1736] = 1,
    ACTIONS(337), 10,
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
  [1749] = 1,
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
  [1762] = 1,
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
  [1775] = 1,
    ACTIONS(345), 10,
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
  [1788] = 1,
    ACTIONS(347), 10,
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
  [1801] = 1,
    ACTIONS(349), 10,
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
  [1814] = 1,
    ACTIONS(351), 10,
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
  [1827] = 1,
    ACTIONS(349), 10,
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
  [1840] = 1,
    ACTIONS(347), 10,
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
  [1853] = 1,
    ACTIONS(345), 10,
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
  [1866] = 1,
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
  [1879] = 1,
    ACTIONS(337), 10,
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
  [1892] = 1,
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
  [1905] = 1,
    ACTIONS(351), 10,
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
  [1918] = 1,
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
  [1931] = 1,
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
  [1944] = 1,
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
  [1957] = 1,
    ACTIONS(345), 10,
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
  [1970] = 1,
    ACTIONS(347), 10,
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
  [1983] = 1,
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
  [1996] = 1,
    ACTIONS(349), 10,
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
  [2009] = 1,
    ACTIONS(351), 10,
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
  [2022] = 1,
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
  [2035] = 1,
    ACTIONS(343), 10,
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
  [2048] = 1,
    ACTIONS(341), 10,
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
  [2061] = 1,
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
  [2074] = 1,
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
  [2087] = 1,
    ACTIONS(339), 10,
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
  [2100] = 1,
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
  [2113] = 1,
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
  [2126] = 1,
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
  [2139] = 1,
    ACTIONS(351), 10,
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
  [2152] = 1,
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
  [2165] = 1,
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
  [2178] = 1,
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
  [2191] = 1,
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
  [2204] = 1,
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
  [2217] = 1,
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
  [2230] = 1,
    ACTIONS(343), 10,
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
  [2243] = 1,
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
  [2256] = 1,
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
  [2269] = 1,
    ACTIONS(337), 10,
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
  [2282] = 1,
    ACTIONS(341), 10,
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
  [2295] = 1,
    ACTIONS(345), 10,
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
  [2308] = 1,
    ACTIONS(347), 10,
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
  [2321] = 1,
    ACTIONS(339), 10,
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
  [2334] = 1,
    ACTIONS(349), 10,
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
  [2347] = 1,
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
  [2360] = 1,
    ACTIONS(343), 10,
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
  [2373] = 1,
    ACTIONS(341), 10,
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
  [2386] = 1,
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
  [2399] = 1,
    ACTIONS(339), 10,
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
  [2412] = 1,
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
  [2425] = 1,
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
  [2438] = 1,
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
  [2451] = 1,
    ACTIONS(351), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2462] = 1,
    ACTIONS(335), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2473] = 7,
    ACTIONS(353), 1,
      anon_sym_SQUOTE,
    ACTIONS(355), 1,
      sym__unquoted_atom,
    STATE(151), 1,
      sym_module,
    STATE(253), 1,
      sym_type,
    STATE(255), 1,
      sym_function,
    STATE(256), 1,
      sym_expression,
    STATE(143), 2,
      sym__atom,
      sym__quoted_atom,
  [2496] = 1,
    ACTIONS(337), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2507] = 1,
    ACTIONS(315), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2518] = 1,
    ACTIONS(319), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2529] = 7,
    ACTIONS(353), 1,
      anon_sym_SQUOTE,
    ACTIONS(355), 1,
      sym__unquoted_atom,
    STATE(151), 1,
      sym_module,
    STATE(208), 1,
      sym_expression,
    STATE(253), 1,
      sym_type,
    STATE(255), 1,
      sym_function,
    STATE(143), 2,
      sym__atom,
      sym__quoted_atom,
  [2552] = 1,
    ACTIONS(321), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2563] = 1,
    ACTIONS(335), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2574] = 1,
    ACTIONS(321), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2585] = 1,
    ACTIONS(341), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2596] = 1,
    ACTIONS(315), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2607] = 7,
    ACTIONS(353), 1,
      anon_sym_SQUOTE,
    ACTIONS(355), 1,
      sym__unquoted_atom,
    STATE(151), 1,
      sym_module,
    STATE(204), 1,
      sym_expression,
    STATE(253), 1,
      sym_type,
    STATE(255), 1,
      sym_function,
    STATE(143), 2,
      sym__atom,
      sym__quoted_atom,
  [2630] = 7,
    ACTIONS(353), 1,
      anon_sym_SQUOTE,
    ACTIONS(355), 1,
      sym__unquoted_atom,
    STATE(151), 1,
      sym_module,
    STATE(213), 1,
      sym_expression,
    STATE(253), 1,
      sym_type,
    STATE(255), 1,
      sym_function,
    STATE(143), 2,
      sym__atom,
      sym__quoted_atom,
  [2653] = 1,
    ACTIONS(343), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2664] = 7,
    ACTIONS(353), 1,
      anon_sym_SQUOTE,
    ACTIONS(355), 1,
      sym__unquoted_atom,
    STATE(151), 1,
      sym_module,
    STATE(207), 1,
      sym_expression,
    STATE(253), 1,
      sym_type,
    STATE(255), 1,
      sym_function,
    STATE(143), 2,
      sym__atom,
      sym__quoted_atom,
  [2687] = 1,
    ACTIONS(319), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2698] = 1,
    ACTIONS(337), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2709] = 1,
    ACTIONS(343), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2720] = 1,
    ACTIONS(351), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2731] = 1,
    ACTIONS(341), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2742] = 4,
    ACTIONS(357), 1,
      aux_sym_argument_token1,
    STATE(254), 1,
      sym_argument,
    STATE(130), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(359), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2758] = 4,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    ACTIONS(363), 1,
      aux_sym_argument_token1,
    STATE(132), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(359), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2774] = 4,
    ACTIONS(357), 1,
      aux_sym_argument_token1,
    STATE(246), 1,
      sym_argument,
    STATE(130), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(359), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2790] = 4,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    ACTIONS(367), 1,
      aux_sym_argument_token1,
    STATE(132), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(370), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2806] = 4,
    ACTIONS(357), 1,
      aux_sym_argument_token1,
    STATE(228), 1,
      sym_argument,
    STATE(130), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(359), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2822] = 4,
    ACTIONS(357), 1,
      aux_sym_argument_token1,
    STATE(227), 1,
      sym_argument,
    STATE(130), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(359), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2838] = 7,
    ACTIONS(373), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(375), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(377), 1,
      sym_language_identifier,
    ACTIONS(379), 1,
      aux_sym_quote_content_token1,
    STATE(196), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(199), 1,
      aux_sym_quote_content_repeat1,
    STATE(241), 1,
      sym_quote_content,
  [2860] = 7,
    ACTIONS(379), 1,
      aux_sym_quote_content_token1,
    ACTIONS(381), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(383), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(385), 1,
      sym_language_identifier,
    STATE(192), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(199), 1,
      aux_sym_quote_content_repeat1,
    STATE(229), 1,
      sym_quote_content,
  [2882] = 7,
    ACTIONS(379), 1,
      aux_sym_quote_content_token1,
    ACTIONS(387), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(389), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(391), 1,
      sym_language_identifier,
    STATE(199), 1,
      aux_sym_quote_content_repeat1,
    STATE(201), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(258), 1,
      sym_quote_content,
  [2904] = 7,
    ACTIONS(379), 1,
      aux_sym_quote_content_token1,
    ACTIONS(393), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(395), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(397), 1,
      sym_language_identifier,
    STATE(193), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(199), 1,
      aux_sym_quote_content_repeat1,
    STATE(225), 1,
      sym_quote_content,
  [2926] = 4,
    ACTIONS(357), 1,
      aux_sym_argument_token1,
    STATE(217), 1,
      sym_argument,
    STATE(130), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(359), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2942] = 4,
    ACTIONS(357), 1,
      aux_sym_argument_token1,
    STATE(240), 1,
      sym_argument,
    STATE(130), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(359), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2958] = 4,
    ACTIONS(357), 1,
      aux_sym_argument_token1,
    STATE(222), 1,
      sym_argument,
    STATE(130), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(359), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2974] = 4,
    ACTIONS(357), 1,
      aux_sym_argument_token1,
    STATE(219), 1,
      sym_argument,
    STATE(130), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(359), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2990] = 3,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COLON,
      sym__terminator,
  [3003] = 1,
    ACTIONS(405), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym__terminator,
  [3012] = 1,
    ACTIONS(407), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym__terminator,
  [3021] = 5,
    ACTIONS(353), 1,
      anon_sym_SQUOTE,
    ACTIONS(409), 1,
      sym__unquoted_atom,
    STATE(216), 1,
      sym_function,
    STATE(242), 1,
      sym_type,
    STATE(212), 2,
      sym__atom,
      sym__quoted_atom,
  [3038] = 5,
    ACTIONS(411), 1,
      anon_sym_LT,
    ACTIONS(413), 1,
      sym__terminator,
    ACTIONS(415), 1,
      sym__word,
    STATE(149), 1,
      aux_sym__author_line_repeat1,
    STATE(257), 1,
      sym_xhtml_tag,
  [3054] = 1,
    ACTIONS(417), 5,
      anon_sym_RBRACE,
      aux_sym_argument_token1,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [3062] = 5,
    ACTIONS(411), 1,
      anon_sym_LT,
    ACTIONS(419), 1,
      sym__terminator,
    ACTIONS(421), 1,
      sym__word,
    STATE(156), 1,
      aux_sym__author_line_repeat1,
    STATE(218), 1,
      sym_xhtml_tag,
  [3078] = 4,
    ACTIONS(423), 1,
      anon_sym_TODO_COLON,
    ACTIONS(425), 1,
      aux_sym_tag_token1,
    ACTIONS(427), 1,
      anon_sym_ATlink,
    STATE(205), 1,
      sym_tag,
  [3091] = 2,
    ACTIONS(431), 1,
      anon_sym_COLON,
    ACTIONS(429), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      sym__terminator,
  [3100] = 3,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    STATE(152), 1,
      aux_sym__quoted_atom_repeat1,
    ACTIONS(435), 2,
      sym__escape_sequence,
      sym__quoted_content,
  [3111] = 3,
    ACTIONS(438), 1,
      anon_sym_SQUOTE,
    STATE(158), 1,
      aux_sym__quoted_atom_repeat1,
    ACTIONS(440), 2,
      sym__escape_sequence,
      sym__quoted_content,
  [3122] = 4,
    ACTIONS(423), 1,
      anon_sym_TODO_COLON,
    ACTIONS(425), 1,
      aux_sym_tag_token1,
    ACTIONS(442), 1,
      anon_sym_ATlink,
    STATE(214), 1,
      sym_tag,
  [3135] = 4,
    ACTIONS(423), 1,
      anon_sym_TODO_COLON,
    ACTIONS(425), 1,
      aux_sym_tag_token1,
    ACTIONS(444), 1,
      anon_sym_ATlink,
    STATE(206), 1,
      sym_tag,
  [3148] = 3,
    ACTIONS(448), 1,
      sym__word,
    STATE(156), 1,
      aux_sym__author_line_repeat1,
    ACTIONS(446), 2,
      anon_sym_LT,
      sym__terminator,
  [3159] = 4,
    ACTIONS(423), 1,
      anon_sym_TODO_COLON,
    ACTIONS(425), 1,
      aux_sym_tag_token1,
    ACTIONS(451), 1,
      anon_sym_ATlink,
    STATE(211), 1,
      sym_tag,
  [3172] = 3,
    ACTIONS(453), 1,
      anon_sym_SQUOTE,
    STATE(152), 1,
      aux_sym__quoted_atom_repeat1,
    ACTIONS(455), 2,
      sym__escape_sequence,
      sym__quoted_content,
  [3183] = 3,
    ACTIONS(457), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(459), 1,
      anon_sym_GT,
    STATE(203), 1,
      aux_sym_xhtml_tag_repeat1,
  [3193] = 3,
    ACTIONS(461), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(463), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(161), 1,
      aux_sym__double_inline_quote_repeat1,
  [3203] = 3,
    ACTIONS(465), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(468), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(161), 1,
      aux_sym__double_inline_quote_repeat1,
  [3213] = 3,
    ACTIONS(470), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(472), 1,
      anon_sym_GT,
    STATE(168), 1,
      aux_sym_xhtml_tag_repeat1,
  [3223] = 3,
    ACTIONS(474), 1,
      aux_sym_quote_content_token1,
    STATE(199), 1,
      aux_sym_quote_content_repeat1,
    STATE(226), 1,
      sym_quote_content,
  [3233] = 3,
    ACTIONS(476), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(478), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(171), 1,
      aux_sym__double_inline_quote_repeat1,
  [3243] = 1,
    ACTIONS(480), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      sym__terminator,
  [3249] = 3,
    ACTIONS(474), 1,
      aux_sym_quote_content_token1,
    STATE(199), 1,
      aux_sym_quote_content_repeat1,
    STATE(243), 1,
      sym_quote_content,
  [3259] = 3,
    ACTIONS(482), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(484), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(184), 1,
      aux_sym__double_inline_quote_repeat1,
  [3269] = 3,
    ACTIONS(486), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(488), 1,
      anon_sym_GT,
    STATE(177), 1,
      aux_sym_xhtml_tag_repeat1,
  [3279] = 3,
    ACTIONS(474), 1,
      aux_sym_quote_content_token1,
    STATE(199), 1,
      aux_sym_quote_content_repeat1,
    STATE(224), 1,
      sym_quote_content,
  [3289] = 1,
    ACTIONS(490), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      sym__terminator,
  [3295] = 3,
    ACTIONS(492), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(494), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(176), 1,
      aux_sym__double_inline_quote_repeat1,
  [3305] = 3,
    ACTIONS(474), 1,
      aux_sym_quote_content_token1,
    STATE(199), 1,
      aux_sym_quote_content_repeat1,
    STATE(239), 1,
      sym_quote_content,
  [3315] = 3,
    ACTIONS(486), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(496), 1,
      anon_sym_GT,
    STATE(177), 1,
      aux_sym_xhtml_tag_repeat1,
  [3325] = 3,
    ACTIONS(498), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(500), 1,
      aux_sym_quote_content_token1,
    STATE(174), 1,
      aux_sym_quote_content_repeat1,
  [3335] = 3,
    ACTIONS(503), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(505), 1,
      anon_sym_GT,
    STATE(173), 1,
      aux_sym_xhtml_tag_repeat1,
  [3345] = 3,
    ACTIONS(468), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(507), 1,
      aux_sym__double_inline_quote_token1,
    STATE(176), 1,
      aux_sym__double_inline_quote_repeat1,
  [3355] = 3,
    ACTIONS(510), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(513), 1,
      anon_sym_GT,
    STATE(177), 1,
      aux_sym_xhtml_tag_repeat1,
  [3365] = 3,
    ACTIONS(492), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(515), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(176), 1,
      aux_sym__double_inline_quote_repeat1,
  [3375] = 3,
    ACTIONS(486), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(517), 1,
      anon_sym_GT,
    STATE(177), 1,
      aux_sym_xhtml_tag_repeat1,
  [3385] = 3,
    ACTIONS(519), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(521), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(178), 1,
      aux_sym__double_inline_quote_repeat1,
  [3395] = 3,
    ACTIONS(523), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(525), 1,
      anon_sym_GT,
    STATE(188), 1,
      aux_sym_xhtml_tag_repeat1,
  [3405] = 3,
    ACTIONS(527), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(529), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(190), 1,
      aux_sym__double_inline_quote_repeat1,
  [3415] = 3,
    ACTIONS(531), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(533), 1,
      anon_sym_GT,
    STATE(179), 1,
      aux_sym_xhtml_tag_repeat1,
  [3425] = 3,
    ACTIONS(461), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(535), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(161), 1,
      aux_sym__double_inline_quote_repeat1,
  [3435] = 3,
    ACTIONS(537), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(539), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(160), 1,
      aux_sym__double_inline_quote_repeat1,
  [3445] = 3,
    ACTIONS(492), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(541), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(176), 1,
      aux_sym__double_inline_quote_repeat1,
  [3455] = 3,
    ACTIONS(486), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(543), 1,
      anon_sym_GT,
    STATE(177), 1,
      aux_sym_xhtml_tag_repeat1,
  [3465] = 3,
    ACTIONS(486), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(545), 1,
      anon_sym_GT,
    STATE(177), 1,
      aux_sym_xhtml_tag_repeat1,
  [3475] = 3,
    ACTIONS(547), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(549), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(186), 1,
      aux_sym__double_inline_quote_repeat1,
  [3485] = 3,
    ACTIONS(492), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(551), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(176), 1,
      aux_sym__double_inline_quote_repeat1,
  [3495] = 3,
    ACTIONS(553), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(555), 1,
      anon_sym_GT,
    STATE(187), 1,
      aux_sym_xhtml_tag_repeat1,
  [3505] = 3,
    ACTIONS(461), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(557), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(161), 1,
      aux_sym__double_inline_quote_repeat1,
  [3515] = 3,
    ACTIONS(461), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(559), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(161), 1,
      aux_sym__double_inline_quote_repeat1,
  [3525] = 3,
    ACTIONS(492), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(561), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(176), 1,
      aux_sym__double_inline_quote_repeat1,
  [3535] = 3,
    ACTIONS(486), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(563), 1,
      anon_sym_GT,
    STATE(177), 1,
      aux_sym_xhtml_tag_repeat1,
  [3545] = 3,
    ACTIONS(461), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(565), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(161), 1,
      aux_sym__double_inline_quote_repeat1,
  [3555] = 3,
    ACTIONS(567), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(569), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(194), 1,
      aux_sym__double_inline_quote_repeat1,
  [3565] = 3,
    ACTIONS(571), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(573), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(202), 1,
      aux_sym__double_inline_quote_repeat1,
  [3575] = 3,
    ACTIONS(575), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(577), 1,
      aux_sym_quote_content_token1,
    STATE(174), 1,
      aux_sym_quote_content_repeat1,
  [3585] = 3,
    ACTIONS(579), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(581), 1,
      anon_sym_GT,
    STATE(195), 1,
      aux_sym_xhtml_tag_repeat1,
  [3595] = 3,
    ACTIONS(461), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(583), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(161), 1,
      aux_sym__double_inline_quote_repeat1,
  [3605] = 3,
    ACTIONS(492), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(585), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(176), 1,
      aux_sym__double_inline_quote_repeat1,
  [3615] = 3,
    ACTIONS(486), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(587), 1,
      anon_sym_GT,
    STATE(177), 1,
      aux_sym_xhtml_tag_repeat1,
  [3625] = 2,
    ACTIONS(589), 1,
      anon_sym_RBRACE,
    ACTIONS(591), 1,
      anon_sym_DOT,
  [3632] = 2,
    ACTIONS(593), 1,
      aux_sym_macro_token1,
    ACTIONS(595), 1,
      anon_sym_RBRACE,
  [3639] = 2,
    ACTIONS(597), 1,
      aux_sym_macro_token1,
    ACTIONS(599), 1,
      anon_sym_RBRACE,
  [3646] = 2,
    ACTIONS(601), 1,
      anon_sym_RBRACE,
    ACTIONS(603), 1,
      anon_sym_DOT,
  [3653] = 2,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    ACTIONS(607), 1,
      anon_sym_DOT,
  [3660] = 2,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    ACTIONS(609), 1,
      aux_sym_macro_token1,
  [3667] = 2,
    ACTIONS(611), 1,
      sym__terminator,
    STATE(22), 1,
      aux_sym_source_repeat1,
  [3674] = 2,
    ACTIONS(613), 1,
      aux_sym_macro_token1,
    ACTIONS(615), 1,
      anon_sym_RBRACE,
  [3681] = 2,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
  [3688] = 2,
    ACTIONS(617), 1,
      anon_sym_RBRACE,
    ACTIONS(619), 1,
      anon_sym_DOT,
  [3695] = 2,
    ACTIONS(621), 1,
      aux_sym_macro_token1,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
  [3702] = 1,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
  [3706] = 1,
    ACTIONS(627), 1,
      anon_sym_SLASH,
  [3710] = 1,
    ACTIONS(629), 1,
      anon_sym_RBRACE,
  [3714] = 1,
    ACTIONS(631), 1,
      sym__terminator,
  [3718] = 1,
    ACTIONS(633), 1,
      anon_sym_RBRACE,
  [3722] = 1,
    ACTIONS(635), 1,
      anon_sym_LT_SLASHem_GT,
  [3726] = 1,
    ACTIONS(637), 1,
      anon_sym_LT_SLASHstrong_GT,
  [3730] = 1,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
  [3734] = 1,
    ACTIONS(641), 1,
      anon_sym_SQUOTE,
  [3738] = 1,
    ACTIONS(643), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3742] = 1,
    ACTIONS(645), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3746] = 1,
    ACTIONS(647), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3750] = 1,
    ACTIONS(649), 1,
      anon_sym_RBRACE,
  [3754] = 1,
    ACTIONS(651), 1,
      anon_sym_RBRACE,
  [3758] = 1,
    ACTIONS(653), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3762] = 1,
    ACTIONS(655), 1,
      anon_sym_SQUOTE,
  [3766] = 1,
    ACTIONS(657), 1,
      anon_sym_LT_SLASHstrong_GT,
  [3770] = 1,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
  [3774] = 1,
    ACTIONS(661), 1,
      anon_sym_LT_SLASHem_GT,
  [3778] = 1,
    ACTIONS(625), 1,
      sym_arity,
  [3782] = 1,
    ACTIONS(663), 1,
      sym__terminator,
  [3786] = 1,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
  [3790] = 1,
    ACTIONS(667), 1,
      anon_sym_SQUOTE,
  [3794] = 1,
    ACTIONS(669), 1,
      sym__word,
  [3798] = 1,
    ACTIONS(671), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3802] = 1,
    ACTIONS(673), 1,
      anon_sym_RBRACE,
  [3806] = 1,
    ACTIONS(675), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3810] = 1,
    ACTIONS(677), 1,
      anon_sym_LPAREN,
  [3814] = 1,
    ACTIONS(679), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3818] = 1,
    ACTIONS(681), 1,
      aux_sym__inline_quote_token1,
  [3822] = 1,
    ACTIONS(683), 1,
      anon_sym_SQUOTE,
  [3826] = 1,
    ACTIONS(685), 1,
      anon_sym_RBRACE,
  [3830] = 1,
    ACTIONS(687), 1,
      sym_arity,
  [3834] = 1,
    ACTIONS(689), 1,
      anon_sym_LT_SLASHstrong_GT,
  [3838] = 1,
    ACTIONS(691), 1,
      anon_sym_LT_SLASHem_GT,
  [3842] = 1,
    ACTIONS(687), 1,
      anon_sym_RPAREN,
  [3846] = 1,
    ACTIONS(693), 1,
      anon_sym_LT_SLASHem_GT,
  [3850] = 1,
    ACTIONS(695), 1,
      aux_sym__inline_quote_token1,
  [3854] = 1,
    ACTIONS(697), 1,
      anon_sym_LPAREN,
  [3858] = 1,
    ACTIONS(699), 1,
      anon_sym_RBRACE,
  [3862] = 1,
    ACTIONS(701), 1,
      anon_sym_SLASH,
  [3866] = 1,
    ACTIONS(703), 1,
      sym__terminator,
  [3870] = 1,
    ACTIONS(705), 1,
      sym__terminator,
  [3874] = 1,
    ACTIONS(707), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3878] = 1,
    ACTIONS(709), 1,
      ts_builtin_sym_end,
  [3882] = 1,
    ACTIONS(711), 1,
      aux_sym__inline_quote_token1,
  [3886] = 1,
    ACTIONS(713), 1,
      anon_sym_LT_SLASHstrong_GT,
  [3890] = 1,
    ACTIONS(715), 1,
      sym__terminator,
  [3894] = 1,
    ACTIONS(717), 1,
      aux_sym__inline_quote_token1,
  [3898] = 1,
    ACTIONS(719), 1,
      sym__terminator,
  [3902] = 1,
    ACTIONS(721), 1,
      aux_sym__inline_quote_token1,
  [3906] = 1,
    ACTIONS(723), 1,
      aux_sym__inline_quote_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 91,
  [SMALL_STATE(4)] = 176,
  [SMALL_STATE(5)] = 261,
  [SMALL_STATE(6)] = 346,
  [SMALL_STATE(7)] = 395,
  [SMALL_STATE(8)] = 444,
  [SMALL_STATE(9)] = 493,
  [SMALL_STATE(10)] = 542,
  [SMALL_STATE(11)] = 591,
  [SMALL_STATE(12)] = 640,
  [SMALL_STATE(13)] = 689,
  [SMALL_STATE(14)] = 738,
  [SMALL_STATE(15)] = 787,
  [SMALL_STATE(16)] = 836,
  [SMALL_STATE(17)] = 885,
  [SMALL_STATE(18)] = 934,
  [SMALL_STATE(19)] = 980,
  [SMALL_STATE(20)] = 1026,
  [SMALL_STATE(21)] = 1072,
  [SMALL_STATE(22)] = 1101,
  [SMALL_STATE(23)] = 1130,
  [SMALL_STATE(24)] = 1161,
  [SMALL_STATE(25)] = 1192,
  [SMALL_STATE(26)] = 1223,
  [SMALL_STATE(27)] = 1254,
  [SMALL_STATE(28)] = 1285,
  [SMALL_STATE(29)] = 1316,
  [SMALL_STATE(30)] = 1347,
  [SMALL_STATE(31)] = 1378,
  [SMALL_STATE(32)] = 1409,
  [SMALL_STATE(33)] = 1440,
  [SMALL_STATE(34)] = 1471,
  [SMALL_STATE(35)] = 1502,
  [SMALL_STATE(36)] = 1515,
  [SMALL_STATE(37)] = 1528,
  [SMALL_STATE(38)] = 1541,
  [SMALL_STATE(39)] = 1554,
  [SMALL_STATE(40)] = 1567,
  [SMALL_STATE(41)] = 1580,
  [SMALL_STATE(42)] = 1593,
  [SMALL_STATE(43)] = 1606,
  [SMALL_STATE(44)] = 1619,
  [SMALL_STATE(45)] = 1632,
  [SMALL_STATE(46)] = 1645,
  [SMALL_STATE(47)] = 1658,
  [SMALL_STATE(48)] = 1671,
  [SMALL_STATE(49)] = 1684,
  [SMALL_STATE(50)] = 1697,
  [SMALL_STATE(51)] = 1710,
  [SMALL_STATE(52)] = 1723,
  [SMALL_STATE(53)] = 1736,
  [SMALL_STATE(54)] = 1749,
  [SMALL_STATE(55)] = 1762,
  [SMALL_STATE(56)] = 1775,
  [SMALL_STATE(57)] = 1788,
  [SMALL_STATE(58)] = 1801,
  [SMALL_STATE(59)] = 1814,
  [SMALL_STATE(60)] = 1827,
  [SMALL_STATE(61)] = 1840,
  [SMALL_STATE(62)] = 1853,
  [SMALL_STATE(63)] = 1866,
  [SMALL_STATE(64)] = 1879,
  [SMALL_STATE(65)] = 1892,
  [SMALL_STATE(66)] = 1905,
  [SMALL_STATE(67)] = 1918,
  [SMALL_STATE(68)] = 1931,
  [SMALL_STATE(69)] = 1944,
  [SMALL_STATE(70)] = 1957,
  [SMALL_STATE(71)] = 1970,
  [SMALL_STATE(72)] = 1983,
  [SMALL_STATE(73)] = 1996,
  [SMALL_STATE(74)] = 2009,
  [SMALL_STATE(75)] = 2022,
  [SMALL_STATE(76)] = 2035,
  [SMALL_STATE(77)] = 2048,
  [SMALL_STATE(78)] = 2061,
  [SMALL_STATE(79)] = 2074,
  [SMALL_STATE(80)] = 2087,
  [SMALL_STATE(81)] = 2100,
  [SMALL_STATE(82)] = 2113,
  [SMALL_STATE(83)] = 2126,
  [SMALL_STATE(84)] = 2139,
  [SMALL_STATE(85)] = 2152,
  [SMALL_STATE(86)] = 2165,
  [SMALL_STATE(87)] = 2178,
  [SMALL_STATE(88)] = 2191,
  [SMALL_STATE(89)] = 2204,
  [SMALL_STATE(90)] = 2217,
  [SMALL_STATE(91)] = 2230,
  [SMALL_STATE(92)] = 2243,
  [SMALL_STATE(93)] = 2256,
  [SMALL_STATE(94)] = 2269,
  [SMALL_STATE(95)] = 2282,
  [SMALL_STATE(96)] = 2295,
  [SMALL_STATE(97)] = 2308,
  [SMALL_STATE(98)] = 2321,
  [SMALL_STATE(99)] = 2334,
  [SMALL_STATE(100)] = 2347,
  [SMALL_STATE(101)] = 2360,
  [SMALL_STATE(102)] = 2373,
  [SMALL_STATE(103)] = 2386,
  [SMALL_STATE(104)] = 2399,
  [SMALL_STATE(105)] = 2412,
  [SMALL_STATE(106)] = 2425,
  [SMALL_STATE(107)] = 2438,
  [SMALL_STATE(108)] = 2451,
  [SMALL_STATE(109)] = 2462,
  [SMALL_STATE(110)] = 2473,
  [SMALL_STATE(111)] = 2496,
  [SMALL_STATE(112)] = 2507,
  [SMALL_STATE(113)] = 2518,
  [SMALL_STATE(114)] = 2529,
  [SMALL_STATE(115)] = 2552,
  [SMALL_STATE(116)] = 2563,
  [SMALL_STATE(117)] = 2574,
  [SMALL_STATE(118)] = 2585,
  [SMALL_STATE(119)] = 2596,
  [SMALL_STATE(120)] = 2607,
  [SMALL_STATE(121)] = 2630,
  [SMALL_STATE(122)] = 2653,
  [SMALL_STATE(123)] = 2664,
  [SMALL_STATE(124)] = 2687,
  [SMALL_STATE(125)] = 2698,
  [SMALL_STATE(126)] = 2709,
  [SMALL_STATE(127)] = 2720,
  [SMALL_STATE(128)] = 2731,
  [SMALL_STATE(129)] = 2742,
  [SMALL_STATE(130)] = 2758,
  [SMALL_STATE(131)] = 2774,
  [SMALL_STATE(132)] = 2790,
  [SMALL_STATE(133)] = 2806,
  [SMALL_STATE(134)] = 2822,
  [SMALL_STATE(135)] = 2838,
  [SMALL_STATE(136)] = 2860,
  [SMALL_STATE(137)] = 2882,
  [SMALL_STATE(138)] = 2904,
  [SMALL_STATE(139)] = 2926,
  [SMALL_STATE(140)] = 2942,
  [SMALL_STATE(141)] = 2958,
  [SMALL_STATE(142)] = 2974,
  [SMALL_STATE(143)] = 2990,
  [SMALL_STATE(144)] = 3003,
  [SMALL_STATE(145)] = 3012,
  [SMALL_STATE(146)] = 3021,
  [SMALL_STATE(147)] = 3038,
  [SMALL_STATE(148)] = 3054,
  [SMALL_STATE(149)] = 3062,
  [SMALL_STATE(150)] = 3078,
  [SMALL_STATE(151)] = 3091,
  [SMALL_STATE(152)] = 3100,
  [SMALL_STATE(153)] = 3111,
  [SMALL_STATE(154)] = 3122,
  [SMALL_STATE(155)] = 3135,
  [SMALL_STATE(156)] = 3148,
  [SMALL_STATE(157)] = 3159,
  [SMALL_STATE(158)] = 3172,
  [SMALL_STATE(159)] = 3183,
  [SMALL_STATE(160)] = 3193,
  [SMALL_STATE(161)] = 3203,
  [SMALL_STATE(162)] = 3213,
  [SMALL_STATE(163)] = 3223,
  [SMALL_STATE(164)] = 3233,
  [SMALL_STATE(165)] = 3243,
  [SMALL_STATE(166)] = 3249,
  [SMALL_STATE(167)] = 3259,
  [SMALL_STATE(168)] = 3269,
  [SMALL_STATE(169)] = 3279,
  [SMALL_STATE(170)] = 3289,
  [SMALL_STATE(171)] = 3295,
  [SMALL_STATE(172)] = 3305,
  [SMALL_STATE(173)] = 3315,
  [SMALL_STATE(174)] = 3325,
  [SMALL_STATE(175)] = 3335,
  [SMALL_STATE(176)] = 3345,
  [SMALL_STATE(177)] = 3355,
  [SMALL_STATE(178)] = 3365,
  [SMALL_STATE(179)] = 3375,
  [SMALL_STATE(180)] = 3385,
  [SMALL_STATE(181)] = 3395,
  [SMALL_STATE(182)] = 3405,
  [SMALL_STATE(183)] = 3415,
  [SMALL_STATE(184)] = 3425,
  [SMALL_STATE(185)] = 3435,
  [SMALL_STATE(186)] = 3445,
  [SMALL_STATE(187)] = 3455,
  [SMALL_STATE(188)] = 3465,
  [SMALL_STATE(189)] = 3475,
  [SMALL_STATE(190)] = 3485,
  [SMALL_STATE(191)] = 3495,
  [SMALL_STATE(192)] = 3505,
  [SMALL_STATE(193)] = 3515,
  [SMALL_STATE(194)] = 3525,
  [SMALL_STATE(195)] = 3535,
  [SMALL_STATE(196)] = 3545,
  [SMALL_STATE(197)] = 3555,
  [SMALL_STATE(198)] = 3565,
  [SMALL_STATE(199)] = 3575,
  [SMALL_STATE(200)] = 3585,
  [SMALL_STATE(201)] = 3595,
  [SMALL_STATE(202)] = 3605,
  [SMALL_STATE(203)] = 3615,
  [SMALL_STATE(204)] = 3625,
  [SMALL_STATE(205)] = 3632,
  [SMALL_STATE(206)] = 3639,
  [SMALL_STATE(207)] = 3646,
  [SMALL_STATE(208)] = 3653,
  [SMALL_STATE(209)] = 3660,
  [SMALL_STATE(210)] = 3667,
  [SMALL_STATE(211)] = 3674,
  [SMALL_STATE(212)] = 3681,
  [SMALL_STATE(213)] = 3688,
  [SMALL_STATE(214)] = 3695,
  [SMALL_STATE(215)] = 3702,
  [SMALL_STATE(216)] = 3706,
  [SMALL_STATE(217)] = 3710,
  [SMALL_STATE(218)] = 3714,
  [SMALL_STATE(219)] = 3718,
  [SMALL_STATE(220)] = 3722,
  [SMALL_STATE(221)] = 3726,
  [SMALL_STATE(222)] = 3730,
  [SMALL_STATE(223)] = 3734,
  [SMALL_STATE(224)] = 3738,
  [SMALL_STATE(225)] = 3742,
  [SMALL_STATE(226)] = 3746,
  [SMALL_STATE(227)] = 3750,
  [SMALL_STATE(228)] = 3754,
  [SMALL_STATE(229)] = 3758,
  [SMALL_STATE(230)] = 3762,
  [SMALL_STATE(231)] = 3766,
  [SMALL_STATE(232)] = 3770,
  [SMALL_STATE(233)] = 3774,
  [SMALL_STATE(234)] = 3778,
  [SMALL_STATE(235)] = 3782,
  [SMALL_STATE(236)] = 3786,
  [SMALL_STATE(237)] = 3790,
  [SMALL_STATE(238)] = 3794,
  [SMALL_STATE(239)] = 3798,
  [SMALL_STATE(240)] = 3802,
  [SMALL_STATE(241)] = 3806,
  [SMALL_STATE(242)] = 3810,
  [SMALL_STATE(243)] = 3814,
  [SMALL_STATE(244)] = 3818,
  [SMALL_STATE(245)] = 3822,
  [SMALL_STATE(246)] = 3826,
  [SMALL_STATE(247)] = 3830,
  [SMALL_STATE(248)] = 3834,
  [SMALL_STATE(249)] = 3838,
  [SMALL_STATE(250)] = 3842,
  [SMALL_STATE(251)] = 3846,
  [SMALL_STATE(252)] = 3850,
  [SMALL_STATE(253)] = 3854,
  [SMALL_STATE(254)] = 3858,
  [SMALL_STATE(255)] = 3862,
  [SMALL_STATE(256)] = 3866,
  [SMALL_STATE(257)] = 3870,
  [SMALL_STATE(258)] = 3874,
  [SMALL_STATE(259)] = 3878,
  [SMALL_STATE(260)] = 3882,
  [SMALL_STATE(261)] = 3886,
  [SMALL_STATE(262)] = 3890,
  [SMALL_STATE(263)] = 3894,
  [SMALL_STATE(264)] = 3898,
  [SMALL_STATE(265)] = 3902,
  [SMALL_STATE(266)] = 3906,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(147),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(110),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(238),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(18),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(19),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(20),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(157),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(36),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(27),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(26),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(162),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(63),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(263),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(164),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(135),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__param_line, 2, .production_id = 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__param_line, 3, .production_id = 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_line, 2),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(155),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(24),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(25),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(191),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(40),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(260),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(197),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(138),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(150),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(29),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(31),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(200),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(75),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(252),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(198),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(137),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(157),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(27),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(26),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(162),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(63),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(263),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(164),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(135),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(154),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(30),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(32),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(159),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(88),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(244),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(182),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(136),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_line, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_line, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(21),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(175),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(23),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(266),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(180),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(185),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xhtml_tag_content, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(183),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(33),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(265),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(189),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(167),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_inline_quote, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xhtml_tag, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_quote, 1),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_line, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_macro, 6, .production_id = 7),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 5),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_quote, 4, .production_id = 6),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_macro, 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_inline_quote, 3),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_inline_quote, 2),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_quote, 3, .production_id = 5),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_inline_quote, 3),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_quote, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 3),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_em_xhtml_tag, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_strong_xhtml_tag, 3),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xhtml_tag, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(132),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(148),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_atom, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_atom, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__author_line, 1),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_escape, 1),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__author_line, 2),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_atom_repeat1, 2),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_atom_repeat1, 2), SHIFT_REPEAT(152),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__author_line_repeat1, 2),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__author_line_repeat1, 2), SHIFT_REPEAT(156),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_inline_quote_repeat1, 2), SHIFT_REPEAT(161),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_inline_quote_repeat1, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 5),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quote_content_repeat1, 2),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_content_repeat1, 2), SHIFT_REPEAT(174),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_inline_quote_repeat1, 2), SHIFT_REPEAT(176),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xhtml_tag_repeat1, 2), SHIFT_REPEAT(177),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_repeat1, 2),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote_content, 1),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__author_line, 3, .production_id = 3),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, .production_id = 4),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__see_line, 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__author_line, 2, .production_id = 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [709] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xhtml_tag, 2),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xhtml_tag, 3),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

#define CB_IF "if"
#define CB_WHILE "while"
#define CB_DEF "def"
#define CB_FOR "for"
#define CB_FUNC "func"
#define CB_ROUTINE "sub"
#define CB_LABEL "lbl"
#define CB_GOTOLBL "goto"
#define CB_AND '&'
#define CB_OR '|'
#define CB_NOT '!'
#define CB_EQU "=="
#define CB_NEQ "~="
#define CB_SET '='
#define CB_ CMP_LESSTHNOREQ "<="
#define CB_CMP_MORETHNOREQ ">="
#define CB_CMP_LESSTHN '<'
#define CB_CMP_MORETHN '>'
#define CB_OP_ADD '+'
#define CB_OP_SUB '-'
#define CB_OP_MUL '*'
#define CB_OP_DIV '/'
#define CB_TYPE_INT "num"
#define CB_TYPE_STR "string"
#define CB_TYPE_CHR "char"
#define CB_TYPE_FLT "float"
#define CB_TYPE_BOOL "bool"
#define CB_TYPE_UBYTE "byte"
#define CB_CMNT '\''

struct cbEnv{


};

struct cbPrim {
  int h;
};

enum cbTypes {cb_num, cb_bool, cb_flt, cb_ubyte, cb_char, cb_str, cb_ar_num, cb_ar_bool, cb_ar_flt, cb_ar_ubyte, cb_ar_char, cb_ar_str}; 


#if !defined(_CPROJ_TYPES_)
#define _CPROJ_TYPES_

typedef char cproj_char_t;
typedef unsigned char cproj_byte_t;

typedef struct cproj_test_struct_s {
	cproj_char_t chr;
	cproj_byte_t byte;
} cproj_test_struct_t;

cproj_test_struct_t get_cproj_defaults();

#endif

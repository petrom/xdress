#include "cproj_types.h"

static cproj_test_struct_t test_struct = {
	.chr = 42,
	.byte = 13,
};

cproj_test_struct_t get_cproj_defaults()
{
	return test_struct;
}

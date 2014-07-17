from __future__ import print_function
import sys

from nose.tools import assert_equal, assert_true
from numpy.testing import assert_array_equal, assert_array_almost_equal

from cproj import cproj_types

def test_type_substr_in_header():
    x = cproj_types.cproj_test_struct_s()
    assert_true(x is not None)
    x.chr = chr(42)
    x.byte = chr(13)
    assert_equal(x.chr, chr(42))
    y = cproj_types.get_cproj_defaults()
    assert_equal(x.chr, y.chr)
    assert_equal(x.byte, y.byte)

################################################
#                 WARNING!                     #
# This file has been auto-generated by xdress. #
# Do not modify!!!                             #
#                                              #
#                                              #
#                    Come on, guys. I mean it! #
################################################
"""
"""
cimport cpp_hoover_b
cimport dtypes
cimport hoover
cimport hoover_b
from mypack cimport cpp_hoover
from mypack cimport cpp_hoover_b

import dtypes
import hoover



cdef class B(hoover.A):
    """no docstring for {'tarbase': 'hoover_b', 'tarname': 'B', 'language': 'c++', 'srcname': 'B', 'sidecars': (), 'incfiles': ('hoover.h',), 'srcfiles': ('src/hoover.h', 'src/hoover.cpp')}, please file a bug report!"""



    # constuctors
    def __cinit__(self, *args, **kwargs):
        self._inst = NULL
        self._free_inst = True

        # cached property defaults


    def __init__(self, ):
        """B(self, )
        """
        self._inst = new cpp_hoover_b.B()
    
    

    # attributes
    property z:
        """no docstring for z, please file a bug report!"""
        def __get__(self):
            return int((<cpp_hoover_b.B *> self._inst).z)
    
        def __set__(self, value):
            (<cpp_hoover_b.B *> self._inst).z = <int> value
    
    
    # methods
    

    pass



def do_nothing_ab(a, b):
    """do_nothing_ab(a, b)
    no docstring for do_nothing_ab, please file a bug report!"""
    cdef hoover.A a_proxy
    cdef B b_proxy
    a_proxy = <hoover.A> a
    b_proxy = <B> b
    cpp_hoover_b.do_nothing_ab((<cpp_hoover.A *> a_proxy._inst)[0], (<cpp_hoover_b.B *> b_proxy._inst)[0])






{'cpppxd_footer': '', 'pyx_header': '', 'pxd_header': '', 'pxd_footer': '', 'cpppxd_header': '', 'pyx_footer': ''}

#include "unity.h"
#include "Triangle.h"


char *getTriangleName(int side1, int side2, int side3);





void setUp(void)

{

}



void tearDown(void)

{

}



void test_getTriangleName_given_2_2_3_should_return_isoscales(void)

{

 char *name;

 name = getTriangleName(2,2,3);

 UnityAssertEqualString((const char*)("isoscales"), (const char*)(name), (((void *)0)), (_U_UINT)19);

}



void test_getTriangleName_given_2_3_3_should_return_isoscales(void)

{

 char *name;

 name = getTriangleName(2,3,3);

 UnityAssertEqualString((const char*)("isoscales"), (const char*)(name), (((void *)0)), (_U_UINT)26);

}



void test_getTriangleName_given_3_2_3_should_return_isoscales(void)

{

 char *name;

 name = getTriangleName(3,2,3);

 UnityAssertEqualString((const char*)("isoscales"), (const char*)(name), (((void *)0)), (_U_UINT)33);

}





void test_getTriangleName_given_1_2_3_should_return_scalene(void)

{

 char *name;

 name = getTriangleName(1,2,3);

 UnityAssertEqualString((const char*)("scalene"), (const char*)(name), (((void *)0)), (_U_UINT)41);

}



void test_getTriangleName_given_3_3_3_should_return_equilateral(void)

{

 char *name;

 name = getTriangleName(3,3,3);

 UnityAssertEqualString((const char*)("equailateral"), (const char*)(name), (((void *)0)), (_U_UINT)48);

}



void test_getTriangleName_given_0_3_3_should_return_invalid(void)

{

 char *name;

 name = getTriangleName(0,3,3);

 UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)55);

}



void test_getTriangleName_given_3_0_3_should_return_invalid(void)

{

 char *name;

 name = getTriangleName(3,0,3);

 UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)62);

}



void test_getTriangleName_given_3_3_0_should_return_invalid(void)

{

 char *name;

 name = getTriangleName(3,3,0);

 UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)69);

}



void test_getTriangleName_given_neg2_3_3_should_return_invalid(void)

{

 char *name;

 name = getTriangleName(-2,3,3);

 UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)76);

}



void test_getTriangleName_given_3_neg2_3_should_return_invalid(void)

{

 char *name;

 name = getTriangleName(3,-2,3);

 UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)83);

}



void test_getTriangleName_given_3_3_neg2_should_return_invalid(void)

{

 char *name;

 name = getTriangleName(3,3,-2);

 UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)90);

}



void test_getTriangleName_given_1_1_3_should_return_invalid(void)

{

 char *name;

 name = getTriangleName(1,1,3);

 UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)97);

}



void test_getTriangleName_given_1_3_1_should_return_invalid(void)

{

 char *name;

 name = getTriangleName(1,3,1);

 UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)104);

}



void test_getTriangleName_given_3_1_1_should_return_invalid(void)

{

 char *name;

 name = getTriangleName(3,1,1);

 UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)111);

}

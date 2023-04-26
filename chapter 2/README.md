# Chapter 2 Variables and Basic Types

## Section 2.1 - Primitive Built-in Types

There are two arithmetic types: integral types and floating-point types.  The standard sizes of arithmetic types can only guarantee minimum size across various compilers.  Types may be signed or unsigned.  Signed types can hold zero, positive, and negative numbers.  Unsigned types can hold zero and positive numbers.  char, short, int, long, and long long are integer types.  float, double, and long double are the three floating point types.  bool takes the value of either ture or false.

| Type Name | Bytes | Range of Values
bool | 1 | true or false
short | 2 | -32768 to 32767
unsigned short | 2 | 0 to 65535
int | 4 | -2147483648 to 2147483647
unsigned int | 4 | 0 to 4294967295
long | 4 | -2147483648 to 2147483647
unsigned long | 4 | 0 to 4294967295
long long | 8 | -9223372036854775808 to 9223372036854775807
unsigned long long | 8 | 0 to 18446744073709551615
char | 1 | -128 to 127
signed char | 1 | -128 to 127
unsigned char | 1 | 0 to 255
float | 4 | -3.4e38 to 3.4e38
double | 8 | =1.7e308 to 1.7e308

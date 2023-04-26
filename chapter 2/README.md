# Chapter 2 Variables and Basic Types

## Section 2.1 - Primitive Built-in Types

There are two arithmetic types: integral types and floating-point types.  The standard sizes of arithmetic types can only guarantee minimum size across various compilers.  Types may be signed or unsigned.  Signed types can hold zero, positive, and negative numbers.  Unsigned types can hold zero and positive numbers.  char, short, int, long, and long long are integer types.  float, double, and long double are the three floating point types.  bool takes the value of either ture or false.

Type conversions occur automatically when using an object of one type where an object of another type is expected.  When a floating-point value is assigned to an object of integral type, the value is truncated.  If an out-of-range value is assigned to an object of unsigned type, the result is the remainder of the value modulo the number of values the target type can hold.

| Type Name | Bytes | Range of Values
--- | --- | ---
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
double | 8 | -1.7e308 to 1.7e308

Nonprintable characters are not printed to the screen.  These nonprintable characters are represented by escape sequences.

| Definition | Call
--- | ---
newline | \n
horizontal tab | \t
vertical tab | \v
backspace | \b
backslash | \.\
carriage return | \r
form feed | \f
single quote | \.'
double quote | \."
question mark | \?
alert (bell) | \a

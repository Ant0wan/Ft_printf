# Ft_printf [![42](https://i.imgur.com/9NXfcit.jpg)](i.imgur.com/9NXfcit.jpg)

An implementation of the printf(3) function [a 42 project].

The aims of this project were to get confortable with **string formatting** and discover **variadic functions**. 

---

## Description

Prototype: `int ft_printf(const char *restrict format, ...)`

Include: `#include "libftprintf.h"`

Lib: `libftprintf.a`

It behaves almost as identical to the original MacOS version on the conversions ft_printf can perform.

### Conversion specifiers

Ft_printf handles basic conversion specifiers. A character specifies the type of conversion.

| Conversion specifiers | Description |
| --- | --- |
| `d`, `i` | The `int` argument is converted to signed decimal notation. The precision, if any, gives the minimum number of digits that must appear; if the converted value requires fewer digits, it is padded on the left with zeros. The default precision is 1. When 0 is printed with an explicit precision 0, the output is empty. |
| `o`, `u`, `x`, `X` | The `unsigned int` argument is converted to `unsigned octal` (o), `unsigned decimal` (u), or `unsigned hexadecimal` (x and  X)  notation. The  letters abcdef are used for x conversions; the letters ABCDEF are used for X conversions. The precision, if any, gives the minimum number of digits that must appear; if the converted value requires fewer digits, it is padded on the left with zeros. The default precision is 1. When 0 is printed with an explicit precision 0, the output is empty. |
| `c` | If no `l` modifier is present, the int argument is converted to an `unsigned char`, and the resulting character is written. If an `l` modifier is present, the `wchar_t` (wide character) argument is converted to a multibyte sequence with a conversion state starting in the initial state, and the resulting multibyte string is written. |
| `s` | If  no `l` modifier is present: the `const char *` argument is expected to be a pointer to an array of character type (pointer to a string). Characters from the array are written up to (but  not  including) a terminating null  byte ('\0'); if a precision is specified, no more than the number specified are written. If a precision is given, no null byte need be present; if the precision is not specified, or is greater than the size of the array, the array must contain a terminating null byte. If an `l` modifier is present: the `const wchar_t *` argument is expected to be a pointer to an array of wide characters. Wide characters from the array are converted to multibyte characters with a conversion state starting in the initial state before the first wide character), up to and including a terminating null wide character. The resulting multibyte characters are written up to (but not including) the terminating null byte. If a precision is specified, no more bytes than the number specified are written, but no partial multibyte characters are written. Note that the precision determines the number of bytes written, not the number of wide characters or screen positions. The array must contain a terminating null wide character, unless a precision is given and it is so small that the number of bytes  written exceeds it before the end of the array is reached. |
| `C` | Synonym for `lc`. |
| `S` | Synonym for `ls`. |
| `p` | The `void *` pointer argument is printed in hexadecimal (as if by `%#x` or `%#lx`). |
| `n` | The number of characters written so far is stored into the integer pointed to by the corresponding argument. That argument shall be an `int *`, or variant whose size matches the (optionally) supplied integer length modifier. No argument is converted. The behavior is undefined if the conversion specification includes any flags, a field width, or a precision. |
| `%` | A '%' is written. No argument is converted. The complete conversion specification is '%%'. |


### Flag characters

The character % is followed by zero or more of the following flags:

| Flag characters | Description |
| --- | --- |
| `#` | The value should be converted to an "alternate form". For `o` conversions, the first character of the output string is made zero (by prefixing a `0` if it was not zero already). For `x` and `X` conversions, a nonzero result has the string `"0x"` (or `"0X"` for `X` conversions) prepended to it. For other conversions, the result is undefined. |
| `0` | The  value should be zero padded. For `d`, `i`, `o`, `u`, `x` and `X` conversions, the converted value is padded on the left with zeros rather than blanks. If the `0` and `-` flags both appear, the `0` flag is ignored. If a precision is given with a numeric conversion (`d`, `i`, `o`, `u`, `x`, and `X`), the `0` flag is ignored. For other conversions, the behavior is undefined. |
| `-` | The converted value is to be left adjusted on the field boundary. (The default is right justification.) The converted value  is padded on the right with blanks, rather than on the left with blanks or zeros. A `-` over‐rides a `0` if both are given. |

### Length modifier ###

Length modifier can be added between `%` and the specifier above-mentionned:

| Length modifier | Description |
| --- | --- |
| `hh` | A following integer conversion corresponds to a `signed char` or `unsigned char` argument, or a following n conversion corresponds to a pointer to a signed char argument. |
| `h` | A following integer conversion corresponds to a `short int` or `unsigned short int` argument, or a following n conversion corresponds to a pointer to a short int argument. |
| `l` | A following integer conversion corresponds to a `long int` or `unsigned long int` argument, or a following n conversion corresponds to a pointer to a long int argument, or a following c conversion corresponds to a wint_t argument, or a following s conversion corresponds to a pointer to wchar_t argument. |
| `ll` | A following integer conversion corresponds to a `long long int` or `unsigned long long int` argument, or a following n conversion corresponds to a pointer to a long long int argument. |
| `j` | A following integer conversion corresponds to an `intmax_t` or `uintmax_t` argument, or a following n conversion corresponds to a pointer to an intmax_t argument. |
| `z` | A following integer conversion corresponds to a `size_t` or `ssize_t` argument, or a following n conversion corresponds to a pointer to a size_t argument. |
| `t` | A following integer conversion corresponds to a `ptrdiff_t` argument, or a following n conversion corresponds to a pointer to a ptrdiff_t argument. |


- Ft_printf handles `precision` and `field width`.

- Unit tests has been developed and can be found here:

- Authorized functions:

    ```
    write
    opendir
    readdir
    closedir
    stat
    lstat
    getpwuid
    getgrgid
    listxattr
    getxattr
    time
    ctime
    readlink
    malloc
    free
    perror
    strerror
    exit
    ```

---

## Usage

- Compiling the libraries

```
git clone https://github.com/Ant0wan/Ft_printf && cd Ft_printf && make
```

- Include libftprintf.a to your project and include ft_printf prototype.

```
ft_printf("%2$*1$d", width, num);
```

# Ft_printf [![42](https://i.imgur.com/9NXfcit.jpg)](i.imgur.com/9NXfcit.jpg)

An implementation of the printf(3) function [a 42 project].

The aims of this project were to get confortable with **string formatting** and discover **variadic functions**. 

---

## Description

Prototype: `int ft_printf(const char *restrict format, ...)`

Include: `#include "libftprintf.h"`

Lib: `libftprintf.a`

It behaves almost as identical to the original MacOS version on the conversions ft_printf can perform.

The conversions handled by ft_printf are:
```shell=

```

- The character % is followed by zero or more of the following flags:

| Flag characters | Description |
| --- | --- |
| `#` | The value should be converted to an "alternate form". For `o` conversions, the first character of the output string is made zero (by prefixing a `0` if it was not zero already). For `x` and `X` conversions, a nonzero result has the string `"0x"` (or `"0X"` for `X` conversions) prepended to it. For other conversions, the result is undefined. |
| `0` | The  value should be zero padded. For `d`, `i`, `o`, `u`, `x` and `X` conversions, the converted value is padded on the left with zeros rather than blanks. If the `0` and `-` flags both appear, the `0` flag is ignored. If a precision is given with a numeric conversion (`d`, `i`, `o`, `u`, `x`, and `X`), the `0` flag is ignored. For other conversions, the behavior is undefined. |
| `-` | The converted value is to be left adjusted on the field boundary. (The default is right justification.) The converted value  is padded on the right with blanks, rather than on the left with blanks or zeros. A `-` over‐rides a `0` if both are given. |

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


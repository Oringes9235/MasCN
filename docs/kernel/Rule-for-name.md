# Rule for name

## Function code file name

The name of function code file to be used as `<function>-[attribute].c/.asm/...`
* <function> -- File to achieve the function.
* [attribute] -- Properties that implement the function.
* .c/.asm/... -- File suffix.

Such as:

  implementation function `get CPU message` also `display message on screen` and `written by C`

Code file name --> `lscpu-disp.c`

## Master code file

The main file to be `master-[section-name].c/.asm/...`
* [section-name] -- The name of the part to which the main file belongs must be the same as the name of the folder in which it resides.
* .c/.asm/... -- File suffix

Such as:

  Create a `master file` in a folder called `kernel` by C

Master file name: `master-kernel.c`

## Makedown file

Makedown files are mainly used as comment files and description files.

Just indicate the subject of the content.


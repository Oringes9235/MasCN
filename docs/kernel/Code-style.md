# Code style

## The indentation

The indentation in the code must be the size of `four Spaces`.

Like :

```c
void indentation()
{
    codes;
    codes;
----
}
```

## Code at the beginning

At the beginning of code file, the date of the last update to be added

```c
/**
 * @date: 2022.09.01
 **/
```

## More comment prefix

Specify the type of comment in your code.
A single comment can contain multiple tags ( `like: @name ...` ).

```c
/**
 * @name: <name of last updateto be added>
 * @description: <description of code or function>
 * @date: <date of create or update file>
 * @may-wrong: <Possible errors> 
 * @bug: <have errors>
 * @Copyright: <copyright of this source code or file>
 * /
```

## Names of functions, variables and pointers

If the expression is a superposition of `single` or `more words`, capitalize the first letter of each word.

EXAMPLE OF DEFINING :

```c
void FunctionForTest();

int VariableForTest;

char *PointerForTest;
```

## Conditional judgment statement

To facilitate the reading of the code.

No matter how many lines of `child code` are under `the parent`, enclose them with curly braces.

Correct writing :

```c
if (Conditions == true)
{
    return true;
}
```

Wrong writing :

```c
if (Conditions == true)
    return true;

        &

if (Conditions == true) {
    return true;
}
```

Each conditional choice is apart with the `previous choice`.

Correct writing :

```c
if (Conditions == 1)
{
    /*code*/
}
else if (Conditions == 2)
{
    /*code*/
}
else
{
    /*code*/
}
```

Wrong writing :

```c
if (Conditions == 1)
{
    /*code*/
} else if (Conditions == 2) {
    /*code*/
} else {
    /*code*/
}
```

## Definition and invocation of function parameters

When the use of a `single` or `multiple` parameters is involved in a function, it should be written in separate lines and separated by `,` .

Correct writing :

```c
void FunForTest(
    int argc,
    char *argv[]
)
{
    /*code*/
}

FunForTest(
    int Num,
    char *Msg[]
);
```

Wrong writing :

```c
void FunForTest(int argc, char *argv[])
{
    /*code*/
}

FunForTest(int Num, char *Msg[]);
```

## Define the macro

When defining a `macro`, all letters are capitalized, separated by `_` in the middle.

Correct writing :

```c
#define TEST_MACRO
```

Wrong writing :

```c
#define test_macro

#define test-macro

#define testMacro
```

## Array

The separator `,` of the values in the array is followed by `a space`.

Correct writing :

```c
char *Array[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' };
```

Wrong writing :

```c
char *Array[] = {a,b,c,d,e,f,g,h};

char *Array = {1,2,3,4,5,6,7,8,};
```
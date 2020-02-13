# Basic Dev Master Question List

## ***Algorithms***

## In computer science, what term is used for the notation to classify algorithms according to how their running time or space requirements grow as the input size grows?

KSAs: 389

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Capacity measure | Big O notation | Complexity rating | Weighted measure |

Click [here](questions/Basic_Dev/algorithms-big-O/README.md) to see the answers.

## ***Assembly***

## In Assembly, assume the rsi register contains the address of an array.  How do you access the data in the first element of the array?

KSAs: 574, 575, 576, 644, 1166, 1172

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| *rsi | rsi[0] | [rsi] | rsi->[0] |

Click [here](questions/Basic_Dev/assembly-advanced-types-and-concepts_1/README.md) to see the answers.

```nasm
1 | mov eax, 12
2 | mov ebx, 4
3 | add eax, ebx
4 | inc ebx
5 | inc eax
6 | shr eax, 1
7 | 
```

## In the above Assembly code, what does eax contain after all the operations?

KSAs: 573, 574, 576, 578, 579, 580, 597, 655, 1167, 1172

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 17 | 16 | 8 | 18 |

Click [here](questions/Basic_Dev/assembly-arithmetic-instructions_1/README.md) to see the answers.

## Which register in Assembly is the default register used for a counter?

KSAs: 574, 576, 596, 655, 1166, 1172

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| rax | rcx | rdx | rdi |

Click [here](questions/Basic_Dev/assembly-arithmetic-instructions_2/README.md) to see the answers.

```nasm
1 | mov rdx, 0
2 | mov rax, 10
3 | mov rcx, 2
4 | div rcx
5 | 
```

## In the above Assembly code, what does rax contain after all the operations?

KSAs: 574, 576, 578, 579, 580, 596, 655, 1166, 1167, 1172

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 10 | 0 | 5 | 1 |

Click [here](questions/Basic_Dev/assembly-arithmetic-instructions_3/README.md) to see the answers.

```nasm
1 | move rax, 5
2 | xor rax, rax
3 | 
```

## In the above Assembly code, what does rax contain after all the operations?

KSAs: 574, 576, 578, 579, 580, 596, 655, 1166, 1167, 1172

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 5 | 10 | 1 | 0 |

Click [here](questions/Basic_Dev/assembly-arithmetic-instructions_4/README.md) to see the answers.

## In Assembly, which of the following is the proper way to add 1 to the value stored in the rax register?

KSAs: 574, 579, 580, 596, 655, 1166, 1167, 1172

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| mov rax, rax+1 | rax++ | add rax, 1 | add rax+1 |

Click [here](questions/Basic_Dev/assembly-arithmetic-instructions_5/README.md) to see the answers.

## The primary opcode to increment a number in a register by 1 is:

KSAs: 580, 1166

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| ++ | inc | dec | mov |

Click [here](questions/Basic_Dev/assembly-arithmetic-instructions_6/README.md) to see the answers.

```nasm
1 | movzx rax, cl
2 | 
```

## In the above Assembly code, what's contained in the leftmost byte of the rax register?

KSAs: 574, 576, 578, 579, 580, 596, 598, 599, 600, 655, 1166, 1167, 1172

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| a copy of the cl contents | residual data | all zeroes | address of cl |

Click [here](questions/Basic_Dev/assembly-basics-and-memory_1/README.md) to see the answers.

## In Assembly, what instruction places a value on the stack?

KSAs: 575, 578, 652, 1166

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| add | insert | push | stack |

Click [here](questions/Basic_Dev/assembly-basics-and-memory_2/README.md) to see the answers.

## In Assembly, what instruction is used to check if two register's contents are equal?

KSAs: 578, 579, 580, 1166

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| cmp | eq | == | shr |

Click [here](questions/Basic_Dev/assembly-basics-and-memory_3/README.md) to see the answers.

## Which of the following is a general purpose register?

KSAs: 573, 574, 576, 1166, 1167, 1172

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| ebp | rri | esp | rdx |

Click [here](questions/Basic_Dev/assembly-basics-and-memory_4/README.md) to see the answers.

## Which assembly instruction's primary function is to advance the instruction pointer to the next instruction and can be used for padding/alignment and timing reasons?

KSAs: 578, 580, 647, 1166

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| nop | xor | cmp | pad |

Click [here](questions/Basic_Dev/assembly-basics-and-memory_5/README.md) to see the answers.

## What term is used for byte ordering where the least significant bytes are stored first in a memory location?

KSAs: 576, 582, 1166

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| last in first out | little endian | big endian | first in first out |

Click [here](questions/Basic_Dev/assembly-basics-and-memory_6/README.md) to see the answers.

## Which is the fastest memory component to access?

KSAs: 576, 671

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| solid state drive | RAM | cache | registers |

Click [here](questions/Basic_Dev/assembly-basics-and-memory_7/README.md) to see the answers.

## In Assembly, to put data into a registry, you use the _____ opcode.

KSAs: 576, 580, 1166

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| ins | mov | equ | asn |

Click [here](questions/Basic_Dev/assembly-basics-and-memory_8/README.md) to see the answers.

## In Assembly, for a 64-bit register rdx, its 32-bit sub register is ____.

KSAs: 574, 576, 596, 597, 598, 600, 1166, 1167, 1172

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| eax | dx | edx | rdl |

Click [here](questions/Basic_Dev/assembly-basics-and-memory_9/README.md) to see the answers.

```nasm
1 | mov rax, 0xc0ffee
2 | 
```

## The above Assembly code stores a memory address in the rax register.  Which instruction would store data at that address?

KSAs: 574, 576, 578, 579, 580, 596, 1166, 1167, 1172

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| mov rax, 100 | mov [rax], 100 | add rax, 100 | mov 0xc0ffee, 100 |

Click [here](questions/Basic_Dev/assembly-computer-basics_1/README.md) to see the answers.

## What is the smallest unit of data a computer can offer?

KSAs: 642, 1166

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| binary | byte | bit | segment |

Click [here](questions/Basic_Dev/assembly-computer-basics_4/README.md) to see the answers.

## Which of the following commands calls the kernel in Assembly programming?

KSAs: 578, 579, 580, 662, 668, 1166, 1168, 1170

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| mov 0x80 | int 0x80 | call 0x80 | sys_exit |

Click [here](questions/Basic_Dev/assembly-control-flow_1/README.md) to see the answers.

```nasm
1  | .label1:
2  |     xor rax, rax
3  |     inc rax
4  |     mov rcx, rax
5  |     jmp .label2
6  |     mov rsp, rax
7  | .label2:
8  |     shl rcx, 3
9  |     xchg rcx, rax
10 |     ret
11 | 
```

## In the above Assembly code, which of the following is true?

KSAs: 574, 576, 578, 579, 580, 654, 661, 1166, 1167, 1172

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| The line mov rsp, rax is never executed | label1 and label2 are incorrectly defined | shl cannot be executed on the rcx register | jmp can only be used for label1 |

Click [here](questions/Basic_Dev/assembly-control-flow_2/README.md) to see the answers.

## The text section of an Assembly program must begin with what declaration?

KSAs: 647, 655, 1166, 1172

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| _begin | start | section | global _start |

Click [here](questions/Basic_Dev/assembly-creating-asm_1/README.md) to see the answers.

## In Assembly, which of the following is a valid "high" 8-bit sub register?

KSAs: 576, 599, 600, 1166

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| ah | al | ax | eax |

Click [here](questions/Basic_Dev/assembly-data-types-and-gdb-part-2_1/README.md) to see the answers.

## What is the smallest addressable unit in an X86 architecture?

KSAs: 573, 576, 642, 1166

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| word | byte | bit | segment |

Click [here](questions/Basic_Dev/assembly-data-types-and-gdb-part-2_2/README.md) to see the answers.

## Which of the following is a valid example of declaring and instantiating a variable in Assembly programming?

KSAs: 576, 578, 642, 1166

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| age DW 12345 | age int 12345 | age  DW=12345 | age 12345 |

Click [here](questions/Basic_Dev/assembly-data-types_1/README.md) to see the answers.

## This flag is set if the result of an add would have set bit 33 (in x86), or bit 65 (in x86_64).

KSAs: 573, 574, 596, 597, 659, 1166, 1167

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Zero Flag (ZF) | Carry Flag (CF) | Sign Flag (SF) | Bit Flag (BF) |

Click [here](questions/Basic_Dev/assembly-flags_1/README.md) to see the answers.

## In Assembly with a 32-bit architecture, what happens when an add or sub operation causes the 33rd bit to be modified?

KSAs: 573, 597, 580, 659, 1166

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| The Carry Flag is set | the rax register is set to 1 | the unsigned number becomes signed | a virtual 64-bit register is created |

Click [here](questions/Basic_Dev/assembly-flags_2/README.md) to see the answers.

## The last statement in an Assembly source program should be:

KSAs: 647, 655, 1166

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| stop | end | return | exit |

Click [here](questions/Basic_Dev/assembly-last-statement/README.md) to see the answers.

```nasm
1 | mov rax, 1
2 | shl rax, 1
3 | shl rax, 3
4 | 
```

## In the above Assembly code, what's contained in the rax register when finished?

KSAs: 574, 576, 578, 579, 580, 596, 655, 1166, 1167, 1172

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 16 | 8 | 1 | 2 |

Click [here](questions/Basic_Dev/assembly-negative-bitwise_1/README.md) to see the answers.

```nasm
1 | mov rax, 2
2 | shr rax, 2
3 | shl rax, 2
4 | 
```

## In the above Assembly code, what's contained in the rax register when finished?

KSAs: 574, 576, 578, 579, 580, 596, 655, 1166, 1167, 1172

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 2 | 1 | 0 | 4 |

Click [here](questions/Basic_Dev/assembly-negative-bitwise_2/README.md) to see the answers.

```nasm
1 | mov rax, 1
2 | mov rcx, 5
3 | 
4 | or rax, rcx
5 | 
```

## In the above Assembly code, what's contained in the rax register when finished?

KSAs: 574, 576, 578, 579, 580, 596, 655, 1166, 1167, 1172

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 1 | 5 | 6 | 0 |

Click [here](questions/Basic_Dev/assembly-negative-bitwise_3/README.md) to see the answers.

```nasm
1 | mov rax, 1
2 | mov rcx, 5
3 | and rax, rcx
4 | 
```

## In Assembly, given the above what will rax contain in binary?

KSAs: 574, 576, 578, 579, 580, 596, 655, 1166, 1167, 1172

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 00000001 | 00000100 | 00000110 | 00000101 |

Click [here](questions/Basic_Dev/assembly-negative-numbers-and-bitwise_1/README.md) to see the answers.

## Instructions like MOV or ADD is called a(n) __________ in Assembly.

KSAs: 578, 580, 1166

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Command | Interrupt | Opcode | Instruction |

Click [here](questions/Basic_Dev/assembly-op-code/README.md) to see the answers.

## When working with the stack in Assembly, which of the following are correct?

KSAs: 575, 576, 1166

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| The stack grows from low memory addresses to high memory addresses | The stack memory addresses are randomly selected by the OS | The stack grows from high memory addresses to low memory addresses | The stack is a first in first out memory structure |

Click [here](questions/Basic_Dev/assembly-stack/README.md) to see the answers.

## The assembler stores all the names and their corresponding values in the _____.

KSAs: 647

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Special Purpose Register | Symbol Table | Value Map Set | Stack |

Click [here](questions/Basic_Dev/assembly-stores-names/README.md) to see the answers.

## The values 5, 34, 32, 12 are pushed to a data structure and when popped they return 12, 32, 34, 5. What data structure does this represent?

KSAs: 575, 645, 1166

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| queue | vector | tree | stack |

Click [here](questions/Basic_Dev/assembly-the-stack_1/README.md) to see the answers.

## ***C Programming***

```c
1 | #define R 10
2 | #define C 20
3 | 
4 | int* p [R][C];
5 | 
```

## In the above C code snippet, what is p?

KSAs: 255, 263, 264

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| a two-dimensional array of int pointers | a pointer to a two-dimensional array of int | a pointer to heap memory of 200 bytes | none of the above |

Click [here](questions/Basic_Dev/c-2d-array/README.md) to see the answers.

```c
1 | int a = 10/3;
2 | printf("%d",a);
3 | 
```

## What is the output of the above C code snippet?

KSAs: 255

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 3.33 | 3.0 | 3 | 0 |

Click [here](questions/Basic_Dev/c-arithmetic-operators_1/README.md) to see the answers.

```c
1 | char str1[5] = {'H', 'e', 'l', 'l', 'o'};
2 | char *str2 = "Hello";
3 | 
```

## What is the difference between str1 and str2 if they are used as arguments to the printf() function with a string format?

KSAs: 263, 350

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| str1 may display additional text | str1 will have commas in between the letters when passed as an argument to printf() | str1 will only print out the first letter, H | There is no difference between them |

Click [here](questions/Basic_Dev/c-array-strings_1/README.md) to see the answers.

```c
1 | int inputBuffer [256] = {0};
2 | 
```

## What is occuring in the C program snippet above?

KSAs: 263, 1338

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Zero is placed only in the first element of the array. | Zero is placed in all elements of the array. | null is being placed in all elements of the array. | Number 0 through 255 are being placed in the array. |

Click [here](questions/Basic_Dev/c-arrays_1/README.md) to see the answers.

```c
1 | int x = 5;
2 | if(x = 3)
3 |    printf("it is equal");
4 | else
5 |    printf("it is not equal");
6 | 
```

## Given the above C code snippet, what is the problem?

KSAs: 266

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 3 is being assigned to x instead of compared. | if statements require curly braces if there is an else. | printing strings require a %s specifier. | the code is logically correct. |

Click [here](questions/Basic_Dev/c-assign-vs-equal_1/README.md) to see the answers.

```c
1 | struct Node
2 | {
3 |    int data; 
4 |     struct Node *left;
5 |    struct Node *right;
6 | };
7 |
```

## What common data structure would you use the above structure for in C programming?

KSAs: 405

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Linked List | Binary Search Tree | Double Linked List | Vector |

Click [here](questions/Basic_Dev/c-binary-search-tree/README.md) to see the answers.

```c
1 | int x = 2; 
2 | x <<= 1;
```

## What is the value of x after the C program snippet above executes?

KSAs: 291

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 2 | 1 | 4 | 0 |

Click [here](questions/Basic_Dev/c-bit-shift-left/README.md) to see the answers.

```c
1 | printf("%d", 12 & 12);
2 | 
```

## What will be printed in the above code?

KSAs: 287

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 0 | 24 | 12 | 1212 |

Click [here](questions/Basic_Dev/c-bitwise-operators_1/README.md) to see the answers.

```c
1 | int x = 1;
2 | 
3 | x = x>>2;
4 | 
5 | printf( "%d ", x );
6 | 
```

## What is the output of the above C code snippet?

KSAs: 292

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 4 | 2 | 0 | 1 |

Click [here](questions/Basic_Dev/c-bitwise-operators_2/README.md) to see the answers.

```c
1  | int x = 0;
2  | switch(x) 
3  | {
4  |    case 0: 
5  |      printf("Hello");
6  |    case 1: 
7  |      printf("hi"); 
8  |      break;
9  | }
10 | 
```

## What is the output of the above code snippet?

KSAs: 266

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Hello | Hi | Hellohi | Nothing prints |

Click [here](questions/Basic_Dev/c-conditional-statements_1/README.md) to see the answers.

## Which of the following is a vaild ASCII char declaration in C?

KSAs: 310, 350

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| char x = '\\n' | char x = "A"; | char x = -3; | None of the above |

Click [here](questions/Basic_Dev/c-data-types_1/README.md) to see the answers.

```c
1 | char *ptr1;
2 | printf("%d %d", sizeof(ptr1), sizeof(*ptr1));
3 | 
```

## What is the output of the above C code snippet? //This question is compiled on 32 bit DEV-C++

KSAs: 255, 262

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 1 1 | 2 2 | 4 1 | 4 4 |

Click [here](questions/Basic_Dev/c-demo-lab-1-2.c_1/README.md) to see the answers.

## Which of the following operator, known as a dereference, can be used to access value at address stored in a pointer variable?

KSAs: 262

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| & | # | * | -> |

Click [here](questions/Basic_Dev/c-dereference/README.md) to see the answers.

```c
1 | unsigned int x = 0xabcd1234;
2 | char *c = (char*) &x;
3 | printf("%x", *c)
4 | 
```

## In the above C code snippet, what is printed assuming the machine is big endian?

KSAs: 267

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| ab | cd | 12 | 34 |

Click [here](questions/Basic_Dev/c-detect-endianness/README.md) to see the answers.

```c
1 | const int a = 10;
2 | printf("%d",++a);
3 | 
```

## What is the output of the above C code snippet?

KSAs: 261

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 11 | 10 | Compiler error | 0 |

Click [here](questions/Basic_Dev/c-directives_1/README.md) to see the answers.

## Which of the following is executed by the preprocessor in C?

KSAs: 264

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| #include<stdio.h> | return 0 | void main (int argc , char ** argv) | None of above |

Click [here](questions/Basic_Dev/c-directives_2/README.md) to see the answers.

## To utilize a header file like stdio.h in C programming, you use the __________ preprocessor directive.

KSAs: 264

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| #define | #using | #import | #include |

Click [here](questions/Basic_Dev/c-directives_3/README.md) to see the answers.

```c
1 | #define R 10
2 | #define C 20
3 | 
4 | int* p [R][C];
5 | 
```

## In the above C code snippet, what is p?

KSAs: 14, 24, 28

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| a two-dimensional array of int pointers | a pointer to a two-dimensional array of int | a pointer to heap memory of 200 bytes | none of the above |

Click [here](questions/Basic_Dev/c-directives_4/README.md) to see the answers.

```c
1 | enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun}; 
2 | printf(Fri); 
```

## What is printed in the C program snippet above?

KSAs: 348

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Fri | 4 | 0 | 5 |

Click [here](questions/Basic_Dev/c-enum-values/README.md) to see the answers.

```c
1 | 
2 | int a = 10.5;
3 | printf("%d",a);
4 | 
```

## What is the output of the above C code snippet?

KSAs: 255

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 10.5 | 10 | 0 | 5 |

Click [here](questions/Basic_Dev/c-formatted-io_1/README.md) to see the answers.

```c
1 | double addValues(double, double);
2 | 
```

## The above C code is an example of a:

KSAs: 256

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| function | method | prototype | procedure |

Click [here](questions/Basic_Dev/c-function-basics_1/README.md) to see the answers.

```c
1  | void main()
2  | {
3  |    fun(3);
4  | }
5  | 
6  | void fun(int n)
7  | {
8  |    for(int i = n;i > 0; i--)
9  |      printf("GeeksQuiz");
10 | }
11 | 
```

## Why does the above program cause a compile error?

KSAs: 256

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| The code has a syntax error in for loop header. | fun in the main function has yet to be defined. | fun is an invalid function name. | n is not initialized in the for loop header. |

Click [here](questions/Basic_Dev/c-functions_1/README.md) to see the answers.


---

### Begin C-GROUP_1 Questions

Please refer to the code snippet below for the following 14 question(s).

```c
1  | #include <stdio.h>
2  | #include <stdlib.h>
3  | 
4  | #define y 10
5  | 
6  | float getQuotient(int, int);
7  | 
8  | int main()
9  | {
10 |     int x = rand();
11 | 
12 |     float z = getQuotient(x,y);
13 |     
14 |     float* p = (float *) malloc(y * sizeof(float));
15 |     
16 |     p[0] = z;
17 |     
18 |     printf("Result is %f", *p);
19 |     
20 |     return 0;
21 | }
22 | 
23 | float getQuotient(int numerator, int denominator)
24 | {
25 |     return (float)numerator/denominator;
26 | }
27 | 
```

## Which of the following lines of code contain a type cast?

KSAs: 255, 265

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 4 | 12 | 25 | 23 |

Click [here](questions/Basic_Dev/c-group_1/c-casting_1/README.md) to see the answers.

## Which line of code contains a preprocessor directive that creates a named constant?

KSAs: 264

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 2 | 10 | 4 | 16 |

Click [here](questions/Basic_Dev/c-group_1/c-directives_1/README.md) to see the answers.

## Which line of code executes the getQuotient function?

KSAs: 256

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 6 | 12 | 23 | 25 |

Click [here](questions/Basic_Dev/c-group_1/c-functions_1/README.md) to see the answers.

## Which line of code contains a function prototype?

KSAs: 256

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 10 | 6 | 12 | 19 |

Click [here](questions/Basic_Dev/c-group_1/c-functions_2/README.md) to see the answers.

## What is the return type of the getQuotient function?

KSAs: 253, 255, 256, 259

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| float | int | void | NULL |

Click [here](questions/Basic_Dev/c-group_1/c-functions_3/README.md) to see the answers.

## What would happen if on line 12 you passed two floats instead of two ints?

KSAs: 255, 256, 257, 265

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| The values passed would be floating point numbers | The values passed would be truncated and passed as integers | The values would be rounded to the nearest int and passed | Compile error |

Click [here](questions/Basic_Dev/c-group_1/c-functions_4/README.md) to see the answers.

## Which line of code places some data in heap memory?

KSAs: 295, 296

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 10 | 12 | 16 | 18 |

Click [here](questions/Basic_Dev/c-group_1/c-heap_1/README.md) to see the answers.

## Which line of code is allocating heap memory?

KSAs: 295, 296

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 10 | 12 | 14 | 27 |

Click [here](questions/Basic_Dev/c-group_1/c-heap_2/README.md) to see the answers.

## For memory management, what is missing?

KSAs: 262, 1338

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| p[0] = NULL; | p = NULL; | delete *p; | free(p) |

Click [here](questions/Basic_Dev/c-group_1/c-mem-manage_1/README.md) to see the answers.

## How many elements are in the array pointed to by p?

KSAs: 262, 263

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 10 | 40 | 80 | 8 |

Click [here](questions/Basic_Dev/c-group_1/c-pointers-arrays_1/README.md) to see the answers.

## Which of the following variables contain a memory address?

KSAs: 262

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| p | z | y | All the above |

Click [here](questions/Basic_Dev/c-group_1/c-pointers_1/README.md) to see the answers.

## On which line of code is the pointer dereferenced?

KSAs: 262

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 16 | 18 | 12 | 14 |

Click [here](questions/Basic_Dev/c-group_1/c-pointers_2/README.md) to see the answers.

## How many local variables are created in the main function?

KSAs: 252, 256, 258

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 0 | 2 | 3 | 4 |

Click [here](questions/Basic_Dev/c-group_1/c-scope_1/README.md) to see the answers.

## Which of the following variables declare memory in stack memory?

KSAs: 294

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| z | p | denominator | All the above |

Click [here](questions/Basic_Dev/c-group_1/c-stack_1/README.md) to see the answers.


### End C-GROUP_1 Questions

---

## Which of these data structures has a constant search time for the worst case scenario?

KSAs: 263, 269, 407

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Array | Linked list | Hash tables | Stack |

Click [here](questions/Basic_Dev/c-hashing/README.md) to see the answers.

## How do you prevent multiple dependencies from causing compilation errors?

KSAs: 254, 260, 264

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Only #include source files | #include will overwrite the previous #include if they are the same file. | Use the preprocessor directives #ifndef, #define, and #endif to check if a header file was already included | Only one file can be #include into a file. |

Click [here](questions/Basic_Dev/c-header-files_1/README.md) to see the answers.

## What should not be included in C header files?

KSAs: 260

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Function prototype | Include guards | Type and struct definitions | Function implementation |

Click [here](questions/Basic_Dev/c-header-files_2/README.md) to see the answers.

## Which of the following are valid loop keywords in C?

KSAs: 261, 266

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| for | do while | repeat | both a and b |

Click [here](questions/Basic_Dev/c-loops_1/README.md) to see the answers.

```c
1 | int i,j;
2 | for(i=0,j=0;i<5;i++)
3 | {
4 |    printf("%d%d--",i,j);
5 | }
6 | 
```

## What is the output of the above C code snippet?

KSAs: 266

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 0--01--12--23--34-- | 00--10--20--30--40-- | Nothing is printed | 00--01--02--03--04-- |

Click [here](questions/Basic_Dev/c-loops_2/README.md) to see the answers.

## Which of the following is true about the 'main' function in C progamming?

KSAs: 252

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| There can be mulitple 'main' functions in a program. | The 'main' function does not have a return type. | All execution begins and ends in the 'main' function. | 'main' is an optional function to have in a program. |

Click [here](questions/Basic_Dev/c-main-function/README.md) to see the answers.

```c
1 | int *x = malloc(sizeof(int));
2 | 
```

## In the above statement, where is the memory pointed to by x allocated?

KSAs: 262, 293, 294, 295, 296

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Stack | Registry | Heap | Cache |

Click [here](questions/Basic_Dev/c-memory-management_1/README.md) to see the answers.

## What C command is use to allocate memory dynamically?

KSAs: 296

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| malloc | alloc | new | memcpy |

Click [here](questions/Basic_Dev/c-memory-management_2/README.md) to see the answers.

```c
1 | int x [10];
2 | int *y = malloc(sizeof(x));
3 | 
```

## Given the above C code snippet and given an int is 4 bytes, how many bytes are being allocated for the y pointer?

KSAs: 262, 263

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 4 | 40 | 80 | 10 |

Click [here](questions/Basic_Dev/c-memory-management_3/README.md) to see the answers.

```c
1 | int x [10];
2 | int *y = malloc(sizeof(x));
3 | 
```

## Given the above C code snippet, where is the memory being allocated with the malloc command?

KSAs: 295

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| heap | stack | cache | registers |

Click [here](questions/Basic_Dev/c-memory-management_4/README.md) to see the answers.

```c
1 | int a = 10;
2 | int *c = &a;
3 | printf("%d",c);
4 | 
```

## What is printed for the above code?

KSAs: 255, 262

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 10 | the address of a | the address of c | Nothing |

Click [here](questions/Basic_Dev/c-pointer-arrays_1/README.md) to see the answers.

```c
1 | char * Text = "This is a test"; 
2 | Text += 2;
3 | 
```

## Given the above code, what is the output if *Text is printed?

KSAs: 255, 262

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| is is a test | i | an address | This is a test |

Click [here](questions/Basic_Dev/c-pointer-arrays_2/README.md) to see the answers.

```c
1 | struct site
2 | {
3 |    char name[10];
4 |    int no_of_pages;
5 | };
6 | struct site *ptr;
7 | printf("%d ", ptr->no_of_pages);
8 | printf("%s", ptr->name);
9 | 
```

## Why would you receive a compile error for the above snippet of code?

KSAs: 262

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| There is a semi-colon after the struct declaration. | struct pointers do no support the -> operator. | ptr hasn't been initialized. | pointers cannot be declared for a struct type. |

Click [here](questions/Basic_Dev/c-pointers-and-arrays_1/README.md) to see the answers.

```c
1  | void main()
2  | {
3  |    double scores[20];
4  |    fun(scores);
5  | }
6  | 
7  | void fun(double s[])
8  | {
9  |    // do something here
10 | }
11 | 
```

## For the above C code snippet, what is contained in s?

KSAs: 262, 263

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| First value of the score array | Base address of the score array | Entire contents of score array | A copy of the entire score array |

Click [here](questions/Basic_Dev/c-pointers-and-arrays_2/README.md) to see the answers.

```c
1 | 
2 | char *p = NULL;
3 | 
4 | printf("%c ", *p);
5 | 
```

## Why does the above C code snippet cause a run-time error?

KSAs: 262

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| You cannot initialize a pointer to NULL. | null should be all lower case. | You cannot dereference a NULL pointer | %c is not a valid specifier |

Click [here](questions/Basic_Dev/c-pointers-and-arrays_3/README.md) to see the answers.

```c
1 | int values [] = {1, 2, 3, 4, 5};
2 | 
3 | printf("%d",*values);
4 | 
```

## Given the above C snippet, what is the output or result?

KSAs: 262, 263

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| syntax error | run-time error | 1 is printed | prints address of array |

Click [here](questions/Basic_Dev/c-pointers-and-arrays_4/README.md) to see the answers.

```c
1 | int x = 10;
2 | int *y = &x;
3 | (*y)++;
4 | x++;
5 | printf("%d\n",*y);
6 | printf("%d\n",x);
7 | 
```

## Given the above C code snippet, what is the output or result?

KSAs: 255, 262

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 11<br>11 | 12<br>12 | 11<br>12 | 12<br>11 |

Click [here](questions/Basic_Dev/c-pointers_1/README.md) to see the answers.

```c
1 | int *ptr1 = malloc(sizeof(int));
2 | 
```

## Where is ptr1 stored?

KSAs: 262, 294, 295, 296

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Cache | The stack | The heap | None of the above |

Click [here](questions/Basic_Dev/c-stack-based-memory_1/README.md) to see the answers.

```c
1 | int x = 2; 
2 | 
```

## Where is the memory for x being allocated in the above C snippet?

KSAs: 294

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| registers | heap | disk | stack |

Click [here](questions/Basic_Dev/c-stack-memory/README.md) to see the answers.

## In C programming, what command releases memory that was created on the heap?

KSAs: 295, 296

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| memfree | free | dealloc | delete |

Click [here](questions/Basic_Dev/c-standard-library-functions_1/README.md) to see the answers.

```c
1 | int x = 2; 
2 | 
```

## When is the memory for x being allocated in the above C snippet?

KSAs: 296

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Dynamically, at run time | Statically, at compile time | Virtually, when requested | Preliminary, just before accessed |

Click [here](questions/Basic_Dev/c-static-allocation/README.md) to see the answers.

```c
1 | char name[]="Cppbuz";
2 | int len;
3 | int size;
4 | len = strlen(name);
5 | size = sizeof(name);
6 | printf("%d,%d",len,size);
7 | 
```

## What is the output of the above C code snippet?

KSAs: 255, 263, 555

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 6,6 | 6,7 | 7,7 | 0,0 |

Click [here](questions/Basic_Dev/c-strings_1/README.md) to see the answers.

```c
1 | char s[20] = "Hello\0Hi";
2 | 
3 | printf("%s", s);
4 | 
```

## What is the output of the above C code snippet?

KSAs: 350

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Hello\\0Hi | Hello Hi | Hello | Hi |

Click [here](questions/Basic_Dev/c-strings_2/README.md) to see the answers.

```c
1 | struct score{
2 |    int a;
3 | };
4 | 
```

## For the above struct declaration, which is the proper way to declare a variable for the struct?

KSAs: 346

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| int score; | struct score myScore; | score.a = 100; | score myScore; |

Click [here](questions/Basic_Dev/c-struct-declaration_1/README.md) to see the answers.

```c
1 | struct score{
2 |    int a;
3 | };
4 | 
```

## For the above struct declaration, which is the proper way to declare a variable for the struct?

KSAs: 14, 24, 28

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| int score; | struct score myScore; | score.a = 100; | score myScore; |

Click [here](questions/Basic_Dev/c-struct-declaration_2/README.md) to see the answers.

```c
1 | struct person {
2 |   char *name;
3 |   int age;
4 | } artist;
5 | 
```

## Given the above C code snippet, how would you initialize name in the struct person?

KSAs: 262, 346, 350

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| name.artist = "Picaso"; | person.name = "Picaso"; | artist->name = "Picaso"; | artist.name = "Picaso"; |

Click [here](questions/Basic_Dev/c-struct-format_1/README.md) to see the answers.

```c
1 | struct myGrade{
2 |    int a;
3 | };
4 | 
5 | struct myGrade grade1={1};
6 | struct myGrade grade2 = grade1;
7 | 
```

## In the above C code snippet, what is happening on the last line?

KSAs: 346

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| grade2 is created as an alias to grade1 | grade2 is a pointer pointing to grade1 | the contents of grade1 is being used to create and initialize grade2 | grade2 is replacing grade1 in stack memory |

Click [here](questions/Basic_Dev/c-structs_1/README.md) to see the answers.

```c
1  | struct Person {
2  |    char name[20];
3  |    int age;
4  | }p;
5  | 
6  | void main()
7  | {
8  |    struct Person * p=(struct Person p)malloc(sizeof(Person));
9  |    // Here...
10 | }
11 | 
```

## Given the above code, how would you assign a value to name in the Person struct object?

KSAs: 262, 346

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Person->name = "Ted" | p.name = "Ted" | p->name = "Ted" | Person.name = "Ted" |

Click [here](questions/Basic_Dev/c-structs_2/README.md) to see the answers.

```c
1 | int x = 10;
2 | int y = 3;
3 | 
4 | float z = (float)x/y;
5 | 
```

## Why is a cast necessary in the above code snippet?

KSAs: 255, 265

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| because int cannot be assigned to float variables | otherwise floating point precision would be lost in the division | float casting is required for int division | to reduce the length of the division result |

Click [here](questions/Basic_Dev/c-type-conversions_1/README.md) to see the answers.

```c
1 | typedef unsigned int counter;
2 | 
```

## What does this code do?

KSAs: 349

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Creates an unsigned int named counter. | Creates a new type named counter that acts like an unsigned int. | Creates a variable named counter that has no type defined until runtime | Creates a new struct that can only hold unsigned int |

Click [here](questions/Basic_Dev/c-typedef_1/README.md) to see the answers.

## Which of the following symbols are permitted within an identifier name?

KSAs: 14, 24, 28

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| $ | @ | _ | . |

Click [here](questions/Basic_Dev/c-variable-names_1/README.md) to see the answers.

## ***Networking***

## This protocol is similar to DNS because of the way it maps layer 3 to layer 2 addresses.

KSAs: 218, 223, 225, 1294, 1296, 1298

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| UDP | HTTP | ARP | IPV4 |

Click [here](questions/Basic_Dev/networking-arp_1/README.md) to see the answers.

## Which class of IPV4 addresses have the first bit set to 0 and first octet in range of 1 - 127?

KSAs: 229, 232

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Class A | Class B | Class C | Class D |

Click [here](questions/Basic_Dev/networking-class-A-address/README.md) to see the answers.

## The Logical Link Control (LLC) layer is a sub-layer to which Open System Interconnection (OSI) layer?

KSAs: 218, 1298

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Data Link | Network | Session | Physical |

Click [here](questions/Basic_Dev/networking-data-link-layer/README.md) to see the answers.

## Upon bootup, a particular network device was configured with 0.0.0.0 so it asked for and received an IP from the ___.

KSAs: 223, 225, 228, 238, 1294, 1296, 1303

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Router | DNS Server | ARP Server | DHCP server |

Click [here](questions/Basic_Dev/networking-dhcp_1/README.md) to see the answers.

## What allows Bob to enter 'www.example.com' into his browser instead of 8.8.8.8 to view a website?

KSAs: 225, 1296

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| DNS Servers | ARP Servers | TCP Servers | DHCP Servers |

Click [here](questions/Basic_Dev/networking-dns-servers_1/README.md) to see the answers.

## This protocol follows the classic client-server model with its stateless sessions typically consisting of: 1) a client establishing a TCP connection, 2) a client sending a request and then waits for a response, and 3) a server sending a response to the client's request.

KSAs: 217, 223, 224, 226, 1294, 1295, 1297

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| hypertext transfer protocol | user datagram protocol | simple mail transfer protocol | address resolution protocol |

Click [here](questions/Basic_Dev/networking-http_1/README.md) to see the answers.

## A server sends a SYN-ACK to a client's SYN request. This is step 2 of a 3-way process of what communication protocol?

KSAs: 216, 1298

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| File Transfer Protocol (FTP) | Transmission Control Protocol (TCP) | Open Systems Interconnection (OSI) | Dynamic Host Configuration Protocol (DHCP) |

Click [here](questions/Basic_Dev/networking-intro-to-tcp_1/README.md) to see the answers.

## An IPV4 octet's number ranges from:

KSAs: 229, 232

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 1 to 254 | 0 to 196 | 10 to 255 | 0 to 255 |

Click [here](questions/Basic_Dev/networking-ipv4-addresses_1/README.md) to see the answers.

## The size of an IPv6 address differs from an IPv4 address because it has ___ compared to IPv4's ___?

KSAs: 229, 230, 232, 233

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 32 bits, 128 bits | 128 bits, 32 bits | 64 bits, 32 bits | 100 bits, 64 bits |

Click [here](questions/Basic_Dev/networking-ipv6-addresses_1/README.md) to see the answers.

## Which of the following are valid IPV6 addresses?

KSAs: 230, 233

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 2001:0db8:0000:0000:0000:ff00:0042:8329 | 2001:db8:0:0:0:ff00:42:8329 | 2001:db8::ff00:42:8329 | All of the above |

Click [here](questions/Basic_Dev/networking-ipv6-addresses-2/README.md) to see the answers.

## In networking, what Layer 2 device connects two independent physical networks, does not perform error checking and does not have a buffer?

KSAs: 218, 238, 1298

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Hub | Bridge | Switch | Repeater |

Click [here](questions/Basic_Dev/networking-layer-2-devices_1/README.md) to see the answers.

## In networking, which Python function converts 32-bit positive integers from network to host byte order?

KSAs: 240

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| socket.ntohl(x) | socket.ntohs(x) | socket.htonl(x) | socket.htons(x) |

Click [here](questions/Basic_Dev/networking-network-byte-order_1/README.md) to see the answers.

## In networking, which Python function converts 16-bit positive integers from network to host byte order?

KSAs: 240

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| socket.ntohl(x) | socket.ntohs(x) | socket.htonl(x) | socket.htons(x) |

Click [here](questions/Basic_Dev/networking-network-byte-order_2/README.md) to see the answers.

## Jimmy sent a package to Dean and noticed the source port was 51234 and the destination port was 666 on one of the TCP packets.  The difference between these two port types is ___.

KSAs: 216, 217, 1293, 1298

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| port 51234 is assigned by IANA whereas 666 is never assigned. | port 51234 is a registered port whereas 666 is an ephemeral port. | other than the numbers, there is no difference. | port 51234 is an ephemeral port whereas 666 is a well-known port. |

Click [here](questions/Basic_Dev/networking-networks-and-ports_1/README.md) to see the answers.

## In networking and typically reserved for servers, which port numbers are considered "privileged" ports?

KSAs: 1293

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| < 1024 | < 2048 | > = 1024 | > = 2048 |

Click [here](questions/Basic_Dev/networking-networks-and-ports_2/README.md) to see the answers.

## Which Python function waits for a client to connect on the port?

KSAs: 219, 220, 1305

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| close() | listen() | accept() | recv() |

Click [here](questions/Basic_Dev/networking-order-of-operations_1/README.md) to see the answers.

## Which of the following Python functions enables data transfer?

KSAs: 219, 220, 1305

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| bind() | socket() | connect() | send() |

Click [here](questions/Basic_Dev/networking-order-of-operations_2/README.md) to see the answers.

## The first ___ byte(s) of a physical machine address, also known as a/an _____ address, identify the manufacturer.

KSAs: 234

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 1, IP | 2, DHCP | 3, MAC | 2, MAC |

Click [here](questions/Basic_Dev/networking-order-of-operations_3/README.md) to see the answers.

## Which of these is not an application layer protocol?

KSAs: 216, 218, 224, 226, 1295, 1297, 1298

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| HTTP | SMTP | FTP | TCP |

Click [here](questions/Basic_Dev/networking-osi-layer-7_1/README.md) to see the answers.

## One difference between a switch and a hub is that the hub operates at the ___ layer of the Open Systems Interconnection (OSI) model.

KSAs: 218, 238, 1298

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Physical | Network | Data Link | Transport |

Click [here](questions/Basic_Dev/networking-osi-layers_1/README.md) to see the answers.

## What is one difference between the Open Systems Interconnection (OSI) Network and Transport Layers?

KSAs: 218, 1298

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| The Network layer is divided into two sublayers: Logical Link Control (LLC) and Media Access control (MAC); whereas the Transport layer performs segmentation and flow control. | The Network layer takes information it receives from the session layer and passes it to the Transport layer; the transport layer then passes this information to the data link layer. | The Network layer is responsible for routing and addressing whereas the Transport layer handles end-to-end delivery of a message. | The Network layer provides connection oriented and connection-less services whereas the Transport layer is responsible for establishing, using, and terminating a connection. |

Click [here](questions/Basic_Dev/networking-osi-layers_2/README.md) to see the answers.

## The ping command uses what protocol?

KSAs: 227, 1302

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| ICMP | HTTP | UDP | ARP |

Click [here](questions/Basic_Dev/networking-ping_1/README.md) to see the answers.

## This networking OSI layer establishes, manages and terminates connections between applications

KSAs: 218, 1298

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Data Link (layer 2) | Network (layer 3) | Session (layer 5) | Physical (layer 1) |

Click [here](questions/Basic_Dev/networking-session-layer/README.md) to see the answers.

## A TCP socket is different from a UDP socket because ___.

KSAs: 216, 217, 219, 220, 1298, 1305

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| you have to specify both the IP address and the port, compared to UDP only requiring the IP address | the TCP socket works in a send and forget model | you have to connect to a remote node prior to sending a message | the socket doesn't have to be closed when communication is finished like you would do with a UDP socket |

Click [here](questions/Basic_Dev/networking-socket-types_1/README.md) to see the answers.

## The client in socket programming must know which information?

KSAs: 220, 1293

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| IP address of server | Port number | Both IP address of server and port number | None of the above |

Click [here](questions/Basic_Dev/networking-socketserver_3/README.md) to see the answers.

## What has CAM (Content Addressable Memory) tables that map a physical ports to MAC addresses

KSAs: 238

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Hub | repeater | switch | DHCP server |

Click [here](questions/Basic_Dev/networking-switches_1/README.md) to see the answers.

## In networking, which number type starts at the random number chosen during the handshake and is cumulative and is used to maintain accountability of all packets?

KSAs: 216, 1298

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Sequence | Reserved | Nonce Sum | Acknowledgement |

Click [here](questions/Basic_Dev/networking-syn-and-ack_1/README.md) to see the answers.

## The first item in a TCP header is:

KSAs: 216, 1298

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| destination port | source port | sequence number | checksum |

Click [here](questions/Basic_Dev/networking-tcp-header-and-flags_1/README.md) to see the answers.

## In networking, which TCP flag means there is no more data to send?

KSAs: 216, 1298

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| ACK | FIN | RST | SYN |

Click [here](questions/Basic_Dev/networking-tcp-header-and-flags_2/README.md) to see the answers.

## The TCP process may not write and read data at the same speed, so ______ are needed for storage.

KSAs: 216, 1298

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| packets | buffers | segments | stacks |

Click [here](questions/Basic_Dev/networking-tcp-process_1/README.md) to see the answers.

## Compared to protocols like DNS or DHCP, UDP is different because ___.

KSAs: 217, 218, 225, 228, 1296, 1298, 1303

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| it operates at the Transport layer of the Open Systems Interconnection (OSI) model | it operates at the Application layer of the OSI model | it can do the work of both DNS and DHCP | it operates at the Network layer of the OSI model |

Click [here](questions/Basic_Dev/networking-udp_1/README.md) to see the answers.

## ***Python***

## In python when using inheritance how would you call the __init__() function of a parent class inside a subclass __init__() function

KSAs: 109, 110

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| ancestor.__init__() | super.__init__() | parent.__init__() | base.__init__() |

Click [here](questions/Basic_Dev/python-OO-super/README.md) to see the answers.

```python
1 | x = 19/2
2 | value = x % 3 == 0
3 | 
4 | if value:
5 |     print (value, " is true")
6 | else:
7 |     print (value, " is false")
8 | 
```

## What is the output for the above Python code snippet in Python 3?

KSAs: 59, 60

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| value is false | False is false | value is true | True is true |

Click [here](questions/Basic_Dev/python-boolean_1/README.md) to see the answers.

## In Object-oriented programming, what function's purpose is to initialize one or more of an object's attributes when it's originally created?

KSAs: 111

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Constructor | Initializer | Setter | Objectizer |

Click [here](questions/Basic_Dev/python-constructor/README.md) to see the answers.

## Which of the following is the proper way to access a value from a Python dictionary called car?

KSAs: 31

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| car.model | car["model"] | car{model} | car.model() |

Click [here](questions/Basic_Dev/python-data-types_1/README.md) to see the answers.

```python
1 | stuff = {"City":"Austin","State":"Texas","County":"Bexar"}
2 | 
3 | print (stuff["State"])
4 | 
```

## What is the output for the above Python code snippet?

KSAs: 31

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Texas | A run-time error occurs | Austin, Texas, Bexar | Austin |

Click [here](questions/Basic_Dev/python-data-types_2/README.md) to see the answers.

```python
1 | People = [
2 |     ["George","Jones"],
3 |     ["Bill","Johnson"],
4 |     ["Hank","Aaron"]
5 | ]
6 | 
```

## Given the above Python code snippet, how would you print out the word:  Aaron?

KSAs: 32

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| print(people[2]["Hank"]) | print(people[3][2]) | print(people[2,1]) | print(people[2][1]) |

Click [here](questions/Basic_Dev/python-data-types_3/README.md) to see the answers.

```python
1 | if var == 100   
2 |    print ("Value of expression is 100")
3 | 
```

## What is the syntax error in the above Python code snippet?

KSAs: 83

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| indention must be at least 8 spaces | the : is missing after the if expression | the print statement is printing a hard-coded string | all if expression require an else |

Click [here](questions/Basic_Dev/python-else_1/README.md) to see the answers.

```python
1 | a = ['Python', 'is', 'not', 'tough']
2 | for i in range(len(a)):
3 |      print (i, a[i], end=" ")
4 | 
```

## What is the output for the above Python code snippet?

KSAs: 32

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 1 Python 2 is 3 not 4 tough | Python is not tough | 1 Python 2 is 3 not | 0 Python 1 is 2 not 3 tough |

Click [here](questions/Basic_Dev/python-else_2/README.md) to see the answers.

## Given a Python list called ages, which is the proper way to iterate through each item in the list.

KSAs: 32

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| for int a in ages: | for a in ages: | for range(a) in ages: | for range(ages): |

Click [here](questions/Basic_Dev/python-flow-control_1/README.md) to see the answers.

```python
1 | values = [2, 3, 4, 6, 7, 9, 12, 18]
2 | 
3 | for i in range(2, 7):
4 |     if values[i] % 2 == 0 and values[i] % 3 == 0:
5 |         print (values[i])
6 | 
```

## What is the output for the above Python code snippet?

KSAs: 32, 60

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 4<br>6<br>9<br>12 | 6<br>12 | 4<br>12 | 3<br>6<br>7 |

Click [here](questions/Basic_Dev/python-flow-control_2/README.md) to see the answers.

```python
1 | values = []
2 | 
3 | for i in range(10):
4 |     values.append(i * 2)  
5 | for i in range(3, len(values)-3):
6 |     print (values[i])
7 | 
```

## What is the output for the above Python code snippet?

KSAs: 32, 80

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 6<br>8<br>10<br>12 | 6<br>8<br>10<br>12<br>14 | 4<br>6<br>8<br>10<br>12 | 3<br>4<br>5<br>6 |

Click [here](questions/Basic_Dev/python-flow-control_3/README.md) to see the answers.

```python
1 | values = [3, 5, 7, 9, 11, 13, 15]
2 | 
3 | for i in range(2, len(values), 2):
4 |     print (values[i])
5 | 
```

## What is the output for the above Python code snippet?

KSAs: 32, 80

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 5<br>7 | 7<br>9<br>11<br>13<br>15 | 7<br>11 | 7<br>11<br>15 |

Click [here](questions/Basic_Dev/python-flow-control_4/README.md) to see the answers.

## Which of the following is the proper way to declare a function header in Python?

KSAs: 26

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| def create_stuff(): | create_stuff(): | create_stuff: | func create_stuff() |

Click [here](questions/Basic_Dev/python-functions_1/README.md) to see the answers.

## What is a difference between the yield keyword and the return keyword

KSAs: 92

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| yield temporarily blocks the program from executing | yield exits the program entirely | yield transfers interpreter control to the next thread in a threadpool | yield keeps function state after it returns a value |

Click [here](questions/Basic_Dev/python-generator-function/README.md) to see the answers.

## In Object-Oriented programming, functions designed to change an object's attribute is known as a ___________ function and a function that retrieves an object's attribute is known as a _________ function?

KSAs: 112

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| modifier, viewer | setter, getter | updater, retriever | changer, viewer |

Click [here](questions/Basic_Dev/python-getter-setter/README.md) to see the answers.


---

### Begin PYTHON-GROUP_1 Questions

Please refer to the code snippet below for the following 9 question(s).

```python
1  | def getAverage(GoT):
2  |    tot = 0
3  |    count = 0
4  |    for rank in GoT.values():
5  |       tot += rank
6  |       count += 1
7  | 
8  |    return int(tot/count)
9  | 
10 | names = ['Cersei','Arya','Jon','Denerys','Tyrion','Jon','Sam','Arya'] 
11 |    
12 | peeps = {'Jon':16,'Denerys':7,'Tyrion':15,'Cersei':2,'Arya':20}
13 | 
14 | print(peeps[names[0]])
15 | 
16 | peeps['Tyrion'] = 18
17 | 
18 | avg = getAverage(peeps)
19 | 
20 | castNames = {'Arya'}
21 | 
22 | for name in names:
23 |    castNames.add(name)
24 | 
25 | print(names[len(names)])
26 | 
```

## What type of container is peeps?

KSAs: 31, 32, 33

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| List | Set | Dictionary | Tuple |

Click [here](questions/Basic_Dev/python-group_1/question_3/README.md) to see the answers.

## What type of container is castNames?

KSAs: 31, 32, 33

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| List | Set | Dictionary | Tuple |

Click [here](questions/Basic_Dev/python-group_1/question_4/README.md) to see the answers.

## What is the data type of avg?

KSAs: 40, 41

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Float | Integer | Complex | Double |

Click [here](questions/Basic_Dev/python-group_1/question_6/README.md) to see the answers.

## What is the result of line 25 executing?

KSAs: 32, 43

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Prints the string Arya | Prints Nothing | List index out of range error | Prints all strings in the list |

Click [here](questions/Basic_Dev/python-group_1/question_7/README.md) to see the answers.

## Which line contains a type cast?

KSAs: 25

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 1 | 8 | 18 | 20 |

Click [here](questions/Basic_Dev/python-group_1/question_8/README.md) to see the answers.

## What type of container is names?

KSAs: 42, 43

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| List | Array | String | Set |

Click [here](questions/Basic_Dev/python-group_1/question_9/README.md) to see the answers.

## On line 14, what is printed?

KSAs: 43, 45, 80

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 2 | Jon | Cersei | 16 |

Click [here](questions/Basic_Dev/python-group_1/question_10/README.md) to see the answers.

## What value does the getAverage function return?

KSAs: 24, 59, 80

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 12 | 6 | 14 | 2 |

Click [here](questions/Basic_Dev/python-group_1/question_11/README.md) to see the answers.

## What is occurring on line 16?

KSAs: 31

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| The value associated with 'Tyrion' is changed to 18 | An additional key/value pair of 'Tyrion' and 18 is added | The value associated with 'Tyrion' is increased by 18 | None of the above |

Click [here](questions/Basic_Dev/python-group_1/question_12/README.md) to see the answers.


### End PYTHON-GROUP_1 Questions

---

## In Object-oriented programming, a sub class is created using a super class via ______________?

KSAs: 109

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Inheritence | Extending | Overriding | Casting |

Click [here](questions/Basic_Dev/python-inheritence/README.md) to see the answers.

## which of the following is not a difference between lambda functions and normal functions

KSAs: 93

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| lambda functions can only have one expression | lambda functions can not use the return keyword | lambda functions can not have names | lambda functions can access variables from the function that called it |

Click [here](questions/Basic_Dev/python-lambda-function/README.md) to see the answers.

## Which of the following is NOT a term associated with a linked list?

KSAs: 139

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Index | Head | Node | Next |

Click [here](questions/Basic_Dev/python-linked-list/README.md) to see the answers.

```python
1 | S = [['him', 'sell'], [90, 28, 43]]   
2 |    print(S[0][1][1])
3 | 
```

## What is the output for the above Python snippet?

KSAs: 32, 42

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| e | i | 90 | h |

Click [here](questions/Basic_Dev/python-list-of-list/README.md) to see the answers.

```python
1 | names1 = ['Amir', 'Bala', 'Chales']
2 | 
3 | if 'amir' in names1:
4 |     print (1)
5 | else:
6 |     print (2)
7 | 
```

## What will be the output of the above Python code snippet?

KSAs: 42, 43

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Amir | 1 | 2 | Bala |

Click [here](questions/Basic_Dev/python-lists_1/README.md) to see the answers.

```python
1 | values = [[3, 4, 5, 1], [33, 6, 1, 2]]
2 | 
3 | for row in values:
4 |     row.sort()
5 |     for element in row:
6 |         print(element, end = "  " )
7 | 
```

## What will be the output of the above Python code snippet?

KSAs: 32, 80

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 3 4 5 1 33 6 1 2 | 3 4 5 1 33 6 1 2 | 1 1 2 3  4 5 6 33 | 1 3 4 5 1 2 6 33 |

Click [here](questions/Basic_Dev/python-lists_2/README.md) to see the answers.

```python
1 | list1 = [1, 2, 3, 4]
2 | list2 = [3, 4, 7, 8]
3 | 
4 | print (len(list1 + list2))
5 | 
```

## What will be the output of the above Python code snippet?

KSAs: 32

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 2 | 4 | 6 | 8 |

Click [here](questions/Basic_Dev/python-lists_3/README.md) to see the answers.

## In Python, given a list called myList, which places data into the current last element of the list?

KSAs: 32

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| myList(end) = 5 | myList[myList.end] = 5 | myList[len(myList)-1] = 5 | len(myList) = 5 |

Click [here](questions/Basic_Dev/python-lists_4/README.md) to see the answers.

## The Python container used to store key-pair values is a:

KSAs: 31, 32, 33

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| List | Dictionary | Map | Tuple |

Click [here](questions/Basic_Dev/python-mapping-&-other-types_1/README.md) to see the answers.

## Which of the following is a valid declaration of a dictionary in Python?

KSAs: 31, 45

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| dict={'Country':'India','Capital':'Delhi','PM':'Modi'} | dict=['Country':'India','Capital':'Delhi','PM':'Modi'] | dict={'Country'-'India','Capital'-'Delhi','PM'-'Modi'} | dict={'Country','India','Capital','Delhi','PM','Modi'} |

Click [here](questions/Basic_Dev/python-mapping_1/README.md) to see the answers.

## In Python, what object is unordered, unique (no duplicate values) and immutable.

KSAs: 31, 32, 33, 37, 38

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| list | tuple | set | dictionary |

Click [here](questions/Basic_Dev/python-mapping_2/README.md) to see the answers.

## In Python, the __________ statement is used to utilize other Python modules.

KSAs: 30

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| import | include | define | module |

Click [here](questions/Basic_Dev/python-modules_1/README.md) to see the answers.

## In python, which of the following object types are mutable.

KSAs: 32, 33, 37, 38

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| list | tuple | int | string |

Click [here](questions/Basic_Dev/python-mutable-objects/README.md) to see the answers.

```python
1 | numbers = [2, 3, 4, 5, 6]
2 | for x in numbers:
3 |     if x % 2 == 0:
4 |         print (x*x, end = " ")
5 |     else:
6 |         print (x, end = " ")
7 | 
```

## What is the output for the above Python code snippet?

KSAs: 32, 58, 60

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 4 3 9 5 36 | 4 3 16 5 36 7 | 4 3 16 5 36 | 2 3 16 5 36 |

Click [here](questions/Basic_Dev/python-numbers_1/README.md) to see the answers.

```python
1 | class Dog:
2 |     def __init__(self, name):
3 |         self.name = name 
4 |  
5 | myDog = Dog("pepe")
```

## In the above python snippet, what is myDog?

KSAs: 106, 107

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| object | class | attribute | constructor |

Click [here](questions/Basic_Dev/python-object-type/README.md) to see the answers.

## Which of the following is NOT a keyword used in Python exception handling?

KSAs: 78, 79

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| finally | break | try | except |

Click [here](questions/Basic_Dev/python-oop_1/README.md) to see the answers.

## Which is the correct operator to use an exponent?

KSAs: 58

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| x^y | x**y | x^^y | x(pow)y |

Click [here](questions/Basic_Dev/python-operators_2/README.md) to see the answers.

## What is the result of 3 % 5 in Python 3?

KSAs: 60, 40

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| 3 | 0 | 2 | 5 |

Click [here](questions/Basic_Dev/python-operators_3/README.md) to see the answers.

## What python module automatically generates documentation from Python modules?

KSAs: 49, 87

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| document | pyDoc | modDocs | pyComments |

Click [here](questions/Basic_Dev/python-pydocs/README.md) to see the answers.

## In python, which design pattern restricts the instantiation of a class to one object?

KSAs: 115

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| Bridge | Individual | Singleton | Unique |

Click [here](questions/Basic_Dev/python-singleton/README.md) to see the answers.

```python
1 | sentence = "The light-brown fox."
2 | print (sentence[9:])
3 | 
```

## What is the output for the above Python code snippet?

KSAs: 42

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| brown fox. | b | - | -brown fox. |

Click [here](questions/Basic_Dev/python-strings_1/README.md) to see the answers.

```python
1 | sentence = "The light-brown fox."
2 | print (sentence[len(sentence)-2])
3 | 
```

## What is the output for the above Python code snippet?

KSAs: 42

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| x | . | o | fox |

Click [here](questions/Basic_Dev/python-strings_2/README.md) to see the answers.

## Which built-in function reads a line of text from standard input, which by default, comes from the keyboard?

KSAs: 75

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| read | input | scan | A or B |

Click [here](questions/Basic_Dev/python-strings_3/README.md) to see the answers.

```python
1 | myList = ["Jim", "Bob", "Matt", "Tom"]
2 | 
```

## Which Python string function would you use to combine a list of strings into one string with each word separated by a space?

KSAs: 42, 43

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| " ".append(myList) | myList.append(" ") | " ".join(myList) | " ".collect(myList) |

Click [here](questions/Basic_Dev/python-strings_4/README.md) to see the answers.

```python
1 | name = "Jimmy Crack Corn"
2 | 
3 | print (name[:-5])
4 |
```

## What is the output for the above Python code snippet?

KSAs: 42

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| invalid syntax | Jimmy Crack Corn | Jimmy Crack | Crack Corn |

Click [here](questions/Basic_Dev/python-strings_5/README.md) to see the answers.

```python
1 | str = 'pdf csv json'
2 | print(str.split())
3 | 
```

## What is the output for the above Python code snippet?

KSAs: 90, 32, 42

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| ['pdf', 'csv', 'json'] | [pdf, csv, json] | pdf, csv, json | pdf csv json |

Click [here](questions/Basic_Dev/python-strings_6/README.md) to see the answers.

```python
1 | age_book = {"Sam" : 19, "Timmy" : 24, "Beth" : 22}
2 | 
3 | ages = get_ages(age_book)
4 | age_collection = [ages[0], ages[1], ages[2]]
5 | 
6 | def get_ages(a):
7 |     return a["Sam"], a["Timmy"], a["Beth"]
8 | 
```

## Which of the following is a Python tuple?

KSAs: 24, 29, 31, 32, 33

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| age_book | ages | age_collection | Both ages and age_collection |

Click [here](questions/Basic_Dev/python-tuple_1/README.md) to see the answers.

## The difference between a tuple and a list in Python is:

KSAs: 32, 33, 37, 38

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| a tuple is dynamic while a list is not | tuples can only contain numbers while lists can contain any type | a tuple, once created, cannot be changed | a list is faster to access than a tuple |

Click [here](questions/Basic_Dev/python-tuple_2/README.md) to see the answers.

```python
1 | def printStuff(stuff):
2 |     print (stuff)
3 | 
```

## Given the Python function defined above, which of the following are valid calls to the function?

KSAs: 27, 25

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| printStuff(34) | printStuff("Hello") | printStuff(True) | all the above are valid calls |

Click [here](questions/Basic_Dev/python-variables_1/README.md) to see the answers.

```python
1 | x = 10
2 | x += 1
3 | 
```

## On the second line of the above Python snippet, x is now 11.  What else is occuring?

KSAs: 40, 38, 37

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| The original int object was changed from 10 to 11 because it's mutable. | A new int object is created because int objects are immutable | A new int object is created because int objects are static | The original int object was changed from 10 to 11 because it's dynamic. |

Click [here](questions/Basic_Dev/python-variables_2/README.md) to see the answers.

## Which of the following is the proper way to declare a variable in Python?

KSAs: 40

| A | B | C | D |
| :--- | :--- | :--- | :--- |
| int x = 0 | long x = 0 | var x = 0 | x = 0 |

Click [here](questions/Basic_Dev/python-variables_3/README.md) to see the answers.

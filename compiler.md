# C Compiler

Using a C compiler from the command-line is very easy.

It is a fundamental skill that any Computer Engineer should have.

Typically, the easiest way to invoke the C compiler is by using the **cc** command to convert (compile) C source files into executable machine code.


In addition to the standard use of the C compiler, **cc  *.c** there are several other *switches* that can be provided when we use the compiler.

 - cc   -P  *.c
         - This invokes the pre-processor only, and produces the assembly language code for the compiled source code in the file hello.s in the current directory.
         - That output could be useful if you were writing an assembly language routine and wanted to see how the compiler went about a similar task.
 - cc   -S  *.c
         - invokes the pre-processor and compiler only, but not the linker
 - cc   -c  *.c
         - all phases of programme building except the linker are run, the assembled object code for the program is left in the object file hello1.o (for example) in your current directory.
         - You would typically want this output when using make.
 - cc     *.c
         - This command is used to create an executable program from C language source files

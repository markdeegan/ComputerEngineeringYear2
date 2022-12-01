# C Compiler
Using as C compiler from the command-line is very easy. It is a fundamental skill that any Computer Engineer should have.
Typically, the easiest way to invoke the C compiler is by using the **cc** command to convert (compile) C source files into executable machine code.


In addition to the standard use of the C compiler, cc \*.c there are several other *switches* that can be provided when we use the compiler.

Some Notes on using the c compiler
<ul>
  <li> cc   -P  *.c - invokes the pre-processor only, and produces the assembly language code for the compiled source code in the file hello.s in the current directory. That output could be useful if you were writing an assembly language routine and wanted to see how the compiler went about a similar task.
  <li> cc   -S  *.c - invokes the pre-processor and compiler only, but not the linker
  <li> cc   -c  *.c - 
  <li> cc     *.c 
</ul>

### To run program ex25_creating_library follow the below syntax:
`$ LD_LIBRARY_PATH=./lib/ ./ex25_creating_library`

### To run program ex27_simple_c_program_build_with_assembly Follow the below instruction
**Compile the library function**
`lib$ gcc -m32 -c myfunction.s`
**Compile the program to make and executable file**
`ch$ gcc -m32 -o ex27_simple_c_program_build_with_assembly ./lib/myfunction.o ex27_simple_c_program_build_with_assembly.c`


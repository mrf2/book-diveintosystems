.text				# this file contains instruction code
				# myfunc is the nameof a function
.global myfunc
	.type myfunc, @function
myfunc:				# the start of the function
	pushl 	%ebp		# function preamble:
	movl	%esp, %ebp	#	the 1st three instrs set up the stack
	subl	$16, %esp

	# A programmer adds specific IA32 instructions
	# here that allocated stack space for any local variables
	# and then implements code using parameters and locals to
	# perform the functionality of the myfunc function
	#
	# the return value should be stored in $eax before returning

	# mov $32, %eax	
	mov 8(%ebp), %eax
	leave			# function return code
	ret
 

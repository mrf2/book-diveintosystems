.text				# this file contains instruction code
				# sum is the name of the function
.global sum
	.type sum, @function
sum:				# the start of the function
	pushl	%ebp		# store the previous stack frame (base address)
	movl	%esp, %ebp	# setup current stack frame
	subl	$16, %esp	

	# A programmer adds specific IA32 instructions
	# here that allocated stack space for any local variables
	# and then implements code using parameters and locals to
	# perform the functionality of the sum function
	#
	# the return value should be stored in %eax before returning	

	movl 8(%ebp), %eax	# move rightmost argument first, in this example 6
	addl 12(%ebp), %eax	# now add second argument with the first one, in this example:
				#	6 + 5
	leave			# function return code
	ret

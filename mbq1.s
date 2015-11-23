	.file	1 "mbq1.c"

 # GNU C 2.7.2.3 [AL 1.1, MM 40, tma 0.1] SimpleScalar running sstrix compiled by GNU C

 # Cc1 defaults:
 # -mgas -mgpOPT

 # Cc1 arguments (-G value = 8, Cpu = default, ISA = 1):
 # -quiet -dumpbase -O2 -o

gcc2_compiled.:
__gnu_compiled_c:
	.text
	.align	2
	.globl	main

	.extern	stdin, 4
	.extern	stdout, 4

	.text

	.loc	1 26
	.ent	main
main:
	.frame	$sp,640024,$31		# vars= 640000, regs= 1/0, args= 16, extra= 0
	.mask	0x80000000,-8
	.fmask	0x00000000,0
	li	$8,0x0009c418		# 640024
	subu	$sp,$sp,$8
	addu	$9,$8,$sp
	sw	$31,-8($9)
	jal	__main
	move	$3,$0
	li	$4,0x00090000		# 589824
	ori	$4,$4,0xc3ff
$L17:
	addu	$3,$3,128
	slt	$2,$4,$3
	beq	$2,$0,$L17
	move	$2,$0
	li	$8,0x0009c418	# 640024
	addu	$9,$8,$sp
	lw	$31,-8($9)
	addu	$sp,$sp,$8
	j	$31
	.end	main

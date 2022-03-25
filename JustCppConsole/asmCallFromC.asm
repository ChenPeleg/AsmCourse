
.386
.model flat,c

;This function takes 3 params from the Cpp file

.code

asmcallfromc proc
	push ebp ;pushes the base pointer to the stack
	mov ebp, esp ;sets the stack pointer's value in the ebp register
	mov eax, [ebp+8]
	mov ebx, [ebp + 12]
	mov ecx, [ebp + 16]
	add eax, ebx
	add eax, ecx
	cmp eax, 0
	pop ebp
	ret
	
asmcallfromc endp

end
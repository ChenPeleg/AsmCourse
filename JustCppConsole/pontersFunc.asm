

.386
.model flat

PBYTE TYPEDEF PTR BYTE ;8bits
PWORD TYPEDEF PTR WORD ;32 bits
PDWORD TYPEDEF PTR DWORD; 64 bits

.data
arrayB BYTE F,A,49,0,0; 
arrayW WORD AAAAh,BBBBh,CCCh
arrayDW DWORD 4,5,6,7,8

;defining pointers to these arrays

pt_1 PBYTE arrayB
pt_2 PWORD arrayW
pt_3 PDWORD arrayDW

.code
pointproc proc:
	mov esi, pt_1; moving pointer 1 to the source index pointer
	mov al, [esi]; moving one byte to the lower byte of eax wich is al
	mov esi, pt_2; moving pointer 1 to the source index register
	mov ax, [esi]; moving one word to ax register (16 bit)
	mov esi, pt_3; moving the third pointe to the source index register
	mov eax, [esi]




pointproc endp

end



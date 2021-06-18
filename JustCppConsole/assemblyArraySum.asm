
.386
.model flat,c
.data
intArray DWORD 10000h, 20000h, 30000h, 40000h
.code

arraySum proc 
		mov edi, OFFSET intArray
		mov ecx, LengthOF  intArray
		mov eax, 0

		;this is for returning to the cpp
		mov eax,452
		ret
arraySum endp  
end  


.386
.model flat,c
.data
intArray DWORD 1h, 2h, 3h, 4h
.code

arraySum proc 
		mov edi, OFFSET intArray ; sets the destenation array pointer
		mov ecx, LengthOF  intArray ;initilize the loop counter C = Counter
		mov eax, 0 ; sets the accumeltaiver initilize for zerp
	LP:
		add eax, [edi]	 
		add edi, TYPE intArray
		loop LP
		;this is for returning to the cpp
		;mov eax,452
		ret
arraySum endp  
end  

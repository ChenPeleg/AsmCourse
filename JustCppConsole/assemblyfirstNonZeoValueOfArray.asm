
.386
.model flat,c
.data
intArray SWORD 0, 56, 15, 0,4
.code
;; My Task : first none Zero value of Array
arrayFirstNonZero proc 
		mov ebx, OFFSET intArray ; sets the destenation array pointer
		mov ecx, LENGTHOF  intArray ;initilize the loop counter C = Counter
	;	mov eax, 0 ; sets the accumeltaiver initilize for zerp
	LOOP1:

		cmp WORD PTR[ebx],0 
		jnz FOUND ;if cmp result is NOT EQUAL 
		add ebx, 2 ;TYPEOF intArray
		loop LOOP1

		jmp NOTFOUND; when the loop is finished jump to not found

	FOUND:
		movsx eax ,WORD PTR[ebx]  ;; if fount then sets the accumilator to to found value
		jmp QUIT
	NOTFOUND:
		mov eax, 999
	QUIT:

	 ret
arrayFirstNonZero endp  
end  
arrayFirstNonZero

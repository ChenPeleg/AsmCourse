.386
.model flat

.data 

intarr DWORD 1000h, 2000h, 3000h, 4000h

.code
start proc
	mov edi, OFFSET intarr
	mov ECX, LENGTHOF intarr
	mov EAX, 0

LP:
	add EAX, [edi]
	add edi, TYPE intarr
	LOOP LP

	ret

start endp
end

start



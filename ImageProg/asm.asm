.data

.code
; 	unsigned char* bmpDataScan0, = RCX
; 	unsigned char* bmpOriginal,  = RDX
; 	short value,                 = R8W
; 	int imageSizeInBytes         = R9D

ASMAdjustBrightness proc
  mov r10, 0                    ; Set the offset pointer to 0
  cmp r8w, 0                    ; Check of we - or +
  jl SubtractBrightness

  mov r11w, 0ffffh              ; Set my overflow value to 255

MainLoopAdd:
  mov al, byte ptr [rdx + r10]  ; Read the next byt from original
  add al, r8b                   ; Add the brightness
  cmovc ax, r11w                ; Set to 255 on overflow
  mov byte ptr [rcx + r10], al  ; Store the answer in Scan0

  inc r10                       ; Move to the next byt in the arrays
  dec r9d                       ; Decrement our counter
  jnz MainLoopAdd               ; Jump if there's more
  ret                           ; Return to silly C++

SubtractBrightness:
  mov r11w, 0                   ; Move 0 into the underflow
  neg r8w                       ; Negate the value as we're subbing

MainLoopSubtract:
  mov al, byte ptr [rdx + r10]  ; Read the next byt from original
  sub al, r8b                   ; Subtract the brightness
  cmovc ax, r11w                ; Set to 0 on overflow
  mov byte ptr [rcx + r10], al  ; Store the answer in Scan0

  inc r10                       ; Move to the next byt in the arrays
  dec r9d                       ; Decrement our counter
  jnz MainLoopSubtract          ; Jump if there's more
  ret                           ; Return to silly C++

ASMAdjustBrightness endp
end

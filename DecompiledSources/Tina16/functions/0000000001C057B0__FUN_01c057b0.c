/* Ghidra address: 01c057b0 */
/* Ghidra symbol: FUN_01c057b0 */


void FUN_01c057b0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 200) != 0) {
    thunk_FUN_041a19a1(*(undefined8 *)(param_2 + 0xc0));
  }
  EndBufferedPaint(*(HPAINTBUFFER *)(param_2 + 0xb8),-1);
  return;
}


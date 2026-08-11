/* Ghidra address: 0065e4c0 */
/* Ghidra symbol: FUN_0065e4c0 */


void FUN_0065e4c0(undefined8 param_1,longlong param_2)

{
  CloseGestureInfoHandle(*(HGESTUREINFO *)(*(longlong *)(param_2 + 0xe8) + 0x10));
  if (*(short *)(param_2 + 0xb0) == 0x102) {
    *(undefined8 *)(*(longlong *)(param_2 + 0xe0) + 0x458) = 0;
  }
  return;
}


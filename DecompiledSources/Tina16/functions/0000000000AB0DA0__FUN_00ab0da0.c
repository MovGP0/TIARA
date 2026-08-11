/* Ghidra address: 00ab0da0 */
/* Ghidra symbol: FUN_00ab0da0 */


void FUN_00ab0da0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xc0) + 0x70) + 0x18);
  if (*(int *)(lVar1 + 0x2d8) == 1) {
    *(undefined1 *)(lVar1 + 0x2dc) = 0;
  }
  return;
}


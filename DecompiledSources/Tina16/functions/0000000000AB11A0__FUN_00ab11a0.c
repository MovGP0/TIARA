/* Ghidra address: 00ab11a0 */
/* Ghidra symbol: FUN_00ab11a0 */


void FUN_00ab11a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x70) + 0x18);
  if (*(int *)(lVar1 + 0x2d8) == 1) {
    *(undefined1 *)(lVar1 + 0x2dc) = 0;
  }
  return;
}


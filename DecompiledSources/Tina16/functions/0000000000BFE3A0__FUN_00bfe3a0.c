/* Ghidra address: 00bfe3a0 */
/* Ghidra symbol: FUN_00bfe3a0 */


void FUN_00bfe3a0(undefined8 param_1,longlong param_2)

{
  HWND pHVar1;
  
  pHVar1 = (HWND)FUN_0065b870(*(undefined8 *)(param_2 + 0x80));
  ImmReleaseContext(pHVar1,(HIMC)(ulonglong)*(uint *)(param_2 + 0x4c));
  return;
}


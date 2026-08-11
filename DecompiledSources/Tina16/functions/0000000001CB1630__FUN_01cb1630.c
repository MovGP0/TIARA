/* Ghidra address: 01cb1630 */
/* Ghidra symbol: FUN_01cb1630 */


void FUN_01cb1630(longlong param_1)

{
  int iVar1;
  
  iVar1 = (*(int *)(param_1 + 0x10) + 500) * 9;
  if (iVar1 < -0x80000000) {
    FUN_00409620(param_1 + 0x18,(longlong)iVar1);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 500;
  }
  else {
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}


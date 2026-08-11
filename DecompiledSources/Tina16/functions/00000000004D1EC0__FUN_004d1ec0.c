/* Ghidra address: 004d1ec0 */
/* Ghidra symbol: FUN_004d1ec0 */


void FUN_004d1ec0(longlong param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_041cb65c(*(undefined8 *)(param_1 + 0x10));
  FUN_004d10c0(param_1,-1 < iVar1);
  if (iVar1 == 1) {
    *(undefined1 *)(param_1 + 0x1b) = 0;
  }
  return;
}


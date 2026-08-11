/* Ghidra address: 0079b9f0 */
/* Ghidra symbol: FUN_0079b9f0 */


void FUN_0079b9f0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_0079bb40;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_0079b9d0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


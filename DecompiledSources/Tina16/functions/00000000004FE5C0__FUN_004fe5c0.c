/* Ghidra address: 004fe5c0 */
/* Ghidra symbol: FUN_004fe5c0 */


void FUN_004fe5c0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_004fe720;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_004fe5a0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


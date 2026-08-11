/* Ghidra address: 007a5010 */
/* Ghidra symbol: FUN_007a5010 */


void FUN_007a5010(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_007a5170;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_007a4ff0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


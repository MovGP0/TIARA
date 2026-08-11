/* Ghidra address: 015895e0 */
/* Ghidra symbol: FUN_015895e0 */


void FUN_015895e0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_01589730;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_015895c0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


/* Ghidra address: 008ba810 */
/* Ghidra symbol: FUN_008ba810 */


void FUN_008ba810(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_008ba970;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_008ba7f0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


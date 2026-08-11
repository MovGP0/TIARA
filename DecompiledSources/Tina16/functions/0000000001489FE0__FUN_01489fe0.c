/* Ghidra address: 01489fe0 */
/* Ghidra symbol: FUN_01489fe0 */


void FUN_01489fe0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_0148a140;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_01489fc0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


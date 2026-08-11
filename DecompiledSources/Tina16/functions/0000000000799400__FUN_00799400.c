/* Ghidra address: 00799400 */
/* Ghidra symbol: FUN_00799400 */


void FUN_00799400(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_00799560;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_007993e0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


/* Ghidra address: 004f43b0 */
/* Ghidra symbol: FUN_004f43b0 */


void FUN_004f43b0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_004f4510;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_004f4390;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


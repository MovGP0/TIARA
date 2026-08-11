/* Ghidra address: 00be3790 */
/* Ghidra symbol: FUN_00be3790 */


void FUN_00be3790(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_00be38e0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_00be3770;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


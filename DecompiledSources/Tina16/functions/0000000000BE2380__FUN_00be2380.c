/* Ghidra address: 00be2380 */
/* Ghidra symbol: FUN_00be2380 */


void FUN_00be2380(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_00be24d0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_00be2360;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


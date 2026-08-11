/* Ghidra address: 0099f680 */
/* Ghidra symbol: FUN_0099f680 */


void FUN_0099f680(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_0099f7e0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_0099f660;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


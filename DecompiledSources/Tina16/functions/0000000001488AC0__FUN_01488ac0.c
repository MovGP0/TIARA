/* Ghidra address: 01488ac0 */
/* Ghidra symbol: FUN_01488ac0 */


void FUN_01488ac0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_01488c10;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_01488aa0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


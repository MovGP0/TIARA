/* Ghidra address: 005c45e0 */
/* Ghidra symbol: FUN_005c45e0 */


void FUN_005c45e0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_005c4730;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_005c45c0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


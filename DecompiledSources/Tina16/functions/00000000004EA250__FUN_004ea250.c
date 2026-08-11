/* Ghidra address: 004ea250 */
/* Ghidra symbol: FUN_004ea250 */


void FUN_004ea250(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_004ea420;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_004ea230;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


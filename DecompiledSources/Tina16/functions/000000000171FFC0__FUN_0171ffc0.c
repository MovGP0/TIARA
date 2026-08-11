/* Ghidra address: 0171ffc0 */
/* Ghidra symbol: FUN_0171ffc0 */


void FUN_0171ffc0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_01720120;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_0171ffa0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


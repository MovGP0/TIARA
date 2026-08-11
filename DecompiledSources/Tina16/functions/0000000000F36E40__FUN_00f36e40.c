/* Ghidra address: 00f36e40 */
/* Ghidra symbol: FUN_00f36e40 */


void FUN_00f36e40(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_00f36fa0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_00f36e20;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


/* Ghidra address: 008b9520 */
/* Ghidra symbol: FUN_008b9520 */


void FUN_008b9520(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_008b9680;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_008b9500;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


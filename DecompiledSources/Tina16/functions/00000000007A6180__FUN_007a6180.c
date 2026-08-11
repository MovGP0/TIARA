/* Ghidra address: 007a6180 */
/* Ghidra symbol: FUN_007a6180 */


void FUN_007a6180(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_007a62e0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_007a6160;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


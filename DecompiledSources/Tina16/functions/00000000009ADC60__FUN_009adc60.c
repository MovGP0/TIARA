/* Ghidra address: 009adc60 */
/* Ghidra symbol: FUN_009adc60 */


void FUN_009adc60(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_009addc0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_009adc40;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


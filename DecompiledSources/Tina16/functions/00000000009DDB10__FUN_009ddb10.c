/* Ghidra address: 009ddb10 */
/* Ghidra symbol: FUN_009ddb10 */


void FUN_009ddb10(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_009ddc70;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_009ddaf0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


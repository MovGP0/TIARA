/* Ghidra address: 009aedd0 */
/* Ghidra symbol: FUN_009aedd0 */


void FUN_009aedd0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_009aef30;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_009aedb0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


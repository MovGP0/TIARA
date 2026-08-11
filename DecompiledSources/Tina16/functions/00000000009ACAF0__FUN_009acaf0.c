/* Ghidra address: 009acaf0 */
/* Ghidra symbol: FUN_009acaf0 */


void FUN_009acaf0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_009acc50;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_009acad0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


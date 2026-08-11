/* Ghidra address: 015859a0 */
/* Ghidra symbol: FUN_015859a0 */


void FUN_015859a0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_01585af0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_01585980;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


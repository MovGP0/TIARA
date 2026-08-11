/* Ghidra address: 00854ca0 */
/* Ghidra symbol: FUN_00854ca0 */


void FUN_00854ca0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_00854df0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_00854c80;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


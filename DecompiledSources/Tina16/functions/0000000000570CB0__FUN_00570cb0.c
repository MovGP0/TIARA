/* Ghidra address: 00570cb0 */
/* Ghidra symbol: FUN_00570cb0 */


void FUN_00570cb0(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_00570e00;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_00570c90;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


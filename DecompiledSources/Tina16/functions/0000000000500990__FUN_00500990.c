/* Ghidra address: 00500990 */
/* Ghidra symbol: FUN_00500990 */


void FUN_00500990(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_00500af0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_00500970;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


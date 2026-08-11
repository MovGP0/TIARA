/* Ghidra address: 009aa270 */
/* Ghidra symbol: FUN_009aa270 */


void FUN_009aa270(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_009aa3d0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_009aa250;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


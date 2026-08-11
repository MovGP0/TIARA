/* Ghidra address: 01ca7730 */
/* Ghidra symbol: FUN_01ca7730 */


void FUN_01ca7730(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_01ca7880;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_01ca7710;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


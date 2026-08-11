/* Ghidra address: 0167f220 */
/* Ghidra symbol: FUN_0167f220 */


void FUN_0167f220(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_0167f380;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_0167f200;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


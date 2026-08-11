/* Ghidra address: 009a5a40 */
/* Ghidra symbol: FUN_009a5a40 */


void FUN_009a5a40(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_009a5ba0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_009a5a20;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


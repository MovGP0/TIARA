/* Ghidra address: 01586f00 */
/* Ghidra symbol: FUN_01586f00 */


void FUN_01586f00(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_01587050;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_01586ee0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


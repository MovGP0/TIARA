/* Ghidra address: 0078c240 */
/* Ghidra symbol: FUN_0078c240 */


void FUN_0078c240(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_0078c3a0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_0078c220;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


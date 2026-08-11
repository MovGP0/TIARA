/* Ghidra address: 00eec400 */
/* Ghidra symbol: FUN_00eec400 */


void FUN_00eec400(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_00eec550;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_00eec3e0;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


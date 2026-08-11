/* Ghidra address: 01588460 */
/* Ghidra symbol: FUN_01588460 */


void FUN_01588460(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_015885c0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_01588440;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


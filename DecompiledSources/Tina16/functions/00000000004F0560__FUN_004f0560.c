/* Ghidra address: 004f0560 */
/* Ghidra symbol: FUN_004f0560 */


void FUN_004f0560(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_004f06c0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_004f0540;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


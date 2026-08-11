/* Ghidra address: 004f8a30 */
/* Ghidra symbol: FUN_004f8a30 */


void FUN_004f8a30(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_004f8b90;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_004f8a10;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


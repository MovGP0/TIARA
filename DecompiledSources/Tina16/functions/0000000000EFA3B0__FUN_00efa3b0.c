/* Ghidra address: 00efa3b0 */
/* Ghidra symbol: FUN_00efa3b0 */


void FUN_00efa3b0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    *param_1 = *(longlong *)(*param_1 + 0x10);
    FUN_004095f0(lVar1);
    lVar1 = *param_1;
  }
  return;
}


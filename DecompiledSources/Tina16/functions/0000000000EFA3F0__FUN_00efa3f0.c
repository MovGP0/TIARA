/* Ghidra address: 00efa3f0 */
/* Ghidra symbol: FUN_00efa3f0 */


void FUN_00efa3f0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  while (*param_1 != 0) {
    *param_1 = *(longlong *)(*param_1 + 0x10);
    FUN_00ef81f0(lVar1 + 8);
    FUN_004095f0(lVar1);
    lVar1 = *param_1;
  }
  return;
}


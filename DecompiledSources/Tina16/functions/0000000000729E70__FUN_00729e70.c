/* Ghidra address: 00729e70 */
/* Ghidra symbol: FUN_00729e70 */


void FUN_00729e70(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xd8);
  if (lVar1 != 0) {
    thunk_FUN_041b2403(lVar1,0x466,(longlong)*(int *)(param_1 + 0x2c),0);
  }
  return;
}


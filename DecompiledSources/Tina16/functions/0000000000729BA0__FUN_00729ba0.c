/* Ghidra address: 00729ba0 */
/* Ghidra symbol: FUN_00729ba0 */


void FUN_00729ba0(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  if (param_2 != *(byte *)(param_1 + 0x20)) {
    *(byte *)(param_1 + 0x20) = param_2;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xd8);
    if (lVar1 != 0) {
      thunk_FUN_041b2403(lVar1,0x468,(longlong)*(int *)(&DAT_01e05d2c + (ulonglong)param_2 * 4),0);
    }
  }
  return;
}


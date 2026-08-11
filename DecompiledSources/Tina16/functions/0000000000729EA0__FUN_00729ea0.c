/* Ghidra address: 00729ea0 */
/* Ghidra symbol: FUN_00729ea0 */


void FUN_00729ea0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xd8);
  if (lVar1 != 0) {
    thunk_FUN_041b2403(lVar1,0x46f,(longlong)*(int *)(param_1 + 0x2c),
                       *(undefined1 *)(param_1 + 0x28));
  }
  return;
}


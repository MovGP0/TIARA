/* Ghidra address: 00729bf0 */
/* Ghidra symbol: FUN_00729bf0 */


void FUN_00729bf0(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != *(int *)(param_1 + 0x10)) {
    *(int *)(param_1 + 0x10) = param_2;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xd8);
    if ((lVar1 != 0) && ((*(uint *)(*(longlong *)(param_1 + 8) + 200) & 0x400) != 0)) {
      thunk_FUN_041b2403(lVar1,0x46b,0xffffffffffffffff,*(undefined4 *)(param_1 + 0x10));
    }
  }
  return;
}


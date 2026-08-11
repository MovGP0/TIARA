/* Ghidra address: 00bd4790 */
/* Ghidra symbol: FUN_00bd4790 */


void FUN_00bd4790(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x4c) != param_2) {
    *(int *)(param_1 + 0x4c) = param_2;
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      uVar2 = FUN_005fbf20(param_2);
      thunk_FUN_03e3a7dc(lVar1,uVar2);
    }
  }
  return;
}


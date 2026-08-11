/* Ghidra address: 00bd4760 */
/* Ghidra symbol: FUN_00bd4760 */


void FUN_00bd4760(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x48) != param_2) {
    *(int *)(param_1 + 0x48) = param_2;
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      uVar2 = FUN_005fbf20(param_2);
      thunk_FUN_0412a071(lVar1,uVar2);
    }
  }
  return;
}


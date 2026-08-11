/* Ghidra address: 0064d230 */
/* Ghidra symbol: FUN_0064d230 */


void FUN_0064d230(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xd0);
  if (*(int *)(lVar1 + 0x1c) != 0) {
    uVar2 = thunk_FUN_03f3ed25(*(int *)(lVar1 + 0x1c),param_2,param_3);
    FUN_0064b380(lVar1,3,uVar2);
  }
  if (*(int *)(lVar1 + 0x14) != 0) {
    uVar2 = thunk_FUN_03f3ed25(*(int *)(lVar1 + 0x14),param_2,param_3);
    FUN_0064b380(lVar1,1,uVar2);
  }
  if (*(int *)(lVar1 + 0x18) != 0) {
    uVar2 = thunk_FUN_03f3ed25(*(int *)(lVar1 + 0x18),param_2,param_3);
    FUN_0064b380(lVar1,2,uVar2);
  }
  if (*(int *)(lVar1 + 0x10) != 0) {
    uVar2 = thunk_FUN_03f3ed25(*(int *)(lVar1 + 0x10),param_2,param_3);
    FUN_0064b380(lVar1,0,uVar2);
  }
  return;
}


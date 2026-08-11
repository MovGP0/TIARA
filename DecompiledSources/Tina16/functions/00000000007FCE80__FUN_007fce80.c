/* Ghidra address: 007fce80 */
/* Ghidra symbol: FUN_007fce80 */


void FUN_007fce80(longlong param_1,int param_2,int param_3,char param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_2 != param_3) {
    lVar1 = *(longlong *)(param_1 + 0xd0);
    if ((bool)param_4 == param_3 < param_2) {
      if (*(int *)(lVar1 + 0x1c) != 0) {
        uVar2 = thunk_FUN_03f3ed25(*(int *)(lVar1 + 0x1c),param_2,param_3);
        FUN_0064b380(lVar1,3,uVar2);
      }
      if (*(int *)(lVar1 + 0x18) != 0) {
        uVar2 = thunk_FUN_03f3ed25(*(int *)(lVar1 + 0x18),param_2,param_3);
        FUN_0064b380(lVar1,2,uVar2);
      }
    }
    else {
      if (*(int *)(lVar1 + 0x14) != 0) {
        uVar2 = thunk_FUN_03f3ed25(*(int *)(lVar1 + 0x14),param_2,param_3);
        FUN_0064b380(lVar1,1,uVar2);
      }
      if (*(int *)(lVar1 + 0x10) != 0) {
        uVar2 = thunk_FUN_03f3ed25(*(int *)(lVar1 + 0x10),param_2,param_3);
        FUN_0064b380(lVar1,0,uVar2);
      }
    }
  }
  return;
}


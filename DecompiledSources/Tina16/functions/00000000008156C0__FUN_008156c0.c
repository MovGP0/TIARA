/* Ghidra address: 008156c0 */
/* Ghidra symbol: FUN_008156c0 */


int FUN_008156c0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 local_38 [16];
  
  lVar3 = FUN_007e3880(param_2);
  if ((lVar3 == 0) || (*(char *)(param_2 + 0x86) == '\0')) {
    iVar1 = 0;
  }
  else {
    FUN_004238d0(local_38,0,0,0,0);
    uVar4 = FUN_005ffa40(param_3);
    uVar6 = 0;
    if (*(longlong *)(param_2 + 0x78) != 0) {
      uVar6 = *(undefined4 *)(*(longlong *)(param_2 + 0x78) + -4);
    }
    uVar5 = FUN_00416740(*(undefined8 *)(param_2 + 0x78));
    thunk_FUN_041a24be(uVar4,uVar5,uVar6,local_38,0x400);
    iVar1 = FUN_004230a0(local_38);
    iVar1 = iVar1 + 10;
    lVar3 = FUN_007e3880(param_2);
    if ((*(longlong *)(lVar3 + 0xa0) != 0) && (-1 < *(int *)(param_2 + 0x88))) {
      lVar3 = FUN_007e3880(param_2);
      iVar2 = (**(code **)(**(longlong **)(lVar3 + 0xa0) + 0x90))(*(longlong **)(lVar3 + 0xa0));
      if (*(int *)(param_2 + 0x88) < iVar2) {
        lVar3 = FUN_00814f80(param_1);
        iVar1 = iVar1 + *(int *)(*(longlong *)(lVar3 + 0xa0) + 0x94) + 6;
      }
    }
  }
  return iVar1;
}


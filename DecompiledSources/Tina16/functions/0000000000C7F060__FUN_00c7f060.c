/* Ghidra address: 00c7f060 */
/* Ghidra symbol: FUN_00c7f060 */


void FUN_00c7f060(longlong param_1,longlong *param_2,int param_3,int param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,int param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 local_38 [16];
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb0))
                    (*(longlong **)(param_1 + 0x28),param_7);
  if ((iVar1 < *(int *)(param_1 + 0x10)) && (-1 < iVar1)) {
    plVar4 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    (**(code **)(*plVar4 + 0x88))(plVar4,*(undefined4 *)(param_1 + 0x14));
    (**(code **)(*plVar4 + 0x70))(plVar4,*(undefined4 *)(param_1 + 0x14));
    uVar5 = FUN_00609e10(plVar4);
    FUN_007d6c70(*(undefined8 *)(param_1 + 0x20),uVar5,0,0,iVar1,1);
    if (param_8 < 0) {
      uVar5 = FUN_00609e10(plVar4);
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb0))
                        (*(longlong **)(param_1 + 0x28),&LAB_00c7f204);
      FUN_007d6c70(*(undefined8 *)(param_1 + 0x20),uVar5,0,0,uVar2,1);
    }
    iVar1 = thunk_FUN_03f3ed25(0x1d,*(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98),0x60);
    iVar3 = thunk_FUN_03f3ed25(0x1d,*(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98),0x60);
    FUN_00498350(local_38,param_3,param_4,param_3 + iVar1,param_4 + iVar3);
    (**(code **)(*param_2 + 0x110))(param_2,local_38,plVar4);
    FUN_00410f20(plVar4);
  }
  return;
}


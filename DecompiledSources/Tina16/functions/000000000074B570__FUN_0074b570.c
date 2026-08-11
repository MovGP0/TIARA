/* Ghidra address: 0074b570 */
/* Ghidra symbol: FUN_0074b570 */


void FUN_0074b570(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 local_30;
  
  local_30 = 0;
  uVar1 = (**(code **)(*(longlong *)param_1[0x94] + 0x28))((longlong *)param_1[0x94]);
  FUN_0074b3f0(param_1,uVar1);
  iVar5 = *(int *)(param_1[0x93] + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar2 = FUN_004aeac0(param_1[0x93],iVar4);
      (**(code **)(*(longlong *)param_1[0x94] + 0x18))((longlong *)param_1[0x94],&local_30,iVar4);
      FUN_0064de00(uVar2,local_30);
      uVar2 = FUN_004aeac0(param_1[0x93],iVar4);
      FUN_00687ac0(uVar2,*(undefined1 *)((longlong)param_1 + 0x4b2));
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (-1 < (int)param_1[0x95]) {
    *(undefined1 *)((longlong)param_1 + 0x4b1) = 1;
    plVar3 = (longlong *)FUN_004aeac0(param_1[0x93],(int)param_1[0x95]);
    (**(code **)(*plVar3 + 0x268))(plVar3,1);
    *(undefined1 *)((longlong)param_1 + 0x4b1) = 0;
  }
  (**(code **)(*param_1 + 0x268))(param_1);
  (**(code **)(*param_1 + 0x180))(param_1);
  FUN_00414480(&local_30);
  return;
}


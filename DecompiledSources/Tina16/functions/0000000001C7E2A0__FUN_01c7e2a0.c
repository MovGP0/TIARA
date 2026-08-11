/* Ghidra address: 01c7e2a0 */
/* Ghidra symbol: FUN_01c7e2a0 */


void FUN_01c7e2a0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  lVar4 = FUN_01c7d9d0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x14b8) + 0x128))
            (*(longlong **)(param_1 + 0x14b8),0 < *(int *)(param_1 + 0x17f8));
  iVar1 = *(int *)(param_1 + 0x17f8);
  if ((iVar1 < 0) || (*(int *)(*(longlong *)(lVar4 + 0x18) + 0x10) + -1 <= iVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined4)CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x14d0) + 0x128))(*(longlong **)(param_1 + 0x14d0),uVar3);
  (**(code **)(**(longlong **)(param_1 + 0x14a0) + 0x128))
            (*(longlong **)(param_1 + 0x14a0),-1 < *(int *)(param_1 + 0x17f8));
  (**(code **)(**(longlong **)(param_1 + 0x14c8) + 0x128))
            (*(longlong **)(param_1 + 0x14c8),-1 < *(int *)(param_1 + 0x17f8));
  (**(code **)(**(longlong **)(param_1 + 0x14d8) + 0x128))
            (*(longlong **)(param_1 + 0x14d8),-1 < *(int *)(param_1 + 0x17f8));
  FUN_0043f750(&local_28,*(int *)(param_1 + 0x17f8) + 1);
  FUN_0043f750(&local_30,*(undefined4 *)(*(longlong *)(lVar4 + 0x18) + 0x10));
  FUN_00416cd0(&local_20,3,local_28,&DAT_01c7e4f8,local_30);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x14b0),local_20);
  if (*(int *)(param_1 + 0x17f8) < 0) {
    (**(code **)(**(longlong **)(param_1 + 0x14e8) + 0x298))(*(longlong **)(param_1 + 0x14e8));
    (**(code **)(**(longlong **)(param_1 + 0x14e0) + 0x298))(*(longlong **)(param_1 + 0x14e0));
  }
  else {
    lVar5 = FUN_004aeac0(*(undefined8 *)(lVar4 + 0x18),*(int *)(param_1 + 0x17f8));
    FUN_0043f750(&local_38,(longlong)*(short *)(lVar5 + 8));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x14e8),local_38);
    lVar4 = FUN_004aeac0(*(undefined8 *)(lVar4 + 0x18),*(undefined4 *)(param_1 + 0x17f8));
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x14e0) + 0x4d8);
    (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(lVar4 + 0x10));
  }
  FUN_00414560(&local_38,4);
  return;
}


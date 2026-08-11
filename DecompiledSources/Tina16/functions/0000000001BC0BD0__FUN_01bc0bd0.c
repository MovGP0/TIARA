/* Ghidra address: 01bc0bd0 */
/* Ghidra symbol: FUN_01bc0bd0 */


void FUN_01bc0bd0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 local_30;
  
  local_30 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x720) + 0x48);
  iVar6 = *(int *)(*(longlong *)(lVar2 + 8) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar4 = FUN_004aeac0(*(undefined8 *)(lVar2 + 8),iVar5);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
      (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(lVar4 + 0x18));
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))(*(longlong **)(param_1 + 0x6b0),0);
  plVar1 = *(longlong **)(param_1 + 0x6b0);
  uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_30,uVar3);
  FUN_01bc0a90(param_1,local_30);
  FUN_00414480(&local_30);
  return;
}


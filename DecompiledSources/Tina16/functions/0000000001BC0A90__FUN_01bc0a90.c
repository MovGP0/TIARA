/* Ghidra address: 01bc0a90 */
/* Ghidra symbol: FUN_01bc0a90 */


void FUN_01bc0a90(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res10 [3];
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e0) + 0x4a0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  uVar3 = FUN_01bbbe90(*(undefined8 *)(*(longlong *)(param_1 + 0x720) + 0x48),local_res10[0]);
  *(undefined8 *)(param_1 + 0x730) = uVar3;
  lVar2 = *(longlong *)(param_1 + 0x730);
  iVar5 = *(int *)(*(longlong *)(lVar2 + 0x10) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar3 = FUN_004aeac0(*(undefined8 *)(lVar2 + 0x10),iVar4);
      FUN_01bbb5e0(uVar3,local_30,1);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e0) + 0x4a0);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_30[0]);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_0068bd10(*(undefined8 *)(param_1 + 0x6e0),0,1);
  FUN_01bc0d90(param_1);
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return;
}


/* Ghidra address: 01070030 */
/* Ghidra symbol: FUN_01070030 */


void FUN_01070030(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0x728) = param_2;
  *(undefined8 *)(param_1 + 0x740) = param_3;
  plVar3 = (longlong *)FUN_01b21480(*(undefined8 *)(*(longlong *)(param_1 + 0x728) + 0x60));
  iVar2 = (**(code **)(*plVar3 + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_30,iVar4);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_30);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(plVar3);
  plVar3 = (longlong *)FUN_01b21480(*(undefined8 *)(*(longlong *)(param_1 + 0x728) + 0x68));
  iVar2 = (**(code **)(*plVar3 + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_38,iVar4);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_38);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(plVar3);
  plVar3 = (longlong *)FUN_01b21480(*(undefined8 *)(*(longlong *)(param_1 + 0x728) + 0x70));
  iVar2 = (**(code **)(*plVar3 + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_40,iVar4);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x710) + 0x4a0);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_40);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(plVar3);
  FUN_00414560(&local_40,3);
  return;
}


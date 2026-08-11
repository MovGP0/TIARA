/* Ghidra address: 013cca60 */
/* Ghidra symbol: FUN_013cca60 */


void FUN_013cca60(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_48 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00416ba0(local_30,&DAT_013ccc6c,local_res10[0]);
  FUN_00416ba0(&local_38,&DAT_013ccc6c,local_res10[0]);
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x778) + 0x4a0) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x4a0);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_40,iVar4);
      iVar3 = FUN_004170c0(local_30[0],local_40,1);
      if (iVar3 < 1) {
        FUN_0068bd10(*(undefined8 *)(param_1 + 0x778),iVar4,0);
      }
      else {
        FUN_0068bd10(*(undefined8 *)(param_1 + 0x778),iVar4,1);
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x7e0) + 0x4a0) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7e0) + 0x4a0);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_48,iVar4);
      iVar3 = FUN_004170c0(local_30[0],local_48,1);
      if (iVar3 < 1) {
        FUN_0068bd10(*(undefined8 *)(param_1 + 0x7e0),iVar4,0);
      }
      else {
        FUN_0068bd10(*(undefined8 *)(param_1 + 0x7e0),iVar4,1);
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_48,4);
  FUN_00414480(local_res10);
  return;
}


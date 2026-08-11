/* Ghidra address: 00a591b0 */
/* Ghidra symbol: FUN_00a591b0 */


void FUN_00a591b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 local_res10 [3];
  undefined8 local_30;
  
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  *(undefined4 *)(param_1 + 0x4c) = 1;
  iVar1 = FUN_004170c0(&DAT_00a59504,local_res10[0],1);
  while ((0 < iVar1 && (*(int *)(param_1 + 0x4c) < 0x14))) {
    FUN_00416dc0(param_1 + 0x28 + (longlong)*(int *)(param_1 + 0x4c) * 0x28,local_res10[0],1,
                 iVar1 + -1);
    FUN_00416e20(local_res10,1,iVar1);
    FUN_0043ea00(&local_30,local_res10[0]);
    FUN_00414b50(local_res10,local_30);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    iVar1 = FUN_004170c0(&DAT_00a59504,local_res10[0],1);
  }
  FUN_00414b50(param_1 + 0x28 + (longlong)*(int *)(param_1 + 0x4c) * 0x28,local_res10[0]);
  if (1 < *(int *)(param_1 + 0x4c)) {
    while( true ) {
      iVar1 = 0;
      if (*(longlong *)(param_1 + 0x78) != 0) {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x78) + -4);
      }
      if ((iVar1 < 1) || (9 < (ushort)(**(short **)(param_1 + 0x78) - 0x30U))) break;
      FUN_00416e20(param_1 + 0x78,1,1);
    }
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  iVar4 = 1;
  if (0 < iVar1) {
    plVar5 = (longlong *)(param_1 + 0x50);
    do {
      iVar2 = FUN_004170c0(&DAT_00a59514,*plVar5,1);
      if (1 < iVar4) {
        *(bool *)(param_1 + 0x48 + (longlong)(iVar4 + -1) * 0x28) = 0 < iVar2;
      }
      if (0 < iVar2) {
        FUN_00416e20(plVar5,iVar2,1);
      }
      iVar2 = FUN_004170c0(&DAT_00a59524,*plVar5,1);
      if (iVar2 < 1) {
        FUN_00414480(plVar5 + 3);
      }
      else {
        uVar3 = 0;
        if (*plVar5 != 0) {
          uVar3 = *(undefined4 *)(*plVar5 + -4);
        }
        FUN_00416dc0(plVar5 + 3,*plVar5,iVar2 + 1,uVar3);
        FUN_00416dc0(plVar5,*plVar5,1,iVar2 + -1);
      }
      iVar2 = FUN_004170c0(&DAT_00a59534,*plVar5,1);
      if (iVar2 < 1) {
        FUN_00414480(plVar5 + 2);
      }
      else {
        uVar3 = 0;
        if (*plVar5 != 0) {
          uVar3 = *(undefined4 *)(*plVar5 + -4);
        }
        FUN_00416dc0(plVar5 + 2,*plVar5,iVar2 + 1,uVar3);
        FUN_00416dc0(plVar5,*plVar5,1,iVar2 + -1);
      }
      iVar2 = FUN_004170c0(&LAB_00a59544,*plVar5,1);
      if (iVar2 < 1) {
        FUN_00414480(plVar5 + 1);
      }
      else {
        uVar3 = 0;
        if (*plVar5 != 0) {
          uVar3 = *(undefined4 *)(*plVar5 + -4);
        }
        FUN_00416dc0(plVar5 + 1,*plVar5,iVar2 + 1,uVar3);
        FUN_00416dc0(plVar5,*plVar5,1,iVar2 + -1);
      }
      iVar4 = iVar4 + 1;
      plVar5 = plVar5 + 5;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(&local_30);
  FUN_00414480(local_res10);
  return;
}


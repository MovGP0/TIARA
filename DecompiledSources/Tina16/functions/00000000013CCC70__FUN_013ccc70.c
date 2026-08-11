/* Ghidra address: 013ccc70 */
/* Ghidra symbol: FUN_013ccc70 */


void FUN_013ccc70(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_0043f750(local_50,param_2);
  FUN_00416cd0(local_30,3,&DAT_013cd050,local_50[0],&DAT_013cd064);
  FUN_0043f750(&local_58,param_2);
  FUN_00416cd0(&local_38,3,&DAT_013cd050,local_58,&LAB_013cd074);
  uVar4 = FUN_019a4630();
  FUN_017cd4e0(&local_60,uVar4,param_2,*(undefined8 *)(param_1 + 0x880),0);
  FUN_00416ba0(&local_40,&DAT_013cd050,local_60);
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x778) + 0x4a0) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x4a0);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_68,iVar5);
      iVar3 = FUN_004170c0(local_30[0],local_68,1);
      if (iVar3 < 1) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x4a0);
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_70,iVar5);
        iVar3 = FUN_004170c0(local_38,local_70,1);
        if (0 < iVar3) goto LAB_013cce88;
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x4a0);
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_78,iVar5);
        iVar3 = FUN_00416db0(local_40,local_78);
        if (iVar3 == 0) goto LAB_013cce88;
        FUN_0068bd10(*(undefined8 *)(param_1 + 0x778),iVar5,0);
      }
      else {
LAB_013cce88:
        FUN_0068bd10(*(undefined8 *)(param_1 + 0x778),iVar5,1);
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x7e0) + 0x4a0) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7e0) + 0x4a0);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_80,iVar5);
      iVar3 = FUN_004170c0(local_30[0],local_80,1);
      if (iVar3 < 1) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7e0) + 0x4a0);
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_88,iVar5);
        iVar3 = FUN_004170c0(local_38,local_88,1);
        if (0 < iVar3) goto LAB_013ccfa2;
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7e0) + 0x4a0);
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_90,iVar5);
        iVar3 = FUN_00416db0(local_40,local_90);
        if (iVar3 == 0) goto LAB_013ccfa2;
        FUN_0068bd10(*(undefined8 *)(param_1 + 0x7e0),iVar5,0);
      }
      else {
LAB_013ccfa2:
        FUN_0068bd10(*(undefined8 *)(param_1 + 0x7e0),iVar5,1);
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_90,9);
  FUN_00414560(&local_40,3);
  return;
}


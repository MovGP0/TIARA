/* Ghidra address: 00a35ca0 */
/* Ghidra symbol: FUN_00a35ca0 */


int FUN_00a35ca0(longlong param_1,undefined8 *param_2,undefined8 param_3,int param_4,int *param_5,
                uint *param_6)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined4 local_20;
  undefined1 local_1c [12];
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  param_2[2] = param_3;
  *(int *)(param_2 + 3) = param_4;
  do {
    local_4c = param_4;
    if (*(int *)(param_2 + 3) == 0) goto LAB_00a35faf;
    lVar6 = FUN_004b6da0(param_2[0xc]);
    if (((lVar6 == *param_5) && (*(int *)(param_2 + 3) != 0)) && (*(int *)(param_2 + 1) == 0)) {
      (**(code **)(*(longlong *)param_2[0xc] + 0x18))((longlong *)param_2[0xc],&local_20,4);
      uVar2 = FUN_00a32f80(local_20);
      if (~*param_6 != uVar2) {
        local_4c = -1;
        FUN_0041ddd0(local_30,PTR_PTR_02004d00);
        FUN_00a39bd0(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_00a2d170,local_30[0]);
        goto LAB_00a35faf;
      }
      (**(code **)(*(longlong *)param_2[0xc] + 0x18))((longlong *)param_2[0xc],param_5,4);
      (**(code **)(*(longlong *)param_2[0xc] + 0x18))((longlong *)param_2[0xc],local_1c,4);
      FUN_00416800(&local_38,local_1c,4);
      iVar3 = FUN_00416db0(local_38,L"IDAT");
      if (iVar3 != 0) {
        FUN_0041ddd0(&local_40,PTR_PTR_02003d78);
        FUN_00a39bd0(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_00a2d3e0,local_40);
        local_4c = -1;
        goto LAB_00a35faf;
      }
      uVar2 = FUN_00a32ea0(0xffffffff,local_1c,4);
      *param_6 = uVar2;
      iVar3 = FUN_004b6da0(param_2[0xc]);
      iVar4 = FUN_00a32f80(*param_5);
      *param_5 = iVar3 + iVar4;
    }
    if (*(int *)(param_2 + 1) == 0) {
      lVar6 = FUN_004b6da0(param_2[0xc]);
      if ((longlong)*param_5 < lVar6 + 0xffff) {
        plVar1 = (longlong *)param_2[0xc];
        iVar3 = FUN_004b6da0(plVar1);
        uVar5 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2[0xb],*param_5 - iVar3);
        *(undefined4 *)(param_2 + 1) = uVar5;
      }
      else {
        uVar5 = (**(code **)(*(longlong *)param_2[0xc] + 0x18))
                          ((longlong *)param_2[0xc],param_2[0xb],0xffff);
        *(undefined4 *)(param_2 + 1) = uVar5;
      }
      uVar2 = FUN_00a32ea0(*param_6,param_2[0xb],*(undefined4 *)(param_2 + 1));
      *param_6 = uVar2;
      if (*(int *)(param_2 + 1) == 0) {
        local_4c = param_4 - *(int *)(param_2 + 3);
        goto LAB_00a35faf;
      }
      *param_2 = param_2[0xb];
    }
    iVar3 = FUN_0062db10(param_2,0);
  } while (-1 < iVar3);
  local_4c = -1;
  FUN_0041ddd0(&local_48,PTR_PTR_02004ad0);
  FUN_00416ad0(&local_48,(&PTR_DAT_01e716a0)[iVar3]);
  FUN_00a39bd0(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_00a2d528,local_48);
LAB_00a35faf:
  FUN_00414560(&local_48,4);
  return local_4c;
}


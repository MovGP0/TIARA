/* Ghidra address: 01bb43e0 */
/* Ghidra symbol: FUN_01bb43e0 */


void FUN_01bb43e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 local_res18 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00416ad0(local_res18,&DAT_01bb461c);
  while (iVar1 = FUN_004170c0(&DAT_01bb461c,local_res18[0],1), 0 < iVar1) {
    iVar1 = FUN_004170c0(&DAT_01bb461c,local_res18[0],1);
    FUN_00416dc0(&local_30,local_res18[0],1,iVar1 + -1);
    (**(code **)(*plVar4 + 0x78))(plVar4,local_30);
    uVar3 = FUN_004170c0(&DAT_01bb461c,local_res18[0],1);
    FUN_00416e20(local_res18,1,uVar3);
  }
  iVar1 = (**(code **)(*plVar4 + 0x28))();
  iVar7 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_38,iVar7);
      iVar2 = FUN_0043fc00(local_38);
      if (iVar2 != iVar7 + 1) {
        (**(code **)(*plVar4 + 0x18))(plVar4,&local_40,iVar7);
        uVar3 = FUN_0043fc00(local_40);
        uVar5 = FUN_01bb41d0(param_1,param_2,uVar3);
        (**(code **)(*plVar4 + 0x48))(plVar4,iVar7,uVar5);
      }
      iVar7 = iVar7 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(*plVar4 + 0x28))();
  iVar7 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar6 = (**(code **)(*plVar4 + 0x30))(plVar4,iVar7);
      if (lVar6 != 0) {
        lVar6 = (**(code **)(*plVar4 + 0x30))(plVar4,iVar7);
        *(int *)(lVar6 + 0x18c) = iVar7 + 1;
      }
      iVar7 = iVar7 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(plVar4);
  FUN_00414560(&local_40,3);
  FUN_00414480(local_res18);
  return;
}


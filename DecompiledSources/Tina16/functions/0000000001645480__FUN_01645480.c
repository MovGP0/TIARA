/* Ghidra address: 01645480 */
/* Ghidra symbol: FUN_01645480 */


void FUN_01645480(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  int local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_68 = 0;
  local_60 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  lVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),0);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0x18);
  FUN_004b37d0(*(undefined8 *)(lVar6 + 0x578),&local_50);
  iVar3 = (**(code **)(*plVar1 + 0x1c8))(plVar1);
  FUN_01634c00(lVar6,*(undefined4 *)(lVar6 + 0x5d0));
  FUN_00414480(&local_58);
  local_70 = 0;
  if (-1 < iVar3 + -1) {
    do {
      FUN_01645400(param_1,&local_30,plVar1,local_70);
      uVar4 = (**(code **)(*plVar1 + 0x210))(plVar1,local_70);
      iVar5 = (**(code **)(**(longlong **)(lVar6 + 0x578) + 0xb0))
                        (*(longlong **)(lVar6 + 0x578),local_30);
      if (iVar5 < 0) {
        FUN_00416ba0(&local_60,L"THDLDesign.Elaborate: shape pin name not found in macro ports: ",
                     local_30);
        FUN_01613110(local_60);
      }
      cVar2 = FUN_01644e10(*(undefined8 *)(lVar6 + 0x578),iVar5);
      if (cVar2 != '\0') {
        *(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0x139e8) = 1;
      }
      FUN_01634ca0(lVar6,iVar5,uVar4);
      FUN_0043f750(&local_68,uVar4);
      FUN_00416cd0(&local_58,3,local_58,local_68,&LAB_016457a4);
      local_70 = local_70 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  local_70 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),local_70);
      if (-1 < *(int *)(lVar6 + 0x5bc)) {
        lVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),*(int *)(lVar6 + 0x5bc));
        uVar7 = FUN_01618ee0(&DAT_01616df8,1,local_70);
        FUN_004ae7e0(*(undefined8 *)(lVar6 + 0x608),uVar7);
      }
      local_70 = local_70 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  lVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),0);
  *(undefined4 *)(lVar6 + 0x14) = *(undefined4 *)(param_1 + 0x90);
  FUN_01644d00(param_1,lVar6);
  FUN_016453b0(param_1);
  FUN_00414560(&local_68,8);
  return;
}


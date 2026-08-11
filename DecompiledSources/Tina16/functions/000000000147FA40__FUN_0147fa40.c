/* Ghidra address: 0147fa40 */
/* Ghidra symbol: FUN_0147fa40 */


void FUN_0147fa40(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  undefined8 local_res8 [4];
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_70[0] = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_0147d130(local_res8[0],local_40);
  uVar2 = FUN_0147cfb0(local_40[0],L"circuit");
  uVar2 = FUN_004113f0(uVar2,&LAB_00f23b78);
  cVar1 = FUN_01486290(uVar2,L"graph",&local_48);
  if (cVar1 == '\0') {
    if (param_4 != (longlong *)0x0) {
      (**(code **)(*param_4 + 0x78))(param_4,L"FixComponentIDsFromGraph2: no graph node");
    }
    goto LAB_0147fcdb;
  }
  lVar3 = FUN_014860c0(local_48,L"components");
  lVar4 = FUN_014860c0(uVar2,L"components");
  FUN_00414480(param_2);
  lVar5 = FUN_0147cfb0(uVar2,L"metadata");
  if (lVar5 == 0) {
LAB_0147fb60:
    lVar5 = 0;
  }
  else {
    cVar1 = FUN_004113d0(lVar5,&LAB_00f23b78);
    if (cVar1 == '\0') goto LAB_0147fb60;
  }
  if (lVar5 != 0) {
    FUN_0147cd40(lVar5,L"circuit_name",param_2);
  }
  plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b6d10(plVar6,0);
  FUN_004b67b0(plVar6,0);
  iVar8 = *(int *)(*(longlong *)(lVar4 + 0x10) + 0x10);
  uVar7 = 0;
  if (-1 < iVar8 + -1) {
    do {
      lVar5 = *(longlong *)(lVar4 + 0x10);
      if (*(uint *)(lVar5 + 0x10) <= uVar7) {
        FUN_00594f90();
      }
      uVar2 = FUN_004113f0(*(undefined8 *)(*(longlong *)(lVar5 + 8) + (longlong)(int)uVar7 * 8),
                           &LAB_00f23b78);
      FUN_014861c0(uVar2,local_70,&PTR_DAT_0147fe54);
      (**(code **)(*plVar6 + 0x78))(plVar6,local_70[0]);
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  uVar7 = 0;
  while (lVar4 = *(longlong *)(lVar3 + 0x10), (int)uVar7 < *(int *)(lVar4 + 0x10)) {
    if (*(uint *)(lVar4 + 0x10) <= uVar7) {
      FUN_00594f90();
    }
    uVar2 = FUN_004113f0(*(undefined8 *)(*(longlong *)(lVar4 + 8) + (longlong)(int)uVar7 * 8),
                         &LAB_00f23b78);
    FUN_014861c0(uVar2,&local_50,L"label");
    iVar8 = (**(code **)(*plVar6 + 0xb0))(plVar6,local_50);
    if (iVar8 == -1) {
      FUN_00f335f0(lVar3,uVar7);
    }
    else {
      uVar7 = uVar7 + 1;
    }
  }
  FUN_00410f20(plVar6);
  FUN_00441920(&local_60,local_res8[0]);
  FUN_00441710(&local_58,local_res8[0]);
  FUN_00416ad0(&local_58,L"\\Temp\\");
  FUN_00440c30(local_58);
  FUN_00416ba0(param_3,local_58,local_60);
  FUN_0147d210(*param_3,local_40[0]);
LAB_0147fcdb:
  FUN_00414480(local_70);
  FUN_00414560(&local_60,3);
  FUN_00414480(local_res8);
  return;
}


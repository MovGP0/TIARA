/* Ghidra address: 016440b0 */
/* Ghidra symbol: FUN_016440b0 */


void FUN_016440b0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
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
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x139a8);
  uVar6 = 0;
  if (lVar1 != 0) {
    uVar6 = *(undefined4 *)(lVar1 + -4);
  }
  FUN_00416e20(*(longlong *)(param_1 + 0x78) + 0x139a8,uVar6,1);
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined2 *)((longlong)plVar4 + 0x2c) = 0x23;
  plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined2 *)((longlong)plVar5 + 0x2c) = 0x23;
  FUN_004b50b0(plVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x139a8));
  iVar2 = (**(code **)(*plVar5 + 0x28))();
  iVar7 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_30,iVar7);
      FUN_01643810(local_30,&local_38,&local_40,&local_50);
      iVar3 = FUN_0043fc00(local_38);
      (**(code **)(*(longlong *)(longlong)iVar3 + 0x288))((longlong *)(longlong)iVar3,&local_48);
      if (local_48 == 0) {
        FUN_01613110(L"THDLDesign.SetIcsList");
      }
      FUN_01643cc0(*(undefined8 *)(param_1 + 0x78),local_40,&local_58);
      FUN_00416cd0(&local_60,5,local_48,&LAB_01644350,local_58,&LAB_01644350,local_50);
      (**(code **)(*plVar4 + 0x78))(plVar4,local_60);
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_004b3880(plVar4,&local_68);
  FUN_00414ad0(*(longlong *)(param_1 + 0x78) + 0x139a8,local_68);
  FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18) + 0x160,
               *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x139a8));
  FUN_00410f20(plVar5);
  FUN_00410f20(plVar4);
  FUN_00414560(&local_68,8);
  return;
}


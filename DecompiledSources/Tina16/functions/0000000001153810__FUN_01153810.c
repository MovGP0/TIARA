/* Ghidra address: 01153810 */
/* Ghidra symbol: FUN_01153810 */


void FUN_01153810(longlong param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),1,*(undefined4 *)(param_1 + 0x98));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),3,*(undefined4 *)(param_1 + 0x98));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),2,*(undefined4 *)(param_1 + 0x9c));
  uVar2 = FUN_00f06890(L"Main Params view",1);
  *(undefined1 *)(param_1 + 0x8e0) = uVar2;
  uVar4 = FUN_0177ce70(&PTR_FUN_0177c458,1,param_1);
  *(undefined8 *)(param_1 + 0x8f8) = uVar4;
  plVar1 = *(longlong **)(param_1 + 0x8f8);
  (**(code **)(*plVar1 + 0x50))(plVar1,L"OpenParamsDlg");
  FUN_00c78ad0(plVar1,L"Load Parameters");
  FUN_00414ad0(plVar1 + 0x20,&DAT_01153bfc);
  FUN_00414ad0(plVar1 + 0x1c,L"Parameter file (*.PRM)|*.PRM|Parameter file (*.TXT)|*.TXT");
  *(undefined4 *)(plVar1 + 0x1b) = 0x80214;
  FUN_00416ba0(&local_30,L"Settings folder|",*(undefined8 *)PTR_DAT_02005010);
  local_28 = local_30;
  FUN_00416ba0(&local_38,L"Main Tina folder|",*(undefined8 *)PTR_DAT_020049a0);
  local_20 = local_38;
  (**(code **)(*plVar1 + 0x130))(plVar1,&local_28,1);
  FUN_0177d560(plVar1,*(undefined8 *)PTR_DAT_020049a0);
  uVar4 = FUN_0177d960(&PTR_FUN_0177caa0,1,param_1);
  *(undefined8 *)(param_1 + 0x900) = uVar4;
  plVar1 = *(longlong **)(param_1 + 0x900);
  (**(code **)(*plVar1 + 0x50))(plVar1,L"SaveParamsDlg");
  FUN_00c78ad0(plVar1,L"Save Parameters");
  FUN_0177dd40(plVar1,&DAT_01153bfc);
  FUN_00414ad0(plVar1 + 0x1c,L"Parameter file (*.PRM)|*.PRM|Parameter file (*.TXT)|*.TXT");
  *(undefined4 *)(plVar1 + 0x1b) = 0x80116;
  FUN_00416ba0(&local_40,L"Settings folder|",*(undefined8 *)PTR_DAT_02005010);
  local_28 = local_40;
  FUN_00416ba0(&local_48,L"Main Tina folder|",*(undefined8 *)PTR_DAT_020049a0);
  local_20 = local_48;
  (**(code **)(*plVar1 + 0x130))(plVar1,&local_28,1);
  FUN_0177d560(plVar1,*(undefined8 *)PTR_DAT_02005010);
  *(int *)(param_1 + 0x8e4) = *(int *)(*(longlong *)(param_1 + 0x6b8) + 0x4b4) * 0x16 + 4;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x6b8) + 0x4b4) * 0xc + 4;
  *(int *)(param_1 + 0x8e8) = iVar3;
  if (*(char *)(param_1 + 0x8e0) == '\0') {
    FUN_007fdf10(param_1,*(int *)(param_1 + 0x8e4) + *(int *)(*(longlong *)(param_1 + 0x6f0) + 0x9c)
                         + *(int *)(*(longlong *)(param_1 + 0x718) + 0x9c));
  }
  else {
    FUN_007fdf10(param_1,iVar3 + *(int *)(*(longlong *)(param_1 + 0x6f0) + 0x9c) +
                         *(int *)(*(longlong *)(param_1 + 0x718) + 0x9c));
  }
  FUN_0064cf60(param_1,0x444);
  FUN_00414560(&local_48,4);
  return;
}


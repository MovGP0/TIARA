/* Ghidra address: 014e8c40 */
/* Ghidra symbol: FUN_014e8c40 */


void FUN_014e8c40(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_40;
  int local_34;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_50 = auStack_d8;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_40 = 0;
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))();
  local_34 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))
                (*(longlong **)(param_1 + 0x30),&local_40,local_34);
      FUN_014e8a10(param_1,local_20,local_40);
      (**(code **)(*local_28 + 0x88))(local_28,local_20);
      (**(code **)(*local_20 + 0x90))(local_20);
      local_34 = local_34 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if ((*(int *)(param_1 + 0x9c) == 0) && (*(int *)(param_1 + 0x98) == 0)) {
    FUN_00416ba0(&local_58,*(undefined8 *)(param_1 + 0x60),L"simprim_Vcomponents_part2.vhd");
    (**(code **)(*local_28 + 0x100))(local_28,local_58);
    FUN_00416ba0(&local_60,*(undefined8 *)(param_1 + 0x58),L"\\simprim_Vcomponents_part1.vhd");
    (**(code **)(*local_28 + 0xd8))(local_28,local_60);
    FUN_00416ba0(&local_68,*(undefined8 *)(param_1 + 0x60),L"simprim_Vcomponents_part2.vhd");
    (**(code **)(*local_30 + 0xd8))(local_30,local_68);
    (**(code **)(*local_28 + 0x88))(local_28,local_30);
    FUN_00416ba0(&local_70,*(undefined8 *)(param_1 + 0x58),L"simprim_Vcomponents_part3.vhd");
    (**(code **)(*local_30 + 0xd8))(local_30,local_70);
    (**(code **)(*local_28 + 0x88))(local_28,local_30);
    iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x68),L"tina");
    if (iVar1 == 0) {
      FUN_00416ba0(&local_78,*(undefined8 *)(param_1 + 0xa0),L"simprim_Vcomponents.vhd");
      (**(code **)(*local_28 + 0x100))(local_28,local_78);
    }
    else {
      FUN_00416ba0(&local_80,*(undefined8 *)(param_1 + 0xa0),L"simprim_Vcomponents_all.vhd");
      (**(code **)(*local_28 + 0x100))(local_28,local_80);
    }
  }
  else if ((*(int *)(param_1 + 0x9c) == 0) && (*(int *)(param_1 + 0x98) == 1)) {
    FUN_00416ba0(&local_88,*(undefined8 *)(param_1 + 0x60),L"unisim_VCOMP_part2.vhd");
    (**(code **)(*local_28 + 0x100))(local_28,local_88);
    FUN_00416ba0(&local_90,*(undefined8 *)(param_1 + 0x58),L"\\unisim_VCOMP_part1.vhd");
    (**(code **)(*local_28 + 0xd8))(local_28,local_90);
    FUN_00416ba0(&local_98,*(undefined8 *)(param_1 + 0x60),L"unisim_VCOMP_part2.vhd");
    (**(code **)(*local_30 + 0xd8))(local_30,local_98);
    (**(code **)(*local_28 + 0x88))(local_28,local_30);
    FUN_00416ba0(&local_a0,*(undefined8 *)(param_1 + 0x58),L"unisim_VCOMP_part3.vhd");
    (**(code **)(*local_30 + 0xd8))(local_30,local_a0);
    (**(code **)(*local_28 + 0x88))(local_28,local_30);
    iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x68),L"tina");
    if (iVar1 == 0) {
      FUN_00416ba0(&local_a8,*(undefined8 *)(param_1 + 0xa0),L"unisim_VCOMP.vhd");
      (**(code **)(*local_28 + 0x100))(local_28,local_a8);
    }
    else {
      FUN_00416ba0(&local_b0,*(undefined8 *)(param_1 + 0xa0),L"unisim_VCOMP_all.vhd");
      (**(code **)(*local_28 + 0x100))(local_28,local_b0);
    }
  }
  else {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,0);
    FUN_004134c0(uVar2);
  }
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
  FUN_00414560(&local_b0,0xc);
  FUN_00414480(&local_40);
  return;
}


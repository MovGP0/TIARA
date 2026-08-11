/* Ghidra address: 01b83200 */
/* Ghidra symbol: FUN_01b83200 */


void FUN_01b83200(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,longlong param_6,undefined1 param_7)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_f8 [32];
  int *local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  int local_80 [4];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_90 = auStack_f8;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  local_20 = 0;
  *param_5 = 0;
  local_28 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_30 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_38 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_01b83010(&local_50,local_res18);
  FUN_00416ba0(&local_98,L"LTSYM:",local_50);
  sVar4 = FUN_00c40790(*(undefined8 *)PTR_DAT_02004440,local_98);
  local_80[2] = (int)sVar4;
  if (local_80[2] < 0) {
    if (param_6 == 0) {
      local_a8 = local_res18;
      local_a0 = 0x11;
      local_d8 = (int *)((ulonglong)local_d8 & 0xffffffff00000000);
      uVar6 = FUN_0044d530(&PTR_FUN_004334c0,1,L"Device not found: %s",&local_a8);
      FUN_004134c0(uVar6);
    }
    else {
      local_48 = param_6;
      uVar6 = FUN_004aeac0(*(undefined8 *)(param_6 + 0x38),0);
      *param_5 = uVar6;
    }
  }
  else {
    uVar6 = FUN_004aeac0(*(undefined8 *)PTR_DAT_02004440,local_80[2]);
    local_48 = FUN_00c3f320(uVar6);
    uVar6 = FUN_004aeac0(*(undefined8 *)(local_48 + 0x38),0);
    *param_5 = uVar6;
  }
  local_20 = FUN_01b82e90(param_1,local_48);
  local_40 = (undefined8 *)FUN_0176c970(&PTR_FUN_01761b48,1,param_2);
  *(undefined8 **)(param_2 + 0x1a8) = local_40;
  *(undefined1 *)(param_2 + 0x1a0) = 2;
  FUN_0176edb0(local_40,local_res20,0);
  (**(code **)*local_40)(local_40,local_res18);
  *(undefined1 *)(local_40 + 0x22) = param_7;
  local_80[1] = 1;
  *(undefined1 *)((longlong)local_40 + 99) = 0xfe;
  local_80[0] = FUN_01b83fb0(param_1,local_40);
  if (1 < local_80[0]) {
    cVar3 = FUN_01b82f60(local_res18);
    if (cVar3 == '\0') {
      *(undefined1 *)((longlong)local_40 + 99) = 0xff;
    }
  }
  FUN_00414b50(&local_70,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20));
  FUN_00416db0(local_70,&DAT_01b83ba8);
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x28) != 0) {
    iVar5 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28),&DAT_01b83bbc);
    if (iVar5 != 0) {
      iVar5 = FUN_004170c0(&DAT_01b83bd0,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28),1);
      if (0 < iVar5) {
        local_d8 = (int *)CONCAT71(local_d8._1_7_,1);
        FUN_00450070(&local_b0,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28),&DAT_01b83bd0,0);
        FUN_00414ad0(*(longlong *)(param_1 + 8) + 0x28,local_b0);
      }
      iVar5 = FUN_004170c0(&DAT_01b83be4,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28),1);
      if (0 < iVar5) {
        local_d8 = (int *)CONCAT71(local_d8._1_7_,1);
        FUN_00450070(&local_b8,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28),&DAT_01b83be4,0);
        FUN_00414ad0(*(longlong *)(param_1 + 8) + 0x28,local_b8);
      }
      iVar5 = FUN_004170c0(&DAT_01b83bd0,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30),1);
      if (0 < iVar5) {
        local_d8 = (int *)CONCAT71(local_d8._1_7_,1);
        FUN_00450070(&local_c0,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30),&DAT_01b83bd0,0);
        FUN_00414ad0(*(longlong *)(param_1 + 8) + 0x30,local_c0);
      }
      iVar5 = FUN_004170c0(&DAT_01b83be4,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30),1);
      if (0 < iVar5) {
        local_d8 = (int *)CONCAT71(local_d8._1_7_,1);
        FUN_00450070(&local_c8,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30),&DAT_01b83be4,0);
        FUN_00414ad0(*(longlong *)(param_1 + 8) + 0x30,local_c8);
      }
      local_d8 = local_80;
      FUN_01b83d20(param_1,local_40,0,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28));
    }
  }
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x30) != 0) {
    iVar5 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30),&DAT_01b83bbc);
    if (iVar5 != 0) {
      cVar3 = FUN_01b7fd30(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30),&local_58,&local_60);
      if (cVar3 != '\0') {
        local_d8 = local_80;
        FUN_01b83d20(param_1,local_40,local_58,local_60);
      }
    }
  }
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x38) != 0) {
    iVar5 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x38),&DAT_01b83bbc);
    if (iVar5 != 0) {
      local_80[0] = FUN_01b7fe80(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x38),&local_30,
                                 &local_38);
      local_d8 = local_80;
      FUN_01b83c30(param_1,local_40,local_30,local_38);
    }
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar1 + 0x40) != 0) {
    iVar5 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x40),&DAT_01b83bbc);
    if (iVar5 != 0) {
      cVar3 = FUN_01b7fd30(*(undefined8 *)(lVar1 + 0x38),&local_58,&local_60);
      if (cVar3 != '\0') {
        local_d8 = local_80;
        FUN_01b83d20(param_1,local_40,local_58,local_60);
      }
    }
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
  if ((*(uint *)(lVar1 + 8) & 2) != 0) {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x18) + 0x18);
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_60,0);
    local_d8 = local_80;
    FUN_01b83d20(param_1,local_40,L"Ampl",local_60);
    plVar2 = *(longlong **)
              (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x48) + 0x18) + 0x18);
    iVar5 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (1 < iVar5) {
      plVar2 = *(longlong **)
                (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x48) + 0x18) + 0x18);
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_60,1);
      local_d8 = local_80;
      FUN_01b83d20(param_1,local_40,L"Phase",local_60);
    }
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
  if ((*(uint *)(lVar1 + 8) & 1) != 0) {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + 0x18);
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_60,0);
    local_d8 = local_80;
    FUN_01b83d20(param_1,local_40,L"Value",local_60);
  }
  FUN_01768da0(local_40,local_48);
  (**(code **)(*(longlong *)local_40[0x18] + 0x10))((longlong *)local_40[0x18],local_20);
  if (local_20 != 0) {
    FUN_00410f20(local_20);
  }
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
  FUN_00410f20(local_38);
  FUN_00414560(&local_c8,4);
  FUN_00414480(&local_98);
  FUN_00414560(&local_70,5);
  FUN_00414480(&local_res18);
  return;
}


/* Ghidra address: 01a335f0 */
/* Ghidra symbol: FUN_01a335f0 */


undefined8 FUN_01a335f0(longlong param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_50 = *param_2;
  uStack_48 = param_2[1];
  uStack_40 = param_2[2];
  uStack_38 = param_2[3];
  local_30 = param_2[4];
  FUN_004179d0(&local_50,&DAT_01a30988);
  FUN_00414b50(&local_a8,&DAT_01a33aa0);
  FUN_00414480(&local_58);
  FUN_00414480(&local_88);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    if (param_3 == '\0') {
      FUN_00414b50(&local_58,local_30);
    }
    else {
      FUN_00414b50(&local_58,L"voltage,R1");
    }
  }
  else {
    FUN_00414b50(&local_58,*(undefined8 *)(param_1 + 0x60));
  }
  plVar3 = (longlong *)FUN_01b21190(local_58,0x2c,0);
  FUN_00414480(&local_78);
  FUN_00414480(&local_80);
  iVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (0 < iVar1) {
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_78,0);
  }
  iVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (1 < iVar1) {
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_80,1);
  }
  iVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (2 < iVar1) {
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_88,2);
  }
  FUN_00410f20(plVar3);
  FUN_0043e1a0(&local_b0,local_78);
  iVar1 = FUN_00416db0(local_b0,L"voltage");
  if (iVar1 == 0) {
    FUN_00414b50(&local_98,L"get_voltage");
  }
  FUN_0043e1a0(&local_b8,local_78);
  iVar1 = FUN_00416db0(local_b8,L"current");
  if (iVar1 == 0) {
    FUN_00414b50(&local_98,L"get_current");
  }
  FUN_0043e1a0(&local_c0,local_78);
  iVar1 = FUN_00416db0(local_c0,L"total resistance");
  if (iVar1 == 0) {
    FUN_00414b50(&local_98,L"get_total_impedance");
  }
  FUN_0043e1a0(&local_c8,local_78);
  iVar1 = FUN_00416db0(local_c8,L"resistance");
  if (iVar1 != 0) {
    FUN_0043e1a0(&local_d0,local_78);
    iVar1 = FUN_00416db0(local_d0,L"impedance");
    if (iVar1 != 0) goto LAB_01a338ea;
  }
  FUN_00414b50(&local_98,L"get_impedance");
LAB_01a338ea:
  FUN_00414b50(&local_a0,local_80);
  local_f0 = local_78;
  local_e8 = 0x11;
  local_e0 = local_a0;
  local_d8 = 0x11;
  FUN_00442f70(&local_90,L"What is the %s on %s?",&local_f0,1);
  if (local_88 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0043fc00(local_88);
  }
  uVar4 = FUN_00f309b0(&LAB_00f23b78,1);
  uVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,local_90);
  FUN_00f30e70(uVar4,L"text",uVar5);
  uVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,local_98);
  FUN_00f30e70(uVar4,&DAT_01a33c74,uVar5);
  uVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,local_a0);
  FUN_00f30e70(uVar4,L"comp",uVar5);
  uVar5 = FUN_00f2f8e0(&LAB_00f22f08,1,uVar2);
  FUN_00f30e70(uVar4,L"options",uVar5);
  uVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,local_a8);
  FUN_00f30e70(uVar4,&DAT_01a33cbc,uVar5);
  FUN_00414560(&local_d0,0x10);
  FUN_00417740(&local_50,&DAT_01a30988);
  return uVar4;
}


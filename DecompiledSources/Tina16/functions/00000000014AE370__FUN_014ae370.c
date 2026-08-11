/* Ghidra address: 014ae370 */
/* Ghidra symbol: FUN_014ae370 */


void FUN_014ae370(undefined8 param_1,char param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res8;
  char local_res10;
  longlong local_res18;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong *local_68;
  int local_60;
  undefined1 local_5c [8];
  undefined1 local_54 [8];
  undefined1 local_4c [8];
  undefined1 local_44 [8];
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_80 = auStack_f8;
  local_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_78 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  FUN_00417580(local_5c,&DAT_01d2e6d8);
  if (local_res10 == '\0') {
    local_28 = FUN_004b9860(&PTR_FUN_0047c498,1,local_res8,0xff00);
    local_d8 = (undefined1 *)((ulonglong)local_d8 & 0xffffffffffffff00);
    local_20 = FUN_01d30b30(&DAT_01d2e8e8,1,local_28,1);
    FUN_00414b50(local_5c,L"Analysis parameters");
    FUN_00414b50(local_54,L"V1.00");
    FUN_00414b50(local_4c,L"02/02/96 17:00 CET");
    FUN_00414b50(local_44,L"Analysis parameters of a circuit.");
    FUN_00416ba0(local_3c,L"TINA ",*(undefined8 *)PTR_DAT_02004728);
    FUN_00414b50(local_34,L"(c) Copyright 1993,94,95,96 DesignSoft Inc.\n\rAll rights reserved.");
    local_2c = 0;
    if (local_res18 != 0) {
      *(undefined1 *)(local_res18 + 0x490) = 1;
    }
    FUN_01d31aa0(local_20,local_res18);
    FUN_01d318b0(local_20,local_5c);
    FUN_014a3f70(&local_20,0,0,0);
    iVar1 = FUN_01d31a40(local_20);
    if (iVar1 != 0) {
      uVar2 = FUN_01d31a40(local_20);
      FUN_00b047e0(uVar2);
    }
    FUN_00410f20(local_20);
    FUN_00410f20(local_28);
  }
  else {
    local_70 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    local_68 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*local_68 + 0x78))(local_68,L"Parameter Value");
    iVar1 = 0x2d;
    do {
      (**(code **)(*local_68 + 0x78))(local_68,0);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    uVar3 = FUN_00b89270();
    FUN_00b8e520(uVar3,&local_88,0x5a8);
    (**(code **)(*local_70 + 0x78))(local_70,local_88);
    uVar3 = FUN_00b89270();
    FUN_00b8e520(uVar3,&local_90,0x5a9);
    (**(code **)(*local_70 + 0x78))(local_70,local_90);
    local_60 = 0;
    do {
      lVar4 = (longlong)(local_60 + 1);
      if ((PTR_DAT_02004b98[lVar4 * 0x28 + -0x25] == '\x01') ||
         (PTR_DAT_02004b98[lVar4 * 0x28 + -0x25] == '\x02')) {
        uVar3 = FUN_00b89270();
        FUN_00b8e520(uVar3,&local_98,local_60 + 0x24c);
        uVar3 = FUN_0040c770(*(undefined8 *)(PTR_DAT_02004010 + lVar4 * 8 + 0xc0));
        FUN_0043f780(&local_a0,uVar3);
        local_d8 = &LAB_014aeb0c;
        local_d0 = local_a0;
        FUN_00416cd0(&local_78,4,&DAT_014aeafc);
      }
      else if (PTR_DAT_02004b98[lVar4 * 0x28 + -0x25] == '\x03') {
        uVar3 = FUN_00b89270();
        FUN_00b8e520(uVar3,&local_a8,local_60 + 0x24c);
        uVar2 = FUN_0040c770(*(undefined8 *)(PTR_DAT_02004010 + lVar4 * 8 + 0xc0));
        (**(code **)(*local_70 + 0x18))(local_70,&local_b0,uVar2);
        local_d8 = &LAB_014aeb0c;
        local_d0 = local_b0;
        FUN_00416cd0(&local_78,4,&DAT_014aeafc);
      }
      else {
        uVar3 = FUN_00b89270();
        FUN_00b8e520(uVar3,&local_b8,local_60 + 0x24c);
        local_d8 = (undefined1 *)CONCAT71(local_d8._1_7_,1);
        FUN_00b8fd60(&local_c0,*(undefined8 *)(PTR_DAT_02004010 + lVar4 * 8 + 0xc0),
                     *PTR_DAT_02005310,0);
        local_d8 = &LAB_014aeb0c;
        local_d0 = local_c0;
        FUN_00416cd0(&local_78,4,&DAT_014aeafc);
      }
      (**(code **)(*local_68 + 0x40))(local_68,PTR_DAT_02004b98[lVar4 * 0x28 + -0x27],local_78);
      local_60 = local_60 + 1;
    } while (local_60 != 0x2d);
    (**(code **)(*local_68 + 0x100))(local_68,local_res8);
    FUN_00410f20(local_70);
    FUN_00410f20(local_68);
  }
  FUN_00414560(&local_c0,8);
  FUN_00414480(&local_78);
  FUN_00417740(local_5c,&DAT_01d2e6d8);
  FUN_00414480(&local_res8);
  return;
}


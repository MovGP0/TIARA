/* Ghidra address: 012927b0 */
/* Ghidra symbol: FUN_012927b0 */


void FUN_012927b0(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                 undefined8 param_5,ulonglong param_6)

{
  undefined8 local_res18;
  longlong *local_res20;
  undefined1 auStack_1e8 [32];
  ulonglong local_1c8;
  ulonglong local_1c0;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  int local_e8;
  int local_e4;
  int local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  undefined8 local_28 [3];
  
  local_f0 = auStack_1e8;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_28[0] = 0;
  local_30 = (longlong *)0x0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  local_60 = 0;
  local_68 = (longlong *)0x0;
  local_70 = 0;
  local_78 = (longlong *)0x0;
  local_80 = (longlong *)0x0;
  local_88 = (longlong *)0x0;
  local_90 = (longlong *)0x0;
  local_98 = (longlong *)0x0;
  local_a0 = (longlong *)0x0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  FUN_00414610(param_6);
  (**(code **)(*local_res20 + 0xe8))(local_res20,&local_70,L"wire");
  FUN_0128f0f0(local_70,param_2);
  (**(code **)(*local_res20 + 0xe8))(local_res20,&local_98,&DAT_012935c4);
  (**(code **)(*local_98 + 0x68))(local_98);
  (**(code **)(*local_98 + 0x70))(local_98,&local_f8);
  FUN_0041b890(&local_58,local_f8,&DAT_012935ca);
  while (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x100))(local_58,&local_100,L"position");
    FUN_00416ba0(&local_d8,local_100,&DAT_01293608);
    local_b4 = FUN_012421e0(&local_d8);
    local_b8 = FUN_012421e0(&local_d8);
    (**(code **)(*local_58 + 0x100))(local_58,&local_108,L"brpos");
    FUN_00416ba0(&local_d8,local_108,&DAT_01293608);
    local_bc = FUN_012421e0(&local_d8);
    local_c0 = FUN_012421e0(&local_d8);
    (**(code **)(*local_58 + 0x100))(local_58,&local_110,L"ioid");
    local_dc = FUN_0043fc50(local_110,0);
    local_1c8 = CONCAT44(local_1c8._4_4_,local_b8);
    local_1c0 = CONCAT44(local_1c0._4_4_,local_bc);
    local_1b8 = CONCAT44(local_1b8._4_4_,local_c0);
    local_b0 = FUN_017bcd00(0,&PTR_FUN_017bca38,local_dc,local_b4);
    (**(code **)(*local_58 + 0xd8))(local_58,&local_118,L"image/label");
    FUN_0041b890(&local_30,local_118,&DAT_012935ca);
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 0x100))(local_30,&local_128,L"textroot");
      FUN_004168e0(&local_130,local_128);
      FUN_00415dd0(&local_138,param_6,0);
      FUN_00b0cfa0(&local_120,local_130,local_138);
      FUN_00414ad0(local_b0 + 0x98,local_120);
      if (*(longlong *)(local_b0 + 0x98) != 0) {
        (**(code **)(*local_30 + 0x100))(local_30,&local_140,L"position");
        FUN_00416ba0(&local_d8,local_140,&DAT_01293608);
        local_e0 = FUN_012421e0(&local_d8);
        local_e4 = FUN_012421e0(&local_d8);
        local_1c8 = local_1c8 & 0xffffffffffffff00;
        local_1c0 = param_6;
        FUN_012431c0(local_d0,&local_e0,&local_e4,0);
        local_e0 = local_e0 - *(int *)(local_b0 + 0xc);
        local_e4 = local_e4 - *(int *)(local_b0 + 0x10);
        FUN_01cf1530(0,0,&local_e0,&local_e4);
        *(int *)(local_b0 + 0xa0) = local_e0;
        *(int *)(local_b0 + 0xa4) = local_e4;
      }
    }
    (**(code **)(*param_2 + 0x20))(param_2,local_b0);
    (**(code **)(*local_98 + 0x70))(local_98,&local_148);
    FUN_0041b890(&local_58,local_148,&DAT_012935ca);
  }
  (**(code **)(*local_res20 + 0xe8))(local_res20,&local_68,L"component");
  local_e8 = (**(code **)(*local_68 + 0x18))(local_68);
  local_e8 = local_e8 + -1;
  if (-1 < local_e8) {
    do {
      (**(code **)(*local_68 + 0x20))(local_68,&local_150,local_e8);
      FUN_0041b890(local_28,local_150,&DAT_012935ca);
      local_1c8 = param_6;
      local_1c0 = local_1c0 & 0xffffffff00000000;
      local_1b8 = 0;
      FUN_0128f4c0(local_28[0],param_1,param_2,param_5);
      local_e8 = local_e8 + -1;
    } while (local_e8 != -1);
  }
  (**(code **)(*local_res20 + 0xe8))(local_res20,&local_78,L"text");
  (**(code **)(*local_78 + 0x68))(local_78);
  (**(code **)(*local_78 + 0x70))(local_78,&local_158);
  FUN_0041b890(&local_38,local_158,&DAT_012935ca);
  while (local_38 != 0) {
    FUN_012909f0(local_38,param_2,param_6);
    (**(code **)(*local_78 + 0x70))(local_78,&local_160);
    FUN_0041b890(&local_38,local_160,&DAT_012935ca);
  }
  (**(code **)(*local_res20 + 0xe8))(local_res20,&local_80,L"picture");
  (**(code **)(*local_80 + 0x68))(local_80);
  (**(code **)(*local_80 + 0x70))(local_80,&local_168);
  FUN_0041b890(&local_40,local_168,&DAT_012935ca);
  while (local_40 != 0) {
    FUN_01290c30(local_40,param_2,param_5,param_6);
    (**(code **)(*local_80 + 0x70))(local_80,&local_170);
    FUN_0041b890(&local_40,local_170,&DAT_012935ca);
  }
  (**(code **)(*local_res20 + 0xe8))(local_res20,&local_90,L"hide");
  (**(code **)(*local_90 + 0x68))(local_90);
  (**(code **)(*local_90 + 0x70))(local_90,&local_178);
  FUN_0041b890(&local_50,local_178,&DAT_012935ca);
  while (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x100))(local_50,&local_180,L"position");
    FUN_00416ba0(&local_d8,local_180,&DAT_01293608);
    local_b4 = FUN_012421e0(&local_d8);
    local_b8 = FUN_012421e0(&local_d8);
    local_a8 = FUN_00c54610(0,&PTR_FUN_00c54448,local_b4,local_b8);
    (**(code **)(*param_2 + 0x20))(param_2,local_a8);
    (**(code **)(*local_90 + 0x70))(local_90,&local_188);
    FUN_0041b890(&local_50,local_188,&DAT_012935ca);
  }
  (**(code **)(*local_res20 + 0xe8))(local_res20,&local_88,L"titleblock");
  (**(code **)(*local_88 + 0x68))(local_88);
  (**(code **)(*local_88 + 0x70))(local_88,&local_190);
  FUN_0041b890(&local_48,local_190,&DAT_012935ca);
  while (local_48 != 0) {
    FUN_01291e60(local_48,param_2);
    (**(code **)(*local_88 + 0x70))(local_88,&local_198);
    FUN_0041b890(&local_48,local_198,&DAT_012935ca);
  }
  (**(code **)(*local_res20 + 0xe8))(local_res20,&local_a0,L"figure");
  (**(code **)(*local_a0 + 0x68))(local_a0);
  (**(code **)(*local_a0 + 0x70))(local_a0,&local_1a0);
  FUN_0041b890(&local_60,local_1a0,&DAT_012935ca);
  while (local_60 != 0) {
    FUN_01292270(local_60,param_2);
    (**(code **)(*local_a0 + 0x70))(local_a0,&local_1a8);
    FUN_0041b890(&local_60,local_1a8,&DAT_012935ca);
  }
  FUN_00417840(&local_1a8,&DAT_00b9f8e0,5);
  FUN_00414480(&local_180);
  FUN_00417840(&local_178,&DAT_00b9f8e0,7);
  FUN_00414480(&local_140);
  FUN_004144d0(&local_138);
  FUN_00414520(&local_130);
  FUN_00414560(&local_128,2);
  FUN_0041b800(&local_118);
  FUN_00414560(&local_110,3);
  FUN_0041b800(&local_f8);
  FUN_00414560(&local_d8,3);
  FUN_00417840(&local_a0,&DAT_00b9f960,8);
  FUN_00417840(&local_60,&LAB_00b9fca0,8);
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  FUN_00414480(&param_6);
  return;
}


/* Ghidra address: 01245c80 */
/* Ghidra symbol: FUN_01245c80 */


void FUN_01245c80(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4,
                 char param_5)

{
  undefined2 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong *local_res10;
  longlong *local_res18;
  longlong local_res20;
  undefined1 auStack_278 [32];
  undefined *local_258;
  wchar_t *local_250;
  undefined8 local_248;
  undefined *local_240;
  undefined8 local_238;
  int local_21c;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 *local_150;
  undefined4 local_140;
  undefined4 local_13c;
  short *local_138;
  short *local_130;
  undefined1 local_127;
  undefined1 local_126;
  undefined1 local_125;
  undefined1 local_120;
  undefined1 local_11f;
  undefined1 local_11e;
  undefined1 local_11d;
  undefined1 local_11c;
  undefined1 local_11b;
  undefined1 local_11a;
  undefined1 local_119;
  undefined1 local_118;
  undefined1 local_117;
  undefined1 local_116;
  undefined1 local_115;
  undefined1 local_114;
  undefined1 local_113;
  undefined1 local_112;
  undefined1 local_111;
  int local_110;
  int local_10c;
  short *local_108;
  int local_100;
  int local_fc;
  longlong local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  wchar_t *local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
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
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_150 = auStack_278;
  local_210 = 0;
  local_218 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_188 = 0;
  local_190 = 0;
  local_170 = 0;
  local_178 = 0;
  local_180 = (undefined *)0x0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_f0 = (longlong *)0x0;
  local_f8 = 0;
  local_38 = 0;
  local_30 = (undefined *)0x0;
  local_28 = 0;
  local_20[0] = 0;
  local_40 = 0;
  local_48 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_c8 = 0;
  local_c0 = (undefined *)0x0;
  local_b8 = 0;
  local_b0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = (wchar_t *)0x0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_2);
  FUN_0041b910(local_res18);
  uVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
  uVar3 = uVar3 & 0xffff;
  if (uVar3 < 0x8a) {
    if (uVar3 == 0x89) {
      if (param_5 == '\0') {
        (**(code **)(*local_res10 + 0x148))(local_res10,&local_f0,L"actzone");
        (**(code **)(*local_res18 + 0x98))(local_res18,&local_1a8,local_f0);
        (**(code **)(*local_f0 + 0x108))(local_f0,L"points",L"-32,-16,64,24");
        FUN_00414480(&local_f8);
        local_fc = 0;
        do {
          FUN_00414480(&local_48);
          FUN_0043f750(&local_48,local_fc);
          local_258 = &DAT_01247638;
          FUN_00416cd0(&local_f8,3,local_f8,local_48);
          FUN_00414480(&local_48);
          local_fc = local_fc + 1;
        } while (local_fc != 0x100);
        local_140 = 0;
        if (local_f8 != 0) {
          local_140 = *(undefined4 *)(local_f8 + -4);
        }
        FUN_00416e20(&local_f8,local_140,1);
        FUN_00416ba0(&local_1b0,&DAT_01247730,local_f8);
        (**(code **)(*local_f0 + 0x108))(local_f0,L"action",local_1b0);
      }
      goto code_r0x01247142;
    }
    if (uVar3 < 100) {
      if ((((uVar3 != 99) && (uVar3 != 0x23)) && (uVar3 != 0x34)) && (uVar3 != 0x3b))
      goto code_r0x01247142;
    }
    else if ((1 < uVar3 - 0x7d) && (uVar3 != 0x80)) {
      if ((uVar3 == 0x88) && (param_5 == '\0')) {
        (**(code **)(*local_res10 + 0x148))(local_res10,&local_f0,L"actzone");
        (**(code **)(*local_res18 + 0x98))(local_res18,&local_198,local_f0);
        (**(code **)(*local_f0 + 0x108))(local_f0,L"points",L"-16,-16,28,28");
        FUN_00414480(&local_f8);
        local_fc = 0;
        do {
          FUN_00414480(&local_40);
          FUN_0043f750(&local_40,local_fc);
          local_258 = &DAT_01247638;
          FUN_00416cd0(&local_f8,3,local_f8,local_40);
          FUN_00414480(&local_40);
          local_fc = local_fc + 1;
        } while (local_fc != 0x10);
        local_13c = 0;
        if (local_f8 != 0) {
          local_13c = *(undefined4 *)(local_f8 + -4);
        }
        FUN_00416e20(&local_f8,local_13c,1);
        FUN_00416ba0(&local_1a0,&DAT_01247730,local_f8);
        (**(code **)(*local_f0 + 0x108))(local_f0,L"action",local_1a0);
      }
      goto code_r0x01247142;
    }
  }
  else if (uVar3 < 0x464) {
    if (uVar3 == 0x463) {
LAB_01246ed7:
      if (param_5 == '\0') {
        uVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
        iVar2 = FUN_01245c00(auStack_278,uVar1);
        local_21c = iVar2 + -1;
        local_fc = 0;
        if (-1 < local_21c) {
          do {
            local_21c = iVar2;
            (**(code **)(*local_res10 + 0x148))(local_res10,&local_f0,L"actzone");
            (**(code **)(*local_res18 + 0x98))(local_res18,&local_1f8,local_f0);
            FUN_00414480(&local_e8);
            local_125 = 0x10;
            FUN_0043f750(&local_e8,0x10);
            local_d8 = 0;
            FUN_0043f750(&local_200,local_fc * 0x10 + 8);
            local_258 = (undefined *)local_200;
            local_250 = L",";
            FUN_00416cd0(&local_d8,4,local_e8,&DAT_01247638);
            FUN_00414480(&local_e0);
            local_126 = 0x20;
            FUN_0043f750(&local_e0,0x20);
            FUN_00414480(&local_d0);
            local_127 = 0x10;
            FUN_0043f750(&local_d0,0x10);
            local_258 = &DAT_01247638;
            local_250 = local_d0;
            FUN_00416cd0(&local_208,4,local_d8,local_e0);
            (**(code **)(*local_f0 + 0x108))(local_f0,L"points",local_208);
            FUN_00414480(&local_d0);
            FUN_00414480(&local_d8);
            FUN_00414480(&local_e0);
            FUN_00414480(&local_e8);
            FUN_00c42670(0x4000000000000000,(double)local_fc);
            uVar4 = FUN_0040c770();
            FUN_0043f780(&local_218,uVar4);
            FUN_00416ba0(&local_210,&DAT_012477e4,local_218);
            (**(code **)(*local_f0 + 0x108))(local_f0,L"action",local_210);
            local_fc = local_fc + 1;
            local_21c = local_21c + -1;
            iVar2 = local_21c;
          } while (local_21c != 0);
        }
      }
      goto code_r0x01247142;
    }
    if ((uVar3 == 0x8c) || (uVar3 == 0xa2)) {
      if (param_5 == '\0') {
        (**(code **)(*local_res10 + 0x148))(local_res10,&local_f0,L"actzone");
        (**(code **)(*local_res18 + 0x98))(local_res18,&local_1b8,local_f0);
        FUN_00414480(&local_68);
        local_111 = 0x10;
        FUN_0043f750(&local_68,0x10);
        FUN_00414480(&local_60);
        local_112 = 8;
        FUN_0043f750(&local_60,8);
        FUN_00414480(&local_58);
        local_113 = 0x18;
        FUN_0043f750(&local_58,0x18);
        FUN_00414480(&local_50);
        local_114 = 0x18;
        FUN_0043f750(&local_50,0x18);
        local_258 = (undefined *)local_60;
        local_250 = L",";
        local_248 = local_58;
        local_240 = &DAT_01247638;
        local_238 = local_50;
        FUN_00416cd0(&local_1c0,7,local_68,&DAT_01247638);
        (**(code **)(*local_f0 + 0x108))(local_f0,L"points",local_1c0);
        FUN_00414480(&local_50);
        FUN_00414480(&local_58);
        FUN_00414480(&local_60);
        FUN_00414480(&local_68);
        (**(code **)(*local_f0 + 0x108))(local_f0,L"action",&DAT_01247794);
        (**(code **)(*local_res10 + 0x148))(local_res10,&local_f0,L"actzone");
        (**(code **)(*local_res18 + 0x98))(local_res18,&local_1c8,local_f0);
        FUN_00414480(&local_88);
        local_115 = 0x30;
        FUN_0043f750(&local_88,0x30);
        FUN_00414480(&local_80);
        local_116 = 8;
        FUN_0043f750(&local_80,8);
        FUN_00414480(&local_78);
        local_117 = 0x18;
        FUN_0043f750(&local_78,0x18);
        FUN_00414480(&local_70);
        local_118 = 0x18;
        FUN_0043f750(&local_70,0x18);
        local_258 = (undefined *)local_80;
        local_250 = L",";
        local_248 = local_78;
        local_240 = &DAT_01247638;
        local_238 = local_70;
        FUN_00416cd0(&local_1d0,7,local_88,&DAT_01247638);
        (**(code **)(*local_f0 + 0x108))(local_f0,L"points",local_1d0);
        FUN_00414480(&local_70);
        FUN_00414480(&local_78);
        FUN_00414480(&local_80);
        FUN_00414480(&local_88);
        (**(code **)(*local_f0 + 0x108))(local_f0,L"action",&DAT_012477a8);
        (**(code **)(*local_res10 + 0x148))(local_res10,&local_f0,L"actzone");
        (**(code **)(*local_res18 + 0x98))(local_res18,&local_1d8,local_f0);
        FUN_00414480(&local_a8);
        local_119 = 0x10;
        FUN_0043f750(&local_a8,0x10);
        FUN_00414480(&local_a0);
        local_11a = 0x28;
        FUN_0043f750(&local_a0,0x28);
        FUN_00414480(&local_98);
        local_11b = 0x18;
        FUN_0043f750(&local_98,0x18);
        FUN_00414480(&local_90);
        local_11c = 0x18;
        FUN_0043f750(&local_90,0x18);
        local_258 = (undefined *)local_a0;
        local_250 = L",";
        local_248 = local_98;
        local_240 = &DAT_01247638;
        local_238 = local_90;
        FUN_00416cd0(&local_1e0,7,local_a8,&DAT_01247638);
        (**(code **)(*local_f0 + 0x108))(local_f0,L"points",local_1e0);
        FUN_00414480(&local_90);
        FUN_00414480(&local_98);
        FUN_00414480(&local_a0);
        FUN_00414480(&local_a8);
        (**(code **)(*local_f0 + 0x108))(local_f0,L"action",&DAT_012477bc);
        (**(code **)(*local_res10 + 0x148))(local_res10,&local_f0,L"actzone");
        (**(code **)(*local_res18 + 0x98))(local_res18,&local_1e8,local_f0);
        FUN_00414480(&local_c8);
        local_11d = 0x30;
        FUN_0043f750(&local_c8,0x30);
        FUN_00414480(&local_c0);
        local_11e = 0x28;
        FUN_0043f750(&local_c0,0x28);
        FUN_00414480(&local_b8);
        local_11f = 0x18;
        FUN_0043f750(&local_b8,0x18);
        FUN_00414480(&local_b0);
        local_120 = 0x18;
        FUN_0043f750(&local_b0,0x18);
        local_258 = local_c0;
        local_250 = L",";
        local_248 = local_b8;
        local_240 = &DAT_01247638;
        local_238 = local_b0;
        FUN_00416cd0(&local_1f0,7,local_c8,&DAT_01247638);
        (**(code **)(*local_f0 + 0x108))(local_f0,L"points",local_1f0);
        FUN_00414480(&local_b0);
        FUN_00414480(&local_b8);
        FUN_00414480(&local_c0);
        FUN_00414480(&local_c8);
        (**(code **)(*local_f0 + 0x108))(local_f0,L"action",&DAT_012477d0);
      }
      goto code_r0x01247142;
    }
    if (uVar3 != 0xb0) goto code_r0x01247142;
  }
  else {
    if (uVar3 - 0x467 < 6) goto LAB_01246ed7;
    if (uVar3 == 3000) {
      if (param_5 == '\0') {
        local_fc = 0;
        do {
          local_100 = 0;
          do {
            (**(code **)(*local_res10 + 0x148))(local_res10,&local_f0,L"actzone");
            (**(code **)(*local_res18 + 0x98))(local_res18,&local_168,local_f0);
            FUN_0043f750(&local_178,local_fc * 0xd + -0x1a);
            FUN_0043f750(&local_180,local_100 * 0xd + -0x1a);
            local_258 = local_180;
            local_250 = L",13,13";
            FUN_00416cd0(&local_170,4,local_178,&DAT_01247638);
            (**(code **)(*local_f0 + 0x108))(local_f0,L"points",local_170);
            FUN_0043f750(&local_190,local_100 * 4 + local_fc);
            FUN_00416ba0(&local_188,&DAT_01247730,local_190);
            (**(code **)(*local_f0 + 0x108))(local_f0,L"action",local_188);
            local_100 = local_100 + 1;
          } while (local_100 != 4);
          local_fc = local_fc + 1;
        } while (local_fc != 4);
        local_100 = 4;
        local_fc = 4;
      }
      goto code_r0x01247142;
    }
    if (uVar3 != 0x2900) goto code_r0x01247142;
  }
  (**(code **)(*local_res10 + 0x148))(local_res10,&local_f0,L"actzone");
  (**(code **)(*local_res18 + 0x98))(local_res18,&local_158,local_f0);
  if (param_5 == '\0') {
    uVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
    uVar3 = uVar3 & 0xffff;
    if (uVar3 < 0x7d) {
      if ((uVar3 == 0x23) || (uVar3 == 0x34)) {
LAB_0124629f:
        (**(code **)(*local_f0 + 0x108))(local_f0,L"points",L"14,-12,12,15");
      }
      else if (uVar3 == 0x3b) {
LAB_012462c6:
        (**(code **)(*local_f0 + 0x108))(local_f0,L"points",L"13,-4,24,21");
      }
      else if (uVar3 == 99) {
        (**(code **)(*local_f0 + 0x108))(local_f0,L"points",L"16,-34,16,38");
      }
    }
    else {
      if (uVar3 - 0x7d < 2) goto LAB_0124629f;
      if (uVar3 == 0x80) {
        (**(code **)(*local_f0 + 0x108))(local_f0,L"points",L"15,-1,11,18");
      }
      else if ((uVar3 == 0xb0) || (uVar3 == 0x2900)) goto LAB_012462c6;
    }
  }
  else {
    local_108 = (short *)(local_res20 + 0x1c);
    FUN_00414480(&local_38);
    local_130 = local_108;
    FUN_0043f750(&local_38,(longlong)*local_108);
    FUN_00414480(&local_30);
    local_138 = local_108 + 1;
    FUN_0043f750(&local_30,(longlong)*local_138);
    FUN_00414480(&local_28);
    local_10c = (int)local_108[2] - (int)*local_108;
    FUN_0043f750(&local_28,local_10c);
    FUN_00414480(local_20);
    local_110 = (int)local_108[3] - (int)local_108[1];
    FUN_0043f750(local_20,local_110);
    local_258 = local_30;
    local_250 = L",";
    local_248 = local_28;
    local_240 = &DAT_01247638;
    local_238 = local_20[0];
    FUN_00416cd0(&local_160,7,local_38,&DAT_01247638);
    (**(code **)(*local_f0 + 0x108))(local_f0,L"points",local_160);
    FUN_00414480(local_20);
    FUN_00414480(&local_28);
    FUN_00414480(&local_30);
    FUN_00414480(&local_38);
  }
  (**(code **)(*local_f0 + 0x108))(local_f0,L"action",L"0:0,1");
code_r0x01247142:
  FUN_00414560(&local_218,4);
  FUN_0041b800(&local_1f8);
  FUN_00414480(&local_1f0);
  FUN_0041b800(&local_1e8);
  FUN_00414480(&local_1e0);
  FUN_0041b800(&local_1d8);
  FUN_00414480(&local_1d0);
  FUN_0041b800(&local_1c8);
  FUN_00414480(&local_1c0);
  FUN_0041b800(&local_1b8);
  FUN_00414480(&local_1b0);
  FUN_0041b800(&local_1a8);
  FUN_00414480(&local_1a0);
  FUN_0041b800(&local_198);
  FUN_00414560(&local_190,5);
  FUN_0041b800(&local_168);
  FUN_00414480(&local_160);
  FUN_0041b800(&local_158);
  FUN_00414480(&local_f8);
  FUN_0041b800(&local_f0);
  FUN_00414560(&local_e8,2);
  FUN_00414560(&local_d0,0x17);
  FUN_0041b800(&local_res10);
  FUN_0041b800(&local_res18);
  return;
}


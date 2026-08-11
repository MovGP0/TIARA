/* Ghidra address: 0129ace0 */
/* Ghidra symbol: FUN_0129ace0 */


void FUN_0129ace0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                 undefined8 *param_9,longlong *param_10)

{
  longlong *plVar1;
  char cVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_288 [32];
  undefined *local_268;
  undefined *local_260;
  undefined *local_258;
  undefined *local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
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
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined *local_168;
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
  undefined1 *local_100;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  char local_91;
  short *local_90;
  byte local_81;
  undefined *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_100 = auStack_288;
  local_240 = 0;
  local_248 = 0;
  local_230 = 0;
  local_238 = 0;
  local_220 = 0;
  local_228 = 0;
  local_210 = 0;
  local_218 = 0;
  local_200 = 0;
  local_208 = 0;
  local_1f0 = 0;
  local_1f8 = 0;
  local_1e0 = 0;
  local_1e8 = 0;
  local_1d8 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_188 = 0;
  local_190 = 0;
  local_178 = 0;
  local_180 = 0;
  local_160 = 0;
  local_168 = (undefined *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_128 = 0;
  local_130 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = (undefined *)0x0;
  local_80 = (undefined *)0x0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = 0;
  *param_8 = 0;
  *param_9 = 0;
  FUN_00441920(&local_108,*(undefined8 *)(param_1 + 0x360));
  FUN_004414c0(&local_a0,local_108,0);
  FUN_00414480(&local_b0);
  FUN_00414480(&local_b8);
  FUN_00414480(&local_a8);
  FUN_00414480(&local_c0);
  FUN_00414480(&local_c8);
  local_4c = 0;
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar6 = *(int *)(param_1 + 0x10);
  local_58 = 0;
  if (-1 < iVar6 + -1) {
    do {
      local_38 = (longlong *)FUN_00b94e60(param_1,local_58);
      cVar2 = FUN_0198a580(local_38);
      if (cVar2 == '\x04') {
        local_40 = local_38;
        uVar3 = (**(code **)(*local_38 + 0xf8))(local_38);
        FUN_0043f750(&local_60,uVar3);
        (**(code **)(*local_30 + 0x78))(local_30,local_60);
        (**(code **)(*local_40 + 0x288))(local_40,&local_110);
        FUN_01b24ac0(&local_78,local_110);
        if (local_78 != (undefined *)0x0) {
          local_268 = &DAT_0129c17c;
          FUN_00416cd0(&local_b0,3,local_b0,local_78);
          sVar4 = (**(code **)(*local_40 + 0xf8))(local_40);
          if ((((((sVar4 == 0x34) ||
                 (sVar4 = (**(code **)(*local_40 + 0xf8))(local_40), sVar4 == 0x23)) ||
                (sVar4 = (**(code **)(*local_40 + 0xf8))(local_40), sVar4 == 0x7d)) ||
               ((sVar4 = (**(code **)(*local_40 + 0xf8))(local_40), sVar4 == 0x7e ||
                (sVar4 = (**(code **)(*local_40 + 0xf8))(local_40), sVar4 == 0x3b)))) ||
              ((sVar4 = (**(code **)(*local_40 + 0xf8))(local_40), sVar4 == 0xb0 ||
               ((sVar4 = (**(code **)(*local_40 + 0xf8))(local_40), sVar4 == 0x2900 ||
                (sVar4 = (**(code **)(*local_40 + 0xf8))(local_40), sVar4 == 99)))))) ||
             (sVar4 = (**(code **)(*local_40 + 0xf8))(local_40), sVar4 == 0x80)) {
            local_268 = &DAT_0129c17c;
            FUN_00416cd0(&local_b8,3,local_b8,local_78);
          }
          sVar4 = (**(code **)(*local_40 + 0xf8))(local_40);
          if (sVar4 == 0x39) {
            FUN_00414b50(&local_70,*(undefined8 *)(local_40[0x35] + 0x38));
            FUN_00414480(&local_80);
          }
          else {
            FUN_013acbd0(&local_118,local_38,&PTR_DAT_0129c190);
            FUN_004168b0(&local_70,local_118);
            local_81 = (**(code **)(*local_40 + 0x2d0))(local_40,0,&local_90);
            if (local_81 < 5) {
              if (local_81 == 4) {
                FUN_004169a0(&local_80,local_90);
              }
              else if (local_81 == 1) {
                FUN_004169a0(&local_80,local_90);
              }
              else if (local_81 == 2) {
                FUN_0043f750(&local_80,(longlong)*local_90);
              }
              else {
                if (local_81 != 3) goto LAB_0129b487;
                FUN_004167a0(&local_80,*(undefined8 *)(local_90 + 4));
              }
            }
            else if (local_81 == 6) {
              FUN_004167a0(&local_80,*(undefined8 *)(local_90 + 4));
            }
            else if (local_81 == 7) {
              FUN_004169a0(&local_80,local_90);
            }
            else {
LAB_0129b487:
              FUN_00414480(&local_80);
            }
          }
          if (local_80 != (undefined *)0x0) {
            local_268 = local_80;
            FUN_00416cd0(&local_78,3,local_78,&DAT_0129c1a4);
          }
          local_50 = (**(code **)(*local_20 + 0xb8))(local_20,local_70);
          if (local_50 == -1) {
            local_268 = local_78;
            FUN_00416cd0(&local_120,3,local_70,&DAT_0129c1b4);
            (**(code **)(*local_20 + 0x78))(local_20,local_120);
          }
          else {
            FUN_004b5390(local_20,&local_130,local_50);
            local_268 = local_78;
            FUN_00416cd0(&local_128,3,local_130,&DAT_0129c17c);
            FUN_004b5450(local_20,local_50,local_128);
          }
        }
      }
      else {
        cVar2 = FUN_0198a580(local_38);
        if (cVar2 == '\b') {
          local_48 = local_38[5];
          plVar1 = *(longlong **)(*(longlong *)(local_48 + 0x90) + 0xa0);
          (**(code **)(*plVar1 + 0x38))(plVar1,&local_138);
          FUN_0043ea00(&local_68,local_138);
          if (((*(char *)(local_48 + 0x98) == '\0') &&
              (iVar5 = FUN_004170c0(L"tdl://",local_68,1), iVar5 == 0)) &&
             (cVar2 = FUN_01b24b70(local_68,local_28), cVar2 == '\0')) {
            local_54 = FUN_0129ac80(auStack_288,&DAT_0129c1e0,local_68);
            local_91 = FUN_01b24ed0(local_68);
            if (((local_54 == 0) || (local_54 == 1)) &&
               ((iVar5 = FUN_004170c0(&DAT_0129c1f4,local_68,1), iVar5 == 0 &&
                ((local_91 == '\0' &&
                 (local_e0 = *(longlong *)(*(longlong *)(local_48 + 0x90) + 0x80),
                 local_4c < -*(int *)(*(longlong *)(local_e0 + 0x18) + 0x28))))))) {
              if (local_54 == 0) {
                FUN_00414b50(&local_a8,local_68);
              }
              else {
                local_268 = (undefined *)CONCAT71(local_268._1_7_,1);
                FUN_00450070(&local_a8,local_68,&DAT_0129c1e0,&DAT_0129c204);
              }
              local_e8 = *(longlong *)(*(longlong *)(local_48 + 0x90) + 0x80);
              local_4c = -*(int *)(*(longlong *)(local_e8 + 0x18) + 0x28);
            }
            if (local_91 == '\0') {
              local_268 = &DAT_0129c1e0;
              local_260 = &DAT_0129c1e0;
              FUN_00416cd0(&local_c8,4,local_c8,local_68);
            }
          }
        }
      }
      local_58 = local_58 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_0043ea00(&local_140,local_b0);
  FUN_00414b50(&local_b0,local_140);
  local_ec = 0;
  if (local_b0 != 0) {
    local_ec = *(undefined4 *)(local_b0 + -4);
  }
  FUN_00416e20(&local_b0,local_ec,1);
  FUN_0043ea00(&local_148,local_b8);
  FUN_00414b50(&local_b8,local_148);
  local_f0 = 0;
  if (local_b8 != 0) {
    local_f0 = *(undefined4 *)(local_b8 + -4);
  }
  FUN_00416e20(&local_b8,local_f0,1);
  FUN_0043eb80(&local_150,local_c8);
  FUN_00414b50(&local_c8,local_150);
  (**(code **)(*local_28 + 0x38))(local_28,&local_158);
  FUN_00415dd0(param_8,local_158,0);
  if (local_a8 == 0) {
    FUN_00414b50(&local_a8,local_a0);
  }
  iVar6 = (**(code **)(*local_20 + 0x28))();
  local_58 = 0;
  if (-1 < iVar6 + -1) {
    do {
      FUN_004b3cf0(local_20,&local_160,local_58);
      FUN_004b5390(local_20,&local_170,local_58);
      local_268 = (undefined *)CONCAT71(local_268._1_7_,1);
      FUN_00450070(&local_168,local_170,&DAT_0129c1a4,&DAT_0129c1b4);
      local_268 = &DAT_0129c1e0;
      local_260 = local_168;
      local_258 = &DAT_0129c1e0;
      local_250 = &DAT_0129c1e0;
      FUN_00416cd0(&local_c0,6,local_c0,local_160);
      local_58 = local_58 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_004168e0(&local_180,local_a0);
  FUN_00b0cea0(&local_178,local_180,0xfde9);
  FUN_00414bf0(param_2,local_178);
  FUN_004168e0(&local_190,local_a8);
  FUN_00b0cea0(&local_188,local_190,0xfde9);
  FUN_00414bf0(param_3,local_188);
  FUN_004168e0(&local_1a0,local_b0);
  FUN_00b0cea0(&local_198,local_1a0,0xfde9);
  FUN_00414bf0(param_4,local_198);
  FUN_004168e0(&local_1b0,local_b8);
  FUN_00b0cea0(&local_1a8,local_1b0,0xfde9);
  FUN_00414bf0(param_5,local_1a8);
  FUN_004168e0(&local_1c0,local_c8);
  FUN_00b0cea0(&local_1b8,local_1c0,0xfde9);
  FUN_00414bf0(param_7,local_1b8);
  FUN_004168e0(&local_1d0,local_c0);
  FUN_00b0cea0(&local_1c8,local_1d0,0xfde9);
  FUN_00414bf0(param_6,local_1c8);
  FUN_004b37d0(local_30,&local_1d8);
  FUN_00415dd0(param_9,local_1d8,0);
  if (param_10 != (longlong *)0x0) {
    local_268 = &DAT_0129c234;
    FUN_00415980(&local_1e0,3,"CIRCUIT_NAME: ",*param_2);
    FUN_00416880(&local_1e8,local_1e0);
    (**(code **)(*param_10 + 0x78))(param_10,local_1e8);
    local_268 = &DAT_0129c234;
    FUN_00415980(&local_1f0,3,"CIRCUIT_TITLE: ",*param_2);
    FUN_00416880(&local_1f8,local_1f0);
    (**(code **)(*param_10 + 0x78))(param_10,local_1f8);
    local_268 = &DAT_0129c234;
    FUN_00415980(&local_200,3,"COMPONENT_NAMES: ",*param_4);
    FUN_00416880(&local_208,local_200);
    (**(code **)(*param_10 + 0x78))(param_10,local_208);
    local_268 = &DAT_0129c234;
    FUN_00415980(&local_210,3,"SWITCH_NAMES: ",*param_5);
    FUN_00416880(&local_218,local_210);
    (**(code **)(*param_10 + 0x78))(param_10,local_218);
    local_268 = &DAT_0129c234;
    FUN_00415980(&local_220,3,"COMPONENT_VALUES: ",*param_6);
    FUN_00416880(&local_228,local_220);
    (**(code **)(*param_10 + 0x78))(param_10,local_228);
    local_268 = &DAT_0129c234;
    FUN_00415980(&local_230,3,"CIRCUIT_TEXTS: ",*param_7);
    FUN_00416880(&local_238,local_230);
    (**(code **)(*param_10 + 0x78))(param_10,local_238);
    local_268 = &DAT_0129c234;
    FUN_00415980(&local_240,3,"CIRCUIT_LINKS: ",*param_8);
    FUN_00416880(&local_248,local_240);
    (**(code **)(*param_10 + 0x78))(param_10,local_248);
  }
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
  FUN_00414480(&local_248);
  FUN_004144d0(&local_240);
  FUN_00414480(&local_238);
  FUN_004144d0(&local_230);
  FUN_00414480(&local_228);
  FUN_004144d0(&local_220);
  FUN_00414480(&local_218);
  FUN_004144d0(&local_210);
  FUN_00414480(&local_208);
  FUN_004144d0(&local_200);
  FUN_00414480(&local_1f8);
  FUN_004144d0(&local_1f0);
  FUN_00414480(&local_1e8);
  FUN_004144d0(&local_1e0);
  FUN_00414480(&local_1d8);
  FUN_00414520(&local_1d0);
  FUN_004144d0(&local_1c8);
  FUN_00414520(&local_1c0);
  FUN_004144d0(&local_1b8);
  FUN_00414520(&local_1b0);
  FUN_004144d0(&local_1a8);
  FUN_00414520(&local_1a0);
  FUN_004144d0(&local_198);
  FUN_00414520(&local_190);
  FUN_004144d0(&local_188);
  FUN_00414520(&local_180);
  FUN_004144d0(&local_178);
  FUN_00414560(&local_170,0xb);
  FUN_00414520(&local_118);
  FUN_00414560(&local_110,2);
  FUN_00414560(&local_d0,7);
  FUN_00414560(&local_80,5);
  return;
}


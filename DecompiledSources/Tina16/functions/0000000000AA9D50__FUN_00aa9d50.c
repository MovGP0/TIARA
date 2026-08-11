/* Ghidra address: 00aa9d50 */
/* Ghidra symbol: FUN_00aa9d50 */


void FUN_00aa9d50(longlong param_1,longlong *param_2,undefined4 *param_3,int param_4,int param_5,
                 int param_6,int param_7,char param_8)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  longlong local_1d0;
  undefined4 local_1c8;
  int local_1c0;
  undefined1 local_1b8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 *local_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined4 local_168;
  undefined1 local_164;
  undefined1 local_163;
  undefined1 local_162;
  undefined1 local_161;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  ulonglong local_128;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  uint local_10c;
  undefined1 local_105;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 *local_f8;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  char local_d1;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  double local_c0;
  double local_b8;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  char local_85;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  int local_4c;
  
  local_190 = auStack_1f8;
  local_64 = param_5 - *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + 0x94);
  local_68 = param_4 + param_6;
  local_70 = param_4 + *(int *)(param_1 + 0x28);
  local_78 = local_68 + *(int *)(param_1 + 0x6c);
  local_80 = local_70 - *(int *)(param_1 + 0x74);
  local_6c = local_64 + param_7;
  local_74 = local_64 + *(int *)(param_1 + 0x2c);
  local_7c = local_6c + *(int *)(param_1 + 0x70);
  local_84 = local_74 - *(int *)(param_1 + 0x78);
  local_e0 = param_3[1] + -2;
  local_d8 = local_e0 - local_7c;
  local_dc = local_d8;
  if (local_d8 < 0) {
    local_dc = 0;
  }
  local_8c = local_dc;
  local_e4 = local_e0;
  if (local_e0 < local_7c) {
    local_e4 = local_7c;
  }
  local_94 = local_e4;
  local_e8 = param_3[3] - local_e4;
  local_ec = local_e8;
  if (local_84 - local_e4 < local_e8) {
    local_ec = local_84 - local_e4;
  }
  local_90 = local_ec;
  local_1d8 = CONCAT44(local_1d8._4_4_,local_74);
  FUN_004238d0(&local_1a0,local_68,local_6c,local_70);
  lVar1 = *(longlong *)(param_1 + 0x80);
  *(undefined8 *)(lVar1 + 0x60) = local_1a0;
  *(undefined8 *)(lVar1 + 0x68) = uStack_198;
  if ((local_6c <= (int)param_3[3]) || (local_74 < (int)param_3[1])) {
    if (*(char *)(param_1 + 0x88) != '\0') {
      if (*(longlong *)(param_1 + 0x90) == 0) {
        *(undefined1 *)(param_1 + 0x88) = 0;
      }
      else if (*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x198) != *(longlong *)PTR_DAT_02001ae8
              ) {
        if (*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x198) == *(longlong *)PTR_DAT_02003010) {
          local_f8 = (undefined8 *)(param_1 + 0x90);
          local_100 = *local_f8;
          *local_f8 = 0;
          FUN_00410f20(local_100);
        }
        else {
          plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x198);
          local_1d8 = param_1 + 0x98;
          local_1d0 = param_1 + 0x4c8;
          (**(code **)(*plVar7 + 0x50))
                    (plVar7,param_1 + 0x44,*(int *)(param_1 + 0x28) - param_6,
                     *(int *)(param_1 + 0x2c) - param_7);
          cVar2 = FUN_00a9bd40(*(undefined8 *)(param_1 + 0x80));
          if (cVar2 != '\0') {
            plVar7 = (longlong *)
                     (**(code **)**(undefined8 **)(param_1 + 0x98))
                               (*(undefined8 **)(param_1 + 0x98));
            (**(code **)(*plVar7 + 0xf8))(plVar7,0);
          }
        }
        *(undefined1 *)(param_1 + 0x88) = 0;
      }
    }
    if ((((*(char *)(param_1 + 0x88) == '\0') && (*(longlong *)(param_1 + 0x90) != 0)) &&
        (*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x198) != *(longlong *)PTR_DAT_02001ae8)) &&
       (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + 0x91) != '\0')) {
      local_85 = '\x01';
    }
    else {
      local_85 = '\0';
    }
    lVar1 = *(longlong *)(param_1 + 0x80);
    if (*(char *)(lVar1 + 0x40) != '\0') {
      local_104 = *(undefined4 *)(lVar1 + 0x44);
      local_105 = (*(byte *)(*(longlong *)(lVar1 + 0x20) + 0x90) & 2) != 0;
      if (((bool)local_105) && (cVar2 = FUN_00781870(), cVar2 != '\0')) {
        uVar8 = FUN_00781840();
        local_10c = FUN_007793c0(uVar8,local_104);
      }
      else {
        local_10c = local_104;
      }
      local_10c = FUN_005fbf20(local_10c);
      FUN_005fdab0(param_2[0x10],local_10c | *(uint *)PTR_DAT_02005078);
      FUN_005fdcb0(param_2[0x10],0);
      cVar2 = FUN_00a9bd40(*(undefined8 *)(param_1 + 0x80));
      if ((cVar2 == '\0') || (local_85 == '\0')) {
        local_1d8 = CONCAT44(local_1d8._4_4_,local_94 + local_90);
        FUN_004238d0(&local_d0,local_78,local_94,local_80);
        if (*(char *)(param_1 + 0x7d) == '\0') {
          if (0 < *(int *)(param_1 + 0xf4)) {
            local_d0 = local_d0 + -1;
          }
          if (0 < *(int *)(param_1 + 0xe8)) {
            local_cc = local_cc + -1;
          }
          if (0 < *(int *)(param_1 + 0xec)) {
            local_c8 = local_c8 + 1;
          }
          if (0 < *(int *)(param_1 + 0xf0)) {
            local_c4 = local_c4 + 1;
          }
        }
        else if (param_8 != '\0') {
          FUN_00423b10(&local_d0,1,1);
        }
        (**(code **)(*param_2 + 0xa8))(param_2,&local_d0);
      }
    }
    if ((local_85 != '\0') && (*(longlong *)(param_1 + 0x98) != 0)) {
      cVar2 = FUN_00a9bd40(*(undefined8 *)(param_1 + 0x80));
      if (cVar2 == '\0') {
        local_1d8 = CONCAT44(local_1d8._4_4_,local_80 - local_78);
        local_1d0 = CONCAT44(local_1d0._4_4_,local_90);
        local_1c8 = 0;
        local_1c0 = local_8c;
        local_1b8 = *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x40);
        (**(code **)(**(longlong **)(param_1 + 0x98) + 0x78))
                  (*(longlong **)(param_1 + 0x98),param_2,local_78,local_94);
      }
      else {
        local_1d8 = CONCAT44(local_1d8._4_4_,local_80 - local_78);
        local_1d0 = CONCAT44(local_1d0._4_4_,local_90);
        local_1c8 = 0;
        local_1c0 = local_8c;
        local_1b8 = *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x40);
        (**(code **)(**(longlong **)(param_1 + 0x98) + 0x80))
                  (*(longlong **)(param_1 + 0x98),param_2,local_78,local_94);
      }
    }
    if ((local_64 < param_3[3] + 200) && (-200 < local_64 + *(int *)(param_1 + 0x2c))) {
      local_d1 = '\x01';
    }
    else {
      local_d1 = '\0';
    }
    if ((local_d1 != '\0') && (0 < *(int *)(*(longlong *)(param_1 + 0x80) + 0x10))) {
      local_4c = 0;
      local_60 = 0;
      local_58 = 0;
      if (*(char *)(param_1 + 0x7c) != '\0') {
        local_58 = thunk_FUN_03976db5(0,0,1,1);
        uVar8 = FUN_005ffa40(param_2);
        local_4c = thunk_FUN_0411a732(uVar8,local_58);
        uVar8 = FUN_005ffa40(param_2);
        thunk_FUN_040299ab(uVar8,&local_9c);
        if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + 0x92) == '\0') {
          if (*PTR_DAT_020040c8 == '\0') {
            local_60 = thunk_FUN_03976db5(local_68 - local_9c,local_6c - local_98,
                                          local_70 - local_9c,local_74 - local_98);
          }
          else {
            local_110 = local_6c - local_98;
            local_114 = local_110;
            if (local_110 < -31999) {
              local_114 = -32000;
            }
            local_118 = local_74 - local_98;
            local_11c = local_118;
            if (31999 < local_118) {
              local_11c = 32000;
            }
            local_60 = thunk_FUN_03976db5(local_68 - local_9c,local_114,local_70 - local_9c,
                                          local_11c);
          }
        }
        else {
          uVar8 = FUN_005ffa40(param_2);
          thunk_FUN_041219c3(uVar8,&local_a4);
          uVar8 = FUN_005ffa40(param_2);
          thunk_FUN_0415f350(uVar8,&local_ac);
          local_b8 = (double)local_a4 / (double)local_ac;
          local_c0 = (double)local_a0 / (double)local_a8;
          if (*PTR_DAT_020040c8 == '\0') {
            uVar3 = FUN_0040c770(local_b8 * (double)(local_68 - local_9c) - 1.0);
            uVar4 = FUN_0040c770(local_c0 * (double)(local_6c - local_98) - 1.0);
            uVar5 = FUN_0040c770(local_b8 *
                                 (double)((param_4 + *(int *)(param_1 + 0x28)) - local_9c) + 1.0);
            uVar6 = FUN_0040c770(local_c0 *
                                 (double)((local_64 + *(int *)(param_1 + 0x2c)) - local_98));
            local_60 = thunk_FUN_03976db5(uVar3,uVar4,uVar5,uVar6);
          }
          else {
            local_128 = FUN_0040c770(local_c0 * (double)(local_6c - local_98) - 1.0);
            local_130 = local_128;
            if ((longlong)local_128 < -31999) {
              local_130 = 0xffffffffffff8300;
            }
            local_138 = FUN_0040c770(local_c0 *
                                     (double)((local_64 + *(int *)(param_1 + 0x2c)) - local_98));
            local_140 = local_138;
            if (31999 < (longlong)local_138) {
              local_140 = 32000;
            }
            uVar3 = FUN_0040c770(local_b8 * (double)(local_68 - local_9c) - 1.0);
            uVar4 = FUN_0040c770(local_b8 *
                                 (double)((param_4 + *(int *)(param_1 + 0x28)) - local_9c) + 1.0);
            local_60 = thunk_FUN_03976db5(uVar3,local_130 & 0xffffffff,uVar4,local_140 & 0xffffffff)
            ;
          }
        }
        if (local_4c == 1) {
          thunk_FUN_04199bfe(local_60,local_60,local_58,1);
        }
        uVar8 = FUN_005ffa40(param_2);
        thunk_FUN_039bba01(uVar8,local_60);
      }
      local_1d8 = CONCAT44(local_1d8._4_4_,
                           param_4 + *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x6c) + param_6);
      local_1d0 = CONCAT44(local_1d0._4_4_,
                           param_5 + *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x70) +
                           *(int *)(param_1 + 0x34));
      local_1c8 = *param_3;
      local_1c0 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0x38))
                (*(longlong **)(param_1 + 0x80),param_2,param_3,
                 (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x10)) - param_6);
      if (*(char *)(param_1 + 0x7c) != '\0') {
        if (local_4c == 1) {
          uVar8 = FUN_005ffa40(param_2);
          thunk_FUN_039bba01(uVar8,local_58);
        }
        else {
          uVar8 = FUN_005ffa40(param_2);
          thunk_FUN_039bba01(uVar8,0);
        }
        thunk_FUN_0416f828(local_60);
        thunk_FUN_0416f828(local_58);
      }
    }
    *(int *)(*(longlong *)(param_1 + 0x80) + 0x58) = param_5;
    if ((local_d1 != '\0') &&
       ((0 < *(int *)(*(longlong *)(param_1 + 0x80) + 0x10) || (*(char *)(param_1 + 0x7e) != '\0')))
       ) {
      local_1d8._0_4_ = local_74;
      FUN_004238d0(local_188,local_68,local_6c,local_70);
      local_1d8._0_4_ = local_84;
      FUN_004238d0(local_178,local_78,local_7c,local_80);
      local_160 = *(undefined4 *)(param_1 + 0x104);
      local_15c = *(undefined4 *)(param_1 + 0xf8);
      local_158 = *(undefined4 *)(param_1 + 0xfc);
      local_154 = *(undefined4 *)(param_1 + 0x100);
      local_161 = *(undefined1 *)(param_1 + 0x114);
      local_162 = *(undefined1 *)(param_1 + 0x108);
      local_163 = *(undefined1 *)(param_1 + 0x10c);
      local_164 = *(undefined1 *)(param_1 + 0x110);
      local_168 = CONCAT13(local_164,CONCAT12(local_163,CONCAT11(local_162,local_161)));
      local_1d8 = CONCAT44(local_1d8._4_4_,local_168);
      local_1d0 = CONCAT44(local_1d0._4_4_,*(undefined4 *)(param_1 + 0xa0));
      local_1c8 = CONCAT31(local_1c8._1_3_,
                           *(undefined1 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + 0x92));
      local_1c0 = CONCAT31(local_1c0._1_3_,
                           *(undefined1 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + 0x90));
      local_150 = local_154;
      local_14c = local_158;
      local_148 = local_15c;
      local_144 = local_160;
      FUN_00a75130(param_2,local_188,local_178,&local_160);
    }
  }
  return;
}


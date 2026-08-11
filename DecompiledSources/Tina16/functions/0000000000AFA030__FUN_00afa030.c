/* Ghidra address: 00afa030 */
/* Ghidra symbol: FUN_00afa030 */


undefined4 FUN_00afa030(longlong *param_1,longlong *param_2,int param_3,int param_4,byte param_5)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_228 [32];
  int local_208;
  int local_200;
  int *local_1f8;
  undefined4 *local_1f0;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  undefined1 *local_1c0;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_188;
  int local_184;
  int local_180;
  byte local_179;
  int local_178;
  undefined4 local_174;
  double local_170;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  double local_150;
  double local_148;
  double local_140;
  int local_138;
  undefined4 local_134;
  undefined8 local_130;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  int local_f8;
  int local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  int local_d0;
  undefined4 local_cc;
  double local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  int local_90;
  float local_8c;
  float local_88;
  int local_84;
  longlong *local_80;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  char local_29 [9];
  
  local_1c0 = auStack_228;
  local_1e0 = 0;
  local_1d8 = 0;
  puVar1 = auStack_228;
  if (param_2 == (longlong *)0x0) {
    uVar5 = FUN_0044d490(&PTR_FUN_00ae8020,1,L"No printer to print or preview to.");
    FUN_004134c0(uVar5);
    puVar1 = local_1c0;
  }
  local_1c0 = puVar1;
  if (param_5 == 0) {
    cVar2 = FUN_004113d0(param_2,&PTR_FUN_00a7a9b0);
    if (cVar2 == '\0') {
      param_5 = 4;
    }
    else {
      param_5 = 2;
    }
  }
  else if (param_5 == 1) {
    cVar2 = FUN_004113d0(param_2,&PTR_FUN_00a7a9b0);
    if (cVar2 == '\0') {
      FUN_00410ae0(*param_2,&local_1e0);
      local_1d0 = local_1e0;
      local_1c8 = 0x11;
      local_208 = 0;
      uVar5 = FUN_0044d530(&PTR_FUN_00ae8020,1,
                           L"Getting the total number of pages to print requires a printer based on TMetaFilePrinter but not a %s"
                           ,&local_1d0);
      FUN_004134c0(uVar5);
    }
  }
  else if (param_5 == 2) {
    cVar2 = FUN_004113d0(param_2,&PTR_FUN_00a7a9b0);
    if (cVar2 == '\0') {
      FUN_00410ae0(*param_2,&local_1d8);
      local_1d0 = local_1d8;
      local_1c8 = 0x11;
      local_208 = 0;
      uVar5 = FUN_0044d530(&PTR_FUN_00ae8020,1,
                           L"Previewing a print requires a printer based on TMetaFilePrinter but not a %s"
                           ,&local_1d0);
      FUN_004134c0(uVar5);
    }
  }
  local_cc = 0;
  *(undefined4 *)(param_1 + 0x137) = 0;
  local_29[0] = '\0';
  local_b0 = 0;
  local_a0 = 0;
  param_1[0xe6] = 0;
  if (param_1[0x106] != 0) {
    (*(code *)param_1[0x106])(param_1[0x107],param_1,0,local_29);
  }
  cVar2 = FUN_00af2f30(param_1);
  if ((cVar2 == '\0') && (*(int *)(param_1[0x116] + 0x10) != 0)) {
    local_80 = (longlong *)FUN_00aa5de0(&PTR_FUN_00a90568,1,param_1[0x116]);
    FUN_00aa66b0(local_80,0);
    local_c8 = (double)param_1[0x9e];
    local_40 = FUN_005fc570(&PTR_FUN_005f2d40,1);
    local_38 = FUN_005fd250(&PTR_FUN_005f3290,1);
    local_48 = FUN_005fd7d0(&PTR_FUN_005f35d8,1);
    *(undefined4 *)(param_1 + 0x137) = 1;
    local_b8 = 0;
    local_c0 = 0;
    *(undefined1 *)((longlong)local_80 + 0x92) = 1;
    *(bool *)((longlong)local_80 + 0x2bd) = param_5 == 1;
    FUN_00aa73c0(local_80,0xffffff);
    if (param_1[0x11c] != 0) {
      FUN_00414ad0(param_2 + 0x14,param_1[0x11c]);
    }
    if ((char)param_2[0x13] == '\0') {
      (**(code **)(*param_2 + 0x98))(param_2);
    }
    else {
      (**(code **)(*param_2 + 0xa0))(param_2);
    }
    uVar5 = (**(code **)(*param_2 + 0x88))(param_2);
    local_108 = FUN_005ffa40(uVar5);
    local_60 = *(int *)((longlong)param_2 + 0x94);
    local_d0 = (int)param_2[0x12];
    local_64 = FUN_0040c770((double)*(int *)(*(longlong *)PTR_DAT_02005950 + 0x98) *
                            (double)param_1[0xa1]);
    local_88 = 100.0 / (float)local_60;
    local_8c = 100.0 / (float)local_d0;
    *(float *)(local_80 + 0x60) = local_88;
    *(float *)((longlong)local_80 + 0x304) = local_8c;
    thunk_FUN_03b0d54a(local_108,8);
    thunk_FUN_04170591(local_108,local_64,local_64,0);
    thunk_FUN_04166eed(local_108,local_d0,local_60,0);
    local_118 = (int)param_2[0xf];
    local_114 = *(int *)((longlong)param_2 + 0x7c);
    local_110 = (*(int *)((longlong)param_2 + 0x84) - *(int *)((longlong)param_2 + 0x8c)) -
                local_118;
    if (local_110 < 0) {
      local_110 = 0;
    }
    local_10c = ((int)param_2[0x10] - (int)param_2[0x11]) - local_114;
    if (local_10c < 0) {
      local_10c = 0;
    }
    local_140 = (double)local_64 / (double)local_d0;
    local_5c = FUN_0040c840(((double)param_1[0x9c] / 2.54) * (double)local_d0);
    local_5c = local_5c - local_118;
    local_4c = FUN_0040c840((double)local_5c * local_140);
    local_11c = FUN_0040c840(((double)param_1[0x9d] / 2.54) * (double)local_d0);
    local_11c = local_11c - local_110;
    local_68 = *(int *)((longlong)param_2 + 0x8c) - (local_5c + local_11c);
    local_50 = FUN_0040c840((double)local_68 * local_140);
    local_138 = FUN_0040c840((double)*(int *)((longlong)param_2 + 0x8c) * local_140);
    local_148 = (double)local_64 / (double)local_60;
    local_120 = FUN_0040c840(((double)param_1[0x9e] / 2.54) * (double)local_60);
    local_120 = local_120 - local_114;
    local_6c = local_120;
    local_54 = FUN_0040c840((double)local_120 * local_148);
    local_124 = FUN_0040c840(((double)param_1[0x9f] / 2.54) * (double)local_60);
    local_124 = local_124 - local_10c;
    local_70 = (int)param_2[0x11] - (local_120 + local_124);
    local_58 = FUN_0040c840((double)local_70 * local_148);
    local_90 = FUN_0040c840((double)(int)param_2[0x11] * local_148);
    local_208 = local_54 + local_58;
    FUN_004238d0(&local_e0,local_4c,local_54,local_50 + local_4c);
    FUN_00aa66b0(local_80,0);
    FUN_00aa8a30(local_80,&local_e0);
    local_f4 = 0;
    local_f8 = 0;
    local_fc = 0;
    local_188 = 0;
    uVar5 = (**(code **)(*param_2 + 0x88))(param_2);
    local_208 = local_58;
    local_200 = 0;
    local_1f8 = &local_188;
    local_1f0 = &local_fc;
    uVar5 = (**(code **)(*local_80 + 0x30))(local_80,uVar5,0,local_50);
    local_84 = (int)uVar5;
    if (param_5 < 8) {
      bVar9 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << (param_5 & 0x1f) & 6U) != 0;
    }
    else {
      bVar9 = false;
    }
    if (bVar9) {
      *(int *)(param_1 + 0x136) = local_188;
      *(int *)((longlong)param_1 + 0x9b4) = local_84;
      param_1[0x138] = (longlong)((double)local_188 / (double)local_50);
      if (1.0 < (double)param_1[0x138]) {
        lVar6 = FUN_0040c770((double)local_64 * (double)param_1[0x138] + 0.5);
        param_1[0x138] = (longlong)((double)lVar6 / (double)local_64);
      }
    }
    if (local_6c < 0) {
      local_190 = 0;
    }
    else {
      local_190 = local_6c;
    }
    local_194 = *(int *)((longlong)param_2 + 0x8c);
    local_198 = local_194;
    if (local_68 + local_5c + 2 <= local_194) {
      local_198 = local_68 + local_5c + 2;
    }
    local_19c = (int)param_2[0x11];
    local_1a0 = local_19c;
    if (local_6c + local_70 <= local_19c) {
      local_1a0 = local_6c + local_70;
    }
    local_b8 = thunk_FUN_03976db5(local_5c,local_190,local_198,local_1a0);
    local_c0 = thunk_FUN_03976db5(0,0,*(undefined4 *)((longlong)param_2 + 0x8c),(int)param_2[0x11]);
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    if (param_1[0x106] != 0) {
      (*(code *)param_1[0x106])(param_1[0x107],param_1,(int)param_1[0x137],local_29);
    }
    if (param_1[0x108] != 0) {
      local_a0 = FUN_00af8e30(param_1);
    }
    if (param_1[0x10a] != 0) {
      local_b0 = FUN_00af8e30(param_1);
    }
    local_15c = local_54;
    local_160 = local_6c;
    local_164 = local_70;
    local_168 = local_58;
    local_170 = (double)param_1[0x9e];
    local_180 = FUN_00526350((double)local_188 / (double)local_50);
    if ((int)param_1[0xa0] < local_180) {
      local_180 = (int)param_1[0xa0];
    }
    local_74 = 0;
    while ((uVar5 = local_a0, (int)param_1[0x137] <= param_4 && (local_29[0] == '\0'))) {
      FUN_00aa66b0(local_80,local_f4 - local_54);
      FUN_00aa8a30(local_80,&local_e0);
      local_184 = 0;
      iVar8 = local_180;
      if (-1 < local_180 + -1) {
        do {
          local_74 = local_184 * local_50;
          uVar5 = (**(code **)(*param_2 + 0x88))(param_2);
          local_108 = FUN_005ffa40(uVar5);
          uVar5 = (**(code **)(*param_2 + 0x88))(param_2);
          FUN_00af99b0(auStack_228,uVar5);
          thunk_FUN_03b0d54a(local_108,8);
          thunk_FUN_04170591(local_108,local_64,local_64,0);
          thunk_FUN_04166eed(local_108,local_d0,local_60);
          thunk_FUN_0418c361(local_108,local_74,0);
          thunk_FUN_039bba01(local_108,local_b8);
          if ((int)param_1[0x137] < param_3) {
            local_178 = local_4c + local_50 * 3;
          }
          else {
            if ((*(ushort *)((longlong)param_1 + 0x79a) & 8) != 0) {
              uVar5 = (**(code **)(*param_2 + 0x88))(param_2);
              local_208 = local_50;
              local_200 = local_58;
              local_1f8 = (int *)CONCAT44(local_1f8._4_4_,*(undefined4 *)(param_1[0xe8] + 200));
              FUN_00af75c0(param_1,uVar5,local_4c + local_74);
            }
            local_178 = local_4c;
          }
          do {
            uVar5 = local_f0;
            lVar6 = param_1[0xe6];
            if (lVar6 == 0) {
              local_179 = 0;
            }
            else {
              local_179 = *(byte *)(lVar6 + 8);
            }
            local_f0._0_4_ = (undefined4)local_e0;
            if (local_179 < 3) {
              if (local_179 == 2) {
LAB_00afaf6c:
                uStack_e8 = uStack_d8;
                iVar7 = ((int)local_80[0x43] - *(int *)((longlong)local_80 + 0x94)) + -1;
                local_f0 = CONCAT44(iVar7,(undefined4)local_f0);
                FUN_00aa66b0(local_80,*(int *)(param_1[0xe6] + 0xc) - iVar7);
                uVar5 = (**(code **)(*param_2 + 0x88))(param_2);
                local_208 = local_178 + local_50 * 3;
                local_200 = 0;
                local_1f8 = (int *)((ulonglong)local_1f8 & 0xffffffff00000000);
                local_1f0 = (undefined4 *)((ulonglong)local_1f0 & 0xffffffff00000000);
                (**(code **)(*local_80 + 0x38))(local_80,uVar5,&local_f0,local_50);
                *(undefined1 *)(param_1[0xe6] + 8) = 3;
                uStack_e8 = CONCAT44(((int)local_80[0x43] - *(int *)((longlong)local_80 + 0x94)) + 1
                                     ,(undefined4)uStack_e8);
                uVar3 = thunk_FUN_03f3ed25(local_f0._4_4_,local_60,local_64);
                uVar4 = thunk_FUN_03f3ed25(uStack_e8._4_4_,local_60,local_64);
                local_130 = thunk_FUN_03976db5(local_5c,uVar3,local_68 + local_5c + 2,uVar4);
                thunk_FUN_039bba01(local_108,local_130);
                thunk_FUN_0416f828(local_130);
                uVar5 = (**(code **)(*param_2 + 0x88))(param_2);
                local_208 = local_178;
                local_200 = 0;
                local_1f8 = (int *)((ulonglong)local_1f8 & 0xffffffff00000000);
                local_1f0 = (undefined4 *)((ulonglong)local_1f0 & 0xffffffff00000000);
                (**(code **)(*local_80 + 0x38))(local_80,uVar5,&local_f0);
                lVar6 = param_1[0xe6];
                if (lVar6 != 0) {
                  if (*(byte *)(lVar6 + 8) < 8) {
                    bVar9 = ((int)CONCAT71((int7)((ulonglong)lVar6 >> 8),1) <<
                             (*(byte *)(lVar6 + 8) & 0x1f) & 1U) != 0;
                  }
                  else {
                    bVar9 = false;
                  }
                  uVar5 = local_f0;
                  if (bVar9) goto LAB_00afb323;
                }
                uVar5 = (**(code **)(*param_2 + 0x88))(param_2);
                FUN_00af9a70(auStack_228,uVar5,
                             (int)local_80[0x43] - *(int *)((longlong)local_80 + 0x94));
                uVar5 = local_f0;
              }
              else {
                local_f0 = uVar5;
                if (local_179 == 0) {
                  uVar5 = (**(code **)(*param_2 + 0x88))(param_2);
                  local_208 = local_178;
                  local_200 = 0;
                  local_1f8 = (int *)((ulonglong)local_1f8 & 0xffffffff00000000);
                  local_1f0 = (undefined4 *)((ulonglong)local_1f0 & 0xffffffff00000000);
                  (**(code **)(*local_80 + 0x38))(local_80,uVar5,&local_e0);
                  uVar5 = (**(code **)(*param_2 + 0x88))(param_2);
                  FUN_00af9a70(auStack_228,uVar5,
                               (int)local_80[0x43] - *(int *)((longlong)local_80 + 0x94));
                  uVar5 = local_f0;
                }
                else if (local_179 == 1) {
                  FUN_00aa66b0(local_80,*(int *)(lVar6 + 0xc) - local_54);
                  local_f0 = local_e0;
                  uVar5 = local_f0;
                  local_f0._4_4_ = (int)((ulonglong)local_e0 >> 0x20);
                  iVar7 = local_f0._4_4_ + *(int *)(param_1[0xe6] + 0x10);
                  uStack_e8._0_4_ = (undefined4)uStack_d8;
                  uStack_e8 = CONCAT44(iVar7,(undefined4)uStack_e8);
                  local_f0 = uVar5;
                  uVar3 = thunk_FUN_03f3ed25(iVar7,local_60,local_64);
                  local_130 = thunk_FUN_03976db5(local_5c,local_6c,local_68 + local_5c + 2,uVar3);
                  thunk_FUN_039bba01(local_108,local_130);
                  thunk_FUN_0416f828(local_130);
                  uVar5 = (**(code **)(*param_2 + 0x88))(param_2);
                  local_208 = local_178;
                  local_200 = 0;
                  local_1f8 = (int *)((ulonglong)local_1f8 & 0xffffffff00000000);
                  local_1f0 = (undefined4 *)((ulonglong)local_1f0 & 0xffffffff00000000);
                  (**(code **)(*local_80 + 0x38))(local_80,uVar5,&local_f0);
                  uVar5 = local_f0;
                }
              }
            }
            else {
              if (local_179 == 4) goto LAB_00afaf6c;
              if (local_179 == 5) {
                local_174 = (undefined4)local_80[0x43];
                iVar7 = (int)local_80[0x43] - *(int *)((longlong)local_80 + 0x94);
                local_f0 = CONCAT44(iVar7,(undefined4)local_f0);
                uStack_e8._0_4_ = (undefined4)uStack_d8;
                uStack_e8 = CONCAT44(iVar7 + *(int *)(param_1[0xe6] + 0x10),(undefined4)uStack_e8);
                uVar3 = thunk_FUN_03f3ed25(iVar7,local_60,local_64);
                uVar4 = thunk_FUN_03f3ed25(uStack_e8._4_4_,local_60,local_64);
                local_130 = thunk_FUN_03976db5(local_5c,uVar3,local_68 + local_5c + 2,uVar4);
                thunk_FUN_039bba01(local_108,local_130);
                thunk_FUN_0416f828(local_130);
                FUN_00aa66b0(local_80,*(int *)(param_1[0xe6] + 0xc) - local_f0._4_4_);
                uVar5 = (**(code **)(*param_2 + 0x88))(param_2);
                local_208 = local_178;
                local_200 = 0;
                local_1f8 = (int *)((ulonglong)local_1f8 & 0xffffffff00000000);
                local_1f0 = (undefined4 *)((ulonglong)local_1f0 & 0xffffffff00000000);
                (**(code **)(*local_80 + 0x38))(local_80,uVar5,&local_f0);
                *(undefined4 *)(local_80 + 0x43) = local_174;
                uVar5 = local_f0;
              }
            }
LAB_00afb323:
            local_f0 = uVar5;
            lVar6 = param_1[0xe6];
            if (lVar6 == 0) break;
            if (*(byte *)(lVar6 + 8) < 8) {
              bVar9 = ((int)CONCAT71((int7)((ulonglong)lVar6 >> 8),1) <<
                       (*(byte *)(lVar6 + 8) & 0x1f) & 0x13U) != 0;
            }
            else {
              bVar9 = false;
            }
          } while (!bVar9);
          thunk_FUN_039bba01(local_108,0);
          if ((int)param_1[0x137] <= param_4) {
            lVar6 = (**(code **)(*param_2 + 0x88))(param_2);
            (**(code **)(**(longlong **)(lVar6 + 0x78) + 0x10))
                      (*(longlong **)(lVar6 + 0x78),local_38);
            local_134 = thunk_FUN_041afa90(local_108,0);
            thunk_FUN_039bba01(local_108,local_c0);
            if (param_1[0xd7] != 0) {
              thunk_FUN_0418c361(local_108,local_74,0,0);
              uVar5 = (**(code **)(*param_2 + 0x88))(param_2);
              local_208 = local_138;
              local_200 = local_54;
              local_1f8 = (int *)local_29;
              (*(code *)param_1[0xd7])(param_1[0xd8],param_1,uVar5,(int)param_1[0x137]);
            }
            if (param_1[0xd9] != 0) {
              thunk_FUN_0418c361(local_108,local_74,-(local_54 + local_58),0);
              uVar5 = (**(code **)(*param_2 + 0x88))(param_2);
              local_208 = local_138;
              local_200 = local_90 - (local_54 + local_58);
              local_1f8 = (int *)local_29;
              (*(code *)param_1[0xd9])(param_1[0xda],param_1,uVar5,(int)param_1[0x137]);
            }
            FUN_00af9c40(auStack_228,0,param_1 + 0x108,local_a0);
            FUN_00af9c40(auStack_228,1,param_1 + 0x10a);
            thunk_FUN_041afa90(local_108,local_134);
            thunk_FUN_039bba01(local_108,0);
          }
          if ((double)param_1[0x9e] != local_170) {
            local_150 = (double)param_1[0x9e] - local_c8;
            local_154 = FUN_0040c840((local_150 / 2.54) * (double)local_60);
            local_158 = FUN_0040c840((local_150 / 2.54) * (double)local_64);
            local_54 = local_15c + local_158;
            local_6c = local_160 + local_154;
            local_70 = local_164 - local_154;
            local_58 = local_168 - local_158;
            local_208 = local_54 + local_58;
            FUN_004238d0(&local_e0,local_4c + local_74,local_54,local_50 + local_4c + local_74);
            if (local_6c < 0) {
              local_1a4 = 0;
            }
            else {
              local_1a4 = local_6c;
            }
            local_1a8 = *(int *)((longlong)param_2 + 0x8c);
            local_1ac = local_1a8;
            if (local_68 + local_5c + 2 <= local_1a8) {
              local_1ac = local_68 + local_5c + 2;
            }
            local_1b0 = (int)param_2[0x11];
            local_1b4 = local_1b0;
            if (local_6c + local_70 <= local_1b0) {
              local_1b4 = local_6c + local_70;
            }
            local_b8 = thunk_FUN_03976db5(local_5c,local_1a4,local_1ac);
            local_170 = (double)param_1[0x9e];
          }
          if (local_184 < local_180 + -1) {
            (**(code **)(*param_2 + 0xa0))(param_2);
            *(int *)(param_1 + 0x137) = (int)param_1[0x137] + 1;
          }
          local_184 = local_184 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      local_f4 = (int)local_80[0x43];
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      if (param_1[0x106] != 0) {
        (*(code *)param_1[0x106])(param_1[0x107],param_1,(int)param_1[0x137]);
      }
      if ((local_84 - (int)param_1[0x9b] <= local_f4) || (local_f4 <= local_f8)) {
        local_29[0] = '\x01';
      }
      local_f8 = local_f4;
      if (((local_29[0] == '\0') && (param_3 <= (int)param_1[0x137])) &&
         ((int)param_1[0x137] < param_4)) {
        (**(code **)(*param_2 + 0xa0))(param_2);
      }
      *(int *)(param_1 + 0x137) = (int)param_1[0x137] + 1;
    }
    local_98 = local_a0;
    local_a0 = 0;
    FUN_00410f20(uVar5);
    uVar5 = local_b0;
    local_a8 = local_b0;
    local_b0 = 0;
    FUN_00410f20(uVar5);
    if (local_b8 != 0) {
      thunk_FUN_0416f828(local_b8);
    }
    if (local_c0 != 0) {
      thunk_FUN_0416f828(local_c0);
    }
    if ((byte)(param_5 - 1) < 2) {
      (**(code **)(*param_2 + 0xa8))(param_2);
    }
    else if (param_5 == 3) {
      if ((int)param_1[0x137] < param_3) {
        (**(code **)(*param_2 + 0xb0))(param_2);
      }
      else {
        (**(code **)(*param_2 + 0xa8))(param_2);
      }
    }
    *(int *)(param_1 + 0x137) = (int)param_1[0x137] + -1;
    FUN_00410f20(local_40);
    FUN_00410f20(local_38);
    FUN_00410f20(local_48);
    (**(code **)(*param_1 + 0x408))(param_1,local_c8);
    FUN_00410f20(local_80);
    local_cc = (undefined4)param_1[0x137];
  }
  FUN_00414560(&local_1e0,2);
  return local_cc;
}


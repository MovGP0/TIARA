/* Ghidra address: 01156eb0 */
/* Ghidra symbol: FUN_01156eb0 */


void FUN_01156eb0(longlong param_1,undefined8 *param_2,char param_3,longlong param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  longlong local_res20;
  undefined1 auStack_218 [32];
  undefined *local_1f8;
  wchar_t *local_1f0;
  undefined *local_1e8;
  undefined8 local_1e0;
  wchar_t *local_1d8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined *local_150;
  undefined *local_148;
  undefined1 *local_140;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong local_100;
  longlong local_f0;
  longlong local_e0;
  undefined8 local_d8;
  char local_ca;
  char local_c9;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  int local_7c;
  int local_74;
  int local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined *local_28;
  undefined8 local_20 [2];
  
  local_140 = auStack_218;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_180 = 0;
  local_188 = (undefined *)0x0;
  local_178 = 0;
  local_170 = 0;
  local_160 = 0;
  local_168 = 0;
  local_150 = (undefined *)0x0;
  local_158 = 0;
  local_148 = (undefined *)0x0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_20[0] = 0;
  local_28 = (undefined *)0x0;
  local_30 = 0;
  local_38 = (undefined *)0x0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))(*(longlong **)(param_1 + 0xd8),0);
  local_e0 = FUN_004113f0(uVar4,&DAT_01cdd500);
  FUN_00414480(&local_90);
  FUN_00414480(&local_98);
  iVar3 = (**(code **)(**(longlong **)(local_e0 + 0x80) + 0x28))(*(longlong **)(local_e0 + 0x80));
  if (iVar3 != 0) {
    uVar4 = (**(code **)(**(longlong **)(local_e0 + 0x80) + 0x30))
                      (*(longlong **)(local_e0 + 0x80),0);
    cVar2 = FUN_004113d0(uVar4,&PTR_FUN_01aae560);
    if (cVar2 == '\0') {
      uVar4 = (**(code **)(**(longlong **)(local_e0 + 0x80) + 0x30))
                        (*(longlong **)(local_e0 + 0x80),0);
      cVar2 = FUN_004113d0(uVar4,&PTR_FUN_01aaff18);
      if ((cVar2 != '\0') && (param_3 == '\0')) {
        iVar3 = (**(code **)(**(longlong **)(local_e0 + 0x80) + 0x28))();
        local_1bc = iVar3 + -1;
        local_70 = 0;
        if (-1 < local_1bc) {
          do {
            local_1bc = iVar3;
            local_100 = (**(code **)(**(longlong **)(local_e0 + 0x80) + 0x30))
                                  (*(longlong **)(local_e0 + 0x80),local_70);
            FUN_00414b50(&local_a8,*(undefined8 *)(*(longlong *)(local_100 + 0xe8) + 0xd8));
            iVar3 = FUN_004170c0(&DAT_0115808c,local_a8,1);
            if (0 < iVar3) {
              iVar3 = FUN_004170c0(&DAT_0115808c,local_a8,1);
              FUN_00416dc0(&local_a8,local_a8,1,iVar3 + -1);
            }
            iVar3 = FUN_004170c0(&DAT_0115809c,local_a8,1);
            if (0 < iVar3) {
              iVar3 = FUN_004170c0(&DAT_0115809c,local_a8,1);
              FUN_00416dc0(&local_a8,local_a8,1,iVar3 + -1);
            }
            FUN_01cc0ae0(*(undefined8 *)(local_100 + 0x98),&local_188);
            local_1f8 = local_188;
            FUN_00416cd0(&local_180,3,local_a8,&DAT_011580c0);
            (**(code **)(*(longlong *)*param_2 + 0x78))((longlong *)*param_2,local_180);
            local_ca = '\x04';
            (**(code **)(**(longlong **)(local_100 + 0x80) + 0x10))
                      (*(longlong **)(local_100 + 0x80),*(undefined8 *)(local_100 + 0x98),0);
            while (cVar2 = (**(code **)(**(longlong **)(local_100 + 0x80) + 0x30))
                                     (*(longlong **)(local_100 + 0x80),&local_88,&local_c9,0),
                  cVar2 != '\0') {
              if (local_ca == '\0') {
                FUN_00414480(&local_40);
                FUN_00448450(&local_40,local_88,PTR_DAT_02004830);
                local_1f8 = &DAT_01158124;
                FUN_00416cd0(&local_190,3,local_40);
                (**(code **)(*(longlong *)*param_2 + 0x78))((longlong *)*param_2,local_190);
                FUN_00414480(&local_40);
              }
              else if (local_ca == '\x01') {
                FUN_00414480(&local_48);
                FUN_00448450(&local_48,local_88,PTR_DAT_02004830);
                local_1f8 = &LAB_01158134;
                FUN_00416cd0(&local_198,3,local_48);
                (**(code **)(*(longlong *)*param_2 + 0x78))((longlong *)*param_2,local_198);
                FUN_00414480(&local_48);
              }
              if (local_c9 == '\0') {
                FUN_00414480(&local_50);
                FUN_00448450(&local_50,local_88,PTR_DAT_02004830);
                local_1f8 = &DAT_01158124;
                FUN_00416cd0(&local_1a0,3,local_50);
                (**(code **)(*(longlong *)*param_2 + 0x78))((longlong *)*param_2,local_1a0);
                FUN_00414480(&local_50);
              }
              else if (local_c9 == '\x01') {
                FUN_00414480(&local_58);
                FUN_00448450(&local_58,local_88,PTR_DAT_02004830);
                local_1f8 = &LAB_01158134;
                FUN_00416cd0(&local_1a8,3,local_58);
                (**(code **)(*(longlong *)*param_2 + 0x78))((longlong *)*param_2,local_1a8);
                FUN_00414480(&local_58);
              }
              local_ca = local_c9;
            }
            if (local_c9 == '\0') {
              FUN_00414480(&local_60);
              local_128 = *(undefined8 *)(*(longlong *)(local_100 + 0xe8) + 0xc0);
              FUN_00448450(&local_60,local_128,PTR_DAT_02004830);
              local_1f8 = &DAT_01158124;
              FUN_00416cd0(&local_1b0,3,local_60,&DAT_011580c0);
              (**(code **)(*(longlong *)*param_2 + 0x78))((longlong *)*param_2,local_1b0);
              FUN_00414480(&local_60);
            }
            else if (local_c9 == '\x01') {
              FUN_00414480(&local_68);
              local_130 = *(undefined8 *)(*(longlong *)(local_100 + 0xe8) + 0xc0);
              FUN_00448450(&local_68,local_130,PTR_DAT_02004830);
              local_1f8 = &LAB_01158134;
              FUN_00416cd0(&local_1b8,3,local_68,&DAT_011580c0);
              (**(code **)(*(longlong *)*param_2 + 0x78))((longlong *)*param_2,local_1b8);
              FUN_00414480(&local_68);
            }
            (**(code **)(*(longlong *)*param_2 + 0x78))((longlong *)*param_2,0);
            local_70 = local_70 + 1;
            local_1bc = local_1bc + -1;
            iVar3 = local_1bc;
          } while (local_1bc != 0);
        }
      }
    }
    else {
      lVar5 = (**(code **)(**(longlong **)(local_e0 + 0x80) + 0x30))
                        (*(longlong **)(local_e0 + 0x80),0);
      FUN_00414b50(&local_a8,*(undefined8 *)(*(longlong *)(lVar5 + 0xf8) + 0xd8));
      iVar3 = FUN_004170c0(&DAT_0115808c,local_a8,1);
      if (0 < iVar3) {
        iVar3 = FUN_004170c0(&DAT_0115808c,local_a8,1);
        FUN_00416dc0(&local_a8,local_a8,1,iVar3 + -1);
      }
      iVar3 = FUN_004170c0(&DAT_0115809c,local_a8,1);
      if (0 < iVar3) {
        iVar3 = FUN_004170c0(&DAT_0115809c,local_a8,1);
        FUN_00416dc0(&local_a8,local_a8,1,iVar3 + -1);
      }
      if (param_3 == '\0') {
        FUN_00416ba0(&local_98,&DAT_011580ac,local_a8);
      }
      local_80 = 0;
      local_d8 = FUN_00410e60(&PTR_FUN_00472dd0,1);
      local_b0 = (longlong *)FUN_00410e60(&PTR_FUN_00472dd0,1);
      iVar3 = (**(code **)(**(longlong **)(local_e0 + 0x80) + 0x28))();
      local_1c4 = iVar3 + -1;
      local_70 = 0;
      if (-1 < local_1c4) {
        do {
          local_1c4 = iVar3;
          local_f0 = (**(code **)(**(longlong **)(local_e0 + 0x80) + 0x30))
                               (*(longlong **)(local_e0 + 0x80),local_70);
          lVar5 = (**(code **)(**(longlong **)(local_e0 + 0x80) + 0x30))
                            (*(longlong **)(local_e0 + 0x80),local_70);
          iVar3 = FUN_004aeba0(local_d8,*(undefined8 *)(lVar5 + 0xe0));
          if (iVar3 == -1) {
            bVar1 = *(byte *)(*(longlong *)(local_f0 + 0xe0) + 8);
            if (bVar1 < 8) {
              bVar6 = ((int)CONCAT71((int7)((ulonglong)*(longlong *)(local_f0 + 0xe0) >> 8),1) <<
                       (bVar1 & 0x1f) & 0xbU) != 0;
            }
            else {
              bVar6 = false;
            }
            if (bVar6) {
              (**(code **)(*local_b0 + 0x10))(local_b0);
              FUN_00414480(&local_a0);
              FUN_01cc6ed0(*(undefined8 *)(local_f0 + 0xd0),*(undefined8 *)(local_f0 + 0xe0),
                           local_b0);
              iVar3 = (int)local_b0[2];
              local_74 = 0;
              if (-1 < iVar3 + -1) {
                do {
                  uVar4 = FUN_004aeac0(local_b0,local_74);
                  FUN_004ae7e0(local_d8,uVar4);
                  lVar5 = FUN_004aeac0(local_b0,local_74);
                  if (*(char *)(lVar5 + 0x2b) == '\0') {
                    uVar4 = FUN_004aeac0(local_b0,local_74);
                    FUN_01cc0ae0(uVar4,&local_148);
                    local_1f8 = local_148;
                    FUN_00416cd0(&local_a0,3,local_a0,&DAT_011580c0);
                  }
                  else {
                    uVar4 = FUN_004aeac0(local_b0,local_74);
                    FUN_01cc0ae0(uVar4,&local_150);
                    uVar4 = FUN_004aeac0(local_b0,local_74);
                    FUN_01cc0ae0(uVar4,&local_158);
                    local_1f8 = local_150;
                    local_1f0 = L"-abs";
                    local_1e8 = &DAT_011580c0;
                    local_1e0 = local_158;
                    local_1d8 = L"-phase";
                    FUN_00416cd0(&local_a0,7,local_a0,&DAT_011580c0);
                  }
                  local_74 = local_74 + 1;
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
              }
              if (local_res20 != 0) {
                FUN_0043f750(&local_168,local_80);
                local_1f8 = &DAT_01158104;
                FUN_00416cd0(&local_160,3,&DAT_01158104,local_168);
                local_108 = local_160;
                local_1f8 = &DAT_01158104;
                FUN_00416cd0(&local_170,3,&DAT_01158104,local_res20);
                cVar2 = FUN_005b83d0(local_170,local_108);
                if (cVar2 == '\0') {
                  local_80 = local_80 + 1;
                  goto LAB_0115789a;
                }
              }
              FUN_00416ba0(&local_178,local_98,local_a0);
              (**(code **)(*(longlong *)*param_2 + 0x78))((longlong *)*param_2,local_178);
              if (param_3 == '\0') {
                local_7c = (**(code **)(**(longlong **)(local_f0 + 200) + 0x20))
                                     (*(longlong **)(local_f0 + 200),
                                      *(undefined8 *)(local_f0 + 0xe0),0);
                local_b8 = (undefined8 *)FUN_004095c0((longlong)local_7c);
                (**(code **)(**(longlong **)(local_f0 + 200) + 0x10))
                          (*(longlong **)(local_f0 + 200),*(undefined8 *)(local_f0 + 0xe0),0);
                while (cVar2 = (**(code **)(**(longlong **)(local_f0 + 200) + 0x40))
                                         (*(longlong **)(local_f0 + 200),&local_88,local_b8),
                      cVar2 != '\0') {
                  FUN_00414480(local_20);
                  FUN_00448450(local_20,local_88,PTR_DAT_02004830);
                  FUN_00414b50(&local_90,local_20[0]);
                  FUN_00414480(local_20);
                  local_c0 = local_b8;
                  iVar3 = *(int *)(*(longlong *)(local_f0 + 0xe0) + 0x150);
                  local_1c0 = iVar3 + -1;
                  local_74 = 0;
                  if (-1 < local_1c0) {
                    do {
                      local_1c0 = iVar3;
                      local_c8 = local_c0;
                      if (*(char *)(*(longlong *)(local_f0 + 0xe0) + 0x2b) == '\0') {
                        FUN_00414480(&local_28);
                        local_110 = *local_c8;
                        FUN_00448450(&local_28,local_110,PTR_DAT_02004830);
                        local_1f8 = local_28;
                        FUN_00416cd0(&local_90,3,local_90,&DAT_011580c0);
                        FUN_00414480(&local_28);
                        FUN_00b909d0(&local_c0,8);
                      }
                      else {
                        FUN_00414480(&local_30);
                        local_118 = *local_c8;
                        FUN_00448450(&local_30,local_118,PTR_DAT_02004830);
                        local_1f8 = (undefined *)local_30;
                        FUN_00416cd0(&local_90,3,local_90,&DAT_011580c0);
                        FUN_00414480(&local_30);
                        FUN_00b909d0(&local_c0,8);
                        local_c8 = local_c0;
                        FUN_00414480(&local_38);
                        local_120 = *local_c8;
                        FUN_00448450(&local_38,local_120,PTR_DAT_02004830);
                        local_1f8 = local_38;
                        FUN_00416cd0(&local_90,3,local_90,&DAT_011580c0);
                        FUN_00414480(&local_38);
                        FUN_00b909d0(&local_c0,8);
                      }
                      local_1c0 = local_1c0 + -1;
                      iVar3 = local_1c0;
                    } while (local_1c0 != 0);
                  }
                  (**(code **)(*(longlong *)*param_2 + 0x78))((longlong *)*param_2,local_90);
                }
                (**(code **)(*(longlong *)*param_2 + 0x78))((longlong *)*param_2,&DAT_01158114);
                FUN_004095f0(local_b8);
              }
              local_80 = local_80 + 1;
            }
          }
LAB_0115789a:
          local_70 = local_70 + 1;
          local_1c4 = local_1c4 + -1;
          iVar3 = local_1c4;
        } while (local_1c4 != 0);
      }
      FUN_00410f20(local_b0);
      FUN_00410f20(local_d8);
    }
  }
  FUN_00414560(&local_1b8,0xf);
  FUN_00414560(&local_a8,4);
  FUN_00414560(&local_68,10);
  FUN_00414480(&local_res20);
  return;
}


/* Ghidra address: 00ae4310 */
/* Ghidra symbol: FUN_00ae4310 */


void FUN_00ae4310(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_248 [32];
  undefined *local_228;
  ulonglong local_220;
  ulonglong local_218;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined1 *local_140;
  longlong local_130;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  int local_98;
  char local_91;
  longlong local_90;
  longlong local_88;
  undefined1 local_79;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_140 = auStack_248;
  local_208 = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  local_148 = 0;
  local_160 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  local_30 = 0;
  do {
    bVar1 = *(byte *)(param_1 + 0x44);
    uVar4 = (ulonglong)bVar1;
    if (bVar1 < 200) {
      uVar7 = (ulonglong)bVar1 + (param_2 & 7) * 8;
      bVar9 = (*(byte *)((param_2 - (param_2 & 7)) + ((longlong)uVar7 >> 3)) >> (uVar7 & 7) & 1) !=
              0;
    }
    else {
      bVar9 = false;
    }
    if (bVar9) {
      FUN_00ae5460(0,local_140);
      goto LAB_00ae540e;
    }
    if (uVar4 < 0x6d) {
      if (uVar4 < 0x15) {
        if (uVar4 < 0x11) {
          if (uVar4 == 0x10) {
            FUN_00ae3920(param_1);
          }
          else if (uVar4 == 2) {
            FUN_00adf790(param_1);
          }
          else if (uVar4 == 5) {
            *(undefined1 *)(param_1 + 0xf1) = 1;
            iVar8 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x10);
            local_44 = 0;
            if (-1 < iVar8 + -1) {
              do {
                local_70 = *(undefined8 *)(param_1 + 0x48);
                local_60 = FUN_004aeac0(local_70,local_44);
                if (((*(char *)(local_60 + 8) == '\x19') &&
                    (local_54 = FUN_009f4440(*(undefined8 *)(local_60 + 0x28)), local_54 != -1)) &&
                   (local_78 = *(longlong *)(param_1 + 0x30), (*(byte *)(local_78 + 0x30) & 1) == 0)
                   ) {
                  if (*(longlong *)(local_78 + 0x28) == 0) {
                    FUN_00a02aa0(local_78,local_54);
                  }
                  else {
                    FUN_00a02aa0(local_78,local_54);
                  }
                }
                local_44 = local_44 + 1;
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
            FUN_00ad4730(param_1);
          }
          else {
            if (uVar4 != 7) goto LAB_00ae53ac;
            if ((*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0xa8) + 0x10) == 0) &&
               (*(int *)(param_1 + 0x78) == 0)) {
              local_30 = FUN_00a72640(&PTR_FUN_00a691f8,1);
            }
            FUN_00ad4730(param_1);
          }
        }
        else if (uVar4 == 0x12) {
          FUN_00ae34b0(param_1);
        }
        else if (uVar4 == 0x13) {
          FUN_00ae3c40(param_1);
        }
        else {
          if (uVar4 != 0x14) goto LAB_00ae53ac;
          FUN_00ae3650(param_1,*(undefined8 *)(param_1 + 0x98));
        }
      }
      else if (uVar4 < 0x2c) {
        if (uVar4 - 0x15 < 5) {
LAB_00ae4602:
          FUN_00ae3ff0(auStack_248);
          FUN_00adf790(param_1);
        }
        else if (uVar4 == 0x1a) {
          FUN_00ae3ff0(auStack_248);
          FUN_00ae3530(param_1);
        }
        else {
          if ((uVar4 - 0x1b < 0xb) || (uVar4 - 0x28 < 3)) goto LAB_00ae4602;
LAB_00ae53ac:
          FUN_00ad4730(param_1);
        }
      }
      else {
        if (uVar4 - 0x2c < 0x39) goto LAB_00ae4602;
        if (uVar4 == 0x65) {
          FUN_00ae3ff0(auStack_248);
          if ((*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0xa8) + 0x10) == 0) &&
             (*(int *)(param_1 + 0x78) == 0)) {
            FUN_00aa6880(*(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0x20));
            if (*(longlong *)(param_1 + 0x60) != 0) {
              FUN_00ab3f00(*(undefined8 *)(param_1 + 0x60));
              FUN_00410f20(*(undefined8 *)(param_1 + 0x60));
            }
            local_79 = *(undefined1 *)(param_1 + 0x44);
            local_88 = *(longlong *)(param_1 + 0x48);
            if (local_88 == 0) {
              local_228 = (undefined *)0x0;
              FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),local_79,0,0);
            }
            else {
              local_38 = 0;
              local_90 = 0;
              iVar8 = *(int *)(local_88 + 0x10);
              local_98 = 0;
              if (-1 < iVar8 + -1) {
                do {
                  lVar5 = FUN_00a72910(local_88,local_98);
                  if (*(char *)(lVar5 + 8) == 'P') {
                    local_91 = '\x01';
                    local_90 = FUN_00a72910(local_88,local_98);
                    goto code_r0x00ae48c8;
                  }
                  local_98 = local_98 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              local_91 = '\0';
code_r0x00ae48c8:
              if (local_91 != '\0') {
                local_38 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
                FUN_00a62c40(*(undefined8 *)(local_90 + 0x28),local_38);
              }
              local_228 = (undefined *)0x0;
              FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),local_79,local_38,local_88);
              FUN_00410f20(local_38);
            }
            lVar5 = FUN_004113f0(*(undefined8 *)(param_1 + 0x98),&DAT_00aea600);
            local_4c = *(int *)(lVar5 + 0x4d8);
            local_50 = *(int *)(lVar5 + 0x4d4);
            iVar8 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x10);
            local_44 = 0;
            if (-1 < iVar8 + -1) {
              do {
                local_a8 = *(undefined8 *)(param_1 + 0x48);
                local_68 = FUN_004aeac0(local_a8,local_44);
                bVar1 = *(byte *)(local_68 + 8);
                if (bVar1 < 0x2c) {
                  if (bVar1 == 0x2b) {
LAB_00ae4db9:
                    local_d0 = *(int *)(local_68 + 0x18);
                    local_d4 = local_d0;
                    if (local_d0 < 0) {
                      local_d4 = 0;
                    }
                    if (local_d4 < 200) {
                      local_d8 = local_d4;
                    }
                    else {
                      local_d8 = 200;
                    }
                    local_4c = local_d8;
                  }
                  else if (bVar1 < 8) {
                    if (bVar1 == 7) {
                      local_e0 = *(undefined8 *)(local_68 + 0x28);
                      iVar3 = FUN_0043e420(local_e0,L"fixed");
                      if (iVar3 == 0) {
                        local_e8 = *(longlong *)(param_1 + 0xe8);
                        uVar6 = FUN_004aeac0(local_e8,*(int *)(local_e8 + 0x10) + -1);
                        FUN_00468a10(&local_1a8,L"fixed");
                        FUN_00a52f40(uVar6,&local_1a8,0xc);
                      }
                    }
                    else if (bVar1 == 5) {
                      local_b0 = *(longlong *)(param_1 + 0xe8);
                      uVar6 = FUN_004aeac0(local_b0,*(int *)(local_b0 + 0x10) + -1);
                      local_228 = &DAT_00ae54fc;
                      FUN_00416cd0(&local_148,3,L"url(",*(undefined8 *)(local_68 + 0x28));
                      FUN_00468a10(&local_160,local_148);
                      FUN_00a52f40(uVar6,&local_160,9);
                    }
                    else if (bVar1 == 6) {
                      cVar2 = FUN_00a602d0(*(undefined8 *)(local_68 + 0x28),0,&local_48);
                      if (cVar2 != '\0') {
                        local_c0 = *(longlong *)(param_1 + 0xe8);
                        uVar6 = FUN_004aeac0(local_c0,*(int *)(local_c0 + 0x10) + -1);
                        FUN_00468530(&local_190,local_48 | *(uint *)PTR_DAT_02005078,
                                     0xfffffffffffffffc);
                        FUN_00a52f40(uVar6,&local_190,8);
                      }
                    }
                  }
                  else if (bVar1 == 0x27) {
LAB_00ae4d53:
                    local_c4 = *(int *)(local_68 + 0x18);
                    local_c8 = local_c4;
                    if (local_c4 < 0) {
                      local_c8 = 0;
                    }
                    if (local_c8 < 200) {
                      local_cc = local_c8;
                    }
                    else {
                      local_cc = 200;
                    }
                    local_50 = local_cc;
                  }
                  else if (bVar1 == 0x28) {
                    cVar2 = FUN_00a602d0(*(undefined8 *)(local_68 + 0x28),0,&local_48);
                    if (cVar2 != '\0') {
                      FUN_00a5d280(*(undefined8 *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x20) + 0x280),
                                   L"link",local_48);
                    }
                  }
                }
                else if (bVar1 < 0x54) {
                  if (bVar1 == 0x53) {
                    cVar2 = FUN_00a602d0(*(undefined8 *)(local_68 + 0x28),0,&local_48);
                    if (cVar2 != '\0') {
                      local_b8 = *(longlong *)(param_1 + 0xe8);
                      uVar6 = FUN_004aeac0(local_b8,*(int *)(local_b8 + 0x10) + -1);
                      FUN_00468530(&local_178,local_48 | *(uint *)PTR_DAT_02005078,
                                   0xfffffffffffffffc);
                      FUN_00a52f40(uVar6,&local_178,7);
                    }
                  }
                  else {
                    if (bVar1 == 0x2c) goto LAB_00ae4d53;
                    if (bVar1 == 0x38) {
                      cVar2 = FUN_00a602d0(*(undefined8 *)(local_68 + 0x28),0,&local_48);
                      if (cVar2 != '\0') {
                        FUN_00a5d280(*(undefined8 *)
                                      (*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x20) + 0x280),
                                     L"hover",local_48);
                        *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x20) + 0x268)
                             = 1;
                      }
                    }
                  }
                }
                else {
                  if (bVar1 == 0x55) goto LAB_00ae4db9;
                  if (bVar1 == 0x5c) {
                    cVar2 = FUN_00a602d0(*(undefined8 *)(local_68 + 0x28),0,&local_48);
                    if (cVar2 != '\0') {
                      FUN_00a5d280(*(undefined8 *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x20) + 0x280),
                                   L"visited",local_48);
                    }
                  }
                }
                local_44 = local_44 + 1;
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
            if (*(char *)(param_1 + 0xe0) != '\0') {
              local_f0 = *(longlong *)(param_1 + 0xe8);
              uVar6 = FUN_004aeac0(local_f0,*(int *)(local_f0 + 0x10) + -1);
              FUN_00a5cbd0(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x20) + 0x280),uVar6);
            }
            local_f8 = *(longlong *)(param_1 + 0xe8);
            uVar6 = FUN_004aeac0(local_f8,*(int *)(local_f8 + 0x10) + -1);
            FUN_00468530(&local_1c0,local_50,0xfffffffffffffffc);
            FUN_00a52f40(uVar6,&local_1c0,0x15);
            local_100 = *(longlong *)(param_1 + 0xe8);
            uVar6 = FUN_004aeac0(local_100,*(int *)(local_100 + 0x10) + -1);
            FUN_00468530(&local_1d8,local_50,0xfffffffffffffffc);
            FUN_00a52f40(uVar6,&local_1d8,0x13);
            local_108 = *(longlong *)(param_1 + 0xe8);
            uVar6 = FUN_004aeac0(local_108,*(int *)(local_108 + 0x10) + -1);
            FUN_00468530(&local_1f0,local_4c,0xfffffffffffffffc);
            FUN_00a52f40(uVar6,&local_1f0,0x12);
            local_110 = *(longlong *)(param_1 + 0xe8);
            uVar6 = FUN_004aeac0(local_110,*(int *)(local_110 + 0x10) + -1);
            FUN_00468530(&local_208,local_4c,0xfffffffffffffffc);
            FUN_00a52f40(uVar6,&local_208,0x14);
            local_118 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x28);
            *(undefined8 *)(param_1 + 0x68) = local_118;
            local_120 = *(undefined8 *)(param_1 + 0x58);
            FUN_004aee50(local_118,local_120,0);
            local_128 = *(longlong *)(param_1 + 0xe8);
            local_228 = (undefined *)FUN_004aeac0(local_128,*(int *)(local_128 + 0x10) + -1);
            uVar6 = FUN_00aa4ff0(&PTR_FUN_00a8b450,1,*(undefined8 *)(param_1 + 0x68));
            *(undefined8 *)(param_1 + 0x58) = uVar6;
            FUN_00a9b890(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x58),
                         *(undefined4 *)(param_1 + 0x7c));
            *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xa8);
            local_130 = *(longlong *)(param_1 + 0xe8);
            local_228 = (undefined *)FUN_004aeac0(local_130,*(int *)(local_130 + 0x10) + -1);
            local_220 = 0;
            local_218 = CONCAT71(local_218._1_7_,1);
            uVar6 = FUN_00ab3440(&PTR_FUN_00a84e18,1);
            *(undefined8 *)(param_1 + 0x60) = uVar6;
          }
          FUN_00ad4730(param_1);
        }
        else {
          if (uVar4 != 0x66) {
            if (uVar4 - 0x67 < 2) goto LAB_00ae5327;
            goto LAB_00ae53ac;
          }
          FUN_00ae3ff0(auStack_248);
          FUN_00ae1450(param_1,param_2);
        }
      }
    }
    else {
      if (0x94 < uVar4) {
        if (uVar4 < 0xb6) {
          if (uVar4 != 0xb5) {
            if (uVar4 - 0x95 < 2) {
              FUN_00ae3ff0(auStack_248);
              local_228 = (undefined *)CONCAT62(local_228._2_6_,0x31);
              local_220 = local_220 & 0xffffffffffffff00;
              local_218 = param_2;
              FUN_00ae1f40(param_1,0x94,*(undefined1 *)(param_1 + 0x44),1);
            }
            else {
              if (uVar4 == 0xa0) goto LAB_00ae4602;
              if (uVar4 == 0xb3) goto LAB_00ae5327;
              if (uVar4 != 0xb4) goto LAB_00ae53ac;
              *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x20) + 0x310) = 0;
              FUN_00ad4730(param_1);
            }
            goto LAB_00ae53b8;
          }
        }
        else if (uVar4 != 0xb7) {
          if ((3 < uVar4 - 0xb9) && (3 < uVar4 - 0xbe)) goto LAB_00ae53ac;
          goto LAB_00ae4602;
        }
        goto LAB_00ae5327;
      }
      if (0x88 < uVar4) {
        if (uVar4 != 0x8f) {
          if (uVar4 == 0x90) {
            FUN_00ae3ff0(auStack_248);
            local_228 = (undefined *)CONCAT62(local_228._2_6_,0x31);
            local_220 = local_220 & 0xffffffffffffff00;
            local_218 = param_2;
            FUN_00ae1f40(param_1,0x9f,*(undefined1 *)(param_1 + 0x44),1);
            goto LAB_00ae53b8;
          }
          if (3 < uVar4 - 0x91) goto LAB_00ae53ac;
        }
        FUN_00ae3ff0(auStack_248);
        FUN_00ae25e0(param_1,*(undefined1 *)(param_1 + 0x44),param_2);
        if (*(byte *)(param_1 + 0x44) < 200) {
          uVar4 = (ulonglong)*(byte *)(param_1 + 0x44) + (param_2 & 7) * 8;
          bVar9 = (*(byte *)((param_2 - (param_2 & 7)) + ((longlong)uVar4 >> 3)) >> (uVar4 & 7) & 1)
                  != 0;
        }
        else {
          bVar9 = false;
        }
        if (!bVar9) {
          FUN_00ad4730(param_1);
        }
        goto LAB_00ae53b8;
      }
      if (uVar4 == 0x88) goto LAB_00ae4602;
      if (4 < uVar4 - 0x6d) {
        if (uVar4 - 0x77 < 0xc) goto LAB_00ae4602;
        if (4 < uVar4 - 0x83) goto LAB_00ae53ac;
      }
LAB_00ae5327:
      FUN_00ae3ff0(auStack_248);
      FUN_00ad5100(param_1,*(undefined1 *)(param_1 + 0x44));
    }
LAB_00ae53b8:
  } while (*(char *)(param_1 + 0x44) != '\x04');
  FUN_00ad4730(param_1);
  uVar6 = local_30;
  local_40 = local_30;
  local_30 = 0;
  FUN_00410f20(uVar6);
LAB_00ae540e:
  FUN_00417840(&local_208,&DAT_004013d8,8);
  FUN_00414480(&local_148);
  return;
}


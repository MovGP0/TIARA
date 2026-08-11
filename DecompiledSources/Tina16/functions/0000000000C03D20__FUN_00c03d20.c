/* Ghidra address: 00c03d20 */
/* Ghidra symbol: FUN_00c03d20 */


void FUN_00c03d20(longlong *param_1,ushort param_2,ushort param_3,ulonglong *param_4)

{
  short sVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_2c8 [32];
  longlong local_2a8;
  undefined1 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  longlong local_280;
  undefined8 local_278;
  undefined8 local_270;
  longlong local_268;
  undefined8 local_260;
  undefined8 local_258;
  longlong local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  longlong local_230;
  undefined8 local_228;
  longlong local_220;
  longlong local_218;
  undefined8 local_210;
  undefined8 *local_208;
  longlong local_200;
  undefined8 *local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined1 *local_1a0;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  bool local_16d;
  int local_16c;
  longlong local_168;
  int local_15c;
  int local_158;
  int local_154;
  longlong local_150;
  int local_148;
  int local_144;
  longlong local_140;
  int local_138;
  undefined8 local_134;
  int local_12c;
  bool local_125;
  int local_124;
  longlong local_120;
  int local_114;
  longlong local_110;
  int local_108;
  int local_104;
  longlong local_100;
  int local_f4;
  int local_f0;
  int local_ec;
  longlong local_e8;
  int local_dc;
  int local_d8;
  int local_d4;
  longlong local_d0;
  int local_c8;
  int local_c4;
  longlong local_c0;
  int local_b4;
  longlong local_b0;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_90;
  uint local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  char local_6d;
  undefined8 local_6c;
  undefined8 local_64;
  int local_5c;
  int local_58;
  int local_54;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined8 *local_30;
  int local_24;
  int local_20;
  char local_19;
  
  local_1a0 = auStack_2c8;
  local_298 = 0;
  local_290 = 0;
  local_280 = 0;
  local_288 = 0;
  local_278 = 0;
  local_270 = 0;
  local_268 = 0;
  local_260 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0;
  local_240 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_210 = 0;
  local_218 = 0;
  local_208 = (undefined8 *)0x0;
  local_200 = 0;
  local_1f8 = (undefined8 *)0x0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_30 = (undefined8 *)0x0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_b0 = 0;
  FUN_00bf3750(param_1);
  uVar6 = (ulonglong)param_2;
  if (uVar6 < 0xe0) {
    if (uVar6 == 0xdf) {
      FUN_00c034b0(param_1,*(char *)((longlong)param_1 + 0x4e2) == '\0');
    }
    else if (uVar6 < 0x6a) {
      if (uVar6 == 0x69) {
LAB_00c0494c:
        local_88 = (**(code **)(*param_1 + 0x3a8))(param_1);
        local_1a8 = FUN_00bfaa10(param_1);
        FUN_00c0a550(param_1,&local_1a8,&local_88,param_2 == 0x69);
      }
      else if (uVar6 < 0xd) {
        if (uVar6 == 0xc) {
LAB_00c04476:
          FUN_00c0a0c0(param_1,(int)param_1[0x9a],param_2 == 0x70);
        }
        else if (uVar6 < 7) {
          if (uVar6 == 6) {
LAB_00c049a8:
            local_88 = (**(code **)(*param_1 + 0x378))(param_1);
            local_1a8 = FUN_00bfaa10(param_1);
            FUN_00c0a550(param_1,&local_1a8,&local_88,param_2 == 0x6a);
          }
          else if (uVar6 < 4) {
            if (uVar6 == 3) goto LAB_00c044d8;
            if (uVar6 == 1) goto LAB_00c04408;
            if (uVar6 == 2) goto LAB_00c04428;
          }
          else if (uVar6 == 4) {
LAB_00c0450f:
            FUN_00c0a430(param_1,1,param_2 == 0x68);
            (**(code **)(*param_1 + 0x198))(param_1);
          }
          else if (uVar6 == 5) goto LAB_00c0494c;
        }
        else if (uVar6 == 7) {
LAB_00c044a0:
          FUN_00c0c100(param_1,param_2 == 0x6b);
        }
        else if (uVar6 == 8) {
LAB_00c044bc:
          FUN_00c0c400(param_1,param_2 == 0x6c);
        }
        else if (uVar6 - 9 < 2) {
LAB_00c04548:
          local_8c = *(uint *)(param_1 + 0xa1) >>
                     ((*(uint *)((longlong)param_1 + 0x63a) & 0x200) != 0);
          if ((*(uint *)((longlong)param_1 + 0x63a) & 0x8000) != 0) {
            local_8c = local_8c - 1;
          }
          uVar3 = param_2 - 8;
          if (uVar3 < 0x68) {
            bVar9 = ((byte)(&DAT_00c07fa0)[(longlong)((ulonglong)uVar3 & 0x7f) >> 3] >>
                     ((ulonglong)uVar3 & 7) & 1) != 0;
          }
          else {
            bVar9 = false;
          }
          if (bVar9) {
            local_8c = -local_8c;
          }
          uVar6 = (ulonglong)(*(int *)((longlong)param_1 + 0x534) + local_8c);
          FUN_00bfcc50(param_1,uVar6);
          if ((ushort)(param_2 - 0x68) < 8) {
            bVar9 = ((int)CONCAT71((int7)(uVar6 >> 8),1) << ((byte)(param_2 - 0x68) & 0x1f) & 0x60U)
                    != 0;
          }
          else {
            bVar9 = false;
          }
          FUN_00c0a430(param_1,local_8c,bVar9);
          (**(code **)(*param_1 + 0x198))(param_1);
        }
        else if (uVar6 - 9 == 2) goto LAB_00c0444a;
      }
      else if (uVar6 < 0x12) {
        if (uVar6 == 0x11) goto LAB_00c048e9;
        if (uVar6 == 0xd) {
LAB_00c04657:
          uVar4 = FUN_00bfaa40(param_1);
          local_1a8 = FUN_00bb7730(uVar4,*(undefined4 *)((longlong)param_1 + 0x534));
          local_88 = FUN_00c0ee50(param_1,&local_1a8);
          local_1a8 = FUN_00bfaa10(param_1);
          FUN_00c0a550(param_1,&local_1a8,&local_88,param_2 == 0x71);
          (**(code **)(*param_1 + 0x198))(param_1);
        }
        else if (uVar6 == 0xe) {
LAB_00c046ed:
          uVar4 = FUN_00bfaa40(param_1);
          local_1a8 = FUN_00bb7730(uVar4,*(int *)((longlong)param_1 + 0x534) + (int)param_1[0xa1] +
                                         -1);
          local_88 = FUN_00c0ee50(param_1,&local_1a8);
          local_1a8 = FUN_00bfaa10(param_1);
          FUN_00c0a550(param_1,&local_1a8,&local_88,param_2 == 0x72);
          (**(code **)(*param_1 + 0x198))(param_1);
        }
        else if (uVar6 == 0xf) {
LAB_00c04795:
          local_88 = 0x100000001;
          local_1a8 = FUN_00bfaa10(param_1);
          FUN_00c0a550(param_1,&local_1a8,&local_88,param_2 == 0x73);
          (**(code **)(*param_1 + 0x198))(param_1);
        }
        else if (uVar6 == 0x10) goto LAB_00c047fe;
      }
      else if (uVar6 == 0x65) {
LAB_00c04408:
        FUN_00c0a0c0(param_1,0xffffffff,param_2 == 0x65);
      }
      else if (uVar6 == 0x66) {
LAB_00c04428:
        FUN_00c0a0c0(param_1,1,param_2 == 0x66);
      }
      else if (uVar6 == 0x67) {
LAB_00c044d8:
        FUN_00c0a430(param_1,0xffffffff,param_2 == 0x67);
        (**(code **)(*param_1 + 0x198))(param_1);
      }
      else if (uVar6 == 0x68) goto LAB_00c0450f;
    }
    else if (uVar6 < 0x75) {
      if (uVar6 == 0x74) {
LAB_00c047fe:
        local_88 = CONCAT44(local_88._4_4_,1);
        iVar5 = (**(code **)(*(longlong *)param_1[0x9d] + 0x28))((longlong *)param_1[0x9d]);
        local_88 = CONCAT44(iVar5,(undefined4)local_88);
        if (0 < iVar5) {
          (**(code **)(*(longlong *)param_1[0x9d] + 0x18))
                    ((longlong *)param_1[0x9d],&local_1b0,iVar5 + -1);
          local_c0 = local_1b0;
          local_c4 = 0;
          if (local_1b0 != 0) {
            local_c4 = *(int *)(local_1b0 + -4);
          }
          local_88 = CONCAT44(local_88._4_4_,local_c4 + 1);
        }
        local_1a8 = FUN_00bfaa10(param_1);
        FUN_00c0a550(param_1,&local_1a8,&local_88,param_2 == 0x74);
        (**(code **)(*param_1 + 0x198))(param_1);
      }
      else if (uVar6 < 0x70) {
        if (uVar6 == 0x6f) {
LAB_00c0444a:
          FUN_00c0a0c0(param_1,-(int)param_1[0x9a],param_2 == 0x6f);
        }
        else {
          if (uVar6 == 0x6a) goto LAB_00c049a8;
          if (uVar6 == 0x6b) goto LAB_00c044a0;
          if (uVar6 == 0x6c) goto LAB_00c044bc;
          if (uVar6 - 0x6d < 2) goto LAB_00c04548;
        }
      }
      else {
        if (uVar6 == 0x70) goto LAB_00c04476;
        if (uVar6 == 0x71) goto LAB_00c04657;
        if (uVar6 == 0x72) goto LAB_00c046ed;
        if (uVar6 == 0x73) goto LAB_00c04795;
      }
    }
    else if (uVar6 < 0xd3) {
      if (uVar6 == 0x75) {
LAB_00c048e9:
        if (param_4 != (ulonglong *)0x0) {
          local_1a8 = FUN_00bfaa10(param_1);
          FUN_00c0a550(param_1,&local_1a8,param_4,param_2 == 0x75);
          (**(code **)(*param_1 + 0x198))(param_1);
        }
      }
      else if (uVar6 == 0xc6) {
        FUN_00c08a50(param_1);
      }
      else if (uVar6 == 199) {
        FUN_00bfa390(param_1);
      }
      else if (uVar6 == 0xc9) {
        FUN_00bf1d60(param_1);
      }
    }
    else if (uVar6 < 0xd7) {
      if (uVar6 == 0xd6) {
        FUN_00bfb1b0(param_1,*(int *)((longlong)param_1 + 0x50c) + 1);
        (**(code **)(*param_1 + 0x198))(param_1);
      }
      else if (uVar6 - 0xd3 < 2) {
        local_a4 = FUN_00bfaa50(param_1);
        iVar5 = *(int *)((longlong)param_1 + 0x534);
        if ((local_a4 < iVar5) || (iVar5 + (int)param_1[0xa1] <= local_a4)) {
          FUN_00c03710(param_1);
        }
        else {
          if (param_2 == 0xd3) {
            FUN_00bfcc50(param_1,iVar5 + -1);
            if (*(int *)((longlong)param_1 + 0x534) + (int)param_1[0xa1] + -1 < local_a4) {
              FUN_00c0a430(param_1,((*(int *)((longlong)param_1 + 0x534) + (int)param_1[0xa1]) -
                                   local_a4) + -1,0);
            }
          }
          else {
            FUN_00bfcc50(param_1,iVar5 + 1);
            if (local_a4 < *(int *)((longlong)param_1 + 0x534)) {
              FUN_00c0a430(param_1,*(int *)((longlong)param_1 + 0x534) - local_a4,0);
            }
          }
          FUN_00c03710(param_1);
          (**(code **)(*param_1 + 0x198))(param_1);
        }
      }
      else if (uVar6 - 0xd3 == 2) {
        FUN_00bfb1b0(param_1,*(int *)((longlong)param_1 + 0x50c) + -1);
        (**(code **)(*param_1 + 0x198))(param_1);
      }
    }
    else if (uVar6 == 0xdd) {
      FUN_00c034b0(param_1,1);
    }
    else if (uVar6 == 0xde) {
      FUN_00c034b0(param_1,0);
    }
  }
  else if (uVar6 < 0x25c) {
    if (uVar6 == 0x25b) {
      cVar2 = (**(code **)(*param_1 + 0x278))(param_1);
      if ((cVar2 == '\0') && (cVar2 = FUN_00bf2c80(param_1), cVar2 != '\0')) {
        FUN_00bf1e50(param_1);
      }
    }
    else if (uVar6 < 0x1f8) {
      if (uVar6 == 0x1f7) {
LAB_00c05a2b:
        cVar2 = (**(code **)(*param_1 + 0x278))(param_1);
        if (cVar2 == '\0') {
          (**(code **)(*param_1 + 0x2f8))(param_1,0);
          FUN_00bf2c20(param_1,&local_220);
          local_110 = local_220;
          local_114 = 0;
          if (local_220 != 0) {
            local_114 = *(int *)(local_220 + -4);
          }
          local_24 = local_114;
          if (param_2 == 0x1f7) {
            local_78 = (**(code **)(*param_1 + 0x398))(param_1);
            FUN_00bf2c20(param_1,&local_30);
            if ((int)local_78 < *(int *)((longlong)param_1 + 0x4c4)) {
LAB_00c05b41:
              iVar5 = local_78._4_4_;
              if (local_24 < (int)local_78) {
                local_78 = CONCAT44(local_78._4_4_ + 1,1);
                (**(code **)(*(longlong *)param_1[0x9d] + 0x18))
                          ((longlong *)param_1[0x9d],&local_30,iVar5);
              }
              else if (*(short *)((longlong)local_30 + (longlong)(int)local_78 * 2 + -2) != 0x20) {
                local_78 = CONCAT44(local_78._4_4_,(int)local_78 + 1);
              }
            }
            else if ((int)local_78 == *(int *)((longlong)param_1 + 0x4c4)) {
              iVar5 = (**(code **)(*(longlong *)param_1[0x9d] + 0x28))((longlong *)param_1[0x9d]);
              if (local_78._4_4_ < iVar5) goto LAB_00c05b41;
            }
            if (local_30 != (undefined8 *)0x0) {
              while (*(short *)((longlong)local_30 + (longlong)(int)local_78 * 2 + -2) == 0x20) {
                local_78 = CONCAT44(local_78._4_4_,(int)local_78 + 1);
              }
            }
          }
          else {
            local_78 = CONCAT44(*(undefined4 *)((longlong)param_1 + 0x4cc),local_114 + 1);
          }
          if (((int)local_78 != *(int *)((longlong)param_1 + 0x4c4)) ||
             (local_78._4_4_ != *(int *)((longlong)param_1 + 0x4cc))) {
            local_1a8 = FUN_00bfaa10(param_1);
            FUN_00bfa470(param_1,&local_1a8);
            FUN_00bfa6c0(param_1,&local_78);
            FUN_00c086e0(param_1,0);
            FUN_00bf2ed0(param_1,&local_40);
            iVar5 = FUN_00bf2b30(param_1);
            FUN_00bd1750(&local_228,0x20,*(int *)((longlong)param_1 + 0x4c4) - iVar5);
            FUN_00bfb540(param_1,local_228);
            local_1a8 = FUN_00bfaa10(param_1);
            local_2a8 = local_40;
            local_2a0 = 0;
            FUN_00bd0e70(param_1[0xaa],9,&local_1a8,&local_78);
            local_1a8 = FUN_00bfaa10(param_1);
            (**(code **)(*param_1 + 0x2a8))(param_1,&local_1a8);
          }
        }
      }
      else if (uVar6 < 0x12d) {
        if (uVar6 == 0xe7) {
          FUN_00c086c0(param_1,0);
        }
        else if (uVar6 == 0xe8) {
          FUN_00c086c0(param_1,2);
        }
        else if (uVar6 == 0xe9) {
          FUN_00c086c0(param_1,1);
        }
        else if (uVar6 == 0xfa) {
          (**(code **)(*param_1 + 0x330))(param_1);
        }
      }
      else if (uVar6 < 0x1eb) {
        if (uVar6 == 0x1ea) {
          if (param_1[0xec] != 0) {
            FUN_00bf36d0(param_1,&local_290);
            (*(code *)param_1[0xec])(param_1[0xed],param_1,local_290);
          }
        }
        else if (uVar6 - 0x12d < 10) {
          if (*(char *)(param_1[0xb7] + 0x11) != '\0') {
            (**(code **)(*param_1 + 0x350))(param_1,param_2 - 0x12d);
          }
        }
        else if ((uVar6 - 0x15f < 10) && (*(char *)(param_1[0xb7] + 0x11) != '\0')) {
          local_20 = param_2 - 0x15f;
          if (param_4 == (ulonglong *)0x0) {
            local_80 = FUN_00bfaa10(param_1);
          }
          else {
            local_80 = *param_4;
          }
          if (param_1[(longlong)local_20 + 0xac] == 0) {
            FUN_00c020e0(param_1,local_20,local_80 & 0xffffffff,local_80._4_4_);
          }
          else {
            local_6d = *(int *)(param_1[(longlong)local_20 + 0xac] + 8) != local_80._4_4_;
            FUN_00c01ee0(param_1,local_20);
            if (local_6d != '\0') {
              FUN_00c020e0(param_1,local_20,local_80 & 0xffffffff,local_80._4_4_);
            }
          }
        }
      }
      else if (uVar6 == 0x1f5) {
        cVar2 = (**(code **)(*param_1 + 0x278))(param_1);
        if (cVar2 == '\0') {
          (**(code **)(*param_1 + 0x2f0))(param_1,0,1);
          cVar2 = FUN_00bf2c80(param_1);
          if (cVar2 == '\0') {
            FUN_00bf2c20(param_1,&local_30);
            FUN_00bcf900(param_1[0x9d],&local_48,*(int *)((longlong)param_1 + 0x4cc) + -1);
            local_c8 = 0;
            if (local_30 != (undefined8 *)0x0) {
              local_c8 = *(int *)((longlong)local_30 + -4);
            }
            local_24 = local_c8;
            local_80 = FUN_00bfaa10(param_1);
            local_a8 = 0;
            if (local_24 + 1 < *(int *)((longlong)param_1 + 0x4c4)) {
              FUN_00414480(&local_40);
              if ((*(uint *)((longlong)param_1 + 0x63a) & 0x200000) == 0) {
                FUN_00bfa9b0(param_1,*(int *)((longlong)param_1 + 0x4c4) + -1);
              }
              else if (local_24 < 1) {
                local_54 = *(int *)((longlong)param_1 + 0x4c4) + -1;
                local_58 = 0;
                if (0 < local_54) {
                  local_5c = *(int *)((longlong)param_1 + 0x4cc) + -2;
                  uVar6 = FUN_00c09df0(param_1);
                  if ((uVar6 & 0x4000000) == 0) {
                    for (; -1 < local_5c; local_5c = local_5c + -1) {
                      (**(code **)(*(longlong *)param_1[0x9d] + 0x18))
                                ((longlong *)param_1[0x9d],&local_1c0,local_5c);
                      local_58 = FUN_00bf3fb0(param_1,local_1c0);
                      if ((0 < local_58) && (local_58 < local_54)) break;
                    }
                  }
                  else {
                    for (; -1 < local_5c; local_5c = local_5c + -1) {
                      (**(code **)(*(longlong *)param_1[0x9d] + 0x18))
                                ((longlong *)param_1[0x9d],&local_1b8,local_5c);
                      local_58 = FUN_00bf3fd0(param_1,local_1b8,1,0);
                      if ((0 < local_58) && (local_58 < local_54)) break;
                    }
                  }
                  if ((local_5c == -1) && (local_54 < local_58)) {
                    local_58 = 0;
                  }
                }
                if (local_58 == local_54) {
                  local_58 = 0;
                }
                *(int *)((longlong)param_1 + 0x4c4) =
                     *(int *)((longlong)param_1 + 0x4c4) - (local_54 - local_58);
                FUN_00bfac10(param_1);
                *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) | 1;
                FUN_00c0a950(param_1,2);
              }
              else {
                FUN_00bfa9b0(param_1,local_24 + 1);
              }
            }
            else if (*(int *)((longlong)param_1 + 0x4c4) == 1) {
              if (1 < *(int *)((longlong)param_1 + 0x4cc)) {
                FUN_00bfa9e0(param_1,*(int *)((longlong)param_1 + 0x4cc) + -1);
                (**(code **)(*(longlong *)param_1[0x9d] + 0x18))
                          ((longlong *)param_1[0x9d],&local_1c8,
                           *(int *)((longlong)param_1 + 0x4cc) + -1);
                local_d0 = local_1c8;
                local_d4 = 0;
                if (local_1c8 != 0) {
                  local_d4 = *(int *)(local_1c8 + -4);
                }
                FUN_00bfa9b0(param_1,local_d4 + 1);
                (**(code **)(*(longlong *)param_1[0x9d] + 0x98))
                          ((longlong *)param_1[0x9d],*(undefined4 *)((longlong)param_1 + 0x4cc));
                FUN_00c0efe0(param_1,*(int *)((longlong)param_1 + 0x4cc) + 1,1);
                uVar6 = FUN_00c09df0(param_1);
                if ((uVar6 & 0x4000000) != 0) {
                  FUN_00bf1640(&local_1d0,local_30);
                  FUN_00414b50(&local_30,local_1d0);
                }
                FUN_00bf2c20(param_1,&local_1d8);
                FUN_00416ad0(&local_1d8,local_30);
                FUN_00bfb370(param_1,local_1d8);
                FUN_00414b50(&local_40,&LAB_00c07fc0);
              }
            }
            else {
              local_54 = FUN_00bf3fb0(param_1,local_30);
              local_58 = 0;
              if ((*(ushort *)
                    ((longlong)local_30 +
                    (longlong)(*(int *)((longlong)param_1 + 0x4c4) + -1) * 2 + -2) < 0x21) &&
                 (local_54 == *(int *)((longlong)param_1 + 0x4c4) + -1)) {
                if ((*(uint *)((longlong)param_1 + 0x63a) & 0x200000) == 0) {
                  local_58 = local_54;
                  iVar5 = FUN_00bfaa40(param_1);
                  local_5c = (iVar5 + -1) % (int)param_1[0xc3];
                  if (local_5c == 0) {
                    local_5c = (int)param_1[0xc3];
                  }
                  local_54 = 0;
                  local_20 = FUN_00bfaa40(param_1);
                  local_20 = local_20 - local_5c;
                  while (((local_54 < (int)param_1[0xc3] && (local_54 < local_5c)) &&
                         (*(short *)(local_48 + -2 + (longlong)local_20 * 2) != 9))) {
                    local_54 = local_54 + 1;
                    local_20 = local_20 + 1;
                  }
                  if (*(short *)(local_48 + -2 + (longlong)local_20 * 2) == 9) {
                    local_54 = local_54 + 1;
                  }
                  if (local_58 == local_54) {
                    FUN_00416dc0(&local_40,local_30,1,local_54);
                    FUN_00416e20(&local_30,1,local_54);
                  }
                  else {
                    FUN_00416dc0(&local_40,local_30,(local_58 - local_54) + 1,local_54);
                    FUN_00416e20(&local_30,(local_58 - local_54) + 1,local_54);
                  }
                  local_58 = 0;
                }
                else {
                  if (0 < local_54) {
                    local_5c = *(int *)((longlong)param_1 + 0x4cc) + -2;
                    uVar6 = FUN_00c09df0(param_1);
                    if ((uVar6 & 0x4000000) == 0) {
                      for (; -1 < local_5c; local_5c = local_5c + -1) {
                        (**(code **)(*(longlong *)param_1[0x9d] + 0x18))
                                  ((longlong *)param_1[0x9d],&local_1e8,local_5c);
                        local_58 = FUN_00bf3fb0(param_1,local_1e8);
                        if ((0 < local_58) && (local_58 < local_54)) break;
                      }
                    }
                    else {
                      for (; -1 < local_5c; local_5c = local_5c + -1) {
                        (**(code **)(*(longlong *)param_1[0x9d] + 0x18))
                                  ((longlong *)param_1[0x9d],&local_1e0,local_5c);
                        local_58 = FUN_00bf3fd0(param_1,local_1e0,1,0);
                        if ((0 < local_58) && (local_58 < local_54)) break;
                      }
                    }
                    if ((local_5c == -1) && (local_54 < local_58)) {
                      local_58 = 0;
                    }
                  }
                  if (local_58 == local_54) {
                    local_58 = 0;
                  }
                  FUN_00416dc0(&local_40,local_30,1,local_54 - local_58);
                  FUN_00416e20(&local_30,1,local_54 - local_58);
                }
                *(int *)((longlong)param_1 + 0x4c4) =
                     *(int *)((longlong)param_1 + 0x4c4) - (local_54 - local_58);
                FUN_00bfac10(param_1);
                uVar6 = FUN_00c09df0(param_1);
                if ((uVar6 & 0x4000000) != 0) {
                  local_d8 = 0;
                  if (local_48 != 0) {
                    local_d8 = *(int *)(local_48 + -4);
                  }
                  if (local_24 != local_d8) {
                    local_a8 = FUN_00bcc240(*(undefined4 *)((longlong)param_1 + 0x4c4),
                                            (int)param_1[0xc3],local_30);
                  }
                }
                FUN_00c0f2c0(param_1,*(int *)((longlong)param_1 + 0x4cc) + -1,local_30);
                *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) | 1;
                FUN_00c0a950(param_1,2);
                if (local_a8 != 0) {
                  local_dc = 0;
                  if (local_30 != (undefined8 *)0x0) {
                    local_dc = *(int *)((longlong)local_30 + -4);
                  }
                  FUN_00bf2c20(param_1,&local_1f0);
                  local_e8 = local_1f0;
                  local_ec = 0;
                  if (local_1f0 != 0) {
                    local_ec = *(int *)(local_1f0 + -4);
                  }
                  if (local_dc == local_ec) {
                    local_a8 = 0;
                  }
                  else {
                    FUN_00bf2c20(param_1,&local_1f8);
                    iVar5 = FUN_00bcc240(*(undefined4 *)((longlong)param_1 + 0x4c4),
                                         (int)param_1[0xc3],local_1f8);
                    local_a8 = local_a8 - iVar5;
                  }
                }
              }
              else {
                local_8c = 1;
                FUN_00bfa9b0(param_1,*(int *)((longlong)param_1 + 0x4c4) + -1);
                uVar6 = FUN_00c09df0(param_1);
                if ((uVar6 & 0x4000000) != 0) {
                  local_f0 = 0;
                  if (local_48 != 0) {
                    local_f0 = *(int *)(local_48 + -4);
                  }
                  if (local_24 != local_f0) {
                    local_a8 = FUN_00bcc240(*(undefined4 *)((longlong)param_1 + 0x4c4),
                                            (int)param_1[0xc3],local_30);
                  }
                }
                FUN_00416dc0(&local_40,local_30,*(undefined4 *)((longlong)param_1 + 0x4c4),local_8c)
                ;
                FUN_00416e20(&local_30,*(undefined4 *)((longlong)param_1 + 0x4c4),local_8c);
                FUN_00c0f2c0(param_1,*(int *)((longlong)param_1 + 0x4cc) + -1,local_30);
                if (local_a8 != 0) {
                  local_f4 = 0;
                  if (local_30 != (undefined8 *)0x0) {
                    local_f4 = *(int *)((longlong)local_30 + -4);
                  }
                  FUN_00bf2c20(param_1,&local_200);
                  local_100 = local_200;
                  local_104 = 0;
                  if (local_200 != 0) {
                    local_104 = *(int *)(local_200 + -4);
                  }
                  if (local_f4 == local_104) {
                    local_a8 = 0;
                  }
                  else {
                    FUN_00bf2c20(param_1,&local_208);
                    iVar5 = FUN_00bcc240(*(undefined4 *)((longlong)param_1 + 0x4c4),
                                         (int)param_1[0xc3],local_208);
                    local_a8 = local_a8 - iVar5;
                  }
                }
              }
            }
            if (((int)local_80 != *(int *)((longlong)param_1 + 0x4c4)) ||
               (local_80._4_4_ != *(int *)((longlong)param_1 + 0x4cc))) {
              local_1a8 = FUN_00bfaa10(param_1);
              local_2a8 = local_40;
              local_2a0 = 0;
              FUN_00bd0e70(param_1[0xaa],8,&local_1a8,&local_80);
              if (local_a8 != 0) {
                FUN_00c03c60(auStack_2c8,*(int *)((longlong)param_1 + 0x4c4) + local_a8);
              }
            }
          }
          else {
            FUN_00c03b20(auStack_2c8);
          }
          FUN_00c03710(param_1);
          (**(code **)(*param_1 + 0x2f0))(param_1,1,1);
        }
      }
      else if ((uVar6 == 0x1f6) && (cVar2 = (**(code **)(*param_1 + 0x278))(param_1), cVar2 == '\0')
              ) {
        (**(code **)(*param_1 + 0x2f8))(param_1,0);
        cVar2 = FUN_00bf2c80(param_1);
        if (cVar2 == '\0') {
          FUN_00bfac10(param_1);
          FUN_00bf2c20(param_1,&local_30);
          local_108 = 0;
          if (local_30 != (undefined8 *)0x0) {
            local_108 = *(int *)((longlong)local_30 + -4);
          }
          local_24 = local_108;
          if (local_108 < *(int *)((longlong)param_1 + 0x4c4)) {
            iVar5 = (**(code **)(*(longlong *)param_1[0x9d] + 0x28))((longlong *)param_1[0x9d]);
            if (*(int *)((longlong)param_1 + 0x4cc) < iVar5) {
              FUN_00bd1750(&local_40,0x20,(*(int *)((longlong)param_1 + 0x4c4) - local_24) + -1);
              (**(code **)(*(longlong *)param_1[0x9d] + 0x18))
                        ((longlong *)param_1[0x9d],&local_218,
                         *(undefined4 *)((longlong)param_1 + 0x4cc));
              local_2a8 = local_218;
              FUN_00416cd0(&local_210,3,local_30,local_40);
              FUN_00c0f2c0(param_1,*(int *)((longlong)param_1 + 0x4cc) + -1,local_210);
              local_80 = CONCAT44(*(int *)((longlong)param_1 + 0x4cc) + 1,1);
              FUN_00414b50(&local_40,&LAB_00c07fc0);
              (**(code **)(*(longlong *)param_1[0x9d] + 0x98))
                        ((longlong *)param_1[0x9d],*(undefined4 *)((longlong)param_1 + 0x4cc));
              FUN_00c0efe0(param_1,*(int *)((longlong)param_1 + 0x4cc) + 1,1);
            }
          }
          else {
            local_8c = 1;
            FUN_00416dc0(&local_40,local_30,*(undefined4 *)((longlong)param_1 + 0x4c4),1);
            local_80 = CONCAT44(*(undefined4 *)((longlong)param_1 + 0x4cc),
                                *(int *)((longlong)param_1 + 0x4c4) + local_8c);
            FUN_00416e20(&local_30,*(undefined4 *)((longlong)param_1 + 0x4c4),local_8c);
            FUN_00c0f2c0(param_1,*(int *)((longlong)param_1 + 0x4cc) + -1,local_30);
          }
          if (((int)local_80 != *(int *)((longlong)param_1 + 0x4c4)) ||
             (local_80._4_4_ != *(int *)((longlong)param_1 + 0x4cc))) {
            local_1a8 = FUN_00bfaa10(param_1);
            local_2a8 = local_40;
            local_2a0 = 0;
            FUN_00bd0e70(param_1[0xaa],9,&local_1a8,&local_80);
          }
        }
        else {
          FUN_00c03b20(auStack_2c8);
        }
        (**(code **)(*param_1 + 0x2f8))(param_1,1);
      }
    }
    else if (uVar6 < 0x1fd) {
      if (uVar6 - 0x1f8 < 2) {
        cVar2 = (**(code **)(*param_1 + 0x278))(param_1);
        if (cVar2 == '\0') {
          (**(code **)(*param_1 + 0x2f8))(param_1,0);
          if (param_2 == 0x1f8) {
            local_78 = (**(code **)(*param_1 + 0x3a8))(param_1);
          }
          else {
            local_78 = CONCAT44(*(undefined4 *)((longlong)param_1 + 0x4cc),1);
          }
          if (((int)local_78 != *(int *)((longlong)param_1 + 0x4c4)) ||
             (local_78._4_4_ != *(int *)((longlong)param_1 + 0x4cc))) {
            local_1a8 = FUN_00bfaa10(param_1);
            FUN_00bfa470(param_1,&local_1a8);
            FUN_00bfa6c0(param_1,&local_78);
            FUN_00c086e0(param_1,0);
            FUN_00bf2ed0(param_1,&local_40);
            FUN_00bfb540(param_1,0);
            local_1a8 = FUN_00bfaa10(param_1);
            local_2a8 = local_40;
            local_2a0 = 0;
            FUN_00bd0e70(param_1[0xaa],8,&local_78,&local_1a8);
            (**(code **)(*param_1 + 0x2a8))(param_1,&local_78);
          }
          (**(code **)(*param_1 + 0x2f8))(param_1,1);
        }
      }
      else {
        if (uVar6 == 0x1fa) goto LAB_00c05a2b;
        if (uVar6 == 0x1fb) {
          cVar2 = (**(code **)(*param_1 + 0x278))(param_1);
          if ((cVar2 == '\0') &&
             (iVar5 = (**(code **)(*(longlong *)param_1[0x9d] + 0x28))((longlong *)param_1[0x9d]),
             0 < iVar5)) {
            iVar5 = (**(code **)(*(longlong *)param_1[0x9d] + 0x28))((longlong *)param_1[0x9d]);
            if (*(int *)((longlong)param_1 + 0x4cc) == iVar5) {
              (**(code **)(*(longlong *)param_1[0x9d] + 0x18))
                        ((longlong *)param_1[0x9d],&local_230,
                         *(int *)((longlong)param_1 + 0x4cc) + -1);
              local_120 = local_230;
              local_124 = 0;
              if (local_230 != 0) {
                local_124 = *(int *)(local_230 + -4);
              }
              local_125 = local_124 == 0;
            }
            else {
              local_125 = false;
            }
            if (local_125 == false) {
              (**(code **)(*param_1 + 0x2f8))(param_1,0);
              cVar2 = FUN_00bf2c80(param_1);
              if (cVar2 != '\0') {
                local_1a8 = FUN_00bfaa10(param_1);
                FUN_00bfa470(param_1,&local_1a8);
              }
              FUN_00bf2c20(param_1,&local_40);
              iVar5 = (**(code **)(*(longlong *)param_1[0x9d] + 0x28))((longlong *)param_1[0x9d]);
              if (*(int *)((longlong)param_1 + 0x4cc) == iVar5) {
                (**(code **)(*(longlong *)param_1[0x9d] + 0x40))
                          ((longlong *)param_1[0x9d],*(int *)((longlong)param_1 + 0x4cc) + -1,0);
                local_134 = FUN_00bb7750(1,*(undefined4 *)((longlong)param_1 + 0x4cc));
                local_12c = 0;
                if (local_40 != 0) {
                  local_12c = *(int *)(local_40 + -4);
                }
                local_1a8 = FUN_00bb7750(local_12c + 1,*(undefined4 *)((longlong)param_1 + 0x4cc));
                local_2a8 = local_40;
                local_2a0 = 0;
                FUN_00bd0e70(param_1[0xaa],9,&local_134,&local_1a8);
              }
              else {
                (**(code **)(*(longlong *)param_1[0x9d] + 0x98))
                          ((longlong *)param_1[0x9d],*(int *)((longlong)param_1 + 0x4cc) + -1);
                FUN_00416ad0(&local_40,&LAB_00c07fc0);
                local_1a8 = FUN_00bb7750(1,*(undefined4 *)((longlong)param_1 + 0x4cc));
                local_238 = FUN_00bb7750(1,*(int *)((longlong)param_1 + 0x4cc) + 1);
                local_2a8 = local_40;
                local_2a0 = 0;
                FUN_00bd0e70(param_1[0xaa],9,&local_1a8,&local_238);
                FUN_00c0efe0(param_1,*(undefined4 *)((longlong)param_1 + 0x4cc),1);
              }
              local_1a8 = FUN_00bb7750(1,*(undefined4 *)((longlong)param_1 + 0x4cc));
              (**(code **)(*param_1 + 0x2a8))(param_1,&local_1a8);
            }
          }
        }
        else if ((uVar6 == 0x1fc) &&
                (cVar2 = (**(code **)(*param_1 + 0x278))(param_1), cVar2 == '\0')) {
          FUN_00c080a0(param_1);
        }
      }
    }
    else if (uVar6 < 0x227) {
      if (uVar6 == 0x226) {
        cVar2 = (**(code **)(*param_1 + 0x278))(param_1);
        if (cVar2 == '\0') {
          uVar4 = FUN_00711290(param_4);
          FUN_00414740(&local_b0,param_4,uVar4);
          cVar2 = FUN_00bf2c80(param_1);
          if (cVar2 == '\0') {
            FUN_00bf2c20(param_1,&local_30);
            local_180 = 0;
            if (local_30 != (undefined8 *)0x0) {
              local_180 = *(int *)((longlong)local_30 + -4);
            }
            local_24 = local_180;
            if (local_180 < *(int *)((longlong)param_1 + 0x4c4)) {
              FUN_00bd1750(&local_298,0x20,(*(int *)((longlong)param_1 + 0x4c4) - local_180) + -1);
              FUN_00416ad0(&local_30,local_298);
            }
            local_19 = (*(uint *)((longlong)param_1 + 0x63a) & 0x40000) == 0;
            if ((bool)local_19) {
              *(uint *)((longlong)param_1 + 0x63a) = *(uint *)((longlong)param_1 + 0x63a) | 0x40000;
            }
            local_64 = FUN_00bfaa10(param_1);
            local_184 = 0;
            if (local_b0 != 0) {
              local_184 = *(int *)(local_b0 + -4);
            }
            local_24 = local_184;
            if (*(char *)((longlong)param_1 + 0x4e2) == '\0') {
              FUN_00416dc0(&local_40,local_30,*(undefined4 *)((longlong)param_1 + 0x4c4),local_184);
              FUN_00416e20(&local_30,*(undefined4 *)((longlong)param_1 + 0x4c4),local_24);
            }
            FUN_00416ea0(local_b0,&local_30,*(undefined4 *)((longlong)param_1 + 0x4c4));
            FUN_00bfa9b0(param_1,*(int *)((longlong)param_1 + 0x4c4) + local_24);
            FUN_00c0f2c0(param_1,*(int *)((longlong)param_1 + 0x4cc) + -1,local_30);
            if (*(char *)((longlong)param_1 + 0x4e2) != '\0') {
              FUN_00414480(&local_40);
            }
            local_1a8 = FUN_00bfaa10(param_1);
            local_2a8 = local_40;
            local_2a0 = 0;
            FUN_00bd0e70(param_1[0xaa],0,&local_64,&local_1a8);
            if (*(int *)((longlong)param_1 + 0x50c) + (int)param_1[0x9a] <=
                *(int *)((longlong)param_1 + 0x4c4)) {
              local_188 = (int)param_1[0x9a] + -1;
              local_18c = local_188;
              if (0x19 < local_188) {
                local_18c = 0x19;
              }
              FUN_00bfb1b0(param_1,*(int *)((longlong)param_1 + 0x50c) + local_18c);
            }
            if (local_19 != '\0') {
              *(uint *)((longlong)param_1 + 0x63a) =
                   *(uint *)((longlong)param_1 + 0x63a) & 0xfffbffff;
            }
          }
          else {
            FUN_00c08780(param_1);
            local_2a8 = local_40;
            local_2a0 = 0;
            FUN_00bd0e70(param_1[0xaa],4,(longlong)param_1 + 0x4b4,(longlong)param_1 + 0x4bc);
            local_64 = *(undefined8 *)((longlong)param_1 + 0x4b4);
            FUN_00bfb540(param_1,local_b0);
            local_2a8 = local_40;
            local_2a0 = 0;
            FUN_00bd0e70(param_1[0xaa],0,(longlong)param_1 + 0x4b4,(longlong)param_1 + 0x4bc);
            FUN_00c087b0(param_1);
            FUN_00bf37c0(param_1,0xffffffff,0xffffffff);
          }
        }
      }
      else if (uVar6 - 0x1fd < 2) {
        cVar2 = (**(code **)(*param_1 + 0x278))(param_1);
        if (cVar2 == '\0') {
          FUN_00bd0f90(param_1[0xaa]);
          cVar2 = FUN_00bf2c80(param_1);
          if (cVar2 != '\0') {
            FUN_00bf2ed0(param_1,&local_40);
            local_98 = *(undefined8 *)((longlong)param_1 + 0x4b4);
            local_a0 = *(undefined8 *)((longlong)param_1 + 0x4bc);
            FUN_00bfb540(param_1,0);
            local_2a8 = local_40;
            local_2a0 = *(undefined1 *)((longlong)param_1 + 0x5f5);
            FUN_00bd0e70(param_1[0xaa],4,&local_98,&local_a0);
          }
          FUN_00bf2c20(param_1,&local_30);
          FUN_00414b50(&local_38,local_30);
          local_90 = (uint)(*(int *)((longlong)param_1 + 0x4c4) == 1);
          local_138 = 0;
          if (local_30 != (undefined8 *)0x0) {
            local_138 = *(int *)((longlong)local_30 + -4);
          }
          local_24 = local_138;
          if (local_138 < 1) {
            iVar5 = (**(code **)(*(longlong *)param_1[0x9d] + 0x28))((longlong *)param_1[0x9d]);
            if (iVar5 == 0) {
              (**(code **)(*(longlong *)param_1[0x9d] + 0x78))((longlong *)param_1[0x9d],0);
            }
            local_58 = 0;
            uVar6 = FUN_00c09df0(param_1);
            if ((uVar6 & 2) != 0) {
              local_5c = *(int *)((longlong)param_1 + 0x4cc);
              do {
                local_5c = local_5c + -1;
                if (local_5c < 0) break;
                (**(code **)(*(longlong *)param_1[0x9d] + 0x18))
                          ((longlong *)param_1[0x9d],&local_260,local_5c);
                local_58 = FUN_00bf3fd0(param_1,local_260,1,0);
                (**(code **)(*(longlong *)param_1[0x9d] + 0x18))
                          ((longlong *)param_1[0x9d],&local_268,local_5c);
                local_150 = local_268;
                local_154 = 0;
                if (local_268 != 0) {
                  local_154 = *(int *)(local_268 + -4);
                }
              } while (local_154 < 1);
            }
            (**(code **)(*(longlong *)param_1[0x9d] + 200))
                      ((longlong *)param_1[0x9d],*(int *)((longlong)param_1 + 0x4cc) + -1,0);
            local_1a8 = FUN_00bfaa10(param_1);
            local_238 = FUN_00bfaa10(param_1);
            local_2a8 = 0;
            local_2a0 = 0;
            FUN_00bd0e70(param_1[0xaa],5,&local_1a8,&local_238);
            if (param_2 == 0x1fd) {
              FUN_00bfa9b0(param_1,local_58 + 1);
              FUN_00bfa9e0(param_1,*(int *)((longlong)param_1 + 0x4cc) + 1);
            }
          }
          else if (local_138 < *(int *)((longlong)param_1 + 0x4c4)) {
            local_58 = 0;
            local_5c = *(int *)((longlong)param_1 + 0x4cc);
            uVar6 = FUN_00c09df0(param_1);
            if ((uVar6 & 2) != 0) {
              do {
                local_5c = local_5c + -1;
                (**(code **)(*(longlong *)param_1[0x9d] + 0x18))
                          ((longlong *)param_1[0x9d],&local_30,local_5c);
                local_58 = FUN_00bf3fb0(param_1,local_30);
                if (local_5c == 0) break;
              } while (local_30 == (undefined8 *)0x0);
            }
            (**(code **)(*(longlong *)param_1[0x9d] + 200))
                      ((longlong *)param_1[0x9d],*(undefined4 *)((longlong)param_1 + 0x4cc),0);
            local_80 = FUN_00bfaa10(param_1);
            local_2a8 = 0;
            local_2a0 = 0;
            FUN_00bd0e70(param_1[0xaa],5,&local_80,&local_80);
            if (param_2 == 0x1fd) {
              local_1a8 = FUN_00bb7750(1,*(int *)((longlong)param_1 + 0x4cc) + 1);
              (**(code **)(*param_1 + 0x2a8))(param_1,&local_1a8);
              if (0 < local_58) {
                (**(code **)(*(longlong *)param_1[0x9d] + 0x18))
                          ((longlong *)param_1[0x9d],&local_258,local_5c);
                FUN_00416dc0(&local_50,local_258,1,local_58);
                local_148 = 0;
                if (local_50 != 0) {
                  local_148 = *(int *)(local_50 + -4);
                }
                local_b4 = 1;
                iVar5 = local_148;
                if (0 < local_148) {
                  do {
                    sVar1 = *(short *)(local_50 + -2 + (longlong)local_b4 * 2);
                    if (sVar1 == 9) {
                      (**(code **)(*param_1 + 0x328))(param_1,0x264,0);
                    }
                    else {
                      (**(code **)(*param_1 + 0x328))(param_1,0x1ff,sVar1,0);
                    }
                    local_b4 = local_b4 + 1;
                    iVar5 = iVar5 + -1;
                  } while (iVar5 != 0);
                }
              }
            }
          }
          else if (*(int *)((longlong)param_1 + 0x4c4) < 2) {
            (**(code **)(*(longlong *)param_1[0x9d] + 200))
                      ((longlong *)param_1[0x9d],*(int *)((longlong)param_1 + 0x4cc) + -1,0);
            local_1a8 = FUN_00bfaa10(param_1);
            local_238 = FUN_00bfaa10(param_1);
            local_2a8 = local_38;
            local_2a0 = 0;
            FUN_00bd0e70(param_1[0xaa],5,&local_1a8,&local_238);
            if (param_2 == 0x1fd) {
              FUN_00bfa9e0(param_1,*(int *)((longlong)param_1 + 0x4cc) + 1);
            }
          }
          else {
            FUN_00bf2c20(param_1,&local_240);
            FUN_00416dc0(&local_30,local_240,1,*(int *)((longlong)param_1 + 0x4c4) + -1);
            local_54 = FUN_00bf3fd0(param_1,local_30,1,0);
            FUN_00416e20(&local_38,1,*(int *)((longlong)param_1 + 0x4c4) + -1);
            FUN_00bf4050(param_1,&local_248,local_54,1);
            FUN_00416ad0(&local_248,local_38);
            (**(code **)(*(longlong *)param_1[0x9d] + 200))
                      ((longlong *)param_1[0x9d],*(undefined4 *)((longlong)param_1 + 0x4cc),
                       local_248);
            FUN_00c0f2c0(param_1,*(int *)((longlong)param_1 + 0x4cc) + -1,local_30);
            local_1a8 = FUN_00bfaa10(param_1);
            local_238 = FUN_00bfaa10(param_1);
            local_2a8 = local_38;
            local_2a0 = 0;
            FUN_00bd0e70(param_1[0xaa],5,&local_1a8,&local_238);
            if (param_2 == 0x1fd) {
              FUN_00bf4050(param_1,&local_250,local_54,1);
              local_140 = local_250;
              local_144 = 0;
              if (local_250 != 0) {
                local_144 = *(int *)(local_250 + -4);
              }
              local_1a8 = FUN_00bb7750(local_144 + 1,*(int *)((longlong)param_1 + 0x4cc) + 1);
              (**(code **)(*param_1 + 0x2a8))(param_1,&local_1a8);
            }
          }
          FUN_00c0f130(param_1,*(int *)((longlong)param_1 + 0x4cc) - local_90,1);
          local_1a8 = FUN_00bfaa10(param_1);
          FUN_00bfa470(param_1,&local_1a8);
          local_1a8 = FUN_00bfaa10(param_1);
          FUN_00bfa6c0(param_1,&local_1a8);
          FUN_00c03710(param_1);
          FUN_00bfac10(param_1);
          FUN_00bd1000(param_1[0xaa]);
        }
      }
      else if ((((uVar6 - 0x1fd == 2) &&
                (cVar2 = (**(code **)(*param_1 + 0x278))(param_1), cVar2 == '\0')) &&
               (0x1f < param_3)) && (param_3 != 0x7f)) {
        cVar2 = FUN_00bf2c80(param_1);
        if (cVar2 == '\0') {
          local_58 = 0;
          FUN_00bf2c20(param_1,&local_30);
          local_158 = 0;
          if (local_30 != (undefined8 *)0x0) {
            local_158 = *(int *)((longlong)local_30 + -4);
          }
          local_24 = local_158;
          if (local_158 < *(int *)((longlong)param_1 + 0x4c4)) {
            if (local_158 < 1) {
              FUN_00bf4050(param_1,&local_50,
                           (*(int *)((longlong)param_1 + 0x4c4) - local_158) -
                           (uint)*(byte *)((longlong)param_1 + 0x4e2),1);
            }
            else {
              FUN_00bd1750(&local_50,0x20,
                           (*(int *)((longlong)param_1 + 0x4c4) - local_158) -
                           (uint)*(byte *)((longlong)param_1 + 0x4e2));
            }
            local_15c = 0;
            if (local_50 != 0) {
              local_15c = *(int *)(local_50 + -4);
            }
            local_58 = local_15c;
            FUN_00416ad0(&local_30,local_50);
          }
          local_19 = (*(uint *)((longlong)param_1 + 0x63a) & 0x40000) == 0;
          if ((bool)local_19) {
            *(uint *)((longlong)param_1 + 0x63a) = *(uint *)((longlong)param_1 + 0x63a) | 0x40000;
          }
          local_64 = FUN_00bfaa10(param_1);
          if (*(char *)((longlong)param_1 + 0x4e2) == '\0') {
            local_8c = 1;
            FUN_00416dc0(&local_40,local_30,*(undefined4 *)((longlong)param_1 + 0x4c4),1);
            lVar8 = FUN_00414de0(&local_30);
            *(ushort *)(lVar8 + -2 + (longlong)*(int *)((longlong)param_1 + 0x4c4) * 2) = param_3;
            local_88 = CONCAT44(*(undefined4 *)((longlong)param_1 + 0x4cc),
                                *(int *)((longlong)param_1 + 0x4c4) + local_8c);
            FUN_00c0f2c0(param_1,*(int *)((longlong)param_1 + 0x4cc) + -1,local_30);
            local_2a8 = local_40;
            local_2a0 = 0;
            FUN_00bd0e70(param_1[0xaa],0,&local_64,&local_88);
            FUN_00bfa9b0(param_1,*(int *)((longlong)param_1 + 0x4c4) + 1);
          }
          else {
            cVar2 = FUN_00c10e70(param_1);
            if (((cVar2 == '\0') && (uVar6 = FUN_00c09df0(param_1), (uVar6 & 4) == 0)) &&
               ((int)param_1[0xa2] < *(int *)((longlong)param_1 + 0x4c4))) {
              FUN_00c07eb0(0,local_1a0);
              FUN_00c07f30(0,local_1a0);
              goto LAB_00c07dc3;
            }
            FUN_00416780(&local_278,param_3);
            FUN_00416ea0(local_278,&local_30,*(undefined4 *)((longlong)param_1 + 0x4c4));
            uVar6 = FUN_00c09df0(param_1);
            if (((uVar6 & 0x4000000) == 0) || ((param_3 != 9 && (param_3 != 0x20)))) {
              local_16d = false;
            }
            else {
              FUN_00bf2c20(param_1,&local_288);
              FUN_00bf1640(&local_280,local_288);
              local_168 = local_280;
              local_16c = 0;
              if (local_280 != 0) {
                local_16c = *(int *)(local_280 + -4);
              }
              local_16d = local_16c == 0;
            }
            if (local_16d == false) {
              if (local_24 == 0) {
                local_174 = 0;
                if (local_30 != (undefined8 *)0x0) {
                  local_174 = *(int *)((longlong)local_30 + -4);
                }
                FUN_00bfa9b0(param_1,local_174 + 1);
              }
              else {
                FUN_00bfa9b0(param_1,*(int *)((longlong)param_1 + 0x4c4) + 1);
              }
            }
            else {
              iVar5 = FUN_00bcc200(local_30,(int)param_1[0xc3]);
              FUN_00bfa9b0(param_1,iVar5 + 1);
            }
            FUN_00c0f2c0(param_1,*(int *)((longlong)param_1 + 0x4cc) + -1,local_30);
            if (local_58 < 1) {
              local_1a8 = FUN_00bfaa10(param_1);
              local_2a8 = 0;
              local_2a0 = 0;
              FUN_00bd0e70(param_1[0xaa],0,&local_64,&local_1a8);
            }
            else {
              FUN_00c08780(param_1);
              local_64._0_4_ = (int)local_64 - local_58;
              uVar7 = FUN_00bfaa10(param_1);
              local_6c._0_4_ = (int)uVar7;
              local_6c = CONCAT44((int)((ulonglong)uVar7 >> 0x20),(int)local_6c + -1);
              local_2a8 = 0;
              local_2a0 = 0;
              FUN_00bd0e70(param_1[0xaa],0x17,&local_6c,&local_64);
              local_64 = CONCAT44(local_64._4_4_,(int)local_64 + local_58);
              local_1a8 = FUN_00bfaa10(param_1);
              local_2a8 = 0;
              local_2a0 = 0;
              FUN_00bd0e70(param_1[0xaa],0,&local_64,&local_1a8);
              FUN_00c087b0(param_1);
            }
          }
          if (*(int *)((longlong)param_1 + 0x50c) + (int)param_1[0x9a] <=
              *(int *)((longlong)param_1 + 0x4c4)) {
            local_178 = (int)param_1[0x9a] + -1;
            local_17c = local_178;
            if (0x19 < local_178) {
              local_17c = 0x19;
            }
            FUN_00bfb1b0(param_1,*(int *)((longlong)param_1 + 0x50c) + local_17c);
          }
          if (local_19 != '\0') {
            *(uint *)((longlong)param_1 + 0x63a) = *(uint *)((longlong)param_1 + 0x63a) & 0xfffbffff
            ;
          }
        }
        else {
          FUN_00c08780(param_1);
          FUN_00bf2ed0(param_1,&local_40);
          local_98 = *(undefined8 *)((longlong)param_1 + 0x4b4);
          local_a0 = *(undefined8 *)((longlong)param_1 + 0x4bc);
          local_64 = FUN_00bf2b30(param_1);
          if (*(char *)((longlong)param_1 + 0x5f5) == '\x01') {
            local_64._4_4_ = (undefined4)((ulonglong)local_64 >> 0x20);
            local_64 = CONCAT44(local_64._4_4_,1);
          }
          local_2a8 = local_40;
          local_2a0 = *(undefined1 *)((longlong)param_1 + 0x5f5);
          FUN_00bd0e70(param_1[0xaa],4,&local_98,&local_a0);
          FUN_00416780(&local_270,param_3);
          FUN_00bfb540(param_1,local_270);
          if (*(char *)((longlong)param_1 + 0x5f5) != '\x02') {
            local_1a8 = FUN_00bf2b90(param_1);
            local_2a8 = 0;
            local_2a0 = 0;
            FUN_00bd0e70(param_1[0xaa],0,&local_64,&local_1a8);
          }
          FUN_00c087b0(param_1);
        }
        (**(code **)(*param_1 + 0x2f8))(param_1,1);
      }
    }
    else if (uVar6 == 0x259) {
      cVar2 = (**(code **)(*param_1 + 0x278))(param_1);
      if (cVar2 == '\0') {
        FUN_00c00ff0(param_1);
      }
    }
    else if ((uVar6 == 0x25a) && (cVar2 = (**(code **)(*param_1 + 0x278))(param_1), cVar2 == '\0'))
    {
      FUN_00bffa80(param_1);
    }
  }
  else if (uVar6 < 0x2c2) {
    if (uVar6 == 0x2c1) {
      FUN_00c00a30(param_1);
    }
    else if (uVar6 < 0x266) {
      if (uVar6 == 0x265) {
        cVar2 = (**(code **)(*param_1 + 0x278))(param_1);
        if (cVar2 == '\0') {
          FUN_00c0bc20(param_1);
        }
      }
      else if (uVar6 == 0x25c) {
        cVar2 = (**(code **)(*param_1 + 0x278))(param_1);
        if (cVar2 == '\0') {
          FUN_00bf9d90(param_1);
        }
      }
      else if (uVar6 == 0x262) {
        cVar2 = (**(code **)(*param_1 + 0x278))(param_1);
        if (cVar2 == '\0') {
          FUN_00c0c7d0(param_1);
        }
      }
      else if (uVar6 == 0x263) {
        cVar2 = (**(code **)(*param_1 + 0x278))(param_1);
        if (cVar2 == '\0') {
          FUN_00c0ce10(param_1);
        }
      }
      else if ((uVar6 == 0x264) && (cVar2 = (**(code **)(*param_1 + 0x278))(param_1), cVar2 == '\0')
              ) {
        FUN_00c0b190(param_1);
      }
    }
    else if ((uVar6 - 0x26c < 4) || (uVar6 - 0x271 < 4)) {
      cVar2 = (**(code **)(*param_1 + 0x278))(param_1);
      if (cVar2 == '\0') {
        FUN_00c0ab90(param_1,param_2);
      }
    }
    else if (uVar6 == 0x2bd) {
      FUN_00c008d0(param_1);
    }
    else if (uVar6 == 0x2be) {
      FUN_00c00eb0(param_1);
    }
  }
  else if (uVar6 < 0x2d2) {
    if (uVar6 == 0x2d1) {
      FUN_00c00c80(param_1,1);
    }
    else if (uVar6 == 0x2c2) {
      FUN_00c00d70(param_1);
    }
    else if (uVar6 == 0x2c7) {
      FUN_00c00940(param_1,1);
    }
    else if (uVar6 == 0x2c8) {
      FUN_00c00940(param_1,2);
    }
    else if (uVar6 == 0x2c9) {
      FUN_00c00940(param_1,3);
    }
  }
  else if (uVar6 == 0x2d2) {
    FUN_00c00c80(param_1,2);
  }
  else if (uVar6 == 0x2d3) {
    FUN_00c00c80(param_1,3);
  }
  else if (uVar6 == 0x2db) {
    FUN_00c00a90(param_1,*(undefined4 *)PTR_DAT_02003d30);
  }
  else if (uVar6 == 0x2dc) {
    FUN_00c00dc0(param_1,*(undefined4 *)PTR_DAT_02003d30);
  }
  FUN_00bf28a0(param_1);
LAB_00c07dc3:
  FUN_00414560(&local_298,0xc);
  FUN_00414560(&local_230,0x11);
  FUN_00414480(&local_b0);
  FUN_00414560(&local_50,5);
  return;
}


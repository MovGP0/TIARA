/* Ghidra address: 01cf2fd0 */
/* Ghidra symbol: FUN_01cf2fd0 */


void FUN_01cf2fd0(longlong *param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined7 uVar4;
  longlong lVar3;
  uint uVar5;
  int iVar6;
  bool bVar7;
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  undefined1 auStack_248 [36];
  uint local_224;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  wchar_t *local_1e0;
  undefined1 local_1d8;
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
  undefined1 *local_180;
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
  ushort *local_110;
  undefined8 local_108;
  undefined8 local_100;
  ushort *local_f8;
  ushort *local_f0;
  ushort *local_e8;
  ushort *local_e0;
  ushort *local_d8;
  ushort *local_d0;
  ushort *local_c8;
  undefined8 local_c0;
  ushort *local_b8;
  longlong local_b0;
  longlong local_a8;
  ushort *local_a0;
  ushort *local_98;
  ushort *local_90;
  ushort *local_80;
  longlong local_78;
  ushort *local_70;
  ushort *local_68;
  undefined8 local_60;
  undefined4 local_58;
  short local_54;
  short local_52;
  int local_50;
  undefined4 local_4c;
  int local_48;
  byte local_42;
  byte local_41;
  ushort *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_180 = auStack_248;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_1e8 = 0;
  local_1f0 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_60 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  (**(code **)(*param_1 + 0x2d0))(param_1,param_3,&local_40);
  if (local_res20 < 0xc) {
    if (local_res20 == 0xb) {
      local_c8 = local_40;
      FUN_01d311c0(local_res10,local_40 + 0x20,1);
      FUN_01d311c0(local_res10,local_c8,1);
      FUN_01d320f0(local_res10,*(undefined8 *)(local_c8 + 4));
      if ((byte)local_c8[0x20] < 8) {
        bVar7 = ((int)CONCAT71((int7)((ulonglong)local_c8 >> 8),1) << ((byte)local_c8[0x20] & 0x1f)
                & 3U) != 0;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        FUN_01d311c0(local_res10,local_c8 + 8,2);
        FUN_01d311c0(local_res10,*(undefined8 *)(local_c8 + 0xc),(ulonglong)local_c8[8] << 3);
      }
      else {
        local_160 = *(undefined8 *)(local_c8 + 0x10);
        local_54 = FUN_00414ce0(local_160);
        local_54 = local_54 + 1;
        FUN_01d311c0(local_res10,&local_54,2);
        FUN_01d311c0(local_res10,*(undefined8 *)(local_c8 + 0x10),local_54);
        if ((char)local_c8[0x20] == '\x03') {
          FUN_01d311c0(local_res10,local_c8 + 0x24,2);
          FUN_01d311c0(local_res10,*(undefined8 *)(local_c8 + 0x28),(ulonglong)local_c8[0x24] << 3);
        }
      }
    }
    else if (local_res20 < 7) {
      if (local_res20 == 6) {
        local_90 = local_40;
        FUN_01d311c0(local_res10,local_40,8);
        if (*(byte *)(local_res10 + 0x78) < 8) {
          bVar7 = ((int)CONCAT71((int7)((ulonglong)local_res10 >> 8),1) <<
                   (*(byte *)(local_res10 + 0x78) & 0x1f) & 0x39U) != 0;
        }
        else {
          bVar7 = false;
        }
        if (bVar7) {
          local_150 = *(undefined8 *)(local_90 + 4);
          local_54 = FUN_00414ce0(local_150);
          local_54 = local_54 + 1;
          FUN_01d311c0(local_res10,&local_54,2);
          FUN_00414480(&local_30);
          FUN_004167a0(&local_200,*(undefined8 *)(local_90 + 4));
          local_158 = local_200;
          FUN_005b84f0(&local_30,local_200,&DAT_01cf499c,&DAT_01cf49ac);
          FUN_00415dd0(&local_60,local_30,0);
          FUN_00414480(&local_30);
          uVar2 = FUN_00414df0(&local_60);
          FUN_01d311c0(local_res10,uVar2,local_54);
        }
        FUN_01d311c0(local_res10,local_90 + 8,4);
        FUN_01d311c0(local_res10,local_90 + 0xc,1);
        if ((char)local_90[0xc] == '\x02') {
          FUN_01d311c0(local_res10,*(undefined8 *)(local_90 + 0x10),0x13);
        }
      }
      else if (local_res20 < 4) {
        if (local_res20 == 3) {
          local_68 = local_40;
          FUN_01d311c0(local_res10,local_40,8);
          if (*(byte *)(local_res10 + 0x78) < 8) {
            bVar7 = ((int)CONCAT71((int7)((ulonglong)local_res10 >> 8),1) <<
                     (*(byte *)(local_res10 + 0x78) & 0x1f) & 0x39U) != 0;
          }
          else {
            bVar7 = false;
          }
          if (bVar7) {
            local_120 = *(undefined8 *)(local_68 + 4);
            local_54 = FUN_00414ce0(local_120);
            local_54 = local_54 + 1;
            FUN_01d311c0(local_res10,&local_54,2);
            FUN_00414480(&local_20);
            FUN_004167a0(&local_198,*(undefined8 *)(local_68 + 4));
            local_128 = local_198;
            FUN_005b84f0(&local_20,local_198,&DAT_01cf499c,&DAT_01cf49ac);
            FUN_00415dd0(&local_60,local_20,0);
            FUN_00414480(&local_20);
            uVar2 = FUN_00414df0(&local_60);
            FUN_01d311c0(local_res10,uVar2,local_54);
          }
        }
        else if (local_res20 == 1) {
          FUN_004169a0(&local_188,local_40);
          FUN_01d313e0(local_res10,local_188);
        }
        else if (local_res20 == 2) {
          FUN_01d311c0(local_res10,local_40,2);
        }
      }
      else if (local_res20 == 4) {
        local_70 = local_40;
        FUN_004169a0(&local_1a0,local_40);
        FUN_01d313e0(local_res10,local_1a0);
        FUN_004169a0(&local_1a8,(char *)((longlong)local_70 + 0x15));
        FUN_01d313e0(local_res10,local_1a8);
        FUN_01d311c0(local_res10,(char *)((longlong)local_70 + 0x2f),1);
        FUN_01d311c0(local_res10,local_70 + 0x17,1);
        if ((char)local_70[0x17] == '\x01') {
          local_78 = *(longlong *)(local_70 + 0x13);
          FUN_01d311c0(local_res10,local_78 + 0x23,2);
          FUN_01d311c0(local_res10,*(undefined8 *)(local_78 + 9),*(undefined2 *)(local_78 + 0x23));
        }
      }
      else if (local_res20 == 5) {
        local_80 = local_40;
        local_42 = (byte)*local_40;
        FUN_01d311c0(local_res10,&local_42,1);
        if (local_42 == 8) {
          FUN_01d320f0(local_res10,*(undefined8 *)((longlong)local_80 + 9));
          FUN_01d311c0(local_res10,(char *)((longlong)local_80 + 0x11),0x10);
        }
        else if (local_42 == 9) {
          FUN_01d311c0(local_res10,(char *)((longlong)local_80 + 5),4);
          FUN_01d320f0(local_res10,*(undefined8 *)((longlong)local_80 + 0x11));
        }
        else {
          uVar4 = (undefined7)((ulonglong)local_res10 >> 8);
          if (local_42 == 10) {
            if (*(byte *)(local_res10 + 0x78) < 8) {
              bVar7 = ((int)CONCAT71(uVar4,1) << (*(byte *)(local_res10 + 0x78) & 0x1f) & 0x3dU) !=
                      0;
            }
            else {
              bVar7 = false;
            }
            if (bVar7) {
              local_41 = *(byte *)((longlong)local_80 + 1);
              if (*(longlong *)(local_80 + 7) != 0) {
                local_41 = local_41 | 0x10;
              }
              FUN_01d311c0(local_res10,&local_41,1);
              if (*(byte *)(local_res10 + 0x78) < 8) {
                bVar7 = ((int)CONCAT71((int7)((ulonglong)local_res10 >> 8),1) <<
                         (*(byte *)(local_res10 + 0x78) & 0x1f) & 0x39U) != 0;
              }
              else {
                bVar7 = false;
              }
              if (bVar7) {
                FUN_004167d0(&local_1b0,*(undefined8 *)(local_80 + 1));
                FUN_01d31630(local_res10,local_1b0);
              }
              else {
                FUN_004167d0(&local_1c0,*(undefined8 *)(local_80 + 1));
                FUN_00441920(&local_1b8,local_1c0);
                FUN_01d313e0(local_res10,local_1b8);
              }
              FUN_01d311c0(local_res10,local_80 + 0xb,8);
              if (*(longlong *)(local_80 + 7) != 0) {
                local_58 = FUN_01d326b0(*(undefined8 *)(local_80 + 7));
                FUN_01d311c0(local_res10,&local_58,4);
                FUN_01d326d0(local_res10,*(undefined8 *)(local_80 + 7),local_58);
                FUN_004b6dc0(*(undefined8 *)(local_80 + 7),0);
              }
            }
            else {
              FUN_01d30730(&local_1d0,0x1006);
              local_1e0 = L"WAV excitation";
              local_1d8 = 0x11;
              FUN_00442f70(&local_1c8,local_1d0,&local_1e0,0);
              local_130 = local_1c8;
              FUN_0072d730(local_1c8,0xffffffff,0xffffffff);
              FUN_01d31a50(local_res10,0x1006);
            }
          }
          else if (local_42 == 0xb) {
            if (*(byte *)(local_res10 + 0x78) < 8) {
              bVar7 = ((int)CONCAT71(uVar4,1) << (*(byte *)(local_res10 + 0x78) & 0x1f) & 0x31U) !=
                      0;
            }
            else {
              bVar7 = false;
            }
            if (bVar7) {
              FUN_01d311c0(local_res10,(char *)((longlong)local_80 + 1),1);
              FUN_01d311c0(local_res10,local_80 + 1,1);
              FUN_01d311c0(local_res10,(char *)((longlong)local_80 + 3),8);
              FUN_01d311c0(local_res10,(char *)((longlong)local_80 + 0xb),8);
            }
            else {
              FUN_01d30730(&local_1f0,0x1006);
              local_1e0 = L"RND excitation";
              local_1d8 = 0x11;
              FUN_00442f70(&local_1e8,local_1f0,&local_1e0,0);
              local_138 = local_1e8;
              FUN_0072d730(local_1e8,0xffffffff,0xffffffff);
              FUN_01d31a50(local_res10,0x1006);
            }
          }
          else {
            FUN_01d311c0(local_res10,*(undefined8 *)((longlong)local_80 + 1),
                         (ulonglong)(byte)PTR_DAT_02001408[(ulonglong)local_42 - 1] << 3);
            if (*(byte *)(local_res10 + 0x78) < 8) {
              bVar7 = ((int)CONCAT71((int7)((ulonglong)local_res10 >> 8),1) <<
                       (*(byte *)(local_res10 + 0x78) & 0x1f) & 0x39U) != 0;
            }
            else {
              bVar7 = false;
            }
            if (bVar7) {
              local_224 = (byte)PTR_DAT_02001408[(ulonglong)local_42 - 1] - 1;
              local_50 = 0;
              uVar5 = (uint)(byte)PTR_DAT_02001408[(ulonglong)local_42 - 1];
              if (-1 < (int)local_224) {
                do {
                  local_224 = uVar5;
                  local_140 = *(undefined8 *)
                               (*(longlong *)((longlong)local_80 + 9) + (longlong)local_50 * 8);
                  local_54 = FUN_00414ce0(local_140);
                  local_54 = local_54 + 1;
                  FUN_01d311c0(local_res10,&local_54,2);
                  FUN_00414480(&local_28);
                  FUN_004167a0(&local_1f8,
                               *(undefined8 *)
                                (*(longlong *)((longlong)local_80 + 9) + (longlong)local_50 * 8));
                  local_148 = local_1f8;
                  FUN_005b84f0(&local_28,local_1f8,&DAT_01cf499c,&DAT_01cf49ac);
                  FUN_00415dd0(&local_60,local_28,0);
                  FUN_00414480(&local_28);
                  uVar2 = FUN_00414df0(&local_60);
                  FUN_01d311c0(local_res10,uVar2,local_54);
                  local_50 = local_50 + 1;
                  local_224 = local_224 - 1;
                  uVar5 = local_224;
                } while (local_224 != 0);
              }
            }
          }
        }
      }
    }
    else if (local_res20 == 7) {
      local_98 = local_40;
      local_a0 = local_40;
      FUN_004169a0(&local_208,local_40);
      FUN_01d313e0(local_res10,local_208);
      FUN_004169a0(&local_210,(char *)((longlong)local_a0 + 0x15));
      FUN_01d313e0(local_res10,local_210);
      FUN_01d311c0(local_res10,(char *)((longlong)local_a0 + 0x2f),1);
      if (*(char *)((longlong)local_a0 + 0x2f) != '\0') {
        FUN_01d320f0(local_res10,*(undefined8 *)(local_a0 + 0x18));
        FUN_004169a0(&local_218,local_a0 + 0x1c);
        FUN_01d313e0(local_res10,local_218);
      }
      FUN_01d311c0(local_res10,local_a0 + 0x17,1);
      if ((char)local_a0[0x17] == '\x01') {
        local_a8 = *(longlong *)(local_a0 + 0x13);
        FUN_01d311c0(local_res10,local_a8 + 0x23,2);
        FUN_01d311c0(local_res10,*(undefined8 *)(local_a8 + 9),*(undefined2 *)(local_a8 + 0x23));
      }
      local_42 = *(longlong *)(local_98 + 0xa0) != 0;
      FUN_01d311c0(local_res10,&local_42,1);
      if ((*(longlong *)(local_98 + 0xa0) != 0) &&
         (FUN_01d311c0(local_res10,local_98 + 0xa4,1), (char)local_98[0xa4] == '\x01')) {
        local_b0 = *(longlong *)(local_98 + 0xa0);
        FUN_01d311c0(local_res10,*(undefined8 *)(local_b0 + 0x10),*(undefined2 *)(local_b0 + 0x1a));
      }
    }
    else if (local_res20 == 8) {
      FUN_01d311c0(local_res10,local_40,1);
    }
    else if (local_res20 == 9) {
      FUN_004169a0(&local_190,local_40);
      FUN_01d313e0(local_res10,local_190);
    }
    else if (local_res20 == 10) {
      local_b8 = local_40;
      FUN_01d311c0(local_res10,local_40,1);
      if ((*(char *)(local_res10 + 0x78) == '\x01') && (1 < *(int *)(local_b8 + 0xc))) {
        local_4c = 1;
      }
      else {
        local_4c = *(undefined4 *)(local_b8 + 0xc);
      }
      FUN_01d311c0(local_res10,&local_4c,4);
      if ((char)*local_b8 == '\x01') {
        local_48 = *(int *)(*(longlong *)(local_b8 + 4) + 0x10);
        FUN_01d311c0(local_res10,&local_48,4);
        local_c0 = *(undefined8 *)(local_b8 + 4);
        local_50 = 0;
        iVar6 = local_48;
        if (-1 < local_48 + -1) {
          do {
            uVar1 = (undefined2)local_50;
            uVar2 = FUN_01d3aab0(local_c0,(undefined2)local_50);
            FUN_01d311c0(local_res10,uVar2,8);
            lVar3 = FUN_01d3aab0(local_c0,uVar1);
            local_41 = *(byte *)(lVar3 + 8);
            FUN_01d311c0(local_res10,&local_41,1);
            local_50 = local_50 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      else if ((char)*local_b8 == '\x02') {
        FUN_00ef4070(&local_res10,*(undefined8 *)(local_b8 + 8));
      }
    }
  }
  else if (local_res20 < 0x11) {
    if (local_res20 == 0x10) {
      FUN_01d311c0(local_res10,local_40,8);
    }
    else if (local_res20 == 0xc) {
      local_d0 = local_40;
      FUN_01d311c0(local_res10,local_40 + 1,2);
      FUN_01d311c0(local_res10,local_d0,2);
      uVar5 = (uint)*local_d0;
      local_50 = 0;
      if (-1 < (int)(uVar5 - 1)) {
        do {
          FUN_01d311c0(local_res10,*(longlong *)(local_d0 + 4) + (longlong)local_50 * 2,2);
          local_50 = local_50 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    else if (local_res20 == 0xd) {
      local_f0 = local_40;
      FUN_01d311c0(local_res10,local_40,8);
      FUN_01d311c0(local_res10,local_f0 + 4,1);
      if (*(byte *)(local_res10 + 0x78) < 8) {
        bVar7 = ((int)CONCAT71((int7)((ulonglong)local_res10 >> 8),1) <<
                 (*(byte *)(local_res10 + 0x78) & 0x1f) & 0x39U) != 0;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        local_168 = *(undefined8 *)(local_f0 + 8);
        local_54 = FUN_00414ce0(local_168);
        local_54 = local_54 + 1;
        FUN_01d311c0(local_res10,&local_54,2);
        FUN_00414480(&local_38);
        FUN_004167a0(&local_220,*(undefined8 *)(local_f0 + 8));
        local_170 = local_220;
        FUN_005b84f0(&local_38,local_220,&DAT_01cf499c,&DAT_01cf49ac);
        FUN_00415dd0(&local_60,local_38,0);
        FUN_00414480(&local_38);
        uVar2 = FUN_00414df0(&local_60);
        FUN_01d311c0(local_res10,uVar2,local_54);
      }
    }
    else if (local_res20 == 0xe) {
      local_f8 = local_40;
      FUN_01d311c0(local_res10,local_40,1);
      local_42 = *(byte *)(*(longlong *)(local_f8 + 4) + 0x10);
      FUN_01d311c0(local_res10,&local_42,1);
      local_100 = *(undefined8 *)(local_f8 + 4);
      uVar5 = (uint)local_42;
      local_50 = 0;
      if (-1 < (int)(uVar5 - 1)) {
        do {
          uVar2 = FUN_01d3c000(local_100,(undefined2)local_50);
          FUN_01d311c0(local_res10,uVar2,4);
          local_50 = local_50 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      local_42 = *(byte *)(*(longlong *)(local_f8 + 8) + 0x10);
      FUN_01d311c0(local_res10,&local_42,1);
      local_108 = *(undefined8 *)(local_f8 + 8);
      uVar5 = (uint)local_42;
      local_50 = 0;
      if (-1 < (int)(uVar5 - 1)) {
        do {
          uVar2 = FUN_01d3c000(local_108,(undefined2)local_50);
          FUN_01d311c0(local_res10,uVar2,4);
          local_50 = local_50 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    else if (local_res20 == 0xf) {
      local_110 = local_40;
      FUN_01d311c0(local_res10,local_40,8);
      FUN_01d311c0(local_res10,local_110 + 4,8);
      local_52 = *(short *)(*(longlong *)(local_110 + 8) + 0x10);
      FUN_01d311c0(local_res10,&local_52,2);
      local_118 = *(undefined8 *)(local_110 + 8);
      iVar6 = (int)local_52;
      local_50 = 0;
      if (-1 < iVar6 + -1) {
        do {
          uVar1 = (undefined2)local_50;
          uVar2 = FUN_01d3c210(local_118,(undefined2)local_50);
          FUN_01d311c0(local_res10,uVar2,8);
          lVar3 = FUN_01d3c210(local_118,uVar1);
          FUN_01d311c0(local_res10,lVar3 + 8,8);
          lVar3 = FUN_01d3c210(local_118,uVar1);
          FUN_01d311c0(local_res10,lVar3 + 0x10,8);
          local_50 = local_50 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  else if (local_res20 == 0x11) {
    FUN_01d320f0(local_res10,*(undefined8 *)local_40);
  }
  else if (local_res20 == 0x12) {
    local_d8 = local_40;
    FUN_01d311c0(local_res10,local_40 + 8,4);
    FUN_01d311c0(local_res10,local_d8 + 0xc,0x10);
    FUN_01d311c0(local_res10,local_d8 + 0x14,0x18);
    FUN_01d311c0(local_res10,local_d8 + 1,2);
    FUN_01d311c0(local_res10,local_d8,2);
    uVar5 = (uint)*local_d8;
    local_50 = 0;
    if (-1 < (int)(uVar5 - 1)) {
      do {
        FUN_01d311c0(local_res10,*(longlong *)(local_d8 + 4) + (longlong)local_50 * 2,2);
        local_50 = local_50 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    FUN_01d311c0(local_res10,local_d8 + 0x20,1);
  }
  else if (local_res20 == 0x13) {
    local_e8 = local_40;
    FUN_01d311c0(local_res10,local_40,4);
    FUN_01d311c0(local_res10,local_e8 + 2,4);
    FUN_01d311c0(local_res10,local_e8 + 4,4);
  }
  else if (local_res20 == 0x14) {
    local_e0 = local_40;
    FUN_01d311c0(local_res10,local_40 + 8,4);
    FUN_01d311c0(local_res10,local_e0 + 0xc,0x20);
    FUN_01d311c0(local_res10,local_e0 + 0x1c,0x18);
    FUN_01d311c0(local_res10,local_e0 + 2,4);
    FUN_01d311c0(local_res10,local_e0,4);
    iVar6 = *(int *)local_e0;
    local_50 = 0;
    if (-1 < iVar6 + -1) {
      do {
        FUN_01d311c0(local_res10,*(longlong *)(local_e0 + 4) + (longlong)local_50 * 4,4);
        local_50 = local_50 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    FUN_01d311c0(local_res10,local_e0 + 0x28,1);
  }
  FUN_00414560(&local_220,8);
  FUN_00414560(&local_1d0,10);
  FUN_004144d0(&local_60);
  FUN_00414560(&local_38,4);
  return;
}


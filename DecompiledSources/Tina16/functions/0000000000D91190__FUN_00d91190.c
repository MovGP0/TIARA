/* Ghidra address: 00d91190 */
/* Ghidra symbol: FUN_00d91190 */


undefined1
FUN_00d91190(longlong param_1,undefined8 param_2,ulonglong *param_3,wchar_t *param_4,
            undefined8 param_5)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  wchar_t *local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined1 local_140 [32];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110 [40];
  undefined1 local_e8 [24];
  undefined1 *local_d0;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined1 local_a1;
  uint local_a0;
  int local_9c;
  int local_98;
  int local_94;
  uint local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  byte local_70;
  ushort local_6f;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined1 local_58 [19];
  undefined1 local_45;
  undefined8 local_44;
  int local_3c;
  longlong local_38;
  longlong *local_30;
  
  local_d0 = auStack_188;
  local_44 = *param_3;
  local_3c = (int)param_3[1];
  FUN_00417580(&local_80,&DAT_00d627e8);
  local_45 = 0;
  cVar3 = FUN_00d98b50(param_1);
  if (cVar3 == '\0') goto LAB_00d94137;
  lVar1 = *(longlong *)(param_1 + 0x18 + (local_44 & 0xff) * 8);
  if (lVar1 != 0) {
    local_168 = (wchar_t *)CONCAT44(local_168._4_4_,local_3c);
    local_158 = param_5;
    local_150 = 0;
    local_160 = param_4;
    local_45 = (**(code **)(lVar1 + 8))(lVar1,param_1,param_2,local_44._4_4_);
    goto LAB_00d94137;
  }
  local_38 = FUN_0060f770(&DAT_005faf70,1,param_2,6);
  local_b0 = *(longlong **)(local_38 + 8);
  local_b8 = *(longlong **)(param_1 + 0x180);
  uVar8 = local_44 & 0xff;
  if (uVar8 < 0x11) {
    if (uVar8 == 0x10) {
      local_45 = 1;
      if (local_44._4_4_ == 0) {
        FUN_00d83570(&local_120,param_4);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x360))(local_b8,0,local_b0,&local_120);
      }
      else if (local_44._4_4_ == 0x11) {
        FUN_00d835b0(local_e8,param_4,0xd,0);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x380))(local_b8,1,local_b0,local_e8);
      }
      else if (local_44._4_4_ == 0x12) {
        FUN_00d835b0(local_e8,param_4,0xe,0);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x380))(local_b8,1,local_b0,local_e8);
      }
      else if (local_44._4_4_ == 0x13) {
        FUN_00d83590(&local_120,param_4);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x378))(local_b8,1,local_b0,&local_120);
      }
      else if (local_44._4_4_ == 0x15) {
        FUN_00d835b0(local_e8,param_4,8,(undefined1)local_3c);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x380))(local_b8,1,local_b0,local_e8);
      }
      else if (local_44._4_4_ != 0x14) {
        local_45 = 0;
      }
    }
    else if (uVar8 < 8) {
      if (uVar8 == 7) {
        local_45 = 1;
        if (local_44._4_4_ == 0) {
          FUN_00d83480(&local_120,param_4);
          local_168 = L"default";
          (**(code **)(*local_b8 + 0x230))(local_b8,0,local_b0,&local_120);
        }
        if (local_44._4_4_ == 0xd) {
          FUN_00d834a0(local_e8,param_4,1,(undefined1)local_3c);
          local_168 = L"default";
          (**(code **)(*local_b8 + 0x238))(local_b8,0,local_b0,local_e8);
        }
        else if (local_44._4_4_ == 0xe) {
          FUN_00d834a0(local_e8,param_4,0,(undefined1)local_3c);
          local_168 = L"default";
          (**(code **)(*local_b8 + 0x238))(local_b8,0,local_b0,local_e8);
        }
        else if (local_44._4_4_ == 0xf) {
          FUN_00d834a0(local_e8,param_4,2,(undefined1)local_3c);
          local_168 = L"default";
          (**(code **)(*local_b8 + 0x238))(local_b8,0,local_b0,local_e8);
        }
        else {
          local_45 = 0;
        }
      }
      else if (uVar8 == 0) {
        local_45 = 1;
        if (local_44._4_4_ == 1) {
          FUN_00d832d0(local_e8,param_4,(undefined1)local_3c);
          local_168 = L"default";
          (**(code **)(*local_b8 + 0x150))(local_b8,0,local_b0,local_e8);
        }
        else if (local_44._4_4_ == 3) {
          FUN_00d832f0(local_e8,param_4,(undefined1)local_3c);
          local_168 = L"default";
          (**(code **)(*local_b8 + 0x178))(local_b8,0,local_b0,local_e8);
        }
        else if (local_44._4_4_ == 2) {
          FUN_00d832f0(local_e8,param_4,(undefined1)local_3c);
          local_168 = L"default";
          (**(code **)(*local_b8 + 0x178))(local_b8,1,local_b0,local_e8);
        }
        else if (local_44._4_4_ == 4) {
          FUN_00d833f0(local_110,param_4,&DAT_01ecf394,(undefined1)local_3c);
          local_168 = L"default";
          (**(code **)(*local_b8 + 0x2c8))(local_b8,0,local_b0,local_110);
        }
        else if (local_44._4_4_ == 0xda) {
          uVar9 = FUN_005ffa40(local_b0);
          local_168 = L"Button";
          local_160 = L"CommandLinkGlyph";
          local_158 = CONCAT71(local_158._1_7_,(undefined1)local_3c);
          FUN_00d8eda0(param_1,uVar9,param_4,param_5);
        }
        else {
          local_45 = 0;
        }
      }
      else if (uVar8 == 2) {
        local_45 = 1;
        if (local_44._4_4_ == 5) {
          local_30 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
          (**(code **)(*local_30 + 0xe0))
                    (local_30,*(int *)(param_4 + 4) - *(int *)param_4,
                     *(int *)(param_4 + 6) - *(int *)(param_4 + 2));
          local_c0 = (longlong *)FUN_00609e10(local_30);
          uVar4 = FUN_00778bd0(param_1,0xff000005,0);
          FUN_005fdab0(local_c0[0x10],uVar4);
          uVar4 = (**(code **)(*local_30 + 0x60))(local_30);
          local_168._0_4_ = (**(code **)(*local_30 + 0x48))(local_30);
          FUN_004238d0(&local_120,0,0,uVar4);
          (**(code **)(*local_c0 + 0xa8))(local_c0,&local_120);
          uVar9 = FUN_00609e10(local_30);
          uVar4 = (**(code **)(*local_30 + 0x60))(local_30);
          uVar5 = (**(code **)(*local_30 + 0x48))(local_30);
          local_168 = (wchar_t *)CONCAT44(local_168._4_4_,uVar5);
          FUN_004238d0(&local_120,0,0,uVar4);
          FUN_00d83330(local_e8,&local_120,(undefined1)local_3c,0);
          local_168 = L"default";
          (**(code **)(*local_b8 + 0x2a8))(local_b8,0,uVar9,local_e8);
          (**(code **)(*local_b0 + 0x88))(local_b0,*(int *)param_4,*(int *)(param_4 + 2),local_30);
          FUN_00410f20(local_30);
        }
        else if (local_44._4_4_ == 0xdb) {
          FUN_00d83310(local_e8,param_4,(undefined1)local_3c);
          local_168 = L"default";
          (**(code **)(*local_b8 + 0x2a0))(local_b8,0,local_b0,local_e8);
        }
        else {
          local_45 = 0;
        }
      }
      else if (uVar8 == 4) {
        local_45 = 1;
        if (local_44._4_4_ == 0xb) {
          FUN_00d83310(local_e8,param_4,(undefined1)local_3c);
          local_168 = L"default";
          (**(code **)(*local_b8 + 0x2a0))(local_b8,0,local_b0,local_e8);
        }
        else if (local_44._4_4_ == 0xc) {
          FUN_00d83310(local_e8,param_4,0);
          local_168 = L"default";
          (**(code **)(*local_b8 + 0x2a0))(local_b8,0,local_b0,local_e8);
        }
        else if (local_44._4_4_ == 0xdb) {
          FUN_00d83310(local_e8,param_4,(undefined1)local_3c);
          local_168 = L"default";
          (**(code **)(*local_b8 + 0x2a0))(local_b8,0,local_b0,local_e8);
        }
        else {
          local_45 = 0;
        }
      }
    }
    else if (uVar8 == 0xe) {
      FUN_00d83440(&local_120,param_4);
      local_168 = L"default";
      (**(code **)(*local_b8 + 0x408))(local_b8,0,local_b0,&local_120);
      local_45 = 1;
    }
    else if (uVar8 == 0xf) {
      local_45 = 1;
      if (local_44._4_4_ == 0x31) {
        FUN_00d83390(local_e8,param_4,1,0);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x1e8))(local_b8,0,local_b0,local_e8);
      }
      else if (local_44._4_4_ == 0x32) {
        FUN_00d83390(local_e8,param_4,0,0);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x1e8))(local_b8,0,local_b0,local_e8);
      }
      else if (local_44._4_4_ == 0x33) {
        FUN_00d83390(local_e8,param_4,3,0);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x1e8))(local_b8,0,local_b0,local_e8);
      }
      else if (local_44._4_4_ == 0x34) {
        FUN_00d83390(local_e8,param_4,2,0);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x1e8))(local_b8,0,local_b0,local_e8);
      }
      else {
        local_45 = 0;
      }
    }
  }
  else if (uVar8 < 0x16) {
    if (uVar8 == 0x15) {
      local_45 = 1;
      if (local_44._4_4_ < 0x2d) {
        if (local_44._4_4_ == 0x2c) {
          FUN_00d83460(local_e8,param_4,4,(undefined1)local_3c);
          local_168 = L"default";
          (**(code **)(*local_b8 + 0x410))(local_b8,0,local_b0,local_e8);
        }
        else if (local_44._4_4_ < 0x2a) {
          if (local_44._4_4_ == 0x29) {
            FUN_00d83460(local_e8,param_4,6,(undefined1)local_3c);
            local_168 = L"default";
            (**(code **)(*local_b8 + 0x410))(local_b8,0,local_b0,local_e8);
          }
          else if (local_44._4_4_ == 0x27) {
            FUN_00d83460(local_e8,param_4,0,(undefined1)local_3c);
            local_168 = L"default";
            (**(code **)(*local_b8 + 0x410))(local_b8,0,local_b0,local_e8);
          }
          else {
            if (local_44._4_4_ != 0x28) goto LAB_00d91e06;
            FUN_00d83460(local_e8,param_4,3,(undefined1)local_3c);
            local_168 = L"default";
            (**(code **)(*local_b8 + 0x410))(local_b8,0,local_b0,local_e8);
          }
        }
        else if (local_44._4_4_ == 0x2a) {
          FUN_00d83460(local_e8,param_4,9,(undefined1)local_3c);
          local_168 = L"default";
          (**(code **)(*local_b8 + 0x410))(local_b8,0,local_b0,local_e8);
        }
        else if (local_44._4_4_ == 0x2b) {
          FUN_00d83460(local_e8,param_4,1,(undefined1)local_3c);
          local_168 = L"default";
          (**(code **)(*local_b8 + 0x410))(local_b8,0,local_b0,local_e8);
        }
        else {
LAB_00d91e06:
          local_45 = 0;
        }
      }
      else if (local_44._4_4_ == 0x2d) {
        FUN_00d83460(local_e8,param_4,7,(undefined1)local_3c);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x410))(local_b8,0,local_b0,local_e8);
      }
      else if (local_44._4_4_ == 0x2e) {
        FUN_00d83460(local_e8,param_4,10,(undefined1)local_3c);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x410))(local_b8,0,local_b0,local_e8);
      }
      else if (local_44._4_4_ == 0x2f) {
        FUN_00d83440(&local_120,param_4);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x408))(local_b8,0,local_b0,&local_120);
      }
      else {
        if (local_44._4_4_ != 0x30) goto LAB_00d91e06;
        FUN_00d83440(&local_120,param_4);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x408))(local_b8,0,local_b0,&local_120);
      }
    }
    else if (uVar8 == 0x11) {
      local_45 = 1;
      if (local_44._4_4_ == 0x1d) {
        if (local_3c < 0xd2) {
          if (local_3c == 0xd1) {
            FUN_00d83350(local_e8,param_4,0,4);
            local_168 = L"default";
            (**(code **)(*local_b8 + 0x1c0))(local_b8,0,local_b0,local_e8);
          }
          else if (local_3c < 0xce) {
            if (local_3c == 0xcd) {
              FUN_00d83350(local_e8,param_4,0,1);
              local_168 = L"default";
              (**(code **)(*local_b8 + 0x1c0))(local_b8,0,local_b0,local_e8);
            }
            else if (local_3c == 0xc9) {
              FUN_00d83350(local_e8,param_4,0,0);
              local_168 = L"default";
              (**(code **)(*local_b8 + 0x1c0))(local_b8,0,local_b0,local_e8);
            }
            else if (local_3c == 0xca) {
              FUN_00d83350(local_e8,param_4,2,0);
              local_168 = L"default";
              (**(code **)(*local_b8 + 0x1c0))(local_b8,0,local_b0,local_e8);
            }
            else if (local_3c == 0xcb) {
              FUN_00d83350(local_e8,param_4,1,0);
              local_168 = L"default";
              (**(code **)(*local_b8 + 0x1c0))(local_b8,0,local_b0,local_e8);
            }
            else if (local_3c == 0xcc) {
              FUN_00d83350(local_e8,param_4,3,0);
              local_168 = L"default";
              (**(code **)(*local_b8 + 0x1c0))(local_b8,0,local_b0,local_e8);
            }
          }
          else if (local_3c == 0xce) {
            FUN_00d83350(local_e8,param_4,2,1);
            local_168 = L"default";
            (**(code **)(*local_b8 + 0x1c0))(local_b8,0,local_b0,local_e8);
          }
          else if (local_3c == 0xcf) {
            FUN_00d83350(local_e8,param_4,1,1);
            local_168 = L"default";
            (**(code **)(*local_b8 + 0x1c0))(local_b8,0,local_b0,local_e8);
          }
          else if (local_3c == 0xd0) {
            FUN_00d83350(local_e8,param_4,3,1);
            local_168 = L"default";
            (**(code **)(*local_b8 + 0x1c0))(local_b8,0,local_b0,local_e8);
          }
        }
        else if (local_3c < 0xd6) {
          if (local_3c == 0xd5) {
            FUN_00d83350(local_e8,param_4,0,5);
            local_168 = L"default";
            (**(code **)(*local_b8 + 0x1c0))(local_b8,0,local_b0,local_e8);
          }
          else if (local_3c == 0xd2) {
            FUN_00d83350(local_e8,param_4,2,4);
            local_168 = L"default";
            (**(code **)(*local_b8 + 0x1c0))(local_b8,0,local_b0,local_e8);
          }
          else if (local_3c == 0xd3) {
            FUN_00d83350(local_e8,param_4,1,4);
            local_168 = L"default";
            (**(code **)(*local_b8 + 0x1c0))(local_b8,0,local_b0,local_e8);
          }
          else if (local_3c == 0xd4) {
            FUN_00d83350(local_e8,param_4,3,4);
            local_168 = L"default";
            (**(code **)(*local_b8 + 0x1c0))(local_b8,0,local_b0,local_e8);
          }
        }
        else if (local_3c == 0xd6) {
          FUN_00d83350(local_e8,param_4,2,5);
          local_168 = L"default";
          (**(code **)(*local_b8 + 0x1c0))(local_b8,0,local_b0,local_e8);
        }
        else if (local_3c == 0xd7) {
          FUN_00d83350(local_e8,param_4,1,5);
          local_168 = L"default";
          (**(code **)(*local_b8 + 0x1c0))(local_b8,0,local_b0,local_e8);
        }
        else if (local_3c == 0xd8) {
          FUN_00d83350(local_e8,param_4,3,5);
          local_168 = L"default";
          (**(code **)(*local_b8 + 0x1c0))(local_b8,0,local_b0,local_e8);
        }
      }
      if (local_44._4_4_ == 0x1e) {
        FUN_00d83350(local_e8,param_4,(undefined1)local_3c,8);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x1c0))(local_b8,0,local_b0,local_e8);
      }
      else if (local_44._4_4_ == 0x1f) {
        FUN_00d83350(local_e8,param_4,(undefined1)local_3c,9);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x1c0))(local_b8,0,local_b0,local_e8);
      }
      else if (local_44._4_4_ == 0x20) {
        FUN_00d83370(local_e8,param_4,(undefined1)local_3c,1);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x1c8))(local_b8,0,local_b0,local_e8);
      }
      else if (local_44._4_4_ == 0x21) {
        FUN_00d83370(local_e8,param_4,(undefined1)local_3c,1);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x1c8))(local_b8,0,local_b0,local_e8);
      }
      else if (local_44._4_4_ == 0x22) {
        FUN_00d83370(local_e8,param_4,(undefined1)local_3c,0);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x1c8))(local_b8,0,local_b0,local_e8);
      }
      else if (local_44._4_4_ == 0x23) {
        FUN_00d83370(local_e8,param_4,(undefined1)local_3c,0);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x1c8))(local_b8,0,local_b0,local_e8);
      }
      else if (local_44._4_4_ == 0x26) {
        FUN_00d832b0(local_e8,param_4,1);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0xd8))(local_b8,0,local_b0,local_e8);
      }
    }
    else if (uVar8 == 0x12) {
      local_45 = 1;
      if (local_44._4_4_ == 0x19) {
        FUN_00d832d0(local_e8,param_4,(undefined1)local_3c);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x150))(local_b8,4,local_b0,local_e8);
      }
      else if (local_44._4_4_ == 0x1a) {
        FUN_00d832d0(local_e8,param_4,(undefined1)local_3c);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x150))(local_b8,5,local_b0,local_e8);
      }
      else if (local_44._4_4_ == 0x1c) {
        FUN_00d832d0(local_e8,param_4,(undefined1)local_3c);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x150))(local_b8,6,local_b0,local_e8);
      }
      else if (local_44._4_4_ == 0x1b) {
        FUN_00d832d0(local_e8,param_4,(undefined1)local_3c);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x150))(local_b8,7,local_b0,local_e8);
      }
      else {
        local_45 = 0;
      }
    }
    else if (uVar8 == 0x14) {
      local_45 = 1;
      if (local_44._4_4_ == 0) {
        FUN_00d834c0(&local_120,param_4);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x268))(local_b8,0,local_b0,&local_120);
      }
      if (local_44._4_4_ == 0x16) {
        FUN_00d834e0(local_e8,param_4,0);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x270))(local_b8,0,local_b0,local_e8);
      }
      if (local_44._4_4_ == 0x17) {
        FUN_00d834e0(local_e8,param_4,2);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x270))(local_b8,0,local_b0,local_e8);
      }
      if (local_44._4_4_ == 0x18) {
        FUN_00d834e0(local_e8,param_4,3);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x270))(local_b8,0,local_b0,local_e8);
      }
      else {
        local_45 = 0;
      }
    }
  }
  else if (uVar8 == 0x1c) {
    local_45 = 1;
    if (local_44._4_4_ == 0x35) {
      FUN_00d833b0(local_e8,param_4,1,0);
      local_168 = L"default";
      (**(code **)(*local_b8 + 0x208))(local_b8,0,local_b0,local_e8);
    }
    else if (local_44._4_4_ == 0x36) {
      FUN_00d833b0(local_e8,param_4,0,0);
      local_168 = L"default";
      (**(code **)(*local_b8 + 0x208))(local_b8,0,local_b0,local_e8);
    }
    else if (local_44._4_4_ == 0x37) {
      FUN_00d833d0(local_e8,param_4,3,(undefined1)local_3c);
      local_168 = L"default";
      (**(code **)(*local_b8 + 0x210))(local_b8,0,local_b0,local_e8);
    }
    else if (local_44._4_4_ == 0x3a) {
      FUN_00d833d0(local_e8,param_4,0,(undefined1)local_3c);
      local_168 = L"default";
      (**(code **)(*local_b8 + 0x210))(local_b8,0,local_b0,local_e8);
    }
    else if (local_44._4_4_ == 0x38) {
      FUN_00d833d0(local_e8,param_4,4,(undefined1)local_3c);
      local_168 = L"default";
      (**(code **)(*local_b8 + 0x210))(local_b8,0,local_b0,local_e8);
    }
    else if (local_44._4_4_ == 0x39) {
      FUN_00d833d0(local_e8,param_4,5,(undefined1)local_3c);
      local_168 = L"default";
      (**(code **)(*local_b8 + 0x210))(local_b8,0,local_b0,local_e8);
    }
    else if (local_44._4_4_ == 0x3b) {
      FUN_00d833d0(local_e8,param_4,2,(undefined1)local_3c);
      local_168 = L"default";
      (**(code **)(*local_b8 + 0x210))(local_b8,0,local_b0,local_e8);
    }
    else if (local_44._4_4_ == 0x3c) {
      FUN_00d833d0(local_e8,param_4,1,(undefined1)local_3c);
      local_168 = L"default";
      (**(code **)(*local_b8 + 0x210))(local_b8,0,local_b0,local_e8);
    }
    else if ((local_44._4_4_ != 0x3d) && (local_44._4_4_ != 0x3e)) {
      local_45 = 0;
    }
  }
  else if (uVar8 == 0x1f) {
    local_45 = 1;
    local_70 = 1;
    local_80 = *(undefined8 *)param_4;
    local_78 = *(undefined8 *)(param_4 + 4);
    local_6c = DAT_01ecf394;
    uStack_64 = DAT_01ecf39c;
    local_6f = 0;
    FUN_00414480(local_58);
    if (local_44._4_4_ != 0) {
      if (local_44._4_4_ == 0x5c) {
        FUN_00d83520(local_e8,param_4,7,(undefined1)local_3c);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x338))(local_b8,0,local_b0,local_e8);
      }
      else if (local_44._4_4_ == 0x62) {
        FUN_00d83520(local_e8,param_4,8,(undefined1)local_3c);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x338))(local_b8,0,local_b0,local_e8);
      }
      else if (local_44._4_4_ == 0x60) {
        FUN_00d83520(local_e8,param_4,9,(undefined1)local_3c);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0x338))(local_b8,0,local_b0,local_e8);
      }
      else if ((local_44._4_4_ == 0x59) || (local_44._4_4_ == 0x5a)) {
        local_6f = local_6f | 1;
        local_80 = *(undefined8 *)param_4;
        local_78 = *(undefined8 *)(param_4 + 4);
        local_168 = (wchar_t *)((ulonglong)local_168 & 0xffffffff00000000);
        FUN_004238d0(&local_120,0,0,0);
        local_6c = local_120;
        uStack_64 = uStack_118;
        local_168 = (wchar_t *)0x0;
        FUN_00d83280(local_140,&local_80,0,(undefined1)local_3c);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0xd0))(local_b8,0,local_b0,local_140);
      }
      else if (local_44._4_4_ == 0x5b) {
        local_6f = local_6f | 8;
        local_80 = *(undefined8 *)param_4;
        local_78 = *(undefined8 *)(param_4 + 4);
        local_168 = (wchar_t *)((ulonglong)local_168._4_4_ << 0x20);
        FUN_004238d0(&local_120,0,0,0);
        local_6c = local_120;
        uStack_64 = uStack_118;
        local_168 = (wchar_t *)0x0;
        FUN_00d83280(local_140,&local_80,3,(undefined1)local_3c);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0xd0))(local_b8,0,local_b0,local_140);
      }
      else if (local_44._4_4_ == 0x5d) {
        local_6f = local_6f | 0x20;
        local_80 = *(undefined8 *)param_4;
        local_78 = *(undefined8 *)(param_4 + 4);
        local_168 = (wchar_t *)((ulonglong)local_168._4_4_ << 0x20);
        FUN_004238d0(&local_120,0,0,0);
        local_6c = local_120;
        uStack_64 = uStack_118;
        local_168 = (wchar_t *)0x0;
        FUN_00d83280(local_140,&local_80,5,(undefined1)local_3c);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0xd0))(local_b8,0,local_b0,local_140);
      }
      else if (local_44._4_4_ == 0x5e) {
        local_6f = local_6f | 2;
        local_80 = *(undefined8 *)param_4;
        local_78 = *(undefined8 *)(param_4 + 4);
        local_168 = (wchar_t *)((ulonglong)local_168._4_4_ << 0x20);
        FUN_004238d0(&local_120,0,0,0);
        local_6c = local_120;
        uStack_64 = uStack_118;
        local_168 = (wchar_t *)0x0;
        FUN_00d83280(local_140,&local_80,1,(undefined1)local_3c);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0xd0))(local_b8,0,local_b0,local_140);
      }
      else if (local_44._4_4_ == 0x61) {
        local_6f = local_6f | 0x40;
        local_80 = *(undefined8 *)param_4;
        local_78 = *(undefined8 *)(param_4 + 4);
        local_168 = (wchar_t *)((ulonglong)local_168._4_4_ << 0x20);
        FUN_004238d0(&local_120,0,0,0);
        local_6c = local_120;
        uStack_64 = uStack_118;
        local_168 = (wchar_t *)0x0;
        FUN_00d83280(local_140,&local_80,6,(undefined1)local_3c);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0xd0))(local_b8,0,local_b0,local_140);
      }
      else if (local_44._4_4_ == 99) {
        local_6f = local_6f | 4;
        local_80 = *(undefined8 *)param_4;
        local_78 = *(undefined8 *)(param_4 + 4);
        local_168 = (wchar_t *)((ulonglong)local_168._4_4_ << 0x20);
        FUN_004238d0(&local_120,0,0,0);
        local_6c = local_120;
        uStack_64 = uStack_118;
        local_168 = (wchar_t *)0x0;
        FUN_00d83280(local_140,&local_80,2,(undefined1)local_3c);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0xd0))(local_b8,0,local_b0,local_140);
      }
      else {
        if (local_44._4_4_ != 0x5f) {
          local_30 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
          uVar4 = FUN_004230a0(param_4);
          uVar5 = FUN_004230c0(param_4);
          (**(code **)(*local_30 + 0xe0))(local_30,uVar4,uVar5);
          if (local_3c == 1) {
            local_70 = local_70 | 1;
          }
          if (local_3c == 2) {
            local_70 = local_70 & 0xfe;
          }
          local_a1 = 0;
          local_168 = (wchar_t *)CONCAT44(local_168._4_4_,200);
          FUN_004238d0(&local_120,0,0,200);
          local_80 = local_120;
          local_78 = uStack_118;
          local_168 = L"default";
          (**(code **)(*local_b8 + 0x98))(local_b8,&local_90,local_a1,&local_80);
          local_168._0_4_ = local_78._4_4_ - local_84;
          FUN_004238d0(&local_a0,local_90,local_8c,(int)local_78 - local_88);
          uVar2 = local_a0;
          if (((local_44._4_4_ == 0x4d) || (local_44._4_4_ == 0x4f)) || (local_44._4_4_ == 0x51)) {
            uVar4 = FUN_004230a0(param_4);
            iVar7 = local_9c;
            local_168._0_4_ = local_9c + local_94;
            FUN_004238d0(&local_120,0,0,uVar4);
            local_80 = local_120;
            local_78 = uStack_118;
            uVar4 = FUN_004230a0(param_4);
            local_168 = (wchar_t *)CONCAT44(local_168._4_4_,iVar7);
            FUN_004238d0(&local_120,0,0,uVar4);
            local_6c = local_120;
            uStack_64 = uStack_118;
            uVar9 = FUN_00609e10(local_30);
            local_168._0_4_ = 0xd941f0;
            local_168._4_4_ = 0;
            (**(code **)(*local_b8 + 0xb8))(local_b8,local_a1,uVar9,&local_80);
          }
          else if (local_44._4_4_ == 0x53) {
            iVar6 = FUN_004230c0(param_4);
            iVar7 = local_9c;
            local_168._0_4_ = iVar6 + local_94 + local_9c;
            FUN_004238d0(&local_120,0,0,local_a0 + local_98);
            local_80 = local_120;
            local_78 = uStack_118;
            uVar4 = FUN_004230c0(param_4);
            local_168 = (wchar_t *)CONCAT44(local_168._4_4_,uVar4);
            FUN_004238d0(&local_120,0,iVar7,local_a0);
            local_6c = local_120;
            uStack_64 = uStack_118;
            uVar9 = FUN_00609e10(local_30);
            uVar9 = FUN_005ffa40(uVar9);
            FUN_0064ae10(uVar9,0,-iVar7);
            uVar9 = FUN_00609e10(local_30);
            local_168._0_4_ = 0xd941f0;
            local_168._4_4_ = 0;
            (**(code **)(*local_b8 + 0xb8))(local_b8,local_a1,uVar9,&local_80);
            uVar9 = FUN_00609e10(local_30);
            uVar9 = FUN_005ffa40(uVar9);
            FUN_0064ae10(uVar9,0,iVar7);
          }
          else if (local_44._4_4_ == 0x54) {
            iVar7 = FUN_004230c0(param_4);
            local_168._0_4_ = iVar7 + local_94 + local_9c;
            FUN_004238d0(&local_120,0,0,uVar2 + local_98);
            local_80 = local_120;
            local_78 = uStack_118;
            uVar4 = FUN_004230c0(param_4);
            local_168 = (wchar_t *)CONCAT44(local_168._4_4_,uVar4);
            FUN_004238d0(&local_120,uVar2,local_9c,uVar2 + local_98);
            local_6c = local_120;
            uStack_64 = uStack_118;
            uVar9 = FUN_00609e10(local_30);
            uVar9 = FUN_005ffa40(uVar9);
            FUN_0064ae10(uVar9,-uVar2,-local_9c);
            uVar9 = FUN_00609e10(local_30);
            local_168._0_4_ = 0xd941f0;
            local_168._4_4_ = 0;
            (**(code **)(*local_b8 + 0xb8))(local_b8,local_a1,uVar9,&local_80);
            uVar9 = FUN_00609e10(local_30);
            uVar9 = FUN_005ffa40(uVar9);
            FUN_0064ae10(uVar9,uVar2,local_9c);
          }
          else if (local_44._4_4_ == 0x55) {
            uVar4 = FUN_004230a0(param_4);
            local_168._0_4_ = local_9c + local_94;
            FUN_004238d0(&local_120,0,0,uVar4);
            local_80 = local_120;
            local_78 = uStack_118;
            uVar4 = FUN_004230a0(param_4);
            local_168 = (wchar_t *)CONCAT44(local_168._4_4_,local_94);
            FUN_004238d0(&local_120,0,local_9c,uVar4);
            local_6c = local_120;
            uStack_64 = uStack_118;
            uVar9 = FUN_00609e10(local_30);
            uVar9 = FUN_005ffa40(uVar9);
            FUN_0064ae10(uVar9,0,-local_9c);
            uVar9 = FUN_00609e10(local_30);
            local_168._0_4_ = 0xd941f0;
            local_168._4_4_ = 0;
            (**(code **)(*local_b8 + 0xb8))(local_b8,local_a1,uVar9,&local_80);
            uVar9 = FUN_00609e10(local_30);
            uVar9 = FUN_005ffa40(uVar9);
            FUN_0064ae10(uVar9,0,local_9c);
          }
          cVar3 = FUN_00d8d9f0(local_b8,6,L"default",0);
          if (cVar3 != '\0') {
            local_a1 = 6;
          }
          local_168 = (wchar_t *)CONCAT44(local_168._4_4_,200);
          FUN_004238d0(&local_120,0,0,200);
          local_80 = local_120;
          local_78 = uStack_118;
          local_168 = L"default";
          (**(code **)(*local_b8 + 0x98))(local_b8,&local_90,local_a1,&local_80);
          local_168 = (wchar_t *)CONCAT44(local_168._4_4_,local_78._4_4_ - local_84);
          FUN_004238d0(&local_a0,local_90,local_8c,(int)local_78 - local_88);
          if (((local_44._4_4_ == 0x4e) || (local_44._4_4_ == 0x50)) || (local_44._4_4_ == 0x52)) {
            uVar4 = FUN_004230a0(param_4);
            local_168._0_4_ = local_9c + local_94;
            FUN_004238d0(&local_120,0,0,uVar4);
            local_80 = local_120;
            local_78 = uStack_118;
            uVar4 = FUN_004230a0(param_4);
            local_168 = (wchar_t *)CONCAT44(local_168._4_4_,local_9c);
            FUN_004238d0(&local_120,0,0,uVar4);
            local_6c = local_120;
            uStack_64 = uStack_118;
            uVar9 = FUN_00609e10(local_30);
            local_168 = L"default";
            (**(code **)(*local_b8 + 0xb8))(local_b8,local_a1,uVar9,&local_80);
          }
          else if (local_44._4_4_ == 0x56) {
            iVar7 = FUN_004230c0(param_4);
            local_168._0_4_ = iVar7 + local_94 + local_9c;
            FUN_004238d0(&local_120,0,0,local_a0 + local_98);
            local_80 = local_120;
            local_78 = uStack_118;
            uVar4 = FUN_004230c0(param_4);
            local_168 = (wchar_t *)CONCAT44(local_168._4_4_,uVar4);
            FUN_004238d0(&local_120,0,local_9c,local_a0);
            local_6c = local_120;
            uStack_64 = uStack_118;
            uVar9 = FUN_00609e10(local_30);
            uVar9 = FUN_005ffa40(uVar9);
            FUN_0064ae10(uVar9,0,-local_9c);
            uVar9 = FUN_00609e10(local_30);
            local_168 = L"default";
            (**(code **)(*local_b8 + 0xb8))(local_b8,local_a1,uVar9,&local_80);
            uVar9 = FUN_00609e10(local_30);
            uVar9 = FUN_005ffa40(uVar9);
            FUN_0064ae10(uVar9,0,local_9c);
          }
          else if (local_44._4_4_ == 0x57) {
            iVar7 = FUN_004230c0(param_4);
            local_168._0_4_ = iVar7 + local_94 + local_9c;
            FUN_004238d0(&local_120,0,0,local_a0 + local_98);
            local_80 = local_120;
            local_78 = uStack_118;
            uVar4 = FUN_004230c0(param_4);
            local_168 = (wchar_t *)CONCAT44(local_168._4_4_,uVar4);
            FUN_004238d0(&local_120,local_a0,local_9c,local_a0 + local_98);
            local_6c = local_120;
            uStack_64 = uStack_118;
            uVar9 = FUN_00609e10(local_30);
            uVar10 = FUN_00609e10(local_30);
            uVar10 = FUN_005ffa40(uVar10);
            FUN_005ffb10(uVar9,uVar10);
            uVar9 = FUN_00609e10(local_30);
            uVar9 = FUN_005ffa40(uVar9);
            FUN_0064ae10(uVar9,-local_a0,-local_9c);
            uVar9 = FUN_00609e10(local_30);
            local_168 = L"default";
            (**(code **)(*local_b8 + 0xb8))(local_b8,local_a1,uVar9,&local_80);
            uVar9 = FUN_00609e10(local_30);
            uVar9 = FUN_005ffa40(uVar9);
            FUN_0064ae10(uVar9,local_a0,local_9c);
          }
          else if (local_44._4_4_ == 0x58) {
            uVar4 = FUN_004230a0(param_4);
            local_168._0_4_ = local_9c + local_94;
            FUN_004238d0(&local_120,0,0,uVar4);
            local_80 = local_120;
            local_78 = uStack_118;
            uVar4 = FUN_004230a0(param_4);
            local_168 = (wchar_t *)CONCAT44(local_168._4_4_,local_94);
            FUN_004238d0(&local_120,0,local_9c,uVar4);
            local_6c = local_120;
            uStack_64 = uStack_118;
            uVar9 = FUN_00609e10(local_30);
            uVar10 = FUN_00609e10(local_30);
            uVar10 = FUN_005ffa40(uVar10);
            FUN_005ffb10(uVar9,uVar10);
            uVar9 = FUN_00609e10(local_30);
            uVar9 = FUN_005ffa40(uVar9);
            FUN_0064ae10(uVar9,0,-local_9c);
            uVar9 = FUN_00609e10(local_30);
            local_168 = L"default";
            (**(code **)(*local_b8 + 0xb8))(local_b8,local_a1,uVar9,&local_80);
            uVar9 = FUN_00609e10(local_30);
            uVar9 = FUN_005ffa40(uVar9);
            FUN_0064ae10(uVar9,0,local_9c);
          }
          (**(code **)(*local_b0 + 0x88))(local_b0,*(int *)param_4,*(int *)(param_4 + 2),local_30);
          FUN_00410f20(local_30);
          goto code_r0x00d94118;
        }
        local_6f = local_6f | 2;
        local_80 = *(undefined8 *)param_4;
        local_78 = *(undefined8 *)(param_4 + 4);
        local_168 = (wchar_t *)((ulonglong)local_168._4_4_ << 0x20);
        FUN_004238d0(&local_120,0,0,0);
        local_6c = local_120;
        uStack_64 = uStack_118;
        local_168 = (wchar_t *)0x0;
        FUN_00d83280(local_140,&local_80,1,(undefined1)local_3c);
        local_168 = L"default";
        (**(code **)(*local_b8 + 0xd0))(local_b8,6,local_b0,local_140);
      }
      FUN_00d941a0(0,local_d0);
      goto LAB_00d94137;
    }
    local_168 = L"default";
    (**(code **)(*local_b8 + 0xc0))(local_b8,0,local_b0,param_4);
  }
code_r0x00d94118:
  FUN_00410f20(local_38);
LAB_00d94137:
  FUN_00417740(&local_80,&DAT_00d627e8);
  return local_45;
}


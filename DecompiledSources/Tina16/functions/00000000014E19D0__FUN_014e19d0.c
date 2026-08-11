/* Ghidra address: 014e19d0 */
/* Ghidra symbol: FUN_014e19d0 */


longlong *
FUN_014e19d0(longlong *param_1,short *param_2,longlong param_3,undefined8 param_4,byte *param_5,
            undefined8 param_6,int param_7,int param_8,char param_9,undefined8 param_10)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined2 *puVar11;
  short local_1f6;
  int local_1f4;
  longlong *local_1f0;
  int local_1e4;
  bool local_1dd;
  int local_1dc;
  undefined *local_1d8;
  char local_1c9;
  char *local_1c8;
  int local_1bc;
  undefined1 local_1a8 [256];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined8 *local_38;
  longlong local_30;
  
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_60[0] = 0;
  local_68 = 0;
  local_48 = 0;
  local_50 = 0;
  iVar3 = FUN_00414f50(param_5,&DAT_014e3228,(ulonglong)*param_5 + 1);
  if ((iVar3 == 0) ||
     (iVar3 = FUN_00414f50(param_5,&DAT_014e322c,(ulonglong)*param_5 + 1), iVar3 == 0)) {
    if (param_9 == '\0') {
      local_1f6 = 0x3e9;
    }
    else {
      local_1f6 = 0x408;
    }
    local_1dd = param_9 != '\0';
    local_1f4 = 1;
    local_1e4 = param_7;
  }
  else {
    iVar3 = FUN_00414f50(param_5,&DAT_014e3231,(ulonglong)*param_5 + 1);
    if ((iVar3 == 0) ||
       (iVar3 = FUN_00414f50(param_5,&DAT_014e3235,(ulonglong)*param_5 + 1), iVar3 == 0)) {
      if (param_9 == '\0') {
        local_1f6 = 0x45d;
      }
      else {
        local_1f6 = 0x409;
      }
      local_1dd = param_9 != '\0';
      local_1f4 = 1;
      local_1e4 = param_7;
    }
    else {
      iVar3 = FUN_00414f50(param_5,&DAT_014e323a,(ulonglong)*param_5 + 1);
      if ((iVar3 == 0) ||
         (iVar3 = FUN_00414f50(param_5,&DAT_014e323f,(ulonglong)*param_5 + 1), iVar3 == 0)) {
        local_1f6 = 0x889;
        local_1f4 = 1;
        local_1e4 = param_7;
        local_1dd = false;
      }
      else {
        iVar3 = FUN_00414f50(param_5,&DAT_014e3245,(ulonglong)*param_5 + 1);
        if ((iVar3 == 0) ||
           (iVar3 = FUN_00414f50(param_5,&DAT_014e3249,(ulonglong)*param_5 + 1), iVar3 == 0)) {
          if (param_9 == '\0') {
            local_1f6 = 0x3ea;
          }
          else {
            local_1f6 = 0x402;
          }
          local_1dd = param_9 != '\0';
          local_1f4 = param_7;
          local_1e4 = param_8;
        }
        else {
          iVar3 = FUN_00414f50(param_5,&DAT_014e324e,(ulonglong)*param_5 + 1);
          if ((iVar3 == 0) ||
             (iVar3 = FUN_00414f50(param_5,&DAT_014e3253,(ulonglong)*param_5 + 1), iVar3 == 0)) {
            if (param_9 == '\0') {
              local_1f6 = 0x3ed;
            }
            else {
              local_1f6 = 0x403;
            }
            local_1dd = param_9 != '\0';
            local_1f4 = param_7;
            local_1e4 = param_8;
          }
          else {
            iVar3 = FUN_00414f50(param_5,&DAT_014e3259,(ulonglong)*param_5 + 1);
            if ((iVar3 == 0) ||
               (iVar3 = FUN_00414f50(param_5,&DAT_014e325c,(ulonglong)*param_5 + 1), iVar3 == 0)) {
              if (param_9 == '\0') {
                local_1f6 = 0x3eb;
              }
              else {
                local_1f6 = 0x404;
              }
              local_1dd = param_9 != '\0';
              local_1f4 = param_7;
              local_1e4 = param_8;
            }
            else {
              iVar3 = FUN_00414f50(param_5,&DAT_014e3260,(ulonglong)*param_5 + 1);
              if ((iVar3 == 0) ||
                 (iVar3 = FUN_00414f50(param_5,&DAT_014e3264,(ulonglong)*param_5 + 1), iVar3 == 0))
              {
                if (param_9 == '\0') {
                  local_1f6 = 0x3f1;
                }
                else {
                  local_1f6 = 0x405;
                }
                local_1dd = param_9 != '\0';
                local_1f4 = param_7;
                local_1e4 = param_8;
              }
              else {
                iVar3 = FUN_00414f50(param_5,&DAT_014e3269,(ulonglong)*param_5 + 1);
                if ((iVar3 == 0) ||
                   (iVar3 = FUN_00414f50(param_5,&DAT_014e326d,(ulonglong)*param_5 + 1), iVar3 == 0)
                   ) {
                  if (param_9 == '\0') {
                    local_1f6 = 0x3f9;
                  }
                  else {
                    local_1f6 = 0x406;
                  }
                  local_1dd = param_9 != '\0';
                  local_1f4 = 2;
                  local_1e4 = param_8;
                }
                else {
                  iVar3 = FUN_00414f50(param_5,&DAT_014e3272,(ulonglong)*param_5 + 1);
                  if ((iVar3 == 0) ||
                     (iVar3 = FUN_00414f50(param_5,&DAT_014e3277,(ulonglong)*param_5 + 1),
                     iVar3 == 0)) {
                    if (param_9 == '\0') {
                      local_1f6 = 0x3fa;
                    }
                    else {
                      local_1f6 = 0x407;
                    }
                    local_1dd = param_9 != '\0';
                    local_1f4 = 2;
                    local_1e4 = param_8;
                  }
                  else {
                    iVar3 = FUN_00414f50(param_5,&DAT_014e327d,(ulonglong)*param_5 + 1);
                    if (iVar3 == 0) {
                      if (param_9 == '\0') {
                        local_1f6 = 0x3f7;
                      }
                      else {
                        local_1f6 = 0x401;
                      }
                      local_1dd = param_9 != '\0';
                      local_1e4 = param_7;
                    }
                    else {
                      iVar3 = FUN_00414f50(param_5,&DAT_014e3281,(ulonglong)*param_5 + 1);
                      if (iVar3 == 0) {
                        if (param_9 == '\0') {
                          local_1f6 = 0x3f6;
                        }
                        else {
                          local_1f6 = 0x400;
                        }
                        local_1dd = param_9 != '\0';
                        local_1e4 = param_7;
                      }
                      else {
                        iVar3 = FUN_00414f50(param_5,&DAT_014e3286,(ulonglong)*param_5 + 1);
                        if (iVar3 == 0) {
                          if (param_9 == '\0') {
                            local_1f6 = 0x3f0;
                          }
                          else {
                            local_1f6 = 0x3fc;
                          }
                          local_1dd = param_9 != '\0';
                          local_1e4 = param_7;
                        }
                        else {
                          iVar3 = FUN_00414f50(param_5,&DAT_014e328b,(ulonglong)*param_5 + 1);
                          if (iVar3 == 0) {
                            if (param_9 == '\0') {
                              local_1f6 = 0x3ef;
                            }
                            else {
                              local_1f6 = 0x3fd;
                            }
                            local_1dd = param_9 != '\0';
                            local_1e4 = param_7;
                          }
                          else {
                            iVar3 = FUN_00414f50(param_5,&DAT_014e3291,(ulonglong)*param_5 + 1);
                            if (iVar3 == 0) {
                              local_1f6 = 0x4b0;
                              local_1e4 = 1;
                              local_1dd = false;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar6 = FUN_01d347d0(param_3,0);
  FUN_01d34800(param_3,0);
  lVar7 = FUN_01d347d0(param_3,0);
  FUN_01d34800(param_3,0);
  local_1bc = *(int *)(param_3 + 0x10) - local_1e4;
  local_1dc = 0;
  iVar3 = local_1e4;
  if (-1 < local_1e4 + -1) {
    do {
      local_1f0 = (longlong *)FUN_014db750(local_1f6);
      if (local_1e4 < 2) {
        FUN_017bf050(local_1f0,0,param_2);
      }
      else {
        FUN_0043f750(&local_68,local_1e4);
        FUN_00416cd0(local_60,3,param_2,&DAT_014e32a4,local_68);
        FUN_017bf050(local_1f0,0,local_60[0]);
      }
      *(bool *)((longlong)local_1f0 + 0x531) = *param_2 == 0x58;
      if (local_1f6 == 0x4b0) {
        uVar8 = FUN_01d347d0(param_3,0);
        FUN_014dbb80(local_1f0,0,uVar8,param_10);
      }
      else if ((local_1f6 == 0x401) || (local_1f6 == 0x3f7)) {
        uVar8 = FUN_01d347d0(param_3,local_1dc + 3);
        FUN_014dbb80(local_1f0,0,uVar8,param_10);
        uVar8 = FUN_01d347d0(param_3,2);
        FUN_014dbb80(local_1f0,1,uVar8,param_10);
        uVar8 = FUN_01d347d0(param_3,1);
        FUN_014dbb80(local_1f0,2,uVar8,param_10);
        uVar8 = FUN_01d347d0(param_3,local_1dc + local_1e4 * 2 + 3);
        FUN_014dbb80(local_1f0,3,uVar8,param_10);
        uVar8 = FUN_01d347d0(param_3,local_1dc + local_1e4 + 3);
        FUN_014dbb80(local_1f0,4,uVar8,param_10);
        uVar8 = FUN_01d347d0(param_3,0);
        FUN_014dbb80(local_1f0,5,uVar8,param_10);
        if (local_1f6 == 0x401) {
          local_1d8 = PTR_DAT_02001788;
          local_1c8 = &DAT_01f5abbe;
        }
        else {
          local_1d8 = PTR_DAT_020046b8;
          local_1c8 = s_TPCLKQLHTY_01f5ab9c;
        }
      }
      else if ((local_1f6 == 0x400) || (local_1f6 == 0x3f6)) {
        uVar8 = FUN_01d347d0(param_3,local_1dc + 3);
        FUN_014dbb80(local_1f0,0,uVar8,param_10);
        uVar8 = FUN_01d347d0(param_3,2);
        FUN_014dbb80(local_1f0,1,uVar8,param_10);
        uVar8 = FUN_01d347d0(param_3,local_1dc + local_1e4 + 3);
        FUN_014dbb80(local_1f0,2,uVar8,param_10);
        uVar8 = FUN_01d347d0(param_3,1);
        FUN_014dbb80(local_1f0,3,uVar8,param_10);
        uVar8 = FUN_01d347d0(param_3,local_1dc + local_1e4 * 3 + 3);
        FUN_014dbb80(local_1f0,4,uVar8,param_10);
        uVar8 = FUN_01d347d0(param_3,local_1dc + local_1e4 * 2 + 3);
        FUN_014dbb80(local_1f0,5,uVar8,param_10);
        uVar8 = FUN_01d347d0(param_3,0);
        FUN_014dbb80(local_1f0,6,uVar8,param_10);
        if (local_1f6 == 0x400) {
          local_1d8 = PTR_DAT_02001788;
          local_1c8 = &DAT_01f5abbe;
        }
        else {
          local_1d8 = PTR_DAT_020046b8;
          local_1c8 = s_TPCLKQLHTY_01f5ab9c;
        }
      }
      else if (local_1f6 == 0x3fc) {
        uVar8 = FUN_01d347d0(param_3,local_1dc + 3);
        FUN_014dbb80(local_1f0,0,uVar8,param_10);
        uVar8 = FUN_01d347d0(param_3,2);
        FUN_014dbb80(local_1f0,1,uVar8,param_10);
        uVar8 = FUN_01d347d0(param_3,local_1dc + local_1e4 + 3);
        FUN_014dbb80(local_1f0,2,uVar8,param_10);
        uVar8 = FUN_01d347d0(param_3,1);
        FUN_014dbb80(local_1f0,3,uVar8,param_10);
        uVar8 = FUN_01d347d0(param_3,local_1dc + local_1e4 * 3 + 3);
        FUN_014dbb80(local_1f0,4,uVar8,param_10);
        uVar8 = FUN_01d347d0(param_3,local_1dc + local_1e4 * 2 + 3);
        FUN_014dbb80(local_1f0,5,uVar8,param_10);
        uVar8 = FUN_01d347d0(param_3,0);
        FUN_014dbb80(local_1f0,6,uVar8,param_10);
        local_1d8 = PTR_DAT_02005a28;
        local_1c8 = &DAT_01f5b031;
      }
      else if (local_1f6 == 0x3fd) {
        uVar8 = FUN_01d347d0(param_3,local_1dc + 3);
        FUN_014dbb80(local_1f0,0,uVar8,param_10);
        uVar8 = FUN_01d347d0(param_3,2);
        FUN_014dbb80(local_1f0,1,uVar8,param_10);
        uVar8 = FUN_01d347d0(param_3,1);
        FUN_014dbb80(local_1f0,2,uVar8,param_10);
        uVar8 = FUN_01d347d0(param_3,local_1dc + local_1e4 * 2 + 3);
        FUN_014dbb80(local_1f0,3,uVar8,param_10);
        uVar8 = FUN_01d347d0(param_3,local_1dc + local_1e4 + 3);
        FUN_014dbb80(local_1f0,4,uVar8,param_10);
        uVar8 = FUN_01d347d0(param_3,0);
        FUN_014dbb80(local_1f0,5,uVar8,param_10);
        local_1d8 = PTR_DAT_02005a28;
        local_1c8 = &DAT_01f5b031;
      }
      else if (local_1f6 == 0x3f0) {
        uVar8 = FUN_01d347d0(param_3,local_1dc + 3);
        FUN_014dbb80(local_1f0,0,uVar8,param_10);
        uVar8 = FUN_01d347d0(param_3,local_1dc + local_1e4 + 3);
        FUN_014dbb80(local_1f0,1,uVar8,param_10);
        uVar8 = FUN_01d347d0(param_3,local_1dc + local_1e4 * 2 + 3);
        FUN_014dbb80(local_1f0,2,uVar8,param_10);
        uVar8 = FUN_01d347d0(param_3,2);
        FUN_014dbb80(local_1f0,3,uVar8,param_10);
        uVar8 = FUN_014e1940(param_1,0x3e9);
        uVar9 = FUN_01d347d0(param_3,local_1dc + local_1e4 * 2 + 3);
        FUN_014dbb80(uVar8,0,uVar9,param_10);
        uVar9 = FUN_01d347d0(param_3,local_1dc + local_1e4 * 3 + 3);
        FUN_014dbb80(uVar8,1,uVar9,param_10);
        local_1d8 = PTR_DAT_020046b8;
        local_1c8 = s_TPCLKQLHTY_01f5ab9c;
      }
      else if (local_1f6 == 0x3ef) {
        uVar8 = FUN_01d347d0(param_3,local_1dc + 3);
        FUN_014dbb80(local_1f0,0,uVar8,param_10);
        uVar8 = FUN_01d347d0(param_3,2);
        FUN_014dbb80(local_1f0,1,uVar8,param_10);
        uVar8 = FUN_01d347d0(param_3,local_1dc + local_1e4 + 3);
        FUN_014dbb80(local_1f0,2,uVar8,param_10);
        uVar8 = FUN_014e1940(param_1,0x3e9);
        uVar9 = FUN_01d347d0(param_3,local_1dc + local_1e4 + 3);
        FUN_014dbb80(uVar8,0,uVar9,param_10);
        uVar9 = FUN_01d347d0(param_3,local_1dc + local_1e4 * 2 + 3);
        FUN_014dbb80(uVar8,1,uVar9,param_10);
        local_1d8 = PTR_DAT_02003de8;
        local_1c8 = &DAT_01f5afed;
      }
      else {
        if (local_1f6 == 0x889) {
          FUN_01d01990(local_1f0,local_1f4 + 2);
          local_1d8 = PTR_DAT_02002f90;
          local_1c8 = &DAT_01f5ab36;
        }
        else {
          FUN_01d01990(local_1f0,local_1f4 + 1);
          if (local_1dd == false) {
            local_1d8 = PTR_DAT_02004d70;
            local_1c8 = &DAT_01f5a8f4;
          }
          else {
            local_1d8 = PTR_DAT_02001e48;
            local_1c8 = &DAT_01f5a916;
          }
        }
        iVar5 = 0;
        iVar4 = local_1f4;
        if (-1 < local_1f4 + -1) {
          do {
            uVar8 = FUN_01d347d0(param_3,local_1dc * local_1f4 + iVar5);
            FUN_014dbb80(local_1f0,iVar5,uVar8,param_10);
            iVar5 = iVar5 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        if (local_1f6 == 0x889) {
          uVar8 = FUN_01d347d0(param_3,(*(int *)(param_3 + 0x10) - local_1e4) + -1);
          FUN_014dbb80(local_1f0,local_1f4,uVar8,param_10);
          uVar8 = FUN_01d347d0(param_3,local_1bc);
          FUN_014dbb80(local_1f0,local_1f4 + 1,uVar8,param_10);
        }
        else {
          uVar8 = FUN_01d347d0(param_3,local_1bc);
          FUN_014dbb80(local_1f0,local_1f4,uVar8,param_10);
        }
        local_1bc = local_1bc + 1;
      }
      uVar2 = (**(code **)(*local_1f0 + 0x2c8))(local_1f0);
      lVar10 = FUN_00409570(uVar2);
      local_1f0[0x18] = lVar10;
      FUN_01d38290(local_1f0,1);
      if (local_1f6 == 0x4b0) {
        (**(code **)(*local_1f0 + 0x2d0))(local_1f0,0,&local_38);
        *local_38 = 0;
        iVar4 = FUN_01cfd2d0(local_1f0);
        (**(code **)(*local_1f0 + 0x2d0))(local_1f0,iVar4 + -1,&local_38);
        FUN_00415020(local_38,*(undefined8 *)(lVar7 + 8),0x1e);
        *(undefined2 *)((longlong)local_38 + 0x1f) = *(undefined2 *)(lVar7 + 0x18);
        *(undefined2 *)((longlong)local_38 + 0x23) = *(undefined2 *)(lVar7 + 0x1c);
        FUN_014e18b0(local_1f0,param_4);
      }
      else {
        FUN_004169a0(&local_70,param_6);
        iVar4 = FUN_004170c0(&DAT_014e32b4,local_70,1);
        if (iVar4 < 1) {
          FUN_004169a0(&local_78,param_6);
          iVar4 = FUN_004170c0(&PTR_DAT_014e32dc,local_78,1);
          if (iVar4 < 1) {
            FUN_004169a0(&local_80,param_6);
            iVar4 = FUN_004170c0(&DAT_014e32f0,local_80,1);
            if (iVar4 < 1) {
              FUN_004169a0(&local_88,param_6);
              iVar4 = FUN_004170c0(&PTR_DAT_014e3304,local_88,1);
              if (iVar4 < 1) {
                FUN_004169a0(&local_90,param_6);
                iVar4 = FUN_004170c0(&DAT_014e3344,local_90,1);
                if (iVar4 < 1) {
                  FUN_004169a0(&local_98,param_6);
                  iVar4 = FUN_004170c0(&PTR_DAT_014e3354,local_98,1);
                  if (iVar4 < 1) {
                    FUN_004169a0(&local_a0,param_6);
                    iVar4 = FUN_004170c0(&DAT_014e3368,local_a0,1);
                    if (iVar4 < 1) {
                      FUN_004169a0(&local_a8,param_6);
                      iVar4 = FUN_004170c0(L"4000",local_a8,1);
                      if (iVar4 < 1) {
                        FUN_00414b50(&local_48,&DAT_014e32c8);
                      }
                      else {
                        FUN_00414b50(&local_48,L"CMOS");
                      }
                    }
                    else {
                      FUN_00414b50(&local_48,&DAT_014e3368);
                    }
                  }
                  else {
                    FUN_00414b50(&local_48,&PTR_DAT_014e3354);
                  }
                }
                else {
                  FUN_00414b50(&local_48,&DAT_014e3344);
                }
              }
              else {
                FUN_00414b50(&local_48,L"High Speed CMOS");
              }
            }
            else {
              FUN_00414b50(&local_48,&DAT_014e32f0);
            }
          }
          else {
            FUN_00414b50(&local_48,&PTR_DAT_014e32dc);
          }
        }
        else {
          FUN_00414b50(&local_48,&DAT_014e32c8);
        }
        if (local_1dd == false) {
          local_1c9 = FUN_0172d980(local_1f0,0,local_48,&local_50);
        }
        FUN_00416910(local_1a8,local_48,0xff);
        local_3b = FUN_014dcff0(&DAT_01f5a86c,local_1a8,8);
        if (local_1dd != false) {
          uVar2 = FUN_00b905f0(local_3b,1);
          puVar11 = (undefined2 *)FUN_01cfde70(local_1f0,1,1,&local_39,&local_3a,&local_3b);
          *puVar11 = uVar2;
        }
        else {
          FUN_01d03190(local_1f0,local_3b,1);
        }
        iVar5 = FUN_01cfd2d0(local_1f0);
        iVar4 = FUN_01cfd2d0(local_1f0);
        iVar4 = iVar4 + -3;
        if (local_1dd != false) {
          iVar4 = iVar5 + -2;
        }
        (**(code **)(*local_1f0 + 0x2d0))(local_1f0,iVar4,&local_38);
        FUN_00415020(local_38,*(undefined8 *)(lVar7 + 8),0x1e);
        *(undefined2 *)((longlong)local_38 + 0x1f) = *(undefined2 *)(lVar7 + 0x18);
        *(undefined2 *)((longlong)local_38 + 0x23) = *(undefined2 *)(lVar7 + 0x1c);
        iVar5 = FUN_01cfd2d0(local_1f0);
        iVar4 = FUN_01cfd2d0(local_1f0);
        iVar4 = iVar4 + -2;
        if (local_1dd != false) {
          iVar4 = iVar5 + -1;
        }
        (**(code **)(*local_1f0 + 0x2d0))(local_1f0,iVar4,&local_38);
        FUN_00415020(local_38,*(undefined8 *)(lVar6 + 8),0x1e);
        *(undefined2 *)((longlong)local_38 + 0x1f) = *(undefined2 *)(lVar6 + 0x18);
        *(undefined2 *)((longlong)local_38 + 0x23) = *(undefined2 *)(lVar6 + 0x1c);
        (**(code **)(*local_1f0 + 0x2d0))(local_1f0,0,&local_38);
        lVar10 = *(longlong *)((longlong)local_38 + 0x26);
        FUN_00409a70(local_1d8,*(undefined8 *)(lVar10 + 9),*(undefined2 *)(lVar10 + 0x23));
        FUN_014dd530(local_1f0,*(undefined2 *)(lVar10 + 0x21),*(undefined8 *)(lVar10 + 9),
                     *(undefined8 *)(lVar10 + 1),0,param_4,local_1c8);
        if (local_1f6 == 0x3f6) {
          puVar11 = (undefined2 *)FUN_01cfde70(local_1f0,1,3,&local_39,&local_3a,&local_3b);
          *puVar11 = 2;
        }
        if ((local_1dd == false) && (-1 < local_1c9)) {
          FUN_00416910(local_1a8,local_50,0xff);
          FUN_00415020(local_38,local_1a8,0x14);
          FUN_00416910(local_1a8,local_48,0xff);
          FUN_00415020((longlong)local_38 + 0x15,local_1a8,0x10);
        }
        if ((local_1dd != false) &&
           (cVar1 = FUN_014db910(&DAT_014e339e,param_4,&local_30), cVar1 != '\0')) {
          (**(code **)(*local_1f0 + 0x2d0))(local_1f0,3,&local_38);
          *(undefined1 *)local_38 = *(undefined1 *)(local_30 + 0x28);
        }
        if ((local_1dd != false) &&
           (cVar1 = FUN_014db910(&DAT_014e33a8,param_4,&local_30), cVar1 != '\0')) {
          (**(code **)(*local_1f0 + 0x2d0))(local_1f0,1,&local_38);
          *(undefined1 *)local_38 = *(undefined1 *)(local_30 + 0x28);
          (**(code **)(*local_1f0 + 0x2d0))(local_1f0,2,&local_38);
          *(undefined1 *)local_38 = *(undefined1 *)(local_30 + 0x28);
        }
      }
      (**(code **)(*param_1 + 0x20))(param_1);
      local_1dc = local_1dc + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414560(&local_a8,10);
  FUN_00414560(&local_50,2);
  return local_1f0;
}


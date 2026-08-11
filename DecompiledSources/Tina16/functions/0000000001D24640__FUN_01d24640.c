/* Ghidra address: 01d24640 */
/* Ghidra symbol: FUN_01d24640 */


/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffff948 : 0x01d26090 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01d24640(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  undefined8 local_res18 [2];
  undefined1 auStack_8b8 [32];
  char *local_898;
  undefined *local_890;
  longlong *local_888;
  int local_87c;
  int local_878;
  int local_874;
  int local_870;
  int local_86c;
  int local_868;
  int local_864;
  int local_860;
  uint local_85c;
  undefined8 local_858;
  int local_84c;
  undefined1 *local_848;
  undefined8 local_840;
  undefined8 local_838;
  undefined8 local_830;
  undefined8 local_828;
  undefined8 local_820;
  char *local_818;
  undefined8 local_810;
  undefined8 local_808;
  undefined8 local_800;
  undefined1 *local_7f8;
  char *local_7f0;
  undefined8 local_7e8;
  undefined8 local_7e0;
  undefined1 *local_7d8;
  undefined8 local_7d0;
  undefined8 local_7c8;
  undefined8 local_7c0;
  undefined8 local_7b8;
  undefined8 local_7b0;
  undefined1 *local_7a8;
  undefined8 local_7a0;
  undefined1 *local_798;
  undefined1 *local_790;
  undefined8 local_788;
  undefined1 *local_780;
  undefined1 *local_778;
  undefined1 *local_770;
  undefined1 *local_768;
  undefined8 local_760;
  undefined8 local_758;
  undefined8 local_750;
  undefined8 local_748;
  undefined8 local_740;
  undefined8 local_738;
  undefined1 *local_730;
  undefined1 *local_728;
  undefined8 local_720;
  byte *local_718;
  undefined8 local_710;
  byte local_708 [79];
  byte abStack_6b9 [80];
  byte abStack_669 [81];
  undefined1 local_618 [760];
  undefined1 local_320 [759];
  byte local_29;
  
  local_848 = (undefined1 *)0x0;
  local_840 = 0;
  local_838 = 0;
  local_830 = 0;
  local_828 = 0;
  local_820 = 0;
  local_818 = (char *)0x0;
  local_810 = 0;
  local_808 = 0;
  local_800 = 0;
  local_7f8 = (undefined1 *)0x0;
  local_7f0 = (char *)0x0;
  local_7e8 = 0;
  local_7e0 = 0;
  local_7d8 = (undefined1 *)0x0;
  local_7d0 = 0;
  local_7c8 = 0;
  local_7c0 = 0;
  local_7b8 = 0;
  local_7b0 = 0;
  local_7a8 = (undefined1 *)0x0;
  local_7a0 = 0;
  local_798 = (undefined1 *)0x0;
  local_790 = (undefined1 *)0x0;
  local_788 = 0;
  local_780 = (undefined1 *)0x0;
  local_778 = (undefined1 *)0x0;
  local_770 = (undefined1 *)0x0;
  local_768 = (undefined1 *)0x0;
  local_760 = 0;
  local_758 = 0;
  local_750 = 0;
  local_748 = 0;
  local_740 = 0;
  local_738 = 0;
  local_730 = (undefined1 *)0x0;
  local_728 = (undefined1 *)0x0;
  local_720 = 0;
  local_710 = (byte *)0x0;
  local_718 = (byte *)0x0;
  local_res18[0] = param_3;
  local_858 = param_2;
  FUN_00414610(param_3);
  FUN_0040cf10(local_320,local_res18[0],0);
  FUN_00409900();
  local_888 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_888 + 0x10))(local_888,local_858);
  FUN_00416ba0(&local_720,*(undefined8 *)PTR_DAT_020049a0,L"\\base.mcd");
  FUN_0040cf10(local_618,local_720,0);
  FUN_00409900();
  FUN_0040c9e0(local_618);
  FUN_00409900();
  FUN_0040ca00(local_320);
  FUN_00409900();
  FUN_01d245d0(auStack_8b8,local_618,local_320);
  local_86c = 0;
  local_874 = 1;
  local_84c = 0;
  local_87c = 1;
  local_878 = 0;
  local_870 = 0;
  while (iVar1 = (**(code **)(*local_888 + 0x28))(local_888), local_878 < iVar1) {
    (**(code **)(*local_888 + 0x18))(local_888,&local_728,local_878);
    FUN_00415dd0(&local_710,local_728,0);
    local_29 = *local_710;
    if (local_29 == 0x5c) {
      local_29 = local_710[4];
      FUN_00416880(&local_730,local_710);
      iVar1 = FUN_004170c0(L"<abegin>",local_730,1);
      if (0 < iVar1) {
        local_878 = local_878 + 1;
        local_864 = 1;
        (**(code **)(*local_888 + 0x18))(local_888,&local_738,local_878);
        FUN_00415dd0(&local_710,local_738,0);
        FUN_004144d0(&local_718);
        while( true ) {
          iVar1 = 0;
          if (local_710 != (byte *)0x0) {
            iVar1 = *(int *)(local_710 + -4);
          }
          if (iVar1 < local_864) break;
          local_29 = local_710[(longlong)local_864 + -1];
          local_864 = local_864 + 1;
          if ((local_29 == 0x74) && (local_710[(longlong)local_864 + -1] == 0x29)) {
            local_29 = 0x78;
          }
          FUN_004153d0(&local_740,local_29,0);
          FUN_004155b0(&local_718,local_740);
        }
        FUN_00416880(&local_748,local_718);
        (**(code **)(*local_888 + 0x40))(local_888,local_878,local_748);
        while( true ) {
          FUN_00416880(&local_768,local_710);
          iVar1 = FUN_004170c0(L"<aend>",local_768,1);
          if (0 < iVar1) break;
          local_878 = local_878 + 1;
          local_864 = 1;
          (**(code **)(*local_888 + 0x18))(local_888,&local_750,local_878);
          FUN_00415dd0(&local_710,local_750,0);
          FUN_004144d0(&local_718);
          while( true ) {
            iVar1 = 0;
            if (local_710 != (byte *)0x0) {
              iVar1 = *(int *)(local_710 + -4);
            }
            if (iVar1 < local_864) break;
            local_29 = local_710[(longlong)local_864 + -1];
            local_864 = local_864 + 1;
            if (local_29 == 0x74) {
              FUN_004155b0(&local_718,&DAT_01d274c0);
            }
            else {
              FUN_004153d0(&local_758,local_29,0);
              FUN_004155b0(&local_718,local_758);
            }
          }
          FUN_00416880(&local_760,local_718);
          (**(code **)(*local_888 + 0x40))(local_888,local_878,local_760);
        }
      }
    }
    local_878 = local_878 + 1;
  }
  FUN_004144d0(&local_718);
  local_878 = 0;
  do {
    iVar1 = (**(code **)(*local_888 + 0x28))(local_888);
    if (iVar1 <= local_878) {
      uVar4 = FUN_0040f3d0(local_320,0x11);
      FUN_0040f590(uVar4);
      FUN_00409900();
      FUN_0040d150(local_320);
      FUN_00409900();
      FUN_0040d150(local_618);
      FUN_00409900();
      FUN_00410f20(local_888);
      FUN_00414480(&local_848);
      FUN_00414590(&local_840,0x10);
      FUN_00414560(&local_7c0,3);
      FUN_00414590(&local_7a8,5);
      FUN_00414560(&local_780,5);
      FUN_004144d0(&local_758);
      FUN_00414560(&local_750,2);
      FUN_004144d0(&local_740);
      FUN_00414560(&local_738,4);
      FUN_00414590(&local_718,2);
      FUN_00414480(local_res18);
      return;
    }
    (**(code **)(*local_888 + 0x18))(local_888,&local_770,local_878);
    FUN_00415dd0(&local_710,local_770,0);
    if (local_86c == 1) {
      local_86c = 0;
    }
    else {
      uVar4 = FUN_0040f200(local_320,L".EQN 6 0 ");
      uVar4 = FUN_0040ef30(uVar4,local_87c * 2 + 8);
      uVar4 = FUN_0040f200(uVar4,&DAT_01d27510);
      FUN_0040f590(uVar4);
      FUN_00409900();
    }
    local_864 = 1;
    while( true ) {
      iVar1 = 0;
      if (local_710 != (byte *)0x0) {
        iVar1 = *(int *)(local_710 + -4);
      }
      if (iVar1 < local_864) break;
      local_29 = local_710[(longlong)local_864 + -1];
LAB_01d24ca9:
      while (uVar3 = (ulonglong)local_29, 0x2c < uVar3) {
        if (uVar3 - 0x2d < 3) goto LAB_01d24f2e;
        if (uVar3 - 0x30 < 10) {
          if (0 < local_84c) {
            local_84c = local_84c + 1;
            abStack_6b9[local_84c] = local_29;
          }
          if (local_84c == 0) {
            uVar4 = FUN_0040ed20(local_320,local_29);
            FUN_0040d060(uVar4);
            FUN_00409900();
          }
          goto LAB_01d25b92;
        }
        if (uVar3 != 0x3d) {
          if (uVar3 != 0x5c) goto LAB_01d25b77;
          local_29 = local_710[(longlong)(local_864 + 1) + -1];
          iVar1 = local_864 + 1;
          if (local_29 == 100) {
            local_864 = local_864 + 4;
            local_29 = local_710[(longlong)local_864 + -1];
            if (local_29 == 0x61) {
              local_870 = 1;
              uVar4 = FUN_0040f200(local_320,
                                   L"{0:t}NAME({0:x}NAME):{0:mod}NAME({0:x}NAME,{0:T}NAME)");
              FUN_0040d060(uVar4);
              FUN_00409900();
              uVar4 = FUN_0040f3d0(local_320,0x11);
              FUN_0040f590(uVar4);
              FUN_00409900();
              uVar4 = FUN_0040f200(local_320,L".EQN 6 0 ");
              uVar4 = FUN_0040ef30(uVar4,local_87c * 2 + 10);
              uVar4 = FUN_0040f200(uVar4,&DAT_01d27510);
              FUN_0040f590(uVar4);
              FUN_00409900();
              local_864 = 0;
              if (local_710 != (byte *)0x0) {
                local_864 = *(int *)(local_710 + -4);
              }
              local_29 = 0x20;
            }
            iVar1 = local_864;
            if (local_29 == 0x66) {
              local_864 = local_864 + 1;
              local_29 = local_710[(longlong)local_864 + -1];
              local_87c = local_87c + -1;
              local_86c = 1;
              if (local_29 == 0x65) {
                local_864 = 0;
                if (local_710 != (byte *)0x0) {
                  local_864 = *(int *)(local_710 + -4);
                }
                local_29 = 0x20;
              }
              iVar1 = local_864;
              if (local_29 == 0x62) {
                iVar1 = 0;
                if (local_710 != (byte *)0x0) {
                  iVar1 = *(int *)(local_710 + -4);
                }
                local_29 = 0x20;
              }
            }
          }
          local_864 = iVar1;
          if (local_29 == 0x66) {
            local_874 = local_874 + 1;
            abStack_669[local_874] = 0x2f;
          }
          if (local_29 == 0x6f) {
            local_874 = local_874 + 1;
            abStack_669[local_874] = 0x5b;
          }
          if (local_29 == 0x65) {
            local_874 = local_874 + 1;
            abStack_669[local_874] = 0x5e;
          }
          if (local_29 == 0x69) {
            local_864 = local_864 + 1;
            local_85c = 0;
            local_860 = 0;
            do {
              iVar1 = local_864;
              local_29 = local_710[(longlong)local_864 + -1];
              local_864 = local_864 + 1;
              if (local_29 == 0x28) {
                local_85c = local_85c + 1;
              }
              else if (local_29 == 0x29) {
                local_85c = local_85c + -1;
              }
              else if (local_29 != 0x2c) {
                if (local_29 == 0x5c) {
                  local_864 = iVar1 + 2;
                }
                else {
                  local_860 = local_860 + 1;
                  local_708[(longlong)local_860 + -1] = local_29;
                }
              }
              iVar1 = local_860;
            } while (local_29 != 0x2c);
            local_29 = 0x2c;
            while (iVar8 = local_864, local_85c != 0) {
              local_29 = local_710[(longlong)iVar8 + -1];
              local_864 = iVar8 + 1;
              if (local_29 == 0x28) {
                local_85c = local_85c + 1;
              }
              else if (local_29 == 0x29) {
                local_85c = local_85c + -1;
              }
              else if (local_29 != 0x2c) {
                if (local_29 == 0x5c) {
                  local_864 = iVar8 + 2;
                }
                else {
                  local_860 = local_860 + 1;
                  local_708[(longlong)local_860 + -1] = local_29;
                }
              }
            }
            local_84c = local_860;
            local_85c = 0;
            local_864 = iVar8;
            if (iVar1 < local_860) {
              do {
                if (9 < (byte)(local_708[(longlong)local_84c + -1] - 0x30)) {
                  uVar4 = FUN_0040f200(local_320,&DAT_01d27524);
                  FUN_0040d060(uVar4);
                  FUN_00409900();
                  if (0 < local_860) {
                    pbVar7 = local_708;
                    iVar1 = local_860;
                    do {
                      uVar4 = FUN_0040ed20(local_320,*pbVar7);
                      FUN_0040d060(uVar4);
                      FUN_00409900();
                      pbVar7 = pbVar7 + 1;
                      iVar1 = iVar1 + -1;
                    } while (iVar1 != 0);
                  }
                  uVar4 = FUN_0040f200(local_320,L"}NAME");
                  FUN_0040d060(uVar4);
                  FUN_00409900();
                  local_860 = 0;
                  local_84c = 0;
                  iVar1 = 0;
                }
                local_84c = local_84c + -1;
              } while (iVar1 < local_84c);
            }
            if (local_860 != 0) {
              uVar4 = FUN_0040f200(local_320,&DAT_01d27524);
              FUN_0040d060(uVar4);
              FUN_00409900();
              if (0 < iVar1) {
                pbVar7 = local_708;
                iVar8 = iVar1;
                do {
                  uVar4 = FUN_0040ed20(local_320,*pbVar7);
                  FUN_0040d060(uVar4);
                  FUN_00409900();
                  pbVar7 = pbVar7 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              uVar4 = FUN_0040f200(local_320,L"}NAME");
              FUN_0040d060(uVar4);
              FUN_00409900();
              uVar4 = FUN_0040f3d0(local_320,0x5b);
              FUN_0040d060(uVar4);
              FUN_00409900();
              iVar1 = iVar1 + 1;
              if (iVar1 <= local_860) {
                iVar8 = (local_860 - iVar1) + 1;
                pbVar7 = local_708 + (longlong)iVar1 + -1;
                do {
                  uVar4 = FUN_0040ed20(local_320,*pbVar7);
                  FUN_0040d060(uVar4);
                  FUN_00409900();
                  pbVar7 = pbVar7 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
            }
            local_864 = local_864 + -1;
            local_29 = 0x20;
            local_84c = 0;
          }
          if (local_29 == 0x73) {
            local_864 = local_864 + 2;
            local_29 = local_710[(longlong)local_864 + -1];
            if (local_29 == 0x65) {
              local_29 = 0x46;
            }
            if (local_29 == 0x45) {
              local_29 = 0x46;
            }
            if (local_29 == 0xb0) {
              uVar4 = FUN_0040f200(local_320,L"*{0:deg}NAME");
              FUN_0040d060(uVar4);
              FUN_00409900();
            }
            if (local_29 != 0xb0) {
              uVar4 = FUN_0040f200(local_320,L"{0:\\");
              FUN_0040d060(uVar4);
              FUN_00409900();
              uVar4 = FUN_0040ed20(local_320,local_29);
              uVar4 = FUN_0040f200(uVar4,L"}NAME");
              FUN_0040d060(uVar4);
              FUN_00409900();
            }
            local_864 = local_864 + 1;
            local_29 = local_710[(longlong)local_864 + -1];
          }
          goto LAB_01d25b92;
        }
        if (0 < local_84c) {
          uVar4 = FUN_0040f200(local_320,&DAT_01d27524);
          FUN_0040d060(uVar4);
          FUN_00409900();
          if (0 < local_84c) {
            pbVar7 = abStack_6b9;
            iVar1 = local_84c;
            do {
              pbVar7 = pbVar7 + 1;
              uVar4 = FUN_0040ed20(local_320,*pbVar7);
              FUN_0040d060(uVar4);
              FUN_00409900();
              iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
          }
          uVar4 = FUN_0040f200(local_320,L"}NAME");
          FUN_0040d060(uVar4);
          FUN_00409900();
          local_84c = 0;
        }
        uVar4 = FUN_0040f3d0(local_320,0x3a);
        FUN_0040d060(uVar4);
        FUN_00409900();
        iVar1 = 0;
        if (local_710 != (byte *)0x0) {
          iVar1 = *(int *)(local_710 + -4);
        }
        if (local_864 != iVar1) goto LAB_01d25b92;
        local_878 = local_878 + 1;
        (**(code **)(*local_888 + 0x18))(local_888,&local_778,local_878);
        FUN_00415dd0(&local_710,local_778,0);
        local_864 = 1;
        local_29 = *local_710;
        if (local_29 == 0x2b) {
          local_864 = 2;
          local_29 = local_710[1];
        }
        else if (local_29 == 0x20) {
          local_864 = 2;
          local_29 = local_710[1];
          if (local_710[1] == 0x2b) {
            local_864 = 3;
            local_29 = local_710[2];
          }
        }
      }
      if (uVar3 == 0x20) goto LAB_01d25b92;
      if (uVar3 - 0x28 < 4) {
LAB_01d24f2e:
        if (local_84c == 3) {
          if (((abStack_6b9[1] == 'A') && (abStack_6b9[2] == 'b')) && (abStack_6b9[3] == 's')) {
            uVar4 = FUN_0040f3d0(local_320,0x7c);
            FUN_0040d060(uVar4);
            FUN_00409900();
            local_84c = 0;
          }
          if (((abStack_6b9[1] == 'A') && (abStack_6b9[2] == 'r')) && (abStack_6b9[3] == 'c')) {
            uVar4 = FUN_0040f200(local_320,&DAT_01d27550);
            FUN_0040d060(uVar4);
            FUN_00409900();
            local_84c = 0;
          }
          if (((abStack_6b9[1] == 'C') && (abStack_6b9[2] == 'o')) && (abStack_6b9[3] == 's')) {
            uVar4 = FUN_0040f200(local_320,&DAT_01d27564);
            FUN_0040d060(uVar4);
            FUN_00409900();
            local_84c = 0;
          }
        }
        if (0 < local_84c) {
          uVar4 = FUN_0040f200(local_320,&DAT_01d27524);
          FUN_0040d060(uVar4);
          FUN_00409900();
          if (0 < local_84c) {
            pbVar7 = abStack_6b9;
            iVar1 = local_84c;
            do {
              pbVar7 = pbVar7 + 1;
              uVar4 = FUN_0040ed20(local_320,*pbVar7);
              FUN_0040d060(uVar4);
              FUN_00409900();
              iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
          }
          uVar4 = FUN_0040f200(local_320,L"}NAME");
          FUN_0040d060(uVar4);
          FUN_00409900();
          local_84c = 0;
        }
        uVar4 = FUN_0040ed20(local_320,local_29);
        FUN_0040d060(uVar4);
        FUN_00409900();
      }
      else {
        if (uVar3 - 0x28 != 4) {
LAB_01d25b77:
          local_84c = local_84c + 1;
          abStack_6b9[local_84c] = local_29;
          goto LAB_01d25b92;
        }
        local_85c = 0;
        if (abStack_669[local_874] == 0x5b) {
          local_29 = local_710[(longlong)(local_864 + 1) + -1];
          bVar9 = local_29 == 0x5c;
          iVar1 = local_864 + 1;
          if (bVar9) {
            local_29 = local_710[(longlong)(local_864 + 4) + -1];
            local_85c = 1;
            iVar1 = local_864 + 4;
          }
          local_864 = iVar1;
          iVar1 = local_864;
          local_85c = (uint)bVar9;
          local_708[0] = local_29;
          local_860 = 1;
          local_864 = local_864 + 1;
          local_29 = local_710[(longlong)local_864 + -1];
          if (local_710[(longlong)local_864 + -1] == 0x2c) {
            local_864 = iVar1 + 2;
            local_29 = local_710[(longlong)(iVar1 + 2) + -1];
          }
          while (iVar1 = local_864, local_29 != 0x29) {
            local_860 = local_860 + 1;
            local_708[(longlong)local_860 + -1] = local_29;
            local_864 = local_864 + 1;
            local_29 = local_710[(longlong)local_864 + -1];
            if (local_710[(longlong)local_864 + -1] == 0x2c) {
              local_864 = iVar1 + 2;
              local_29 = local_710[(longlong)(iVar1 + 2) + -1];
            }
          }
          bVar9 = false;
          if (0 < local_860) {
            pbVar7 = local_708;
            iVar1 = local_860;
            do {
              local_29 = *pbVar7;
              if (9 < (byte)(*pbVar7 - 0x30)) {
                bVar9 = true;
              }
              pbVar7 = pbVar7 + 1;
              iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
          }
          if (!bVar9) {
            if (0 < local_84c) {
              uVar4 = FUN_0040f200(local_320,&DAT_01d27524);
              FUN_0040d060(uVar4);
              FUN_00409900();
              if (0 < local_84c) {
                pbVar7 = abStack_6b9;
                iVar1 = local_84c;
                do {
                  pbVar7 = pbVar7 + 1;
                  uVar4 = FUN_0040ed20(local_320,*pbVar7);
                  FUN_0040d060(uVar4);
                  FUN_00409900();
                  iVar1 = iVar1 + -1;
                } while (iVar1 != 0);
              }
              uVar4 = FUN_0040f200(local_320,L"}NAME");
              FUN_0040d060(uVar4);
              FUN_00409900();
              local_84c = 0;
            }
            uVar4 = FUN_0040f3d0(local_320,0x29);
            uVar4 = FUN_0040ed20(uVar4,abStack_669[local_874]);
            uVar4 = FUN_0040f3d0(uVar4,0x28);
            FUN_0040d060(uVar4);
            FUN_00409900();
            local_874 = local_874 + -1;
            if (0 < local_860) {
              pbVar7 = local_708;
              iVar1 = local_860;
              do {
                uVar4 = FUN_0040ed20(local_320,*pbVar7);
                FUN_0040d060(uVar4);
                FUN_00409900();
                pbVar7 = pbVar7 + 1;
                iVar1 = iVar1 + -1;
              } while (iVar1 != 0);
            }
          }
          if (bVar9) {
            uVar4 = FUN_0040f200(local_320,&DAT_01d27524);
            FUN_0040d060(uVar4);
            FUN_00409900();
            if ((0 < local_84c) && (0 < local_84c)) {
              pbVar7 = abStack_6b9;
              iVar1 = local_84c;
              do {
                pbVar7 = pbVar7 + 1;
                uVar4 = FUN_0040ed20(local_320,*pbVar7);
                FUN_0040d060(uVar4);
                FUN_00409900();
                iVar1 = iVar1 + -1;
              } while (iVar1 != 0);
            }
            if (0 < local_860) {
              pbVar7 = local_708;
              iVar1 = local_860;
              do {
                uVar4 = FUN_0040ed20(local_320,*pbVar7);
                FUN_0040d060(uVar4);
                FUN_00409900();
                pbVar7 = pbVar7 + 1;
                iVar1 = iVar1 + -1;
              } while (iVar1 != 0);
            }
            uVar4 = FUN_0040f200(local_320,L"}NAME");
            FUN_0040d060(uVar4);
            FUN_00409900();
            local_84c = 0;
          }
          for (; 0 < (int)local_85c; local_85c = local_85c - 1) {
            local_864 = local_864 + 1;
          }
          local_29 = 0x29;
          goto LAB_01d24ca9;
        }
        if (0 < local_84c) {
          uVar4 = FUN_0040f200(local_320,&DAT_01d27524);
          FUN_0040d060(uVar4);
          FUN_00409900();
          if (0 < local_84c) {
            pbVar7 = abStack_6b9;
            iVar1 = local_84c;
            do {
              pbVar7 = pbVar7 + 1;
              uVar4 = FUN_0040ed20(local_320,*pbVar7);
              FUN_0040d060(uVar4);
              FUN_00409900();
              iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
          }
          uVar4 = FUN_0040f200(local_320,L"}NAME");
          FUN_0040d060(uVar4);
          FUN_00409900();
          local_84c = 0;
        }
        uVar4 = FUN_0040f3d0(local_320,0x29);
        uVar4 = FUN_0040ed20(uVar4,abStack_669[local_874]);
        uVar4 = FUN_0040f3d0(uVar4,0x28);
        FUN_0040d060(uVar4);
        FUN_00409900();
        local_874 = local_874 + -1;
      }
LAB_01d25b92:
      local_864 = local_864 + 1;
    }
    local_878 = local_878 + 1;
    if (0 < local_84c) {
      uVar4 = FUN_0040f200(local_320,&DAT_01d27524);
      FUN_0040d060(uVar4);
      FUN_00409900();
      if (0 < local_84c) {
        pbVar7 = abStack_6b9;
        iVar1 = local_84c;
        do {
          pbVar7 = pbVar7 + 1;
          uVar4 = FUN_0040ed20(local_320,*pbVar7);
          FUN_0040d060(uVar4);
          FUN_00409900();
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      uVar4 = FUN_0040f200(local_320,L"}NAME");
      FUN_0040d060(uVar4);
      FUN_00409900();
      local_84c = 0;
    }
    if (local_870 == 1) {
      FUN_004144d0(&local_718);
      local_868 = 1;
      plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      while (local_870 == 1) {
        (**(code **)(*local_888 + 0x18))(local_888,&local_780,local_878);
        FUN_00415dd0(&local_710,local_780,0);
        local_864 = 1;
        while( true ) {
          iVar1 = 0;
          if (local_710 != (byte *)0x0) {
            iVar1 = *(int *)(local_710 + -4);
          }
          if (iVar1 < local_864) break;
          local_29 = local_710[(longlong)local_864 + -1];
LAB_01d25ce8:
          if (local_868 == 1) {
            uVar3 = (ulonglong)local_29;
            if (uVar3 < 0x30) {
              if (uVar3 == 0x20) {
                if ((abStack_6b9[local_84c] == 100) && (local_84c == 3)) {
                  FUN_004155b0(&local_718,&DAT_01d27694);
                  local_84c = local_84c + -3;
                }
                if ((abStack_6b9[local_84c] == 0x72) && (local_84c == 2)) {
                  FUN_004155b0(&local_718,&DAT_01d276a4);
                  local_84c = local_84c + -2;
                }
                goto LAB_01d2717e;
              }
              if (3 < uVar3 - 0x28) {
                if (uVar3 == 0x2c) {
                  local_85c = 0;
                  if (abStack_669[local_874] != 0x5b) {
                    if (0 < local_84c) {
                      FUN_004155b0(&local_718,&DAT_01d27630);
                      if (0 < local_84c) {
                        pbVar7 = abStack_6b9;
                        iVar1 = local_84c;
                        do {
                          pbVar7 = pbVar7 + 1;
                          FUN_004153d0(&local_810,*pbVar7,0);
                          FUN_004155b0(&local_718,local_810);
                          iVar1 = iVar1 + -1;
                        } while (iVar1 != 0);
                      }
                      FUN_004155b0(&local_718,"}NAME");
                      local_84c = 0;
                    }
                    FUN_004153d0(&local_818,abStack_669[local_874],0);
                    local_898 = local_818;
                    local_890 = &DAT_01d2773c;
                    FUN_00415980(&local_718,4,local_718,&DAT_01d2772c);
                    local_874 = local_874 + -1;
                    goto LAB_01d2717e;
                  }
                  local_29 = local_710[(longlong)(local_864 + 1) + -1];
                  bVar9 = local_29 == 0x5c;
                  iVar1 = local_864 + 1;
                  if (bVar9) {
                    local_29 = local_710[(longlong)(local_864 + 4) + -1];
                    local_85c = 1;
                    iVar1 = local_864 + 4;
                  }
                  local_864 = iVar1;
                  iVar1 = local_864;
                  local_85c = (uint)bVar9;
                  local_708[0] = local_29;
                  local_860 = 1;
                  local_864 = local_864 + 1;
                  local_29 = local_710[(longlong)local_864 + -1];
                  if (local_710[(longlong)local_864 + -1] == 0x2c) {
                    local_864 = iVar1 + 2;
                    local_29 = local_710[(longlong)(iVar1 + 2) + -1];
                  }
                  while (iVar1 = local_864, local_29 != 0x29) {
                    local_860 = local_860 + 1;
                    local_708[(longlong)local_860 + -1] = local_29;
                    local_864 = local_864 + 1;
                    local_29 = local_710[(longlong)local_864 + -1];
                    if (local_710[(longlong)local_864 + -1] == 0x2c) {
                      local_864 = iVar1 + 2;
                      local_29 = local_710[(longlong)(iVar1 + 2) + -1];
                    }
                  }
                  bVar9 = false;
                  if (0 < local_860) {
                    pbVar7 = local_708;
                    iVar1 = local_860;
                    do {
                      local_29 = *pbVar7;
                      if (9 < (byte)(*pbVar7 - 0x30)) {
                        bVar9 = true;
                      }
                      pbVar7 = pbVar7 + 1;
                      iVar1 = iVar1 + -1;
                    } while (iVar1 != 0);
                  }
                  if (!bVar9) {
                    if (0 < local_84c) {
                      FUN_004155b0(&local_718,&DAT_01d27630);
                      if (0 < local_84c) {
                        pbVar7 = abStack_6b9;
                        iVar1 = local_84c;
                        do {
                          pbVar7 = pbVar7 + 1;
                          FUN_004153d0(&local_7e8,*pbVar7,0);
                          FUN_004155b0(&local_718,local_7e8);
                          iVar1 = iVar1 + -1;
                        } while (iVar1 != 0);
                      }
                      FUN_004155b0(&local_718,"}NAME");
                      local_84c = 0;
                    }
                    FUN_004153d0(&local_7f0,abStack_669[local_874],0);
                    local_898 = local_7f0;
                    local_890 = &DAT_01d2773c;
                    FUN_00415980(&local_718,4,local_718,&DAT_01d2772c);
                    local_874 = local_874 + -1;
                    if (0 < local_860) {
                      pbVar7 = local_708;
                      iVar1 = local_860;
                      do {
                        FUN_004153d0(&local_7f8,*pbVar7,0);
                        FUN_004155b0(&local_718,local_7f8);
                        pbVar7 = pbVar7 + 1;
                        iVar1 = iVar1 + -1;
                      } while (iVar1 != 0);
                    }
                  }
                  if (bVar9) {
                    FUN_004155b0(&local_718,&DAT_01d27630);
                    if ((0 < local_84c) && (0 < local_84c)) {
                      pbVar7 = abStack_6b9;
                      iVar1 = local_84c;
                      do {
                        pbVar7 = pbVar7 + 1;
                        FUN_004153d0(&local_800,*pbVar7,0);
                        FUN_004155b0(&local_718,local_800);
                        iVar1 = iVar1 + -1;
                      } while (iVar1 != 0);
                    }
                    if (0 < local_860) {
                      pbVar7 = local_708;
                      iVar1 = local_860;
                      do {
                        FUN_004153d0(&local_808,*pbVar7,0);
                        FUN_004155b0(&local_718,local_808);
                        pbVar7 = pbVar7 + 1;
                        iVar1 = iVar1 + -1;
                      } while (iVar1 != 0);
                    }
                    FUN_004155b0(&local_718,"}NAME");
                    local_84c = 0;
                  }
                  while (0 < (int)local_85c) {
                    local_864 = local_864 + 1;
                    local_85c = local_85c - 1;
                  }
                  local_29 = 0x29;
                  goto LAB_01d25ce8;
                }
                if (2 < uVar3 - 0x2d) goto LAB_01d27163;
              }
              if (local_29 != 0x2b) {
LAB_01d25f7b:
                if (0 < local_84c) {
                  if (local_84c == 3) {
                    if (((abStack_6b9[1] == 'C') && (abStack_6b9[2] == 'o')) &&
                       (abStack_6b9[3] == 's')) {
                      uVar4 = FUN_0040f200(local_320,&DAT_01d27564);
                      FUN_0040d060(uVar4);
                      FUN_00409900();
                      local_84c = 0;
                    }
                    if (((abStack_6b9[1] == 'A') && (abStack_6b9[2] == 'b')) &&
                       (abStack_6b9[3] == 's')) {
                      FUN_004155b0(&local_718,&DAT_01d27674);
                      local_84c = 0;
                    }
                    if (((abStack_6b9[1] == 'A') && (abStack_6b9[2] == 'r')) &&
                       (abStack_6b9[3] == 'c')) {
                      FUN_004155b0(&local_718,&DAT_01d27684);
                      local_84c = 0;
                    }
                    if (((abStack_6b9[1] == 'a') && (abStack_6b9[2] == 'n')) &&
                       (abStack_669[3] == 'd')) {
                      FUN_004155b0(&local_718,&DAT_01d27694);
                      local_84c = local_84c + -3;
                    }
                  }
                  if (((local_84c == 2) && (abStack_6b9[2] == 'r')) && (abStack_6b9[1] == 'o')) {
                    FUN_004155b0(&local_718,&DAT_01d276a4);
                    local_84c = local_84c + -2;
                  }
                  if (0 < local_84c) {
                    FUN_004155b0(&local_718,&DAT_01d27630);
                    if (0 < local_84c) {
                      pbVar7 = abStack_6b9;
                      iVar1 = local_84c;
                      do {
                        pbVar7 = pbVar7 + 1;
                        FUN_004153d0(&local_7a0,*pbVar7,0);
                        FUN_004155b0(&local_718,local_7a0);
                        iVar1 = iVar1 + -1;
                      } while (iVar1 != 0);
                    }
                    FUN_004155b0(&local_718,"}NAME");
                    local_84c = 0;
                  }
                }
                FUN_004153d0(&local_7a8,local_29,0);
                FUN_004155b0(&local_718,local_7a8);
                goto LAB_01d2717e;
              }
              if ((local_864 == 2) && (*local_710 == 0x20)) {
                local_864 = 3;
                local_29 = local_710[2];
              }
              else {
                if (local_864 != 1) goto LAB_01d25f7b;
                local_864 = 2;
                local_29 = local_710[1];
              }
              goto LAB_01d25ce8;
            }
            if (uVar3 < 0x3e) {
              if (uVar3 == 0x3d) {
                if (0 < local_84c) {
                  FUN_004155b0(&local_718,&DAT_01d27630);
                  if (0 < local_84c) {
                    pbVar7 = abStack_6b9;
                    iVar1 = local_84c;
                    do {
                      pbVar7 = pbVar7 + 1;
                      FUN_004153d0(&local_788,*pbVar7,0);
                      FUN_004155b0(&local_718,local_788);
                      iVar1 = iVar1 + -1;
                    } while (iVar1 != 0);
                  }
                  FUN_004155b0(&local_718,"}NAME");
                  local_84c = 0;
                }
                iVar1 = 0;
                if (local_710 != (byte *)0x0) {
                  iVar1 = *(int *)(local_710 + -4);
                }
                if (local_864 < iVar1) {
                  local_864 = local_864 + 1;
                  local_29 = local_710[(longlong)local_864 + -1];
                  if (local_29 == 0x3e) {
                    FUN_004155b0(&local_718,&DAT_01d27654);
                  }
                  FUN_004155b0(&local_718,&DAT_01d27664);
                }
                FUN_004153d0(&local_790,local_29,0);
                FUN_004155b0(&local_718,local_790);
              }
              else if (uVar3 - 0x30 < 10) {
                if (0 < local_84c) {
                  local_84c = local_84c + 1;
                  abStack_6b9[local_84c] = local_29;
                }
                if (local_84c == 0) {
                  FUN_004153d0(&local_798,local_29,0);
                  FUN_004155b0(&local_718,local_798);
                }
              }
              else {
                if (uVar3 - 0x30 != 0xc) goto LAB_01d27163;
                local_864 = local_864 + 1;
                local_29 = local_710[(longlong)local_864 + -1];
                if (local_29 == 0x20) {
                  if (0 < local_84c) {
                    FUN_004155b0(&local_718,&DAT_01d27630);
                    if (0 < local_84c) {
                      pbVar7 = abStack_6b9;
                      iVar1 = local_84c;
                      do {
                        pbVar7 = pbVar7 + 1;
                        FUN_004153d0(&local_820,*pbVar7,0);
                        FUN_004155b0(&local_718,local_820);
                        iVar1 = iVar1 + -1;
                      } while (iVar1 != 0);
                    }
                    FUN_004155b0(&local_718,"}NAME");
                    local_84c = 0;
                  }
                  FUN_004155b0(&local_718,&DAT_01d2774c);
                }
                if (local_29 == 0x3d) {
                  if (0 < local_84c) {
                    FUN_004155b0(&local_718,&DAT_01d27630);
                    if (0 < local_84c) {
                      pbVar7 = abStack_6b9;
                      iVar1 = local_84c;
                      do {
                        pbVar7 = pbVar7 + 1;
                        FUN_004153d0(&local_828,*pbVar7,0);
                        FUN_004155b0(&local_718,local_828);
                        iVar1 = iVar1 + -1;
                      } while (iVar1 != 0);
                    }
                    FUN_004155b0(&local_718,"}NAME");
                    local_84c = 0;
                  }
                  FUN_004155b0(&local_718,&DAT_01d2775c);
                }
              }
            }
            else if (uVar3 == 0x3e) {
              local_864 = local_864 + 1;
              local_29 = local_710[(longlong)local_864 + -1];
              if (local_29 == 0x20) {
                if (0 < local_84c) {
                  FUN_004155b0(&local_718,&DAT_01d27630);
                  if (0 < local_84c) {
                    pbVar7 = abStack_6b9;
                    iVar1 = local_84c;
                    do {
                      pbVar7 = pbVar7 + 1;
                      FUN_004153d0(&local_830,*pbVar7,0);
                      FUN_004155b0(&local_718,local_830);
                      iVar1 = iVar1 + -1;
                    } while (iVar1 != 0);
                  }
                  FUN_004155b0(&local_718,"}NAME");
                  local_84c = 0;
                }
                FUN_004155b0(&local_718,&DAT_01d2776c);
              }
              if (local_29 == 0x3d) {
                if (0 < local_84c) {
                  FUN_004155b0(&local_718,&DAT_01d27630);
                  if (0 < local_84c) {
                    pbVar7 = abStack_6b9;
                    iVar1 = local_84c;
                    do {
                      pbVar7 = pbVar7 + 1;
                      FUN_004153d0(&local_838,*pbVar7,0);
                      FUN_004155b0(&local_718,local_838);
                      iVar1 = iVar1 + -1;
                    } while (iVar1 != 0);
                  }
                  FUN_004155b0(&local_718,"}NAME");
                  local_84c = 0;
                }
                FUN_004155b0(&local_718,&LAB_01d2777c);
              }
            }
            else if (uVar3 == 0x5c) {
              local_29 = local_710[(longlong)(local_864 + 1) + -1];
              iVar1 = local_864 + 1;
              if (local_29 == 100) {
                local_864 = local_864 + 5;
                local_29 = local_710[(longlong)local_864 + -1];
                iVar1 = local_864;
                if (local_29 == 0x65) {
                  local_870 = 0;
                  local_868 = 0;
                  local_87c = local_87c + 1;
                  iVar1 = 1;
                  (**(code **)(*plVar2 + 0x18))(plVar2,&local_7b0);
                  FUN_00415dd0(&local_718,local_7b0);
                  while( true ) {
                    iVar8 = 0;
                    if (local_718 != (byte *)0x0) {
                      iVar8 = *(int *)(local_718 + -4);
                    }
                    if (iVar8 < iVar1) break;
                    local_29 = local_718[(longlong)iVar1 + -1];
                    iVar1 = iVar1 + 1;
                    if (local_29 == 0x3d) {
                      local_29 = 0x3a;
                    }
                    uVar4 = FUN_0040ed20(local_320,local_29);
                    FUN_0040d060(uVar4);
                    FUN_00409900();
                  }
                  local_84c = 0;
                  iVar1 = 0;
                  while (iVar8 = iVar1, iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2),
                        iVar8 < iVar1 + -1) {
                    (**(code **)(*plVar2 + 0x18))(plVar2,&local_7b8);
                    FUN_00415dd0(&local_718,local_7b8);
                    local_29 = *local_718;
                    iVar6 = 2;
                    iVar1 = iVar8 + 1;
                    if (local_29 == 0x28) {
                      uVar4 = FUN_0040f200(local_320,L"{0:if}NAME(");
                      FUN_0040d060(uVar4);
                      FUN_00409900();
                      local_84c = local_84c + 1;
                      while (local_29 != 0x2c) {
                        uVar4 = FUN_0040ed20(local_320,local_29);
                        FUN_0040d060(uVar4);
                        FUN_00409900();
                        lVar5 = (longlong)iVar6;
                        iVar6 = iVar6 + 1;
                        local_29 = local_718[lVar5 + -1];
                      }
                      uVar4 = FUN_0040ed20(local_320,0x2c);
                      FUN_0040d060(uVar4);
                      FUN_00409900();
                      (**(code **)(*plVar2 + 0x18))(plVar2,&local_7c0);
                      FUN_00415dd0(&local_718,local_7c0);
                      local_29 = *local_718;
                      iVar1 = 2;
                      if (local_29 == 0x20) {
                        local_29 = local_718[1];
                        iVar1 = 3;
                        if (local_29 == 0x2b) {
                          local_29 = local_718[2];
                          iVar1 = 4;
                        }
                      }
                      while( true ) {
                        iVar6 = 0;
                        if (local_718 != (byte *)0x0) {
                          iVar6 = *(int *)(local_718 + -4);
                        }
                        if (iVar6 < iVar1) break;
                        uVar4 = FUN_0040ed20(local_320,local_29);
                        FUN_0040d060(uVar4);
                        FUN_00409900();
                        local_29 = local_718[(longlong)iVar1 + -1];
                        iVar1 = iVar1 + 1;
                      }
                      uVar4 = FUN_0040ed20(local_320,local_29);
                      FUN_0040d060(uVar4);
                      FUN_00409900();
                      uVar4 = FUN_0040f3d0(local_320,0x2c);
                      FUN_0040d060(uVar4);
                      FUN_00409900();
                      iVar1 = iVar8 + 2;
                    }
                  }
                  FUN_00410f20(plVar2);
                  local_86c = 1;
                  uVar4 = FUN_0040f200(local_320,&DAT_01d276d8);
                  FUN_0040d060(uVar4);
                  FUN_00409900();
                  for (local_84c = local_84c + -1; local_84c != 0; local_84c = local_84c + -1) {
                    uVar4 = FUN_0040f3d0(local_320,0x29);
                    FUN_0040d060(uVar4);
                    FUN_00409900();
                  }
                  local_878 = local_878 + 1;
                  iVar1 = 0;
                  if (local_710 != (byte *)0x0) {
                    iVar1 = *(int *)(local_710 + -4);
                  }
                  local_29 = 0x20;
                }
              }
              local_864 = iVar1;
              if (local_29 == 0x66) {
                local_874 = local_874 + 1;
                abStack_669[local_874] = 0x2f;
              }
              if (local_29 == 0x6f) {
                local_874 = local_874 + 1;
                abStack_669[local_874] = 0x5b;
              }
              if (local_29 == 0x65) {
                local_874 = local_874 + 1;
                abStack_669[local_874] = 0x5e;
              }
              if (local_29 == 0x69) {
                local_864 = local_864 + 1;
                local_85c = 0;
                local_860 = 0;
                do {
                  iVar1 = local_864;
                  local_29 = local_710[(longlong)local_864 + -1];
                  local_864 = local_864 + 1;
                  if (local_29 == 0x28) {
                    local_85c = local_85c + 1;
                  }
                  else if (local_29 == 0x29) {
                    local_85c = local_85c + -1;
                  }
                  else if (local_29 != 0x2c) {
                    if (local_29 == 0x5c) {
                      local_864 = iVar1 + 2;
                    }
                    else {
                      local_860 = local_860 + 1;
                      local_708[(longlong)local_860 + -1] = local_29;
                    }
                  }
                  iVar1 = local_860;
                } while (local_29 != 0x2c);
                local_29 = 0x2c;
                while (iVar8 = local_864, local_85c != 0) {
                  local_29 = local_710[(longlong)iVar8 + -1];
                  local_864 = iVar8 + 1;
                  if (local_29 == 0x28) {
                    local_85c = local_85c + 1;
                  }
                  else if (local_29 == 0x29) {
                    local_85c = local_85c + -1;
                  }
                  else if (local_29 != 0x2c) {
                    if (local_29 == 0x5c) {
                      local_864 = iVar8 + 2;
                    }
                    else {
                      local_860 = local_860 + 1;
                      local_708[(longlong)local_860 + -1] = local_29;
                    }
                  }
                }
                local_84c = local_860;
                local_85c = 0;
                local_864 = iVar8;
                if (iVar1 < local_860) {
                  do {
                    if (9 < (byte)(local_708[(longlong)local_84c + -1] - 0x30)) {
                      FUN_004155b0(&local_718,&DAT_01d27630);
                      if (0 < local_860) {
                        pbVar7 = local_708;
                        iVar1 = local_860;
                        do {
                          FUN_004153d0(&local_7c8,*pbVar7,0);
                          FUN_004155b0(&local_718,local_7c8);
                          pbVar7 = pbVar7 + 1;
                          iVar1 = iVar1 + -1;
                        } while (iVar1 != 0);
                      }
                      FUN_004155b0(&local_718,"}NAME");
                      local_860 = 0;
                      local_84c = 0;
                      iVar1 = 0;
                    }
                    local_84c = local_84c + -1;
                  } while (iVar1 < local_84c);
                }
                if (local_860 != 0) {
                  FUN_004155b0(&local_718,&DAT_01d27630);
                  if (0 < iVar1) {
                    pbVar7 = local_708;
                    iVar8 = iVar1;
                    do {
                      FUN_004153d0(&local_7d0,*pbVar7,0);
                      FUN_004155b0(&local_718,local_7d0);
                      pbVar7 = pbVar7 + 1;
                      iVar8 = iVar8 + -1;
                    } while (iVar8 != 0);
                  }
                  FUN_004155b0(&local_718,"}NAME");
                  FUN_004155b0(&local_718,&DAT_01d276ec);
                  iVar1 = iVar1 + 1;
                  if (iVar1 <= local_860) {
                    iVar8 = (local_860 - iVar1) + 1;
                    pbVar7 = local_708 + (longlong)iVar1 + -1;
                    do {
                      FUN_004153d0(&local_7d8,*pbVar7,0);
                      FUN_004155b0(&local_718,local_7d8);
                      pbVar7 = pbVar7 + 1;
                      iVar8 = iVar8 + -1;
                    } while (iVar8 != 0);
                  }
                }
                local_864 = local_864 + -1;
                local_29 = 0x20;
                local_84c = 0;
              }
              if (local_29 == 0x73) {
                local_864 = local_864 + 2;
                local_29 = local_710[(longlong)local_864 + -1];
                if (local_29 == 0xb0) {
                  FUN_004155b0(&local_718,"*{0:deg}NAME");
                }
                if (local_29 != 0xb0) {
                  FUN_004155b0(&local_718,&DAT_01d27718);
                  FUN_004153d0(&local_7e0,local_29,0);
                  local_898 = "}NAME";
                  FUN_00415980(&local_718,3,local_718,local_7e0);
                }
                local_864 = local_864 + 1;
                local_29 = local_710[(longlong)local_864 + -1];
              }
            }
            else {
LAB_01d27163:
              local_84c = local_84c + 1;
              abStack_6b9[local_84c] = local_29;
            }
LAB_01d2717e:
            local_864 = local_864 + 1;
          }
        }
        local_868 = 1;
        if (0 < local_84c) {
          FUN_004155b0(&local_718,&DAT_01d27630);
          if (0 < local_84c) {
            pbVar7 = abStack_6b9;
            iVar1 = local_84c;
            do {
              pbVar7 = pbVar7 + 1;
              FUN_004153d0(&local_840,*pbVar7,0);
              FUN_004155b0(&local_718,local_840);
              iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
          }
          FUN_004155b0(&local_718,"}NAME");
          local_84c = 0;
        }
        if (local_86c == 0) {
          FUN_00416880(&local_848,local_718);
          (**(code **)(*plVar2 + 0x78))(plVar2,local_848);
          local_878 = local_878 + 1;
          FUN_004144d0(&local_718);
        }
        else {
          local_86c = 0;
        }
      }
    }
    if (local_86c != 1) {
      uVar4 = FUN_0040f3d0(local_320,0x11);
      FUN_0040f590(uVar4);
      FUN_00409900();
    }
    local_87c = local_87c + 1;
  } while( true );
}


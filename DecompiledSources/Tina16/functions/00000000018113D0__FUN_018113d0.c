/* Ghidra address: 018113d0 */
/* Ghidra symbol: FUN_018113d0 */


void FUN_018113d0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  longlong local_70;
  longlong local_68;
  undefined8 *local_60;
  undefined8 local_58;
  ushort *local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  longlong *local_20;
  
  local_80 = auStack_178;
  local_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  local_130 = 0;
  local_128 = 0;
  local_118 = 0;
  local_120 = 0;
  local_f0 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_108 = 0;
  local_100 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_a0 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_50 = (ushort *)0x0;
  local_58 = 0;
  local_38 = FUN_00414cb0(param_2);
  local_2c = 1;
  local_68 = FUN_00416740(param_2);
  local_68 = local_68 + -2;
  if (local_2c < local_38) {
    do {
      local_30 = local_2c;
      local_48 = local_38;
      local_70 = local_68;
      while ((iVar3 = local_30, local_30 < local_38 &&
             (*(short *)(local_68 + (longlong)local_30 * 2) == 0x20))) {
        local_30 = local_30 + 1;
      }
      local_34 = local_30;
      while ((local_30 < local_38 && (*(short *)(local_68 + (longlong)local_30 * 2) != 0x3d))) {
        local_30 = local_30 + 1;
      }
      local_2c = local_30;
      if (local_30 < local_38) {
        do {
          local_30 = local_30 + -1;
          if (local_30 < 1) break;
        } while (*(short *)(local_68 + (longlong)local_30 * 2) == 0x20);
        FUN_00416dc0(&local_50,param_2,iVar3,(local_30 - iVar3) + 1);
        if (local_50 == (ushort *)0x0) break;
        local_30 = local_2c;
        local_48 = local_38;
        while ((local_30 < local_38 && (*(short *)(local_70 + (longlong)local_30 * 2) != 0x22))) {
          local_30 = local_30 + 1;
        }
        local_34 = local_30 + 1;
        do {
          local_30 = local_30 + 1;
          if (local_38 <= local_30) break;
        } while (*(short *)(local_70 + (longlong)local_30 * 2) != 0x22);
        local_2c = local_30;
        FUN_00416dc0(&local_58,param_2,local_34,local_30 - local_34);
        local_2c = local_2c + 1;
        local_20 = param_3;
        local_48 = FUN_00414cb0(local_50);
        local_44 = 1;
        local_40 = 1;
        while ((local_40 < local_48 && (local_50[(longlong)local_40 + -1] != 0x2e))) {
          local_40 = local_40 + 1;
        }
        if (local_40 < local_48) {
          if (local_40 < local_48) {
            do {
              uVar4 = FUN_004115a0(*local_20);
              FUN_00416dc0(&local_88,local_50,local_44,local_40 - local_44);
              local_60 = (undefined8 *)FUN_00589ef0(uVar4,local_88);
              if (local_60 == (undefined8 *)0x0) break;
              local_20 = (longlong *)FUN_0058ada0(local_20,local_60);
              local_44 = local_40 + 1;
              do {
                local_40 = local_40 + 1;
                if (local_48 <= local_40) break;
              } while (local_50[(longlong)local_40 + -1] != 0x2e);
            } while (local_40 < local_48);
          }
          FUN_00416dc0(&local_50,local_50,local_44,0x7fffffff);
        }
        iVar3 = FUN_00414cb0(local_50);
        if (iVar3 == 1) {
          uVar1 = *local_50;
          if (uVar1 < 0x76) {
            if (uVar1 == 0x75) {
              if (*(char *)(param_1 + 0x40) == '\0') {
                FUN_018033c0(&local_c8,local_58);
                FUN_004168e0(&local_d0,local_c8);
                (**(code **)(*local_20 + 0x358))(local_20,local_d0);
              }
              else {
                FUN_00415dd0(&local_b0,local_58,0);
                FUN_0041d9e0(&local_a8,local_b0);
                FUN_004168b0(&local_b8,local_a8);
                FUN_018033c0(&local_a0,local_b8);
                FUN_004168e0(&local_c0,local_a0);
                (**(code **)(*local_20 + 0x358))(local_20,local_c0);
              }
            }
            else if (uVar1 == 0x68) {
              uVar4 = FUN_0180d800(local_58);
              (**(code **)(*local_20 + 0xe0))(local_20,uVar4);
            }
            else if (uVar1 == 0x6c) {
              uVar4 = FUN_0180d800(local_58);
              (**(code **)(*local_20 + 200))(local_20,uVar4);
            }
            else {
              if (uVar1 != 0x74) goto LAB_01811cd4;
              uVar4 = FUN_0180d800(local_58);
              (**(code **)(*local_20 + 0xd0))(local_20,uVar4);
            }
          }
          else if (uVar1 == 0x77) {
            uVar4 = FUN_0180d800(local_58);
            (**(code **)(*local_20 + 0xd8))(local_20,uVar4);
          }
          else {
            if (uVar1 != 0x78) goto LAB_01811cd4;
            FUN_018033c0(&local_90,local_58);
            FUN_004168e0(&local_98,local_90);
            (**(code **)(*local_20 + 0x358))(local_20,local_98);
          }
        }
        else {
          iVar3 = FUN_00416db0(local_50,L"Text");
          if (iVar3 == 0) {
            cVar2 = FUN_004113d0(local_20,&PTR_FUN_00476820);
            if (cVar2 == '\0') {
              cVar2 = FUN_004113d0(local_20,&PTR_FUN_01805e80);
              if (cVar2 == '\0') {
                cVar2 = FUN_004113d0(local_20,&PTR_FUN_01925478);
                if (cVar2 == '\0') goto LAB_01811cd4;
                if (*(char *)(param_1 + 0x40) == '\0') {
                  FUN_018033c0(&local_118,local_58);
                  FUN_004168e0(&local_120,local_118);
                  (**(code **)(*local_20 + 0x358))(local_20,local_120);
                }
                else {
                  FUN_00415dd0(&local_100,local_58,0);
                  FUN_0041d9e0(&local_f8,local_100);
                  FUN_004168b0(&local_108,local_f8);
                  FUN_018033c0(&local_f0,local_108);
                  FUN_004168e0(&local_110,local_f0);
                  (**(code **)(*local_20 + 0x358))(local_20,local_110);
                }
              }
              else {
                FUN_018033c0(&local_e0,local_58);
                FUN_004168e0(&local_e8,local_e0);
                (**(code **)(*local_20 + 0x58))(local_20,local_e8);
              }
            }
            else {
              FUN_018033c0(&local_d8,local_58);
              (**(code **)(*local_20 + 0x60))(local_20,local_d8);
            }
          }
          else {
            iVar3 = FUN_00416db0(local_50,L"PropData");
            if (iVar3 == 0) {
              FUN_018112e0(auStack_178,local_58);
            }
            else {
              cVar2 = FUN_004113d0(local_20,&PTR_FUN_0193aeb8);
              if ((cVar2 == '\0') || (iVar3 = FUN_00416db0(local_50,L"Name"), iVar3 != 0)) {
LAB_01811cd4:
                uVar4 = FUN_004115a0(*local_20);
                local_60 = (undefined8 *)FUN_00589ef0(uVar4,local_50);
                if ((local_60 != (undefined8 *)0x0) && (local_60[2] != 0)) {
                  uVar5 = (ulonglong)**(byte **)*local_60;
                  if (uVar5 < 10) {
                    if (uVar5 == 9) {
LAB_01811ddc:
                      iVar3 = FUN_0043fc00(local_58);
                      FUN_0058af20(local_20,local_60,(longlong)iVar3);
                    }
                    else if (uVar5 < 6) {
                      if (uVar5 == 5) {
LAB_01811ec7:
                        FUN_018033c0(&local_128,local_58);
                        FUN_0058cfc0(local_20,local_60,local_128);
                      }
                      else {
                        if (uVar5 - 1 < 2) goto LAB_01811ddc;
                        if (uVar5 == 3) {
                          local_30 = FUN_0040e860(local_58,&local_3c);
                          if (local_3c == 0) {
                            FUN_0058af20(local_20,local_60,(longlong)local_30);
                          }
                          else {
                            iVar3 = FUN_00589bc0(*(undefined8 *)*local_60,local_58);
                            FUN_0058af20(local_20,local_60,(longlong)iVar3);
                          }
                        }
                        else if (uVar5 == 4) {
                          uVar4 = FUN_0180d800(local_58);
                          FUN_0058d5d0(local_20,local_60,uVar4);
                        }
                      }
                    }
                    else {
                      if (uVar5 == 6) goto LAB_01811ddc;
                      if (uVar5 == 7) {
                        FUN_01811180(param_1,local_20,local_60,local_58);
                      }
                    }
                  }
                  else if (uVar5 < 0xd) {
                    if (uVar5 == 0xc) {
                      FUN_018033c0(&local_138,local_58);
                      FUN_00468a10(&local_150,local_138);
                      FUN_0058d740(local_20,local_60,&local_150);
                    }
                    else {
                      if (uVar5 == 10) goto LAB_01811ec7;
                      if (uVar5 == 0xb) goto LAB_01811ef3;
                    }
                  }
                  else if (uVar5 == 0x10) {
                    uVar4 = FUN_0043fcb0(local_58);
                    FUN_0058af20(local_20,local_60,uVar4);
                  }
                  else if (uVar5 == 0x12) {
LAB_01811ef3:
                    FUN_018033c0(&local_130,local_58);
                    FUN_0058cfc0(local_20,local_60,local_130);
                  }
                }
              }
            }
          }
        }
      }
    } while (local_2c < local_38);
  }
  FUN_00460ba0(&local_150);
  FUN_00414560(&local_138,3);
  FUN_00414520(&local_120);
  FUN_00414480(&local_118);
  FUN_00414520(&local_110);
  FUN_00414480(&local_108);
  FUN_004144d0(&local_100);
  FUN_00414520(&local_f8);
  FUN_00414480(&local_f0);
  FUN_00414520(&local_e8);
  FUN_00414560(&local_e0,2);
  FUN_00414520(&local_d0);
  FUN_00414480(&local_c8);
  FUN_00414520(&local_c0);
  FUN_00414480(&local_b8);
  FUN_004144d0(&local_b0);
  FUN_00414520(&local_a8);
  FUN_00414480(&local_a0);
  FUN_00414520(&local_98);
  FUN_00414560(&local_90,2);
  FUN_00414560(&local_58,2);
  return;
}


/* Ghidra address: 004447b0 */
/* Ghidra symbol: FUN_004447b0 */


int FUN_004447b0(byte *param_1,int param_2,byte *param_3,uint param_4,longlong param_5,int param_6,
                longlong param_7)

{
  ulonglong *puVar1;
  byte bVar2;
  byte *pbVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined1 auStack_198 [32];
  uint local_178;
  uint local_170;
  longlong local_168;
  byte *local_158;
  byte *local_150;
  uint local_144;
  byte *local_140;
  int local_134;
  int local_130;
  int local_12c;
  byte *local_128;
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
  ushort local_b4;
  ushort local_b2;
  ushort local_b0;
  ushort local_ae;
  ushort local_ac;
  ushort local_aa;
  undefined8 *local_a8;
  ulonglong local_a0;
  int local_98;
  undefined1 local_91 [65];
  undefined8 local_50;
  char local_41;
  byte *local_40;
  int local_38;
  int local_34;
  byte local_2d;
  uint local_2c [3];
  
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_50 = 0;
  local_158 = param_1;
  local_150 = param_3;
  local_144 = param_4;
  local_130 = param_2;
  if ((param_1 == (byte *)0x0) || (param_3 == (byte *)0x0)) {
    local_12c = 0;
  }
  else {
    local_134 = -1;
    param_6 = param_6 + 1;
    local_128 = param_3 + param_4;
    pbVar7 = param_3;
    local_140 = param_3;
    local_40 = param_1;
    local_38 = param_2;
    if (param_3 < local_128) {
      do {
        if (*local_140 == 0x25) {
          local_140 = local_140 + 1;
          pbVar7 = local_140;
          if (local_128 <= local_140) break;
          if (*local_140 == 0x25) {
            if (local_38 == 0) {
              FUN_00442cd0(0,local_150);
            }
            *local_40 = *local_140;
            local_140 = local_140 + 1;
            local_40 = local_40 + 1;
            local_38 = local_38 + -1;
          }
          else {
            local_34 = 0;
            local_134 = local_134 + 1;
            local_aa = (ushort)*local_140;
            cVar4 = FUN_004323a0(&local_aa);
            pbVar7 = local_140;
            if (cVar4 == '\0') {
              if (*local_140 == 0x3a) {
                local_134 = 0;
                local_140 = local_140 + 1;
              }
            }
            else {
              for (; local_140 < local_128; local_140 = local_140 + 1) {
                local_ac = (ushort)*local_140;
                cVar4 = FUN_004323a0(&local_ac);
                if (cVar4 == '\0') break;
              }
              if (pbVar7 != local_140) {
                FUN_00442530(local_91,pbVar7,(longlong)local_140 - (longlong)pbVar7);
                FUN_00416800(&local_c0,local_91,0x41);
                cVar4 = FUN_0043fc80(local_c0,&local_98);
                if (cVar4 == '\0') {
                  FUN_00442cd0(0,local_150,local_144);
                }
                if (*local_140 == 0x3a) {
                  local_140 = local_140 + 1;
                  local_134 = local_98;
                }
                else {
                  local_34 = local_98;
                }
              }
            }
            local_41 = *local_140 == 0x2d;
            if ((bool)local_41) {
              local_140 = local_140 + 1;
            }
            pbVar7 = local_140;
            if (*local_140 == 0x2a) {
              local_34 = -2;
              local_140 = local_140 + 1;
            }
            else {
              local_ae = (ushort)*local_140;
              cVar4 = FUN_004323a0(&local_ae);
              if (cVar4 != '\0') {
                for (; local_140 < local_128; local_140 = local_140 + 1) {
                  local_b0 = (ushort)*local_140;
                  cVar4 = FUN_004323a0(&local_b0);
                  if (cVar4 == '\0') break;
                }
                if (pbVar7 != local_140) {
                  FUN_00442530(local_91,pbVar7,(longlong)local_140 - (longlong)pbVar7);
                  FUN_00416800(&local_c8,local_91,0x41);
                  cVar4 = FUN_0043fc80(local_c8,&local_34);
                  if (cVar4 == '\0') {
                    FUN_00442cd0(0,local_150,local_144);
                  }
                }
              }
            }
            if (*local_140 == 0x2e) {
              pbVar7 = local_140 + 1;
              if (local_128 <= pbVar7) break;
              pbVar3 = pbVar7;
              if (*pbVar7 == 0x2a) {
                local_2c[0] = 0xfffffffe;
                local_140 = local_140 + 2;
              }
              else {
                while (local_140 = pbVar3, local_140 < local_128) {
                  local_b2 = (ushort)*local_140;
                  cVar4 = FUN_004323a0(&local_b2);
                  if (cVar4 == '\0') break;
                  pbVar3 = local_140 + 1;
                }
                FUN_00442530(local_91,pbVar7,(longlong)local_140 - (longlong)pbVar7);
                FUN_00416800(&local_d0,local_91,0x41);
                cVar4 = FUN_0043fc80(local_d0,local_2c);
                if (cVar4 == '\0') {
                  FUN_00442cd0(0,local_150,local_144);
                }
              }
            }
            else {
              local_2c[0] = 0xffffffff;
            }
            local_b4 = (ushort)*local_140;
            cVar4 = FUN_00432150(&local_b4);
            pbVar7 = local_140;
            if (cVar4 == '\0') break;
            local_2d = *local_140;
            if ((byte)(local_2d + 0x9f) < 0x1a) {
              local_2d = *local_140 ^ 0x20;
            }
            local_140 = local_140 + 1;
            if (local_34 == -2) {
              if (param_6 <= local_134) {
                FUN_00442cd0(1,local_150,local_144);
              }
              lVar8 = (longlong)local_134;
              bVar2 = *(byte *)(param_5 + 8 + lVar8 * 0x10);
              if (bVar2 < 0x20 && (1 << (bVar2 & 0x1f) & 0x10001U) != 0) {
                if (*(char *)(param_5 + 8 + lVar8 * 0x10) == '\0') {
                  local_34 = *(int *)(param_5 + lVar8 * 0x10);
                }
                else {
                  lVar8 = (longlong)local_134;
                  if ((0x7fffffff < **(longlong **)(param_5 + lVar8 * 0x10)) ||
                     (**(longlong **)(param_5 + lVar8 * 0x10) < -0x80000000)) {
                    FUN_00442c50(0,local_150,local_144);
                  }
                  local_34 = **(int **)(param_5 + lVar8 * 0x10);
                }
                if (local_34 < 0) {
                  local_41 = local_41 == '\0';
                  local_34 = -local_34;
                }
                local_134 = local_134 + 1;
              }
              else {
                FUN_00442cd0(0,local_150,local_144);
              }
            }
            if (local_2c[0] == 0xfffffffe) {
              if (param_6 <= local_134) {
                FUN_00442cd0(1,local_150,local_144);
              }
              lVar8 = (longlong)local_134;
              bVar2 = *(byte *)(param_5 + 8 + lVar8 * 0x10);
              if (bVar2 < 0x20 && (1 << (bVar2 & 0x1f) & 0x10001U) != 0) {
                if (*(char *)(param_5 + 8 + lVar8 * 0x10) == '\0') {
                  local_2c[0] = *(uint *)(param_5 + lVar8 * 0x10);
                }
                else {
                  lVar8 = (longlong)local_134;
                  if ((0x7fffffff < **(longlong **)(param_5 + lVar8 * 0x10)) ||
                     (**(longlong **)(param_5 + lVar8 * 0x10) < -0x80000000)) {
                    FUN_00442c50(0,local_150,local_144);
                  }
                  local_2c[0] = **(uint **)(param_5 + lVar8 * 0x10);
                }
                local_134 = local_134 + 1;
              }
              else {
                FUN_00442cd0(0,local_150,local_144);
              }
            }
            if (param_6 <= local_134) {
              FUN_00442cd0(1,local_150,local_144);
            }
            puVar1 = (ulonglong *)(param_5 + (longlong)local_134 * 0x10);
            local_a8 = (undefined8 *)*puVar1;
            local_a0 = puVar1[1];
            cVar4 = '\0';
            uVar9 = local_a0 & 0xff;
            if (uVar9 < 7) {
              if (uVar9 < 4) {
                if (uVar9 == 3) {
LAB_004451c4:
                  iVar5 = 0;
                  if ((local_2d == 0x47) || (local_2d == 0x45)) {
                    if (0x12 < local_2c[0]) {
                      local_2c[0] = 0xf;
                    }
                  }
                  else if ((0x12 < local_2c[0]) && (local_2c[0] = 2, local_2d == 0x4d)) {
                    local_2c[0] = (uint)*(byte *)(param_7 + 9);
                  }
                  if (local_2d < 0x48) {
                    if (local_2d == 0x47) {
                      local_178 = local_2c[0];
                      local_170 = 3;
                      local_168 = param_7;
                      iVar5 = FUN_004462f0(local_91,local_a8);
                    }
                    else if (local_2d == 0x45) {
                      local_178 = local_2c[0];
                      local_170 = 3;
                      local_168 = param_7;
                      iVar5 = FUN_004462f0(local_91,local_a8);
                    }
                    else {
                      if (local_2d != 0x46) goto LAB_00445399;
                      local_178 = 0x12;
                      local_170 = local_2c[0];
                      local_168 = param_7;
                      iVar5 = FUN_004462f0(local_91,local_a8);
                    }
                  }
                  else if (local_2d == 0x4d) {
                    local_178 = 0x12;
                    local_170 = local_2c[0];
                    local_168 = param_7;
                    iVar5 = FUN_004462f0(local_91,local_a8);
                  }
                  else if (local_2d == 0x4e) {
                    local_178 = 0x12;
                    local_170 = local_2c[0];
                    local_168 = param_7;
                    iVar5 = FUN_004462f0(local_91,local_a8);
                  }
                  else {
LAB_00445399:
                    FUN_00442cd0(0,local_150);
                  }
                  local_91[iVar5] = 0;
                  local_2c[0] = 0;
                  cVar4 = FUN_00444540(auStack_198,local_91,0xffffffff,0xffffffff);
                }
                else if (uVar9 == 0) {
                  if ((0x10 < (int)local_2c[0]) || (local_2c[0] == 0xffffffff)) {
                    local_2c[0] = 0;
                  }
                  if (local_2d == 0x44) {
                    FUN_0043f750(&local_d8,(ulonglong)local_a8 & 0xffffffff);
                    FUN_00415dd0(&local_50,local_d8);
                  }
                  else if (local_2d == 0x55) {
                    FUN_0043f7c0(&local_e0,(ulonglong)local_a8 & 0xffffffff);
                    FUN_00415dd0(&local_50,local_e0);
                  }
                  else if (local_2d == 0x58) {
                    FUN_0043fba0(&local_e8,(ulonglong)local_a8 & 0xffffffff);
                    FUN_00415dd0(&local_50,local_e8);
                  }
                  else {
                    FUN_00442cd0(0,local_150);
                  }
                  uVar10 = FUN_00415ab0(local_50);
                  cVar4 = FUN_00444540(auStack_198,uVar10,0xffffffff,0xffffffff);
                }
                else {
                  if (uVar9 == 1) goto LAB_00445051;
                  cVar4 = '\0';
                  if (uVar9 == 2) {
                    if (local_2d == 0x53) {
                      FUN_004153d0(&local_50,(ulonglong)local_a8 & 0xff,0);
                      uVar10 = FUN_00415ab0(local_50);
                      cVar4 = FUN_00444540(auStack_198,uVar10,local_2c[0],0xffffffff);
                    }
                    else {
                      FUN_00442cd0(0,local_150);
                    }
                  }
                }
              }
              else if (uVar9 == 4) {
                if (local_2d == 0x53) {
                  FUN_004154b0(&local_f0,local_a8,0);
                  uVar10 = FUN_00415ab0(local_f0);
                  cVar4 = FUN_00444540(auStack_198,uVar10,local_2c[0],0xffffffff);
                }
                else {
                  FUN_00442cd0(0,local_150);
                }
              }
              else if (uVar9 == 5) {
                if (local_2d == 0x50) {
                  FUN_0043fbc0(&local_108,local_a8);
                  FUN_00415dd0(&local_50,local_108);
                  uVar10 = FUN_00415ab0(local_50);
                  cVar4 = FUN_00444540(auStack_198,uVar10,0xffffffff,0xffffffff);
                }
                else {
                  FUN_00442cd0(0,local_150);
                }
              }
              else if (uVar9 == 6) {
                if (local_2d == 0x53) {
                  cVar4 = FUN_00444540(auStack_198,local_a8,local_2c[0],0xffffffff);
                }
                else {
                  FUN_00442cd0(0,local_150);
                }
              }
            }
            else if (uVar9 < 0xe) {
              if (uVar9 == 0xd) {
                if (local_2d == 0x53) {
                  FUN_00444750(auStack_198,&local_100,local_a8);
                  uVar10 = FUN_00415ab0(local_100);
                  cVar4 = FUN_00444540(auStack_198,uVar10,local_2c[0],0xffffffff);
                }
                else {
                  FUN_00442cd0(0,local_150);
                }
              }
              else {
                if (uVar9 - 7 < 4) goto LAB_00445051;
                if (uVar9 == 0xb) {
                  if (local_2d == 0x53) {
                    uVar6 = 0;
                    if (local_a8 != (undefined8 *)0x0) {
                      uVar6 = *(undefined4 *)((longlong)local_a8 - 4);
                    }
                    cVar4 = FUN_00444540(auStack_198,local_a8,local_2c[0],uVar6);
                  }
                  else {
                    FUN_00442cd0(0,local_150);
                  }
                }
                else if (uVar9 == 0xc) goto LAB_004451c4;
              }
            }
            else if (uVar9 - 0xe < 2) {
LAB_00445051:
              FUN_00442cd0(0,local_150);
            }
            else if (uVar9 == 0x10) {
              if ((0x20 < (int)local_2c[0]) || (local_2c[0] == 0xffffffff)) {
                local_2c[0] = 0;
              }
              if (local_2d == 0x44) {
                FUN_0043f780(&local_110,*local_a8);
                FUN_00415dd0(&local_50,local_110,0);
              }
              else if (local_2d == 0x55) {
                FUN_0043f7e0(&local_118,*local_a8);
                FUN_00415dd0(&local_50,local_118,0);
              }
              else if (local_2d == 0x58) {
                FUN_0043fbc0(&local_120,*local_a8);
                FUN_00415dd0(&local_50,local_120,0);
              }
              else {
                FUN_00442cd0(0,local_150);
              }
              uVar10 = FUN_00415ab0(local_50);
              cVar4 = FUN_00444540(auStack_198,uVar10,0xffffffff,0xffffffff);
            }
            else if (uVar9 == 0x11) {
              if (local_2d == 0x53) {
                FUN_00415460(&local_f8,local_a8,0);
                uVar10 = FUN_00415ab0(local_f8);
                cVar4 = FUN_00444540(auStack_198,uVar10,local_2c[0],0xffffffff);
              }
              else {
                FUN_00442cd0(0,local_150);
              }
            }
            if (cVar4 != '\0') {
              local_12c = (int)local_40 - (int)local_158;
              goto LAB_0044576a;
            }
          }
        }
        else {
          if (local_38 == 0) {
            local_12c = (int)local_40 - (int)local_158;
            goto LAB_0044576a;
          }
          *local_40 = *local_140;
          local_140 = local_140 + 1;
          local_40 = local_40 + 1;
          local_38 = local_38 + -1;
        }
        pbVar7 = local_140;
      } while (local_140 < local_128);
    }
    local_140 = pbVar7;
    local_12c = (int)local_40 - (int)local_158;
  }
LAB_0044576a:
  FUN_00414560(&local_120,4);
  FUN_00414590(&local_100,3);
  FUN_00414560(&local_e8,6);
  FUN_004144d0(&local_50);
  return local_12c;
}


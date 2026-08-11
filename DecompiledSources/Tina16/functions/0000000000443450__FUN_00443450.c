/* Ghidra address: 00443450 */
/* Ghidra symbol: FUN_00443450 */


undefined4
FUN_00443450(ushort *param_1,uint param_2,ushort *param_3,uint param_4,longlong param_5,int param_6,
            longlong param_7)

{
  ulonglong *puVar1;
  byte bVar2;
  ushort *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined1 auStack_198 [32];
  uint local_178;
  uint local_170;
  longlong local_168;
  ushort *local_150;
  ushort *local_148;
  uint local_13c;
  ushort *local_138;
  int local_12c;
  uint local_128;
  undefined4 local_124;
  ushort *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  ulonglong local_e0;
  int local_d8;
  ushort local_d2 [65];
  longlong local_50;
  char local_41;
  ushort *local_40;
  uint local_38;
  int local_34;
  ushort local_2e;
  uint local_2c [3];
  
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_50 = 0;
  local_150 = param_1;
  local_148 = param_3;
  local_13c = param_4;
  local_128 = param_2;
  if ((param_1 == (ushort *)0x0) || (param_3 == (ushort *)0x0)) {
    local_124 = 0;
  }
  else {
    local_12c = -1;
    param_6 = param_6 + 1;
    local_38 = param_2;
    if (param_2 < 0x7fffffff) {
      local_38 = param_2 * 2;
    }
    local_120 = param_3 + param_4;
    puVar7 = param_3;
    local_138 = param_3;
    local_40 = param_1;
    if (param_3 < local_120) {
      do {
        if (*local_138 == 0x25) {
          local_138 = local_138 + 1;
          puVar7 = local_138;
          if (local_120 <= local_138) break;
          if (*local_138 == 0x25) {
            if (local_38 == 0) {
              FUN_00442c50(0,local_148);
            }
            *local_40 = *local_138;
            local_138 = local_138 + 1;
            local_40 = local_40 + 1;
            local_38 = local_38 - 2;
          }
          else {
            local_34 = -1;
            local_12c = local_12c + 1;
            cVar4 = FUN_004323a0(local_138);
            puVar7 = local_138;
            if (cVar4 == '\0') {
              if (*local_138 == 0x3a) {
                local_12c = 0;
                local_138 = local_138 + 1;
              }
            }
            else {
              while ((local_138 < local_120 && (cVar4 = FUN_004323a0(local_138), cVar4 != '\0'))) {
                local_138 = local_138 + 1;
              }
              if (puVar7 != local_138) {
                FUN_00442580(local_d2,puVar7,
                             ((longlong)local_138 - (longlong)puVar7) / 2 & 0xffffffff);
                FUN_00416830(&local_f0,local_d2,0x41);
                cVar4 = FUN_0043fc80(local_f0,&local_d8);
                if (cVar4 == '\0') {
                  FUN_00442c50(0,local_148,local_13c);
                }
                if (*local_138 == 0x3a) {
                  local_138 = local_138 + 1;
                  local_12c = local_d8;
                }
                else {
                  local_34 = local_d8;
                }
              }
            }
            local_41 = *local_138 == 0x2d;
            if ((bool)local_41) {
              local_138 = local_138 + 1;
            }
            puVar7 = local_138;
            if (*local_138 == 0x2a) {
              local_34 = -2;
              local_138 = local_138 + 1;
            }
            else {
              cVar4 = FUN_004323a0(local_138);
              if (cVar4 != '\0') {
                while ((local_138 < local_120 && (cVar4 = FUN_004323a0(local_138), cVar4 != '\0')))
                {
                  local_138 = local_138 + 1;
                }
                if (puVar7 != local_138) {
                  FUN_00442580(local_d2,puVar7,
                               ((longlong)local_138 - (longlong)puVar7) / 2 & 0xffffffff);
                  FUN_00416830(&local_f8,local_d2,0x41);
                  cVar4 = FUN_0043fc80(local_f8,&local_34);
                  if (cVar4 == '\0') {
                    FUN_00442c50(0,local_148,local_13c);
                  }
                }
              }
            }
            if (*local_138 == 0x2e) {
              puVar7 = local_138 + 1;
              if (local_120 <= puVar7) break;
              puVar3 = puVar7;
              if (*puVar7 == 0x2a) {
                local_2c[0] = 0xfffffffe;
                local_138 = local_138 + 2;
              }
              else {
                while ((local_138 = puVar3, local_138 < local_120 &&
                       (cVar4 = FUN_004323a0(local_138), cVar4 != '\0'))) {
                  puVar3 = local_138 + 1;
                }
                FUN_00442580(local_d2,puVar7,
                             ((longlong)local_138 - (longlong)puVar7) / 2 & 0xffffffff);
                FUN_00416830(&local_100,local_d2,0x41);
                cVar4 = FUN_0043fc80(local_100,local_2c);
                if (cVar4 == '\0') {
                  local_2c[0] = 0xffffffff;
                }
              }
            }
            else {
              local_2c[0] = 0xffffffff;
            }
            cVar4 = FUN_00432150(local_138);
            puVar7 = local_138;
            if (cVar4 == '\0') break;
            local_2e = *local_138;
            if ((ushort)(local_2e - 0x61) < 0x1a) {
              local_2e = *local_138 ^ 0x20;
            }
            local_138 = local_138 + 1;
            if (local_34 == -2) {
              if (param_6 <= local_12c) {
                FUN_00442c50(1,local_148,local_13c);
              }
              lVar8 = (longlong)local_12c;
              bVar2 = *(byte *)(param_5 + 8 + lVar8 * 0x10);
              if (bVar2 < 0x20 && (1 << (bVar2 & 0x1f) & 0x10001U) != 0) {
                if (*(char *)(param_5 + 8 + lVar8 * 0x10) == '\0') {
                  local_34 = *(int *)(param_5 + lVar8 * 0x10);
                }
                else {
                  lVar8 = (longlong)local_12c;
                  if ((0x7fffffff < **(longlong **)(param_5 + lVar8 * 0x10)) ||
                     (**(longlong **)(param_5 + lVar8 * 0x10) < -0x80000000)) {
                    FUN_00442c50(0,local_148,local_13c);
                  }
                  local_34 = **(int **)(param_5 + lVar8 * 0x10);
                }
                if (local_34 < 0) {
                  local_41 = local_41 == '\0';
                  local_34 = -local_34;
                }
                local_12c = local_12c + 1;
              }
              else {
                FUN_00442c50(0,local_148,local_13c);
              }
            }
            if (local_2c[0] == 0xfffffffe) {
              if (param_6 <= local_12c) {
                FUN_00442c50(1,local_148,local_13c);
              }
              lVar8 = (longlong)local_12c;
              bVar2 = *(byte *)(param_5 + 8 + lVar8 * 0x10);
              if (bVar2 < 0x20 && (1 << (bVar2 & 0x1f) & 0x10001U) != 0) {
                if (*(char *)(param_5 + 8 + lVar8 * 0x10) == '\0') {
                  local_2c[0] = *(uint *)(param_5 + lVar8 * 0x10);
                }
                else {
                  lVar8 = (longlong)local_12c;
                  if ((0x7fffffff < **(longlong **)(param_5 + lVar8 * 0x10)) ||
                     (**(longlong **)(param_5 + lVar8 * 0x10) < -0x80000000)) {
                    FUN_00442c50(0,local_148,local_13c);
                  }
                  local_2c[0] = **(uint **)(param_5 + lVar8 * 0x10);
                }
                local_12c = local_12c + 1;
              }
              else {
                FUN_00442c50(0,local_148,local_13c);
              }
            }
            if (param_6 <= local_12c) {
              FUN_00442c50(1,local_148,local_13c);
            }
            puVar1 = (ulonglong *)(param_5 + (longlong)local_12c * 0x10);
            local_e8 = (undefined8 *)*puVar1;
            local_e0 = puVar1[1];
            cVar4 = '\0';
            uVar9 = local_e0 & 0xff;
            if (uVar9 < 10) {
              if (uVar9 == 9) {
LAB_00443d67:
                if (local_2e == 0x53) {
                  if ((char)local_e0 == '\x02') {
                    FUN_00416780(&local_50,(ulonglong)local_e8 & 0xff);
                  }
                  else {
                    FUN_00416780(&local_50,(ulonglong)local_e8 & 0xffff);
                  }
                  uVar10 = FUN_00416740(local_50);
                  cVar4 = FUN_004431e0(auStack_198,uVar10,local_2c[0],0xffffffff);
                }
                else {
                  FUN_00442c50(0,local_148);
                }
              }
              else if (uVar9 < 5) {
                if (uVar9 == 4) {
                  if (local_2e == 0x53) {
                    FUN_004169a0(&local_110,local_e8);
                    uVar10 = FUN_00416740(local_110);
                    cVar4 = FUN_004431e0(auStack_198,uVar10,local_2c[0],0xffffffff);
                  }
                  else {
                    FUN_00442c50(0,local_148);
                  }
                }
                else if (uVar9 == 0) {
                  if ((0x10 < (int)local_2c[0]) || (local_2c[0] == 0xffffffff)) {
                    local_2c[0] = 0;
                  }
                  if (local_2e == 0x44) {
                    FUN_0043f750(&local_50,(ulonglong)local_e8 & 0xffffffff);
                  }
                  else if (local_2e == 0x55) {
                    FUN_0043f7c0(&local_50,(ulonglong)local_e8 & 0xffffffff);
                  }
                  else if (local_2e == 0x58) {
                    FUN_0043fba0(&local_50,(ulonglong)local_e8 & 0xffffffff);
                  }
                  else {
                    FUN_00442c50(0,local_148);
                  }
                  uVar10 = FUN_00416740(local_50);
                  cVar4 = FUN_004431e0(auStack_198,uVar10,0xffffffff,0xffffffff);
                }
                else if (uVar9 == 1) {
LAB_00443c9d:
                  FUN_00442c50(0,local_148);
                }
                else {
                  if (uVar9 == 2) goto LAB_00443d67;
                  cVar4 = '\0';
                  if (uVar9 == 3) goto LAB_00443de9;
                }
              }
              else if (uVar9 == 5) {
                if (local_2e == 0x50) {
                  FUN_0043fbc0(&local_50,local_e8,0x10);
                  uVar10 = FUN_00416740(local_50);
                  cVar4 = FUN_004431e0(auStack_198,uVar10,0xffffffff,0xffffffff);
                }
                else {
                  FUN_00442c50(0,local_148);
                }
              }
              else if (uVar9 == 6) {
                if (local_2e == 0x53) {
                  FUN_004167a0(&local_108,local_e8);
                  uVar10 = FUN_00416740(local_108);
                  cVar4 = FUN_004431e0(auStack_198,uVar10,local_2c[0],0xffffffff);
                }
                else {
                  FUN_00442c50(0,local_148);
                }
              }
              else if (uVar9 - 7 < 2) goto LAB_00443c9d;
            }
            else if (uVar9 < 0xf) {
              if (uVar9 == 0xe) goto LAB_00443c9d;
              if (uVar9 == 10) {
                if (local_2e == 0x53) {
                  cVar4 = FUN_004431e0(auStack_198,local_e8,local_2c[0],0xffffffff);
                }
                else {
                  FUN_00442c50(0,local_148);
                }
              }
              else if (uVar9 == 0xb) {
                if (local_2e == 0x53) {
                  FUN_00416880(&local_50,local_e8);
                  uVar11 = 0;
                  if (local_50 != 0) {
                    uVar11 = *(undefined4 *)(local_50 + -4);
                  }
                  uVar10 = FUN_00416740(local_50);
                  cVar4 = FUN_004431e0(auStack_198,uVar10,local_2c[0],uVar11);
                }
                else {
                  FUN_00442c50(0,local_148);
                }
              }
              else if (uVar9 == 0xc) {
LAB_00443de9:
                iVar5 = 0;
                if ((local_2e == 0x47) || (local_2e == 0x45)) {
                  if (0x12 < local_2c[0]) {
                    local_2c[0] = 0xf;
                  }
                }
                else if ((0x12 < local_2c[0]) && (local_2c[0] = 2, local_2e == 0x4d)) {
                  local_2c[0] = (uint)*(byte *)(param_7 + 9);
                }
                if (local_2e < 0x48) {
                  if (local_2e == 0x47) {
                    local_178 = local_2c[0];
                    local_170 = 3;
                    local_168 = param_7;
                    iVar5 = FUN_004462b0(local_d2,local_e8);
                  }
                  else if (local_2e == 0x45) {
                    local_178 = local_2c[0];
                    local_170 = 3;
                    local_168 = param_7;
                    iVar5 = FUN_004462b0(local_d2,local_e8);
                  }
                  else {
                    if (local_2e != 0x46) goto LAB_00443fc1;
                    local_178 = 0x12;
                    local_170 = local_2c[0];
                    local_168 = param_7;
                    iVar5 = FUN_004462b0(local_d2,local_e8);
                  }
                }
                else if (local_2e == 0x4d) {
                  local_178 = 0x12;
                  local_170 = local_2c[0];
                  local_168 = param_7;
                  iVar5 = FUN_004462b0(local_d2,local_e8);
                }
                else if (local_2e == 0x4e) {
                  local_178 = 0x12;
                  local_170 = local_2c[0];
                  local_168 = param_7;
                  iVar5 = FUN_004462b0(local_d2,local_e8);
                }
                else {
LAB_00443fc1:
                  FUN_00442c50(0,local_148);
                }
                local_d2[iVar5] = 0;
                local_2c[0] = 0;
                cVar4 = FUN_004431e0(auStack_198,local_d2,0xffffffff,0xffffffff);
              }
              else if (uVar9 == 0xd) {
                if (local_2e == 0x53) {
                  FUN_004433f0(auStack_198,&local_118,local_e8);
                  uVar10 = FUN_00416740(local_118);
                  cVar4 = FUN_004431e0(auStack_198,uVar10,local_2c[0],0xffffffff);
                }
                else {
                  FUN_00442c50(0,local_148);
                }
              }
            }
            else if (uVar9 == 0xf) {
              if (local_2e == 0x53) {
                uVar6 = 0;
                if (local_e8 != (undefined8 *)0x0) {
                  uVar6 = *(uint *)((longlong)local_e8 - 4) >> 1;
                }
                cVar4 = FUN_004431e0(auStack_198,local_e8,local_2c[0],uVar6);
              }
              else {
                FUN_00442c50(0,local_148,local_13c);
              }
            }
            else if (uVar9 == 0x10) {
              if ((0x20 < (int)local_2c[0]) || (local_2c[0] == 0xffffffff)) {
                local_2c[0] = 0;
              }
              if (local_2e == 0x44) {
                FUN_0043f780(&local_50,*local_e8);
              }
              else if (local_2e == 0x55) {
                FUN_0043f7e0(&local_50,*local_e8);
              }
              else if (local_2e == 0x58) {
                FUN_0043fbc0(&local_50,*local_e8,0);
              }
              else {
                FUN_00442c50(0,local_148,local_13c);
              }
              uVar10 = FUN_00416740(local_50);
              cVar4 = FUN_004431e0(auStack_198,uVar10,0xffffffff,0xffffffff);
            }
            else if (uVar9 == 0x11) {
              if (local_2e == 0x53) {
                uVar11 = 0;
                if (local_e8 != (undefined8 *)0x0) {
                  uVar11 = *(undefined4 *)((longlong)local_e8 - 4);
                }
                cVar4 = FUN_004431e0(auStack_198,local_e8,local_2c[0],uVar11);
              }
              else {
                FUN_00442c50(0,local_148);
              }
            }
            if (cVar4 != '\0') {
              local_124 = (undefined4)(((longlong)local_40 - (longlong)local_150) / 2);
              goto LAB_00444435;
            }
          }
        }
        else {
          if (local_38 == 0) {
            local_124 = (undefined4)(((longlong)local_40 - (longlong)local_150) / 2);
            goto LAB_00444435;
          }
          *local_40 = *local_138;
          local_138 = local_138 + 1;
          local_40 = local_40 + 1;
          local_38 = local_38 - 2;
        }
        puVar7 = local_138;
      } while (local_138 < local_120);
    }
    local_138 = puVar7;
    local_124 = (undefined4)(((longlong)local_40 - (longlong)local_150) / 2);
  }
LAB_00444435:
  FUN_00414560(&local_118,6);
  FUN_00414480(&local_50);
  return local_124;
}


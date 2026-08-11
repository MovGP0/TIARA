/* Ghidra address: 018d4ac0 */
/* Ghidra symbol: FUN_018d4ac0 */


void FUN_018d4ac0(longlong param_1,longlong *param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
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
  undefined8 local_180;
  undefined8 local_178;
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
  undefined1 *local_120;
  char local_10b;
  char local_10a;
  char local_109;
  undefined8 local_108;
  char local_fa;
  char local_f9;
  undefined8 local_f8;
  char local_eb;
  char local_ea;
  char local_e9;
  char local_e8;
  char local_e7;
  char local_e6;
  char local_e5;
  char local_e4;
  char local_e3;
  char local_e2;
  char local_e1;
  undefined8 local_e0;
  undefined8 local_d8;
  short *local_d0;
  char local_c1;
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_120 = auStack_218;
  local_1f0 = 0;
  local_1f8 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_d0 = (short *)0x0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_1c = 1;
  iVar3 = FUN_00414cc0(*param_2);
  if (iVar3 != 0) {
    local_10 = FUN_004b6930(&PTR_FUN_00478280,1);
    local_18 = FUN_004b6930(&PTR_FUN_00478280,1);
LAB_018d6139:
    iVar3 = FUN_00414cc0(*param_2);
    if (iVar3 < local_1c) goto code_r0x018d615b;
    local_c1 = '\x01';
    if ((*(char *)(param_1 + 8) != '\0') &&
       (*(short *)(*param_2 + -2 + (longlong)local_1c * 2) == 0x3c)) {
      iVar3 = FUN_00414cc0(*param_2);
      if ((local_1c + 2 <= iVar3) &&
         (*(short *)(*param_2 + -2 + (longlong)(local_1c + 2) * 2) == 0x3e)) {
        FUN_00414480(&local_28);
        FUN_00416780(&local_128,*(undefined2 *)(*param_2 + -2 + (longlong)(local_1c + 1) * 2));
        local_d8 = local_128;
        FUN_0043e5a0(&local_28,local_128);
        FUN_004168e0(&local_d0,local_28);
        FUN_00414480(&local_28);
        sVar1 = *local_d0;
        if (sVar1 == 0x42) {
          *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 1;
        }
        else if (sVar1 == 0x49) {
          *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 2;
        }
        else if (sVar1 == 0x55) {
          *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 4;
        }
        else {
          local_c1 = '\0';
        }
        if (local_c1 == '\0') goto LAB_018d611c;
        FUN_004168b0(&local_130,local_d0);
        FUN_018d43e0(auStack_218,local_130,0);
        FUN_00416490(param_2,(longlong)local_1c);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 3;
        goto LAB_018d6139;
      }
      iVar3 = FUN_00414cc0(*param_2);
      if ((iVar3 < local_1c + 1) ||
         (*(short *)(*param_2 + -2 + (longlong)(local_1c + 1) * 2) != 0x2f)) {
        iVar3 = FUN_00414cc0(*param_2);
        if ((iVar3 < local_1c + 4) ||
           (*(short *)(*param_2 + -2 + (longlong)(local_1c + 4) * 2) != 0x3e)) {
          iVar3 = FUN_00414cc0(*param_2);
          if ((iVar3 < local_1c + 5) ||
             (*(short *)(*param_2 + -2 + (longlong)(local_1c + 5) * 2) != 0x3e)) {
            iVar3 = FUN_00414cc0(*param_2);
            if (iVar3 < local_1c + 7) {
              local_f9 = '\0';
            }
            else {
              FUN_00414480(&local_90);
              FUN_00416780(&local_1a0,*(undefined2 *)(*param_2 + -2 + (longlong)(local_1c + 1) * 2))
              ;
              local_f8 = local_1a0;
              FUN_0043e5a0(&local_90,local_1a0);
              iVar3 = FUN_00416db0(local_90,&DAT_018d66d0);
              local_f9 = iVar3 == 0;
              FUN_00414480(&local_90);
            }
            if (local_f9 == '\0') {
              iVar3 = FUN_00414cc0(*param_2);
              if (iVar3 < local_1c + 1) {
                local_109 = '\0';
              }
              else {
                FUN_00414480(&local_a0);
                FUN_00416780(&local_1b0,
                             *(undefined2 *)(*param_2 + -2 + (longlong)(local_1c + 1) * 2));
                local_108 = local_1b0;
                FUN_0043e5a0(&local_a0,local_1b0);
                iVar3 = FUN_00416db0(local_a0,&DAT_018d66e0);
                local_109 = iVar3 == 0;
                FUN_00414480(&local_a0);
              }
              if (local_109 == '\0') {
                FUN_00414520(&local_b0);
                FUN_0043e840(&local_b0,*param_2);
                FUN_004168b0(&local_1c0,local_b0);
                iVar3 = FUN_004170c0(L"FONT COLOR",local_1c0,1);
                local_10b = iVar3 == local_1c + 1;
                FUN_00414520(&local_b0);
                if (local_10b != '\0') {
                  local_bc = local_1c + 0xb;
                  while ((iVar3 = FUN_00414cc0(*param_2), local_bc <= iVar3 &&
                         (*(short *)(*param_2 + -2 + (longlong)local_bc * 2) != 0x3d))) {
                    local_bc = local_bc + 1;
                  }
                  do {
                    local_bc = local_bc + 1;
                    iVar3 = FUN_00414cc0(*param_2);
                    if (iVar3 < local_bc) break;
                  } while (*(short *)(*param_2 + -2 + (longlong)local_bc * 2) == 0x20);
                  local_c0 = local_bc;
                  while ((iVar3 = FUN_00414cc0(*param_2), local_bc <= iVar3 &&
                         (*(short *)(*param_2 + -2 + (longlong)local_bc * 2) != 0x3e))) {
                    local_bc = local_bc + 1;
                  }
                  FUN_00414480(&local_b8);
                  FUN_004168b0(&local_1c8,*param_2);
                  FUN_00416dc0(&local_b8,local_1c8,(longlong)local_c0,
                               (longlong)(local_bc - local_c0));
                  FUN_004168e0(&local_d0,local_b8);
                  FUN_00414480(&local_b8);
                  FUN_00416020(&local_1d0,L"COLOR = ",local_d0);
                  FUN_004168b0(&local_1d8,local_1d0);
                  FUN_018d43e0(auStack_218,L"FONT",local_1d8);
                  iVar3 = FUN_00416420(local_d0,0);
                  if (iVar3 != 0) {
                    iVar3 = FUN_00414cc0(local_d0);
                    if (((3 < iVar3) && (*local_d0 == 0x22)) &&
                       (iVar3 = FUN_00414cc0(local_d0), local_d0[(longlong)iVar3 + -1] == 0x22)) {
                      iVar3 = FUN_00414cc0(local_d0);
                      FUN_00416430(&local_d0,local_d0,2,iVar3 + -2);
                    }
                    if (*local_d0 == 0x23) {
                      iVar3 = FUN_00414cc0(local_d0);
                      FUN_00416430(&local_1e0,local_d0,2,iVar3 + -1);
                      FUN_00416020(&local_d0,&DAT_018d6724,local_1e0);
                      FUN_004168b0(&local_1e8,local_d0);
                      uVar5 = FUN_0043fc00(local_1e8);
                      *(uint *)(param_1 + 0x10) = uVar5;
                      *(uint *)(param_1 + 0x10) =
                           (uVar5 & 0xff0000) / 0x10000 + (uVar5 & 0xff) * 0x10000 +
                           (uVar5 & 0xff00);
                      FUN_00416490(param_2,(longlong)local_1c,(longlong)((local_bc - local_1c) + 1))
                      ;
                      *(int *)(param_1 + 0x28) =
                           *(int *)(param_1 + 0x28) + (local_bc - local_1c) + 1;
                      goto LAB_018d6139;
                    }
                    FUN_00416020(&local_1f0,&PTR_DAT_018d672c,local_d0);
                    FUN_004168b0(&local_1f8,local_1f0);
                    cVar2 = FUN_005fbfa0(local_1f8,param_1 + 0x10);
                    if (cVar2 != '\0') {
                      FUN_00416490(param_2,(longlong)local_1c,(longlong)((local_bc - local_1c) + 1))
                      ;
                      *(int *)(param_1 + 0x28) =
                           *(int *)(param_1 + 0x28) + (local_bc - local_1c) + 1;
                      goto LAB_018d6139;
                    }
                  }
                }
              }
              else {
                FUN_00414520(&local_a8);
                FUN_0043e840(&local_a8,*param_2);
                FUN_004168b0(&local_1b8,local_a8);
                iVar3 = FUN_004170c0(L"STRIKE>",local_1b8,1);
                local_10a = iVar3 == local_1c + 1;
                FUN_00414520(&local_a8);
                if (local_10a != '\0') {
                  FUN_018d43e0(auStack_218,L"STRIKE",0);
                  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 8;
                  FUN_00416490(param_2,(longlong)local_1c,8);
                  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 8;
                  goto LAB_018d6139;
                }
              }
            }
            else {
              FUN_00414520(&local_98);
              FUN_0043e840(&local_98,*param_2);
              FUN_004168b0(&local_1a8,local_98);
              iVar3 = FUN_004170c0(L"NOWRAP>",local_1a8,1);
              local_fa = iVar3 == local_1c + 1;
              FUN_00414520(&local_98);
              if (local_fa != '\0') {
                FUN_018d43e0(auStack_218,L"NOWRAP",0);
                *(undefined1 *)(param_1 + 0x31) = 1;
                FUN_00416490(param_2,(longlong)local_1c,8);
                *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 8;
                goto LAB_018d6139;
              }
            }
          }
          else {
            local_c1 = '\0';
            FUN_00414520(&local_78);
            FUN_0043e840(&local_78,*param_2);
            FUN_004168b0(&local_188,local_78);
            iVar3 = FUN_004170c0(L"/SUB>",local_188,1);
            local_e9 = iVar3 == local_1c + 1;
            FUN_00414520(&local_78);
            if (local_e9 == '\0') {
              FUN_00414520(&local_80);
              FUN_0043e840(&local_80,*param_2);
              FUN_004168b0(&local_190,local_80);
              iVar3 = FUN_004170c0(L"/SUP>",local_190,1);
              local_ea = iVar3 == local_1c + 1;
              FUN_00414520(&local_80);
            }
            else {
              local_ea = '\x01';
            }
            if (local_ea != '\0') {
              FUN_00414520(&local_88);
              FUN_0043e840(&local_88,*param_2);
              FUN_004168b0(&local_198,local_88);
              iVar3 = FUN_004170c0(L"/SUB>",local_198,1);
              local_eb = iVar3 == local_1c + 1;
              FUN_00414520(&local_88);
              if (local_eb == '\0') {
                FUN_018d4630(auStack_218,&DAT_018d668c,0);
              }
              else {
                FUN_018d4630(auStack_218,&DAT_018d6678,0);
              }
              *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x18);
              *(undefined4 *)(param_1 + 0xc) = 0;
              local_c1 = '\x01';
              *(undefined1 *)(param_1 + 0x44) = 0;
            }
            if (local_c1 != '\0') {
              FUN_00416490(param_2,(longlong)local_1c,6);
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 6;
              goto LAB_018d6139;
            }
          }
        }
        else {
          local_c1 = '\0';
          FUN_00414520(&local_68);
          FUN_0043e840(&local_68,*param_2);
          FUN_004168b0(&local_178,local_68);
          iVar3 = FUN_004170c0(L"SUB>",local_178,1);
          local_e7 = iVar3 == local_1c + 1;
          FUN_00414520(&local_68);
          if (local_e7 == '\0') {
            FUN_00414520(&local_70);
            FUN_0043e840(&local_70,*param_2);
            FUN_004168b0(&local_180,local_70);
            iVar3 = FUN_004170c0(L"SUP>",local_180,1);
            local_e8 = iVar3 == local_1c + 1;
            FUN_00414520(&local_70);
            if (local_e8 != '\0') {
              FUN_018d43e0(auStack_218,&DAT_018d668c,0);
              uVar4 = FUN_0040c770((double)*(int *)(param_1 + 0x18) / 1.5);
              *(undefined4 *)(param_1 + 0x2c) = uVar4;
              *(undefined4 *)(param_1 + 0xc) = 0;
              local_c1 = '\x01';
              *(undefined1 *)(param_1 + 0x44) = 2;
            }
          }
          else {
            FUN_018d43e0(auStack_218,&DAT_018d6678,0);
            uVar4 = FUN_0040c770((double)*(int *)(param_1 + 0x18) / 1.5);
            *(undefined4 *)(param_1 + 0x2c) = uVar4;
            *(undefined4 *)(param_1 + 0xc) = 1;
            local_c1 = '\x01';
            *(undefined1 *)(param_1 + 0x44) = 1;
          }
          if (local_c1 != '\0') {
            FUN_00416490(param_2,(longlong)local_1c,5);
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 5;
            goto LAB_018d6139;
          }
        }
      }
      else {
        iVar3 = FUN_00414cc0(*param_2);
        if ((local_1c + 3 <= iVar3) &&
           (*(short *)(*param_2 + -2 + (longlong)(local_1c + 3) * 2) == 0x3e)) {
          FUN_00414480(&local_30);
          FUN_00416780(&local_138,*(undefined2 *)(*param_2 + -2 + (longlong)(local_1c + 2) * 2));
          local_e0 = local_138;
          FUN_0043e5a0(&local_30,local_138);
          FUN_004168e0(&local_d0,local_30);
          FUN_00414480(&local_30);
          sVar1 = *local_d0;
          if (sVar1 == 0x42) {
            *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfe;
          }
          else if (sVar1 == 0x49) {
            *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfd;
          }
          else if (sVar1 == 0x55) {
            *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfb;
          }
          else {
            local_c1 = '\0';
          }
          if (local_c1 == '\0') goto LAB_018d611c;
          FUN_004168b0(&local_140,local_d0);
          FUN_018d4630(auStack_218,local_140,0);
          FUN_00416490(param_2,(longlong)local_1c);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 4;
          goto LAB_018d6139;
        }
        FUN_00414520(&local_38);
        FUN_0043e840(&local_38,*param_2);
        FUN_004168b0(&local_148,local_38);
        iVar3 = FUN_004170c0(L"STRIKE>",local_148,1);
        local_e1 = iVar3 == local_1c + 2;
        FUN_00414520(&local_38);
        if (local_e1 != '\0') {
          FUN_018d4630(auStack_218,L"STRIKE",0);
          *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xf7;
          FUN_00416490(param_2,(longlong)local_1c,9);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 9;
          goto LAB_018d6139;
        }
        FUN_00414520(&local_40);
        FUN_0043e840(&local_40,*param_2);
        FUN_004168b0(&local_150,local_40);
        iVar3 = FUN_004170c0(L"NOWRAP>",local_150,1);
        local_e2 = iVar3 == local_1c + 2;
        FUN_00414520(&local_40);
        if (local_e2 != '\0') {
          FUN_018d4630(auStack_218,L"NOWRAP",0);
          *(undefined1 *)(param_1 + 0x31) = 0;
          FUN_00416490(param_2,(longlong)local_1c,9);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 9;
          goto LAB_018d6139;
        }
        FUN_00414520(&local_48);
        FUN_0043e840(&local_48,*param_2);
        FUN_004168b0(&local_158,local_48);
        iVar3 = FUN_004170c0(L"FONT>",local_158,1);
        local_e3 = iVar3 == local_1c + 2;
        FUN_00414520(&local_48);
        if (local_e3 != '\0') {
          FUN_018d4630(auStack_218,L"FONT",0);
          *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x14);
          FUN_00416490(param_2,(longlong)local_1c,7);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 7;
          goto LAB_018d6139;
        }
        FUN_00414520(&local_50);
        FUN_0043e840(&local_50,*param_2);
        FUN_004168b0(&local_160,local_50);
        iVar3 = FUN_004170c0(L"SUB>",local_160,1);
        local_e4 = iVar3 == local_1c + 2;
        FUN_00414520(&local_50);
        if (local_e4 == '\0') {
          FUN_00414520(&local_58);
          FUN_0043e840(&local_58,*param_2);
          FUN_004168b0(&local_168,local_58);
          iVar3 = FUN_004170c0(L"SUP>",local_168,1);
          local_e5 = iVar3 == local_1c + 2;
          FUN_00414520(&local_58);
        }
        else {
          local_e5 = '\x01';
        }
        if (local_e5 != '\0') {
          FUN_00414520(&local_60);
          FUN_0043e840(&local_60,*param_2);
          FUN_004168b0(&local_170,local_60);
          iVar3 = FUN_004170c0(L"SUB>",local_170,1);
          local_e6 = iVar3 == local_1c + 2;
          FUN_00414520(&local_60);
          if (local_e6 == '\0') {
            FUN_018d4630(auStack_218,&DAT_018d668c,0);
          }
          else {
            FUN_018d4630(auStack_218,&DAT_018d6678,0);
          }
          *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x18);
          *(undefined4 *)(param_1 + 0xc) = 0;
          *(undefined1 *)(param_1 + 0x44) = 0;
          FUN_00416490(param_2,(longlong)local_1c,6);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 6;
          goto LAB_018d6139;
        }
      }
    }
LAB_018d611c:
    FUN_018d4950(auStack_218);
    local_1c = local_1c + 1;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    goto LAB_018d6139;
  }
LAB_018d61a2:
  FUN_00414480(&local_1f8);
  FUN_00414520(&local_1f0);
  FUN_00414480(&local_1e8);
  FUN_00414520(&local_1e0);
  FUN_00414480(&local_1d8);
  FUN_00414520(&local_1d0);
  FUN_00414560(&local_1c8,0x15);
  FUN_00414520(&local_d0);
  FUN_00414480(&local_b8);
  FUN_004145c0(&local_b0,2);
  FUN_00414480(&local_a0);
  FUN_00414520(&local_98);
  FUN_00414480(&local_90);
  FUN_004145c0(&local_88,0xb);
  FUN_00414560(&local_30,2);
  return;
code_r0x018d615b:
  iVar3 = FUN_00414cc0(*param_2);
  if (iVar3 == 0) {
    FUN_018d4950(auStack_218);
    FUN_00414b90(param_2,&LAB_018d6738);
  }
  FUN_00410f20(local_10);
  FUN_00410f20(local_18);
  goto LAB_018d61a2;
}


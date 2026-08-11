/* Ghidra address: 00c41850 */
/* Ghidra symbol: FUN_00c41850 */


void FUN_00c41850(longlong param_1)

{
  undefined2 uVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 auStack_218 [40];
  wchar_t *local_1f0;
  wchar_t *local_1e8;
  undefined *local_1e0;
  undefined8 local_1d8;
  wchar_t *local_1d0;
  wchar_t *local_1c8;
  undefined *local_1c0;
  undefined1 *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_190;
  wchar_t *local_188;
  wchar_t *local_180;
  undefined *local_178;
  undefined1 *local_170;
  bool local_162;
  bool local_161;
  wchar_t *local_160;
  bool local_152;
  bool local_151;
  wchar_t *local_150;
  bool local_141;
  undefined *local_140;
  bool local_132;
  bool local_131;
  wchar_t *local_130;
  bool local_122;
  bool local_121;
  wchar_t *local_120;
  bool local_111;
  undefined *local_110;
  bool local_102;
  bool local_101;
  undefined1 *local_100;
  bool local_f1;
  undefined *local_f0;
  bool local_e2;
  bool local_e1;
  undefined *local_e0;
  bool local_d2;
  bool local_d1;
  undefined *local_d0;
  bool local_c2;
  bool local_c1;
  undefined *local_c0;
  bool local_b2;
  bool local_b1;
  undefined *local_b0;
  bool local_a2;
  bool local_a1;
  wchar_t *local_a0;
  bool local_92;
  bool local_91;
  wchar_t *local_90;
  bool local_81;
  undefined *local_80;
  int local_6c;
  int local_68;
  char local_62;
  char local_61;
  undefined8 *local_60;
  undefined8 *local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  
  local_170 = auStack_218;
  local_1f0 = (wchar_t *)0x0;
  local_1e8 = (wchar_t *)0x0;
  local_1e0 = (undefined *)0x0;
  local_1d8 = 0;
  local_1d0 = (wchar_t *)0x0;
  local_1c8 = (wchar_t *)0x0;
  local_1c0 = (undefined *)0x0;
  local_1b8 = (undefined1 *)0x0;
  local_1b0 = (undefined *)0x0;
  local_1a8 = (undefined *)0x0;
  local_1a0 = (undefined *)0x0;
  local_198 = (undefined *)0x0;
  local_190 = (undefined *)0x0;
  local_188 = (wchar_t *)0x0;
  local_180 = (wchar_t *)0x0;
  local_178 = (undefined *)0x0;
  local_40 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_48 = FUN_00c41110(param_1);
  local_61 = '\0';
  local_62 = '\0';
  if (local_48 != 0) {
    iVar4 = *(int *)(*(longlong *)(local_48 + 0x30) + 0x10);
    local_68 = 0;
    if (-1 < iVar4 + -1) {
      do {
        local_58 = (undefined8 *)FUN_00c3d2f0(local_48,(undefined2)local_68);
        if ((((*(int *)((longlong)local_58 + 0x2a) == 0xffff) ||
             (*(int *)((longlong)local_58 + 0x2a) == 0x80ffff)) &&
            (*(char *)((longlong)local_58 + 0x12) != '\b')) &&
           (*(char *)((longlong)local_58 + 0x12) != '\t')) {
          FUN_004169a0(&local_178,local_58);
          local_80 = local_178;
          if (local_178 == &DAT_00c42508) {
            local_81 = true;
          }
          else if (local_178 == (undefined *)0x0) {
            local_81 = false;
          }
          else {
            iVar7 = FUN_0043e420(local_178,&DAT_00c42508);
            local_81 = iVar7 == 0;
          }
          if (local_81 == false) {
            FUN_004169a0(&local_180,local_58);
            local_90 = local_180;
            if (local_180 == L"Tamb") {
              local_91 = true;
            }
            else if (local_180 == (wchar_t *)0x0) {
              local_91 = false;
            }
            else {
              iVar7 = FUN_0043e420(local_180,L"Tamb");
              local_91 = iVar7 == 0;
            }
            local_92 = local_91;
          }
          else {
            local_92 = true;
          }
          if (local_92 == false) {
            FUN_004169a0(&local_188,local_58);
            local_a0 = local_188;
            if (local_188 == L"Tcase") {
              local_a1 = true;
            }
            else if (local_188 == (wchar_t *)0x0) {
              local_a1 = false;
            }
            else {
              iVar7 = FUN_0043e420(local_188,L"Tcase");
              local_a1 = iVar7 == 0;
            }
            local_a2 = local_a1;
          }
          else {
            local_a2 = true;
          }
          if (local_a2 == false) {
            FUN_004169a0(&local_190,local_58);
            local_b0 = local_190;
            if (local_190 == &DAT_00c4254c) {
              local_b1 = true;
            }
            else if (local_190 == (undefined *)0x0) {
              local_b1 = false;
            }
            else {
              iVar7 = FUN_0043e420(local_190,&DAT_00c4254c);
              local_b1 = iVar7 == 0;
            }
            local_b2 = local_b1;
          }
          else {
            local_b2 = true;
          }
          if (local_b2 == false) {
            FUN_004169a0(&local_198,local_58);
            local_c0 = local_198;
            if (local_198 == &DAT_00c42560) {
              local_c1 = true;
            }
            else if (local_198 == (undefined *)0x0) {
              local_c1 = false;
            }
            else {
              iVar7 = FUN_0043e420(local_198,&DAT_00c42560);
              local_c1 = iVar7 == 0;
            }
            local_c2 = local_c1;
          }
          else {
            local_c2 = true;
          }
          if (local_c2 == false) {
            FUN_004169a0(&local_1a0,local_58);
            local_d0 = local_1a0;
            if (local_1a0 == &DAT_00c42574) {
              local_d1 = true;
            }
            else if (local_1a0 == (undefined *)0x0) {
              local_d1 = false;
            }
            else {
              iVar7 = FUN_0043e420(local_1a0,&DAT_00c42574);
              local_d1 = iVar7 == 0;
            }
            local_d2 = local_d1;
          }
          else {
            local_d2 = true;
          }
          if (local_d2 == false) {
            FUN_004169a0(&local_1a8,local_58);
            local_e0 = local_1a8;
            if (local_1a8 == &DAT_00c42588) {
              local_e1 = true;
            }
            else if (local_1a8 == (undefined *)0x0) {
              local_e1 = false;
            }
            else {
              iVar7 = FUN_0043e420(local_1a8,&DAT_00c42588);
              local_e1 = iVar7 == 0;
            }
            local_e2 = local_e1;
          }
          else {
            local_e2 = true;
          }
          if (local_e2 == false) {
            FUN_004169a0(&local_1b0,local_58);
            local_f0 = local_1b0;
            if (local_1b0 == &DAT_00c4259c) {
              local_f1 = true;
            }
            else if (local_1b0 == (undefined *)0x0) {
              local_f1 = false;
            }
            else {
              iVar7 = FUN_0043e420(local_1b0,&DAT_00c4259c);
              local_f1 = iVar7 == 0;
            }
            if (local_f1 == false) {
              FUN_004169a0(&local_1b8,local_58);
              local_100 = local_1b8;
              if (local_1b8 == &LAB_00c425b0) {
                local_101 = true;
              }
              else if (local_1b8 == (undefined1 *)0x0) {
                local_101 = false;
              }
              else {
                iVar7 = FUN_0043e420(local_1b8,&LAB_00c425b0);
                local_101 = iVar7 == 0;
              }
              local_102 = local_101;
            }
            else {
              local_102 = true;
            }
            if (local_102 != false) {
              *(undefined1 *)((longlong)local_58 + 0x12) = 9;
              *(undefined4 *)((longlong)local_58 + 0x2a) = 0xffff;
              local_62 = '\x01';
            }
          }
          else {
            *(undefined1 *)((longlong)local_58 + 0x12) = 8;
            *(undefined4 *)((longlong)local_58 + 0x2a) = 0xffff;
            local_62 = '\x01';
          }
          local_61 = '\x01';
        }
        FUN_004169a0(&local_1c0,local_58);
        local_110 = local_1c0;
        if (local_1c0 == &DAT_00c42508) {
          local_111 = true;
        }
        else if (local_1c0 == (undefined *)0x0) {
          local_111 = false;
        }
        else {
          iVar7 = FUN_0043e420(local_1c0,&DAT_00c42508);
          local_111 = iVar7 == 0;
        }
        if (local_111 == false) {
          FUN_004169a0(&local_1c8,local_58);
          local_120 = local_1c8;
          if (local_1c8 == L"Tamb") {
            local_121 = true;
          }
          else if (local_1c8 == (wchar_t *)0x0) {
            local_121 = false;
          }
          else {
            iVar7 = FUN_0043e420(local_1c8,L"Tamb");
            local_121 = iVar7 == 0;
          }
          local_122 = local_121;
        }
        else {
          local_122 = true;
        }
        if (local_122 == false) {
          FUN_004169a0(&local_1d0,local_58);
          local_130 = local_1d0;
          if (local_1d0 == L"Tcase") {
            local_131 = true;
          }
          else if (local_1d0 == (wchar_t *)0x0) {
            local_131 = false;
          }
          else {
            iVar7 = FUN_0043e420(local_1d0,L"Tcase");
            local_131 = iVar7 == 0;
          }
          local_132 = local_131;
        }
        else {
          local_132 = true;
        }
        if (local_132 != false) {
          FUN_004169a0(&local_1d8,local_58);
          (**(code **)(*local_40 + 0x78))(local_40,local_1d8);
        }
        local_68 = local_68 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if ((local_61 == '\0') && (iVar4 = (**(code **)(*local_40 + 0x28))(local_40), 1 < iVar4)) {
      iVar4 = *(int *)(*(longlong *)(local_48 + 0x30) + 0x10);
      local_68 = 0;
      if (-1 < iVar4 + -1) {
        do {
          local_58 = (undefined8 *)FUN_00c3d2f0(local_48,(undefined2)local_68);
          FUN_004169a0(&local_1e0,local_58);
          local_140 = local_1e0;
          if (local_1e0 == &DAT_00c42508) {
            local_141 = true;
          }
          else if (local_1e0 == (undefined *)0x0) {
            local_141 = false;
          }
          else {
            iVar7 = FUN_0043e420(local_1e0,&DAT_00c42508);
            local_141 = iVar7 == 0;
          }
          if (local_141 == false) {
            FUN_004169a0(&local_1e8,local_58);
            local_150 = local_1e8;
            if (local_1e8 == L"Tamb") {
              local_151 = true;
            }
            else if (local_1e8 == (wchar_t *)0x0) {
              local_151 = false;
            }
            else {
              iVar7 = FUN_0043e420(local_1e8,L"Tamb");
              local_151 = iVar7 == 0;
            }
            local_152 = local_151;
          }
          else {
            local_152 = true;
          }
          if (local_152 == false) {
            FUN_004169a0(&local_1f0,local_58);
            local_160 = local_1f0;
            if (local_1f0 == L"Tcase") {
              local_161 = true;
            }
            else if (local_1f0 == (wchar_t *)0x0) {
              local_161 = false;
            }
            else {
              iVar7 = FUN_0043e420(local_1f0,L"Tcase");
              local_161 = iVar7 == 0;
            }
            local_162 = local_161;
          }
          else {
            local_162 = true;
          }
          if (local_162 != false) {
            *(undefined1 *)((longlong)local_58 + 0x12) = 8;
            local_62 = '\x01';
          }
          local_68 = local_68 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  if (local_62 != '\0') {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x10);
    local_68 = 0;
    if (-1 < iVar4 + -1) {
      do {
        local_50 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),local_68);
        if ((local_50 != 0) && (local_50 != local_48)) {
          iVar7 = *(int *)(*(longlong *)(local_50 + 0x30) + 0x10);
          local_6c = 0;
          if (-1 < iVar7 + -1) {
            do {
              uVar1 = (undefined2)local_6c;
              local_58 = (undefined8 *)FUN_00c3d2f0(local_48,(undefined2)local_6c);
              local_60 = (undefined8 *)FUN_00c3d2f0(local_50,uVar1);
              cVar2 = FUN_0043e2c0(local_60,local_58,0x2e);
              if (cVar2 == '\0') {
                puVar5 = local_58;
                puVar6 = local_60;
                for (lVar3 = 5; lVar3 != 0; lVar3 = lVar3 + -1) {
                  *puVar6 = *puVar5;
                  puVar5 = puVar5 + 1;
                  puVar6 = puVar6 + 1;
                }
                *(undefined4 *)puVar6 = *(undefined4 *)puVar5;
                *(undefined2 *)((longlong)puVar6 + 4) = *(undefined2 *)((longlong)puVar5 + 4);
              }
              local_6c = local_6c + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
        local_68 = local_68 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  FUN_00410f20(local_40);
  FUN_00414560(&local_1f0,0x10);
  return;
}


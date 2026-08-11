/* Ghidra address: 0110af90 */
/* Ghidra symbol: FUN_0110af90 */


undefined8 FUN_0110af90(longlong param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  char cVar11;
  undefined *puVar12;
  double dVar13;
  undefined1 auStack_1c8 [32];
  double *local_1a8;
  double *local_1a0;
  longlong local_190;
  longlong *local_188;
  longlong *local_180;
  undefined8 local_178;
  byte local_169;
  longlong *local_168;
  char local_159;
  longlong *local_158;
  char local_149;
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  short *local_110;
  short *local_108;
  short *local_100;
  short *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  int local_d4;
  byte *local_d0;
  byte local_c2;
  char local_c1;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  longlong local_a0;
  undefined1 local_95;
  char local_94;
  uint local_44;
  longlong local_40;
  int local_34;
  undefined8 local_30;
  
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = (short *)0x0;
  local_108 = (short *)0x0;
  local_100 = (short *)0x0;
  local_f8 = (short *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_30 = 0;
  local_178 = 0;
  local_149 = '\0';
  local_159 = '\0';
  local_34 = 0;
  local_40 = 0;
  local_168 = (longlong *)0x0;
  local_180 = (longlong *)0x0;
  local_190 = param_1;
  if (*(longlong *)(param_1 + 8) != 0) {
    local_188 = (longlong *)FUN_004b6930(&PTR_FUN_010d9a38,1);
    (**(code **)(*local_188 + 0x10))(local_188,*(undefined8 *)(local_190 + 8));
    iVar3 = (**(code **)(*local_188 + 0x28))(local_188);
    if ((*(int *)(local_190 + 0x1c) <= iVar3 + -1) && (-1 < *(int *)(local_190 + 0x1c))) {
      uVar5 = (**(code **)(*local_188 + 0x30))(local_188,*(undefined4 *)(local_190 + 0x1c));
      local_178 = FUN_004113f0(uVar5,&PTR_FUN_01105d80);
    }
    (**(code **)(**(longlong **)(local_190 + 8) + 0x90))(*(longlong **)(local_190 + 8));
    FUN_00e19360(&local_c2,&local_a0);
    local_1a8 = *(double **)(*(longlong *)(local_190 + 0x50) + 0x408);
    FUN_01538b10(&local_40,&local_34,0,1);
    if ((0 < local_34) && (local_c2 != 0)) {
      local_180 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      local_169 = 0;
      cVar11 = (char)local_34;
      do {
        uVar9 = (ulonglong)local_169;
        plVar6 = *(longlong **)(local_40 + uVar9 * 8);
        (**(code **)(*plVar6 + 0x288))(plVar6,&local_30);
        FUN_010c04f0(&local_30);
        (**(code **)(*local_180 + 0x80))(local_180,local_30,*(undefined8 *)(local_40 + uVar9 * 8));
        local_169 = local_169 + 1;
        cVar11 = cVar11 + -1;
      } while (cVar11 != '\0');
      local_168 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      local_169 = 0;
      bVar7 = local_c2;
      do {
        FUN_00415020(&local_95,local_a0 + (ulonglong)local_169 * 0x29,0x50);
        FUN_004169a0(&local_e0,&local_95);
        cVar11 = FUN_0110ae60(auStack_1c8,local_e0,&local_44);
        if (cVar11 != '\0') {
          local_158 = *(longlong **)(local_40 + (longlong)(int)local_44 * 8);
          FUN_00e193e0(local_169);
          local_c1 = '\x01';
          FUN_00e19010(&local_c1);
          FUN_00e18a60(&local_d4);
          sVar2 = (**(code **)(*local_158 + 0xf8))(local_158);
          if ((((sVar2 == 0xe) && (local_d4 == 1)) ||
              ((sVar2 = (**(code **)(*local_158 + 0xf8))(local_158), sVar2 == 0xd &&
               ((local_c1 == '\0' && (local_d4 == 3)))))) ||
             ((sVar2 = (**(code **)(*local_158 + 0xf8))(local_158), sVar2 == 0x10 &&
              ((local_c1 != '\0' && (local_d4 == 1)))))) {
            FUN_004169a0(&local_e8,&local_95);
            (**(code **)(*local_168 + 0x80))
                      (local_168,local_e8,*(undefined8 *)(local_40 + (longlong)(int)local_44 * 8));
            FUN_004169a0(&local_f0,&local_95);
            local_44 = (**(code **)(*local_180 + 0xb0))(local_180,local_f0);
            if (-1 < (int)local_44) {
              (**(code **)(*local_180 + 0x98))(local_180,local_44);
            }
            if (((local_94 == '+') &&
                (sVar2 = (**(code **)(*local_158 + 0xf8))(local_158), sVar2 == 0xe)) &&
               (local_d4 == 1)) {
              local_149 = '\x01';
            }
            if (((local_94 == '-') &&
                (sVar2 = (**(code **)(*local_158 + 0xf8))(local_158), sVar2 == 0xe)) &&
               (local_d4 == 1)) {
              local_159 = '\x01';
            }
          }
        }
        local_169 = local_169 + 1;
        bVar7 = bVar7 - 1;
      } while (bVar7 != 0);
    }
    if (local_180 != (longlong *)0x0) {
      local_169 = 0;
      bVar1 = false;
      iVar3 = (**(code **)(*local_180 + 0x28))();
      local_44 = 0;
      if (-1 < iVar3 + -1) {
        do {
          uVar8 = (uint)local_169;
          local_158 = (longlong *)(**(code **)(*local_180 + 0x30))(local_180,local_44 - uVar8);
          sVar2 = (**(code **)(*local_158 + 0xf8))(local_158);
          if (sVar2 == 0x10) {
            if (bVar1) {
              (**(code **)(*local_180 + 0x98))(local_180,local_44 - uVar8);
              local_169 = local_169 + 1;
            }
            else {
              bVar1 = true;
            }
          }
          local_44 = local_44 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    if (local_180 != (longlong *)0x0) {
      local_169 = 0;
      bVar1 = false;
      iVar3 = (**(code **)(*local_180 + 0x28))();
      local_44 = 0;
      if (-1 < iVar3 + -1) {
        do {
          local_158 = (longlong *)(**(code **)(*local_180 + 0x30))(local_180,local_44 - local_169);
          sVar2 = (**(code **)(*local_158 + 0xf8))(local_158);
          if (sVar2 == 0xe) {
            if (local_149 == '\0') {
              (**(code **)(*local_180 + 0x18))(local_180,&local_f8,local_44 - local_169);
              if ((*local_f8 == 0x2b) && (!bVar1)) {
                bVar1 = true;
                goto LAB_0110b5fd;
              }
            }
            uVar8 = (uint)local_169;
            (**(code **)(*local_180 + 0x18))(local_180,&local_100,local_44 - uVar8);
            if (*local_100 != 0x2d) {
              (**(code **)(*local_180 + 0x98))(local_180,local_44 - uVar8);
              local_169 = local_169 + 1;
            }
          }
LAB_0110b5fd:
          local_44 = local_44 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    if (local_180 != (longlong *)0x0) {
      local_169 = 0;
      bVar1 = false;
      iVar3 = (**(code **)(*local_180 + 0x28))();
      local_44 = 0;
      if (-1 < iVar3 + -1) {
        do {
          local_158 = (longlong *)(**(code **)(*local_180 + 0x30))(local_180,local_44 - local_169);
          sVar2 = (**(code **)(*local_158 + 0xf8))(local_158);
          if (sVar2 == 0xe) {
            if (local_159 == '\0') {
              (**(code **)(*local_180 + 0x18))(local_180,&local_108,local_44 - local_169);
              if ((*local_108 == 0x2d) && (!bVar1)) {
                bVar1 = true;
                goto LAB_0110b72c;
              }
            }
            uVar8 = (uint)local_169;
            (**(code **)(*local_180 + 0x18))(local_180,&local_110,local_44 - uVar8);
            if (*local_110 != 0x2b) {
              (**(code **)(*local_180 + 0x98))(local_180,local_44 - uVar8);
              local_169 = local_169 + 1;
            }
          }
LAB_0110b72c:
          local_44 = local_44 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    if (local_180 != (longlong *)0x0) {
      local_169 = 0;
      iVar3 = (**(code **)(*local_180 + 0x28))();
      local_44 = 0;
      if (-1 < iVar3 + -1) {
        do {
          uVar8 = (uint)local_169;
          local_158 = (longlong *)(**(code **)(*local_180 + 0x30))(local_180,local_44 - uVar8);
          sVar2 = (**(code **)(*local_158 + 0xf8))(local_158);
          if (sVar2 == 0xd) {
            (**(code **)(*local_180 + 0x98))(local_180,local_44 - uVar8);
            local_169 = local_169 + 1;
          }
          local_44 = local_44 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    if (local_c2 != 0) {
      local_169 = 0;
      bVar7 = local_c2;
      do {
        FUN_00415020(&local_95,local_a0 + (ulonglong)local_169 * 0x29,0x50);
        FUN_004169a0(&local_118,&local_95);
        local_44 = (**(code **)(*local_188 + 0xb0))(local_188,local_118);
        if (local_44 == 0xffffffff) {
          local_140 = FUN_01107520(&PTR_FUN_01105d80,1);
          *(undefined1 *)(local_190 + 0x20) = 1;
        }
        else {
          uVar5 = (**(code **)(*local_188 + 0x30))(local_188,local_44);
          local_140 = FUN_004113f0(uVar5,&PTR_FUN_01105d80);
          *(undefined1 *)(local_140 + 0x17c) = 0;
          FUN_00414480(local_140 + 0x180);
          (**(code **)(*local_188 + 0x98))(local_188,local_44);
        }
        FUN_004169a0(&local_120,&local_95);
        iVar3 = FUN_00416db0(*(undefined8 *)(local_140 + 8),local_120);
        if (iVar3 != 0) {
          *(undefined1 *)(local_190 + 0x20) = 1;
        }
        FUN_004169a0(local_140 + 8,&local_95);
        local_158 = (longlong *)0x0;
        if ((PTR_DAT_02004010[0x7c6] == '\0') || (local_168 == (longlong *)0x0)) {
          local_44 = 0xffffffff;
          *(undefined1 *)(local_140 + 0x17c) = 0;
        }
        else {
          FUN_00e193e0(local_169);
          local_c1 = '\x01';
          FUN_00e19010(&local_c1);
          FUN_004169a0(&local_128,&local_95);
          local_44 = (**(code **)(*local_168 + 0xb0))(local_168,local_128);
          if ((int)local_44 < 0) {
            if ((local_180 != (longlong *)0x0) &&
               (iVar3 = (**(code **)(*local_180 + 0x28))(local_180), 0 < iVar3)) {
              iVar3 = (**(code **)(*local_180 + 0x28))();
              local_44 = 0;
              if (-1 < iVar3 + -1) {
                do {
                  local_158 = (longlong *)(**(code **)(*local_180 + 0x30))(local_180,local_44);
                  sVar2 = (**(code **)(*local_158 + 0xf8))(local_158);
                  if (((sVar2 == 0xe) && (local_c1 == '\0')) ||
                     ((sVar2 = (**(code **)(*local_158 + 0xf8))(local_158), sVar2 == 0x10 &&
                      (local_c1 != '\0')))) {
                    (**(code **)(*local_180 + 0x18))(local_180,&local_138,local_44);
                    FUN_00414ad0(local_140 + 0x180,local_138);
                    (**(code **)(*local_180 + 0x98))(local_180,local_44);
                    *(undefined1 *)(local_140 + 0x17c) = 1;
                    break;
                  }
                  iVar4 = (**(code **)(*local_180 + 0x28))(local_180);
                  if (local_44 == iVar4 - 1U) {
                    *(undefined1 *)(local_140 + 0x17c) = 0;
                  }
                  local_44 = local_44 + 1;
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
              }
              if (*(char *)(local_140 + 0x17c) == '\0') {
                local_44 = 0xffffffff;
              }
            }
          }
          else {
            local_158 = (longlong *)(**(code **)(*local_168 + 0x30))(local_168,local_44);
            (**(code **)(*local_168 + 0x18))(local_168,&local_130,local_44);
            FUN_00414ad0(local_140 + 0x180,local_130);
            (**(code **)(*local_168 + 0x98))(local_168,local_44);
            *(undefined1 *)(local_140 + 0x17c) = 1;
          }
        }
        iVar3 = 10;
        puVar10 = (undefined8 *)PTR_PTR_02004640;
        puVar12 = PTR_DAT_02005c58;
        do {
          iVar4 = FUN_00416db0(*puVar10,*(undefined8 *)(local_140 + 8));
          if (iVar4 == 0) {
            *(undefined *)(local_140 + 0x188) = *puVar12;
          }
          puVar12 = puVar12 + 1;
          puVar10 = puVar10 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        if (((PTR_DAT_02004010[0x7c6] == '\0') || (local_40 == 0)) || ((int)local_44 < 0)) {
          if (*(char *)(local_140 + 0x28) == '\0') {
            *(undefined8 *)(local_140 + 0x20) = 0;
          }
          if (*(longlong *)(local_140 + 0x20) == 0) {
            *(undefined1 *)(local_190 + 0x20) = 1;
            plVar6 = (longlong *)FUN_010c2160(0,&LAB_010c1e78,0x10);
            *(longlong **)(local_140 + 0x20) = plVar6;
            FUN_017bf050(plVar6,0,L"Dummycska");
            *(undefined1 *)(local_140 + 0x28) = 1;
            (**(code **)(*plVar6 + 0x2d0))(plVar6,1,&local_d0);
            *local_d0 = 8;
            local_d0[9] = 0;
            local_d0[10] = 0;
            local_d0[0xb] = 0;
            local_d0[0xc] = 0;
            local_d0[0xd] = 0;
            local_d0[0xe] = 0;
            local_d0[0xf] = 0;
            local_d0[0x10] = 0;
            local_d0[1] = 0;
            local_d0[2] = 0;
            local_d0[3] = 0;
            local_d0[4] = 0;
            local_d0[5] = 0;
            local_d0[6] = 0;
            local_d0[7] = 0;
            local_d0[8] = 0;
            local_d0[0x19] = 0;
            local_d0[0x1a] = 4;
            local_d0[0x1b] = 0;
            local_d0[0x1c] = 0;
            if (*(double *)(local_140 + 0x118) <= 1e-09) {
              local_d0[0x11] = 0;
              local_d0[0x12] = 0;
              local_d0[0x13] = 0;
              local_d0[0x14] = 0;
              local_d0[0x15] = 0;
              local_d0[0x16] = 0;
              local_d0[0x17] = 0xf0;
              local_d0[0x18] = 0x3f;
            }
            else {
              *(double *)(local_d0 + 0x11) = 1.0 / *(double *)(local_140 + 0x118);
            }
          }
        }
        else {
          if ((*(char *)(local_140 + 0x28) != '\0') && (*(longlong *)(local_140 + 0x20) != 0)) {
            uVar5 = (**(code **)**(undefined8 **)(local_140 + 0x20))
                              (*(undefined8 **)(local_140 + 0x20));
            FUN_00418590(uVar5,&DAT_01cf1390);
          }
          *(longlong **)(local_140 + 0x20) = local_158;
          *(undefined1 *)(local_140 + 0x28) = 0;
          local_b0 = *(double *)(local_140 + 0x130);
          local_a8 = *(double *)(local_140 + 0x118);
          local_b8 = *(double *)(local_140 + 0x120);
          local_c1 = *(char *)(local_140 + 0x110);
          local_c0 = *(double *)(local_140 + 0x128);
          local_1a8 = &local_b0;
          local_1a0 = &local_c0;
          FUN_01538c10(*(undefined8 *)(local_140 + 0x20),&local_c1,&local_b8,&local_a8);
          FUN_00e193e0(local_169);
          FUN_00e19010(&local_c1);
          if ((byte)(local_c1 - 1U) == 0xff) {
            *(double *)(local_140 + 0x120) = local_b8;
          }
          else if ((byte)(local_c1 - 1U) < 4) {
            if (((*(double *)(local_140 + 0x130) != local_b0) ||
                (*(double *)(local_140 + 0x118) != local_a8)) ||
               (*(double *)(local_140 + 0x120) != local_b8)) {
              *(undefined1 *)(local_190 + 0x20) = 1;
            }
            *(double *)(local_140 + 0x130) = local_b0;
            *(double *)(local_140 + 0x118) = local_a8;
            *(double *)(local_140 + 0x120) = local_b8;
          }
          else {
            local_c1 = '\0';
          }
          if ((*(char *)(local_140 + 0x110) != local_c1) ||
             (*(double *)(local_140 + 0x128) != local_c0)) {
            *(undefined1 *)(local_190 + 0x20) = 1;
          }
          *(char *)(local_140 + 0x110) = local_c1;
          *(double *)(local_140 + 0x128) = local_c0;
          (**(code **)(**(longlong **)(local_140 + 0x20) + 0x2d0))
                    (*(longlong **)(local_140 + 0x20),1,&local_d0);
          uVar9 = (ulonglong)*local_d0;
          if (uVar9 < 6) {
            if (uVar9 == 5) {
              *(undefined1 *)(local_190 + 0x58) = 0;
            }
            else if (uVar9 == 1) {
              *(undefined1 *)(local_190 + 0x58) = 1;
            }
            else if (uVar9 == 2) {
              *(undefined1 *)(local_190 + 0x58) = 1;
            }
            else if (uVar9 == 3) {
              *(undefined1 *)(local_190 + 0x58) = 0;
            }
            else {
              if (uVar9 != 4) goto LAB_0110bf2e;
              *(undefined1 *)(local_190 + 0x58) = 0;
            }
          }
          else if (uVar9 == 6) {
            *(undefined1 *)(local_190 + 0x58) = 0;
          }
          else if (uVar9 == 7) {
            *(undefined1 *)(local_190 + 0x58) = 0;
          }
          else if (uVar9 - 8 < 4) {
            if (local_d0[0x1d] == 0) {
              *(undefined1 *)(local_190 + 0x58) = 1;
            }
            else {
              *(undefined1 *)(local_190 + 0x58) = 0;
            }
          }
          else {
LAB_0110bf2e:
            *(undefined1 *)(local_190 + 0x58) = 0;
          }
          FUN_00e184b0(*(undefined1 *)(local_190 + 0x58),1);
          FUN_00e190f0(&local_c1);
          if (local_c1 != *(char *)(local_140 + 0x110)) {
            FUN_00e191e0(*(char *)(local_140 + 0x110));
          }
          FUN_00e18c80(local_140 + 0x128);
          FUN_00e18830(&local_c0);
          dVar13 = (double)FUN_0040c850(local_c0 - *(double *)(local_140 + 0x128));
          if (1e-09 < dVar13) {
            FUN_00e187c0(*(undefined8 *)(local_140 + 0x128));
          }
          if (*(char *)(local_140 + 0x110) == '\x04') {
            FUN_0110d1d0(local_190,local_140);
          }
          else {
            FUN_00e18ad0(local_140 + 0x118);
            FUN_00e18670(&local_a8);
            dVar13 = (double)FUN_0040c850(local_a8 - *(double *)(local_140 + 0x118));
            if (1e-12 < dVar13) {
              FUN_00e18600(*(undefined8 *)(local_140 + 0x118));
            }
            FUN_00e18ba0(local_140 + 0x120,0);
            FUN_00e18750(&local_b8);
            dVar13 = (double)FUN_0040c850(local_b8 - *(double *)(local_140 + 0x120));
            if (1e-09 < dVar13) {
              FUN_00e186e0(*(undefined8 *)(local_140 + 0x120));
            }
            if (*(char *)(local_140 + 0x110) == '\x03') {
              *(undefined8 *)(local_140 + 0x130) = 0x4049000000000000;
            }
            FUN_00e188a0(local_140 + 0x130);
            FUN_00e189f0(&local_b0);
            dVar13 = (double)FUN_0040c850(local_b0 - *(double *)(local_140 + 0x130));
            if (1e-09 < dVar13) {
              FUN_00e18970(*(undefined8 *)(local_140 + 0x130));
            }
          }
          local_1a8 = *(double **)(local_140 + 0x130);
          local_1a0 = *(double **)(local_140 + 0x128);
          FUN_01539230(*(undefined8 *)(local_140 + 0x20),*(undefined1 *)(local_140 + 0x110),
                       *(undefined8 *)(local_140 + 0x120),*(undefined8 *)(local_140 + 0x118));
        }
        FUN_00414b50(&local_30,*(undefined8 *)(local_140 + 8));
        if (*(char *)(local_140 + 0x17c) != '\0') {
          local_1a8 = *(double **)(local_140 + 0x180);
          local_1a0 = (double *)&DAT_0110c49c;
          FUN_00416cd0(&local_30,4,local_30,&DAT_0110c48c);
        }
        (**(code **)(**(longlong **)(local_190 + 8) + 0x80))
                  (*(longlong **)(local_190 + 8),local_30,local_140);
        local_169 = local_169 + 1;
        bVar7 = bVar7 - 1;
      } while (bVar7 != 0);
    }
    iVar3 = (**(code **)(**(longlong **)(local_190 + 8) + 0xc0))
                      (*(longlong **)(local_190 + 8),local_178);
    *(int *)(local_190 + 0x1c) = iVar3;
    if (iVar3 == -1) {
      *(undefined4 *)(local_190 + 0x1c) = 0;
    }
    if (local_40 != 0) {
      FUN_004095f0(local_40,(longlong)(local_34 * 8));
    }
    if (local_168 != (longlong *)0x0) {
      FUN_00410f20(local_168);
    }
    if (local_180 != (longlong *)0x0) {
      FUN_00410f20(local_180);
    }
    if (local_a0 != 0) {
      FUN_004095f0(local_a0,(uint)local_c2 * 0x29);
    }
    iVar3 = (**(code **)(*local_188 + 0x28))(local_188);
    if (0 < iVar3) {
      *(undefined1 *)(local_190 + 0x20) = 1;
    }
  }
  local_148 = *(undefined8 *)(local_190 + 8);
  FUN_00414560(&local_138,0xc);
  FUN_00414480(&local_30);
  return local_148;
}


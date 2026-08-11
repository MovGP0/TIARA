/* Ghidra address: 011244a0 */
/* Ghidra symbol: FUN_011244a0 */


void FUN_011244a0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  bool bVar17;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  wchar_t *local_90;
  wchar_t *local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_a8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_90 = (wchar_t *)0x0;
  local_88 = (wchar_t *)0x0;
  local_80 = 0;
  local_78 = (wchar_t *)0x0;
  local_70 = 0;
  local_68 = 0;
  local_60[0] = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  pbVar2 = *(byte **)(param_1 + 0x900);
  if ((uint)*pbVar2 != *(uint *)(param_1 + 0xb48)) {
    uVar10 = FUN_019a4600();
    FUN_01d08870(*(undefined8 *)(param_1 + 0x8e0),uVar10,*(int *)(param_1 + 0x8e8) + 1);
  }
  iVar14 = *(int *)(param_1 + 0xb48);
  if (iVar14 == 8) {
    FUN_01126b30(param_1);
    if (*(char *)(param_1 + 0xb70) == '\0') {
      bVar6 = *pbVar2;
      if (((uint)bVar6 != *(uint *)(param_1 + 0xb48)) || (*(longlong *)(pbVar2 + 9) == 0)) {
        if (bVar6 == 9) {
          if (*(longlong *)(pbVar2 + 0x11) != 0) {
            FUN_00410f20(*(longlong *)(pbVar2 + 0x11));
            pbVar2[0x11] = 0;
            pbVar2[0x12] = 0;
            pbVar2[0x13] = 0;
            pbVar2[0x14] = 0;
            pbVar2[0x15] = 0;
            pbVar2[0x16] = 0;
            pbVar2[0x17] = 0;
            pbVar2[0x18] = 0;
          }
          if (*(longlong *)(pbVar2 + 9) != 0) {
            FUN_004095f0(*(longlong *)(pbVar2 + 9));
          }
          pbVar2[9] = 0;
          pbVar2[10] = 0;
          pbVar2[0xb] = 0;
          pbVar2[0xc] = 0;
          pbVar2[0xd] = 0;
          pbVar2[0xe] = 0;
          pbVar2[0xf] = 0;
          pbVar2[0x10] = 0;
          pbVar2[0x19] = 0;
        }
        else if (bVar6 == 10) {
          FUN_00442c30(*(undefined8 *)(pbVar2 + 2));
          pbVar2[2] = 0;
          pbVar2[3] = 0;
          pbVar2[4] = 0;
          pbVar2[5] = 0;
          pbVar2[6] = 0;
          pbVar2[7] = 0;
          pbVar2[8] = 0;
          pbVar2[9] = 0;
          FUN_00410f20(*(undefined8 *)(pbVar2 + 0xe));
          pbVar2[0xe] = 0;
          pbVar2[0xf] = 0;
          pbVar2[0x10] = 0;
          pbVar2[0x11] = 0;
          pbVar2[0x12] = 0;
          pbVar2[0x13] = 0;
          pbVar2[0x14] = 0;
          pbVar2[0x15] = 0;
        }
        else if (bVar6 != 0xb) {
          FUN_004095f0(*(undefined8 *)(pbVar2 + 1));
          pbVar2[1] = 0;
          pbVar2[2] = 0;
          pbVar2[3] = 0;
          pbVar2[4] = 0;
          pbVar2[5] = 0;
          pbVar2[6] = 0;
          pbVar2[7] = 0;
          pbVar2[8] = 0;
          if (*(longlong *)(pbVar2 + 9) != 0) {
            uVar15 = (uint)(byte)PTR_DAT_02001408[(ulonglong)*pbVar2 - 1];
            iVar14 = 0;
            if (-1 < (int)(uVar15 - 1)) {
              do {
                FUN_004095f0(*(undefined8 *)(*(longlong *)(pbVar2 + 9) + (longlong)iVar14 * 8));
                iVar14 = iVar14 + 1;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
          }
          FUN_004095f0(*(undefined8 *)(pbVar2 + 9));
          pbVar2[9] = 0;
          pbVar2[10] = 0;
          pbVar2[0xb] = 0;
          pbVar2[0xc] = 0;
          pbVar2[0xd] = 0;
          pbVar2[0xe] = 0;
          pbVar2[0xf] = 0;
          pbVar2[0x10] = 0;
        }
        uVar10 = FUN_004b6930(&PTR_FUN_00478280,1);
        *(undefined8 *)(pbVar2 + 9) = uVar10;
      }
      (**(code **)(**(longlong **)(pbVar2 + 9) + 0x10))
                (*(longlong **)(pbVar2 + 9),*(undefined8 *)(*(longlong *)(param_1 + 0x808) + 0x4e8))
      ;
      *(undefined8 *)(pbVar2 + 0x11) = *(undefined8 *)(*(longlong *)(param_1 + 0xde0) + 0x640);
      *(undefined4 *)(pbVar2 + 0x19) = *(undefined4 *)(*(longlong *)(param_1 + 0xde0) + 0x648);
      pbVar2[0x1d] = *(byte *)(*(longlong *)(param_1 + 0xde0) + 0x64c);
      if (((*PTR_DAT_02003720 == '\0') && (*PTR_DAT_02002b78 == '\0')) ||
         (*(longlong *)(pbVar2 + 1) == 0)) {
        pbVar2[1] = 0;
        pbVar2[2] = 0;
        pbVar2[3] = 0;
        pbVar2[4] = 0;
        pbVar2[5] = 0;
        pbVar2[6] = 0;
        pbVar2[7] = 0;
        pbVar2[8] = 0;
      }
      else {
        FUN_00410f20(*(undefined8 *)(pbVar2 + 1));
        uVar10 = FUN_019a4600();
        FUN_010d75a0(uVar10,0,*(undefined8 *)(pbVar2 + 9),pbVar2 + 1,local_40,0);
        lVar16 = *(longlong *)(param_1 + 0x900);
        lVar3 = *(longlong *)(lVar16 + 1);
        *(undefined8 *)(lVar3 + 0x640) = *(undefined8 *)(lVar16 + 0x11);
        *(undefined4 *)(lVar3 + 0x648) = *(undefined4 *)(lVar16 + 0x19);
        *(undefined1 *)(lVar3 + 0x64c) = *(undefined1 *)(lVar16 + 0x1d);
      }
      *pbVar2 = *(byte *)(param_1 + 0xb48);
    }
    *(undefined1 *)(param_1 + 0xb4c) = *(undefined1 *)(param_1 + 0xb70);
  }
  else if (iVar14 == 9) {
    bVar6 = *pbVar2;
    if (((uint)bVar6 != *(uint *)(param_1 + 0xb48)) || (*(longlong *)(pbVar2 + 0x11) == 0)) {
      if (bVar6 == 8) {
        if (*(longlong *)(pbVar2 + 9) != 0) {
          FUN_00410f20(*(undefined8 *)(pbVar2 + 9));
          pbVar2[9] = 0;
          pbVar2[10] = 0;
          pbVar2[0xb] = 0;
          pbVar2[0xc] = 0;
          pbVar2[0xd] = 0;
          pbVar2[0xe] = 0;
          pbVar2[0xf] = 0;
          pbVar2[0x10] = 0;
        }
      }
      else if (bVar6 == 10) {
        FUN_00442c30(*(undefined8 *)(pbVar2 + 2));
        pbVar2[2] = 0;
        pbVar2[3] = 0;
        pbVar2[4] = 0;
        pbVar2[5] = 0;
        pbVar2[6] = 0;
        pbVar2[7] = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        FUN_00410f20(*(undefined8 *)(pbVar2 + 0xe));
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
        pbVar2[0x10] = 0;
        pbVar2[0x11] = 0;
        pbVar2[0x12] = 0;
        pbVar2[0x13] = 0;
        pbVar2[0x14] = 0;
        pbVar2[0x15] = 0;
      }
      else if (bVar6 != 0xb) {
        FUN_004095f0(*(undefined8 *)(pbVar2 + 1));
        pbVar2[1] = 0;
        pbVar2[2] = 0;
        pbVar2[3] = 0;
        pbVar2[4] = 0;
        pbVar2[5] = 0;
        pbVar2[6] = 0;
        pbVar2[7] = 0;
        pbVar2[8] = 0;
        if (*(longlong *)(pbVar2 + 9) != 0) {
          uVar15 = (uint)(byte)PTR_DAT_02001408[(ulonglong)*pbVar2 - 1];
          iVar14 = 0;
          if (-1 < (int)(uVar15 - 1)) {
            do {
              FUN_004095f0(*(undefined8 *)(*(longlong *)(pbVar2 + 9) + (longlong)iVar14 * 8));
              iVar14 = iVar14 + 1;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
        }
        FUN_004095f0(*(undefined8 *)(pbVar2 + 9));
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
        pbVar2[0x10] = 0;
      }
      uVar10 = FUN_004b6930(&PTR_FUN_00478280,1);
      *(undefined8 *)(pbVar2 + 0x11) = uVar10;
      pbVar2[9] = 0;
      pbVar2[10] = 0;
      pbVar2[0xb] = 0;
      pbVar2[0xc] = 0;
      pbVar2[0xd] = 0;
      pbVar2[0xe] = 0;
      pbVar2[0xf] = 0;
      pbVar2[0x10] = 0;
      pbVar2[0x19] = 0;
    }
    if (pbVar2[0x19] == 0) {
      bVar17 = false;
    }
    else {
      (**(code **)(**(longlong **)(pbVar2 + 0x11) + 0x38))(*(longlong **)(pbVar2 + 0x11),local_60);
      lVar16 = local_60[0];
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x808) + 0x4e8);
      (**(code **)(*plVar4 + 0x38))(plVar4,&local_68);
      if (lVar16 == local_68) {
        bVar17 = true;
      }
      else if ((lVar16 == 0) || (local_68 == 0)) {
        bVar17 = false;
      }
      else {
        iVar14 = FUN_0043e420(lVar16,local_68);
        bVar17 = iVar14 == 0;
      }
    }
    pbVar2[0x19] = bVar17;
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x808) + 0x4e8);
    (**(code **)(*plVar4 + 0x38))(plVar4,&local_70);
    (**(code **)(**(longlong **)(pbVar2 + 0x11) + 0x60))(*(longlong **)(pbVar2 + 0x11),local_70);
    if (pbVar2[0x19] == 0) {
      FUN_004095f0(*(undefined8 *)(pbVar2 + 9));
      pbVar2[9] = 0;
      pbVar2[10] = 0;
      pbVar2[0xb] = 0;
      pbVar2[0xc] = 0;
      pbVar2[0xd] = 0;
      pbVar2[0xe] = 0;
      pbVar2[0xf] = 0;
      pbVar2[0x10] = 0;
    }
    pbVar2[5] = 0;
    pbVar2[6] = 0;
    pbVar2[7] = 0;
    pbVar2[8] = 0;
    *pbVar2 = *(byte *)(param_1 + 0xb48);
  }
  else if (iVar14 == 10) {
    bVar6 = *pbVar2;
    if (bVar6 != 10) {
      if (bVar6 == 8) {
        if (*(longlong *)(pbVar2 + 9) != 0) {
          FUN_00410f20(*(undefined8 *)(pbVar2 + 9));
          pbVar2[9] = 0;
          pbVar2[10] = 0;
          pbVar2[0xb] = 0;
          pbVar2[0xc] = 0;
          pbVar2[0xd] = 0;
          pbVar2[0xe] = 0;
          pbVar2[0xf] = 0;
          pbVar2[0x10] = 0;
        }
      }
      else if (bVar6 == 9) {
        if (*(longlong *)(pbVar2 + 0x11) != 0) {
          FUN_00410f20(*(undefined8 *)(pbVar2 + 0x11));
          pbVar2[0x11] = 0;
          pbVar2[0x12] = 0;
          pbVar2[0x13] = 0;
          pbVar2[0x14] = 0;
          pbVar2[0x15] = 0;
          pbVar2[0x16] = 0;
          pbVar2[0x17] = 0;
          pbVar2[0x18] = 0;
        }
        if (*(longlong *)(pbVar2 + 9) != 0) {
          FUN_004095f0(*(undefined8 *)(pbVar2 + 9));
        }
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
        pbVar2[0x10] = 0;
        pbVar2[0x19] = 0;
      }
      else if (bVar6 != 0xb) {
        FUN_004095f0(*(undefined8 *)(pbVar2 + 1));
        pbVar2[1] = 0;
        pbVar2[2] = 0;
        pbVar2[3] = 0;
        pbVar2[4] = 0;
        pbVar2[5] = 0;
        pbVar2[6] = 0;
        pbVar2[7] = 0;
        pbVar2[8] = 0;
        if (*(longlong *)(pbVar2 + 9) != 0) {
          uVar15 = (uint)(byte)PTR_DAT_02001408[(ulonglong)*pbVar2 - 1];
          iVar14 = 0;
          if (-1 < (int)(uVar15 - 1)) {
            do {
              FUN_004095f0(*(undefined8 *)(*(longlong *)(pbVar2 + 9) + (longlong)iVar14 * 8));
              iVar14 = iVar14 + 1;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
        }
        FUN_004095f0(*(undefined8 *)(pbVar2 + 9));
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
        pbVar2[0x10] = 0;
      }
      pbVar2[0xe] = 0;
      pbVar2[0xf] = 0;
      pbVar2[0x10] = 0;
      pbVar2[0x11] = 0;
      pbVar2[0x12] = 0;
      pbVar2[0x13] = 0;
      pbVar2[0x14] = 0;
      pbVar2[0x15] = 0;
    }
    *pbVar2 = *(byte *)(param_1 + 0xb48);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x838),&local_78);
    if (local_78 == L"<embedded>") {
      bVar17 = true;
    }
    else if (local_78 == (wchar_t *)0x0) {
      bVar17 = false;
    }
    else {
      iVar14 = FUN_0043e420(local_78,L"<embedded>");
      bVar17 = iVar14 == 0;
    }
    if (!bVar17) {
      FUN_00442c30(*(undefined8 *)(pbVar2 + 2));
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x838),&local_80);
      uVar10 = FUN_00416740(local_80);
      uVar10 = FUN_00442bd0(uVar10);
      *(undefined8 *)(pbVar2 + 2) = uVar10;
    }
    pbVar2[1] = 0;
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x848) + 0x260))(*(longlong **)(param_1 + 0x848))
    ;
    if (cVar5 == '\0') {
      cVar5 = (**(code **)(**(longlong **)(param_1 + 0x850) + 0x260))
                        (*(longlong **)(param_1 + 0x850));
      if (cVar5 == '\0') {
        cVar5 = (**(code **)(**(longlong **)(param_1 + 0x858) + 0x260))
                          (*(longlong **)(param_1 + 0x858));
        if (cVar5 != '\0') {
          pbVar2[1] = 2;
        }
      }
      else {
        pbVar2[1] = 1;
      }
    }
    else {
      pbVar2[1] = 0;
    }
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x860) + 0x260))(*(longlong **)(param_1 + 0x860))
    ;
    if (cVar5 != '\0') {
      pbVar2[1] = pbVar2[1] | 0x80;
    }
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x838),&local_88);
    if (local_88 == L"<embedded>") {
      bVar17 = true;
    }
    else if (local_88 == (wchar_t *)0x0) {
      bVar17 = false;
    }
    else {
      iVar14 = FUN_0043e420(local_88,L"<embedded>");
      bVar17 = iVar14 == 0;
    }
    if ((!bVar17) &&
       (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x888) + 0x260))
                          (*(longlong **)(param_1 + 0x888)), cVar5 != '\0')) {
      pbVar2[1] = pbVar2[1] | 0x40;
    }
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x838),&local_90);
    if (local_90 == L"<embedded>") {
      bVar17 = true;
    }
    else if (local_90 == (wchar_t *)0x0) {
      bVar17 = false;
    }
    else {
      iVar14 = FUN_0043e420(local_90,L"<embedded>");
      bVar17 = iVar14 == 0;
    }
    if (!bVar17) {
      cVar5 = (**(code **)(**(longlong **)(param_1 + 0x870) + 0x260))
                        (*(longlong **)(param_1 + 0x870));
      if (cVar5 == '\0') {
        FUN_00410f20(*(undefined8 *)(pbVar2 + 0xe));
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
        pbVar2[0x10] = 0;
        pbVar2[0x11] = 0;
        pbVar2[0x12] = 0;
        pbVar2[0x13] = 0;
        pbVar2[0x14] = 0;
        pbVar2[0x15] = 0;
      }
      else {
        if (*(longlong *)(pbVar2 + 0xe) == 0) {
          uVar10 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
          *(undefined8 *)(pbVar2 + 0xe) = uVar10;
        }
        FUN_004b9ec0(*(undefined8 *)(pbVar2 + 0xe));
        if ((pbVar2[1] & 0x40) == 0) {
          puVar11 = (undefined8 *)FUN_01c8a3c0(*(undefined8 *)PTR_DAT_02004e40,0);
          FUN_00414b50(&local_48,*puVar11);
          FUN_00441640(&local_98,local_48);
          FUN_004167d0(&local_a0,*(undefined8 *)(pbVar2 + 2));
          FUN_00416ad0(&local_98,local_a0);
          FUN_00441b80(&local_50,local_98);
        }
        else {
          FUN_004167d0(&local_50,*(undefined8 *)(pbVar2 + 2));
        }
        FUN_004b9f40(*(undefined8 *)(pbVar2 + 0xe),local_50);
        FUN_00442c30(*(undefined8 *)(pbVar2 + 2));
        uVar10 = FUN_00442bd0(L"<embedded>");
        *(undefined8 *)(pbVar2 + 2) = uVar10;
      }
    }
    pbVar2[10] = 0;
    pbVar2[0xb] = 0;
    pbVar2[0xc] = 0;
    pbVar2[0xd] = 0;
    uVar10 = FUN_00b90090(*(undefined8 *)(param_1 + 0x878));
    *(undefined8 *)(pbVar2 + 0x16) = uVar10;
  }
  else if (iVar14 == 0xb) {
    bVar6 = *pbVar2;
    if (bVar6 != 0xb) {
      if (bVar6 == 8) {
        if (*(longlong *)(pbVar2 + 9) != 0) {
          FUN_00410f20(*(undefined8 *)(pbVar2 + 9));
          pbVar2[9] = 0;
          pbVar2[10] = 0;
          pbVar2[0xb] = 0;
          pbVar2[0xc] = 0;
          pbVar2[0xd] = 0;
          pbVar2[0xe] = 0;
          pbVar2[0xf] = 0;
          pbVar2[0x10] = 0;
        }
      }
      else if (bVar6 == 9) {
        if (*(longlong *)(pbVar2 + 0x11) != 0) {
          FUN_00410f20(*(undefined8 *)(pbVar2 + 0x11));
          pbVar2[0x11] = 0;
          pbVar2[0x12] = 0;
          pbVar2[0x13] = 0;
          pbVar2[0x14] = 0;
          pbVar2[0x15] = 0;
          pbVar2[0x16] = 0;
          pbVar2[0x17] = 0;
          pbVar2[0x18] = 0;
        }
        if (*(longlong *)(pbVar2 + 9) != 0) {
          FUN_004095f0(*(undefined8 *)(pbVar2 + 9));
        }
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
        pbVar2[0x10] = 0;
        pbVar2[0x19] = 0;
      }
      else if (bVar6 == 10) {
        FUN_00442c30(*(undefined8 *)(pbVar2 + 2));
        pbVar2[2] = 0;
        pbVar2[3] = 0;
        pbVar2[4] = 0;
        pbVar2[5] = 0;
        pbVar2[6] = 0;
        pbVar2[7] = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        FUN_00410f20(*(undefined8 *)(pbVar2 + 0xe));
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
        pbVar2[0x10] = 0;
        pbVar2[0x11] = 0;
        pbVar2[0x12] = 0;
        pbVar2[0x13] = 0;
        pbVar2[0x14] = 0;
        pbVar2[0x15] = 0;
      }
      else {
        FUN_004095f0(*(undefined8 *)(pbVar2 + 1));
        pbVar2[1] = 0;
        pbVar2[2] = 0;
        pbVar2[3] = 0;
        pbVar2[4] = 0;
        pbVar2[5] = 0;
        pbVar2[6] = 0;
        pbVar2[7] = 0;
        pbVar2[8] = 0;
        if (*(longlong *)(pbVar2 + 9) != 0) {
          uVar15 = (uint)(byte)PTR_DAT_02001408[(ulonglong)*pbVar2 - 1];
          iVar14 = 0;
          if (-1 < (int)(uVar15 - 1)) {
            do {
              FUN_004095f0(*(undefined8 *)(*(longlong *)(pbVar2 + 9) + (longlong)iVar14 * 8));
              iVar14 = iVar14 + 1;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
        }
        FUN_004095f0(*(undefined8 *)(pbVar2 + 9));
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
        pbVar2[0x10] = 0;
      }
    }
    *pbVar2 = *(byte *)(param_1 + 0xb48);
    bVar6 = (**(code **)(**(longlong **)(param_1 + 0x8c0) + 0x260))(*(longlong **)(param_1 + 0x8c0))
    ;
    pbVar2[1] = bVar6;
    bVar6 = (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x260))(*(longlong **)(param_1 + 0x8d0))
    ;
    pbVar2[2] = bVar6;
    uVar10 = FUN_00b90090(*(undefined8 *)(param_1 + 0x8a0));
    *(undefined8 *)(pbVar2 + 3) = uVar10;
    uVar10 = FUN_00b90090(*(undefined8 *)(param_1 + 0x8a8));
    *(undefined8 *)(pbVar2 + 0xb) = uVar10;
  }
  else if (*PTR_DAT_020039a8 == '\0') {
    uVar7 = FUN_00b0a890(*(undefined8 *)(param_1 + 0x800));
    *(undefined1 *)(param_1 + 0xb4c) = uVar7;
    if (*(char *)(param_1 + 0xb4c) == '\0') {
      if ((uint)*pbVar2 != *(uint *)(param_1 + 0xb48)) {
        if (*pbVar2 == 8) {
          if (*(longlong *)(pbVar2 + 9) != 0) {
            FUN_00410f20(*(undefined8 *)(pbVar2 + 9));
            pbVar2[9] = 0;
            pbVar2[10] = 0;
            pbVar2[0xb] = 0;
            pbVar2[0xc] = 0;
            pbVar2[0xd] = 0;
            pbVar2[0xe] = 0;
            pbVar2[0xf] = 0;
            pbVar2[0x10] = 0;
          }
        }
        else if (*pbVar2 == 9) {
          if (*(longlong *)(pbVar2 + 0x11) != 0) {
            FUN_00410f20(*(undefined8 *)(pbVar2 + 0x11));
            pbVar2[0x11] = 0;
            pbVar2[0x12] = 0;
            pbVar2[0x13] = 0;
            pbVar2[0x14] = 0;
            pbVar2[0x15] = 0;
            pbVar2[0x16] = 0;
            pbVar2[0x17] = 0;
            pbVar2[0x18] = 0;
          }
          if (*(longlong *)(pbVar2 + 9) != 0) {
            FUN_004095f0(*(undefined8 *)(pbVar2 + 9));
          }
          pbVar2[9] = 0;
          pbVar2[10] = 0;
          pbVar2[0xb] = 0;
          pbVar2[0xc] = 0;
          pbVar2[0xd] = 0;
          pbVar2[0xe] = 0;
          pbVar2[0xf] = 0;
          pbVar2[0x10] = 0;
          pbVar2[0x19] = 0;
        }
        else if (*pbVar2 == 10) {
          FUN_00442c30(*(undefined8 *)(pbVar2 + 2));
          pbVar2[2] = 0;
          pbVar2[3] = 0;
          pbVar2[4] = 0;
          pbVar2[5] = 0;
          pbVar2[6] = 0;
          pbVar2[7] = 0;
          pbVar2[8] = 0;
          pbVar2[9] = 0;
          FUN_00410f20(*(undefined8 *)(pbVar2 + 0xe));
          pbVar2[0xe] = 0;
          pbVar2[0xf] = 0;
          pbVar2[0x10] = 0;
          pbVar2[0x11] = 0;
          pbVar2[0x12] = 0;
          pbVar2[0x13] = 0;
          pbVar2[0x14] = 0;
          pbVar2[0x15] = 0;
        }
        else if (*pbVar2 != 0xb) {
          FUN_004095f0(*(undefined8 *)(pbVar2 + 1));
          if (*(longlong *)(pbVar2 + 9) != 0) {
            uVar15 = (uint)(byte)PTR_DAT_02001408[(ulonglong)*pbVar2 - 1];
            iVar14 = 0;
            if (-1 < (int)(uVar15 - 1)) {
              do {
                FUN_004095f0(*(undefined8 *)(*(longlong *)(pbVar2 + 9) + (longlong)iVar14 * 8));
                iVar14 = iVar14 + 1;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
          }
          FUN_004095f0(*(undefined8 *)(pbVar2 + 9));
        }
        *pbVar2 = *(byte *)(param_1 + 0xb48);
        *(undefined2 *)(pbVar2 + 0x11) =
             *(undefined2 *)(param_1 + 0x8f8 + (ulonglong)*pbVar2 * 0x21);
        uVar10 = FUN_00409570(*(undefined2 *)(pbVar2 + 0x11));
        *(undefined8 *)(pbVar2 + 1) = uVar10;
        uVar10 = FUN_00409570((ulonglong)(byte)PTR_DAT_02001408[(ulonglong)*pbVar2 - 1] << 3);
        *(undefined8 *)(pbVar2 + 9) = uVar10;
      }
      uVar13 = (ulonglong)*pbVar2;
      uVar15 = (uint)(byte)PTR_DAT_02001408[uVar13 - 1];
      iVar14 = 0;
      if (-1 < (int)(uVar15 - 1)) {
        do {
          uVar1 = *(uint *)(param_1 + 0xb48);
          if (uVar1 < 8) {
            uVar12 = (int)CONCAT71((int7)(uVar13 >> 8),1) << ((byte)uVar1 & 0x1f);
            uVar13 = (ulonglong)uVar12;
            bVar17 = (uVar12 & 0x90) != 0;
          }
          else {
            bVar17 = false;
          }
          if ((!bVar17) || (iVar14 < 2)) {
            lVar16 = (longlong)iVar14;
            *(undefined8 *)
             (*(longlong *)(param_1 + 0x8e8 + (longlong)(int)uVar1 * 0x21) + lVar16 * 8) =
                 *(undefined8 *)
                  (*(longlong *)(param_1 + 0xad0 + (longlong)(int)uVar1 * 8) + lVar16 * 0x10);
            FUN_004095f0(*(undefined8 *)
                          (*(longlong *)
                            (param_1 + 0x8f0 + (longlong)*(int *)(param_1 + 0xb48) * 0x21) +
                          lVar16 * 8));
            iVar8 = FUN_00414ce0(*(undefined8 *)
                                  (*(longlong *)
                                    (param_1 + 0xad0 + (longlong)*(int *)(param_1 + 0xb48) * 8) + 8
                                  + lVar16 * 0x10));
            uVar10 = FUN_00409570((longlong)(iVar8 + 1));
            *(undefined8 *)
             (*(longlong *)(param_1 + 0x8f0 + (longlong)*(int *)(param_1 + 0xb48) * 0x21) +
             lVar16 * 8) = uVar10;
            iVar8 = *(int *)(param_1 + 0xb48);
            FUN_00415430(&local_a8,
                         *(undefined8 *)
                          (*(longlong *)(param_1 + 0xad0 + (longlong)iVar8 * 8) + 8 + lVar16 * 0x10)
                         ,0);
            uVar13 = local_a8;
            FUN_004425e0(*(undefined8 *)
                          (*(longlong *)(param_1 + 0x8f0 + (longlong)iVar8 * 0x21) + lVar16 * 8),
                         local_a8);
          }
          iVar14 = iVar14 + 1;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      if (*pbVar2 == 4) {
        FUN_016da8e0(*(undefined8 *)(param_1 + 0x8e8 + (ulonglong)*pbVar2 * 0x21));
      }
      if (*(longlong *)(pbVar2 + 1) != 0) {
        FUN_00409a70(*(undefined8 *)(param_1 + 0x8e8 + (ulonglong)*pbVar2 * 0x21),
                     *(undefined8 *)(pbVar2 + 1),*(undefined2 *)(pbVar2 + 0x11));
        uVar15 = (uint)(byte)PTR_DAT_02001408[(ulonglong)*pbVar2 - 1];
        iVar14 = 0;
        if (-1 < (int)(uVar15 - 1)) {
          do {
            lVar16 = (longlong)iVar14;
            FUN_004095f0(*(undefined8 *)(*(longlong *)(pbVar2 + 9) + lVar16 * 8));
            iVar8 = FUN_00414ce0(*(undefined8 *)
                                  (*(longlong *)(param_1 + 0x8f0 + (ulonglong)*pbVar2 * 0x21) +
                                  lVar16 * 8));
            uVar10 = FUN_00409570(iVar8 + 1);
            *(undefined8 *)(*(longlong *)(pbVar2 + 9) + lVar16 * 8) = uVar10;
            bVar6 = *pbVar2;
            uVar9 = FUN_00414ce0(*(undefined8 *)
                                  (*(longlong *)(param_1 + 0x8f0 + (ulonglong)bVar6 * 0x21) +
                                  lVar16 * 8));
            FUN_00442450(*(undefined8 *)(*(longlong *)(pbVar2 + 9) + lVar16 * 8),
                         *(undefined8 *)
                          (*(longlong *)(param_1 + 0x8f0 + (ulonglong)bVar6 * 0x21) + lVar16 * 8),
                         uVar9);
            iVar14 = iVar14 + 1;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
      }
    }
  }
  else {
    FUN_00b0a960(*(undefined8 *)(param_1 + 0x800),param_2);
    if (*(int *)(*(longlong *)(param_1 + 0x800) + 0x638) == 1) {
      *(undefined4 *)(param_1 + 0x508) = 1;
    }
  }
  FUN_004144d0(&local_a8);
  FUN_00414560(&local_a0,2);
  FUN_00414560(&local_90,4);
  FUN_00414560(&local_70,3);
  FUN_00414560(&local_50,3);
  return;
}


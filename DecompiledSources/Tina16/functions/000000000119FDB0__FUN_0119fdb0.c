/* Ghidra address: 0119fdb0 */
/* Ghidra symbol: FUN_0119fdb0 */


void FUN_0119fdb0(longlong param_1,undefined8 *param_2,undefined8 *param_3,int *param_4,
                 undefined8 *param_5,uint *param_6,uint *param_7,int *param_8,int param_9)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  uint *puVar11;
  int *piVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  int iVar17;
  int *piVar18;
  uint *local_b4f8;
  uint *local_b4f0;
  uint *local_b4e8;
  int *local_b4e0;
  int local_b4d4;
  int *local_b4d0;
  int local_b4bc;
  uint *local_b4b8;
  int *local_b4a8;
  int *local_b498;
  uint *local_b490;
  int local_b484;
  uint *local_b480;
  uint local_b478;
  uint *local_b470;
  uint *local_b468;
  uint *local_b460;
  uint *local_b458;
  uint *local_b450;
  uint local_b440 [256];
  undefined8 local_b040;
  undefined8 local_b038;
  undefined8 local_b030;
  undefined8 local_b028;
  undefined8 local_b020;
  undefined8 local_b018;
  undefined8 local_b010;
  undefined1 local_b008 [16];
  undefined8 local_aff8;
  undefined8 local_aff0;
  undefined8 local_afe8;
  undefined8 local_afe0;
  undefined8 local_afd8;
  undefined8 local_afd0;
  undefined8 local_afc8;
  undefined1 local_afc0 [16];
  undefined8 local_afb0;
  undefined8 uStack_afa8;
  undefined8 uStack_afa0;
  undefined8 uStack_af98;
  undefined8 uStack_af90;
  uint local_af88 [5610];
  uint local_57e0 [4588];
  undefined1 auStack_1030 [4096];
  ulonglong uVar5;
  
  uVar5 = 0xb08;
  do {
    uVar4 = uVar5 - 0x1000;
    auStack_1030[uVar5] = (char)uVar4;
    uVar5 = uVar4;
  } while (0xffffffffffff4b08 < uVar4);
  puVar10 = local_57e0;
  for (lVar9 = 0xaf5; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined8 *)puVar10 = *param_2;
    param_2 = param_2 + 1;
    puVar10 = puVar10 + 2;
  }
  puVar10 = local_af88;
  for (lVar9 = 0xaf5; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined8 *)puVar10 = *param_3;
    param_3 = param_3 + 1;
    puVar10 = puVar10 + 2;
  }
  local_afb0 = *param_5;
  uStack_afa8 = param_5[1];
  uStack_afa0 = param_5[2];
  uStack_af98 = param_5[3];
  uStack_af90 = param_5[4];
  FUN_00417600(&local_aff8,&DAT_00401390,9);
  FUN_00417600(&local_b040,&DAT_00401390,9);
  local_b4bc = 0;
  local_b4a8 = (int *)&local_aff8;
  local_b498 = (int *)&local_b040;
  do {
    FUN_00414480(local_b4a8);
    FUN_00414480(local_b498);
    local_b4bc = local_b4bc + 1;
    local_b498 = (int *)((longlong)local_b498 + 8);
    local_b4a8 = (int *)((longlong)local_b4a8 + 8);
  } while (local_b4bc != 9);
  local_b4bc = 0;
  if (-1 < param_9 + -1) {
    local_b498 = param_8;
    local_b4a8 = (int *)&local_afb0;
    local_b490 = local_57e0;
    local_b4f8 = local_af88;
    local_b4f0 = param_7;
    local_b4e8 = param_6;
    iVar13 = param_9;
    local_b4e0 = param_4;
    do {
      *local_b498 = 0;
      if ((*(int *)((longlong)&local_afb0 + (longlong)(local_b4bc + 1) * 4) != 0) &&
         (iVar15 = *local_b4a8, -1 < iVar15 + -1)) {
        local_b480 = local_b490;
        local_b470 = local_b4f8;
        piVar12 = local_b4e0;
        do {
          uVar7 = *local_b480;
          uVar8 = *local_b470;
          iVar17 = *(int *)((longlong)&local_afb0 + (longlong)(local_b4bc + 1) * 4);
          if (-1 < iVar17 + -1) {
            local_b468 = local_57e0;
            local_b458 = local_af88;
            piVar18 = param_4;
            do {
              uVar1 = local_b468[(longlong)(local_b4bc + 1) * 0x231];
              if (uVar8 == local_b458[(longlong)(local_b4bc + 1) * 0x231]) {
                iVar2 = FUN_0119a4f0();
                if (iVar2 == 1) {
                  uVar3 = uVar7 ^ uVar1 | uVar8;
                  iVar6 = 0;
                  iVar2 = *local_b498;
                  puVar10 = local_b4f0;
                  puVar11 = local_b4e8;
                  if (-1 < iVar2 + -1) {
                    do {
                      if ((*puVar10 == uVar3) && (*puVar11 == uVar1)) break;
                      iVar6 = iVar6 + 1;
                      iVar2 = iVar2 + -1;
                      puVar10 = puVar10 + 1;
                      puVar11 = puVar11 + 1;
                    } while (iVar2 != 0);
                  }
                  if (*local_b498 <= iVar6) {
                    local_b4f0[*local_b498] = uVar3;
                    local_b4e8[*local_b498] = uVar1;
                    *local_b498 = *local_b498 + 1;
                  }
                  *piVar12 = 1;
                  piVar18[(longlong)(local_b4bc + 1) * 0x231] = 1;
                }
              }
              piVar18 = piVar18 + 1;
              local_b458 = local_b458 + 1;
              local_b468 = local_b468 + 1;
              iVar17 = iVar17 + -1;
            } while (iVar17 != 0);
          }
          piVar12 = piVar12 + 1;
          local_b470 = local_b470 + 1;
          local_b480 = local_b480 + 1;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
      local_b4bc = local_b4bc + 1;
      local_b4e0 = local_b4e0 + 0x231;
      local_b4e8 = local_b4e8 + 0x231;
      local_b4f0 = local_b4f0 + 0x231;
      local_b4f8 = local_b4f8 + 0x231;
      local_b490 = local_b490 + 0x231;
      local_b4a8 = local_b4a8 + 1;
      local_b498 = local_b498 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  if (-1 < param_9) {
    local_b4d4 = param_9 + 1;
    local_b4e0 = (int *)&local_afb0;
    local_b4f0 = local_af88;
    local_b4f8 = local_57e0;
    local_b4e8 = (uint *)param_4;
    do {
      iVar13 = *local_b4e0;
      if (-1 < iVar13 + -1) {
        local_b4d0 = (int *)local_b4e8;
        local_b4b8 = local_b4f0;
        local_b460 = local_b4f8;
        do {
          if (*local_b4d0 == 0) {
            *local_b4d0 = 2;
            uVar7 = 1;
            iVar15 = 0;
            do {
              if ((*local_b4b8 | uVar7) == *local_b4b8) {
                (&DAT_020c5db4)[(int)uVar7] = 1;
              }
              uVar7 = uVar7 * 2;
              iVar15 = iVar15 + 1;
            } while (iVar15 != 8);
            iVar17 = *local_b460 - *local_b4b8;
            FUN_00414b50(&local_aff8,&DAT_011a0bd4);
            FUN_00414b50(&local_aff0,&DAT_011a0bd4);
            FUN_00414b50(&local_afe8,&DAT_011a0bd4);
            FUN_00414b50(&local_afe0,&DAT_011a0bd4);
            FUN_00414b50(&local_afd8,&DAT_011a0bd4);
            FUN_00414b50(&local_afd0,&DAT_011a0bd4);
            FUN_00414b50(&local_afc8,&DAT_011a0bd4);
            FUN_00414b50(local_afc0,&DAT_011a0bd4);
            iVar15 = *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764);
            local_b484 = 0;
            if (-1 < iVar15 + -1) {
              local_b450 = (uint *)&local_aff8;
              do {
                FUN_00526500(0x4000000000000000,
                             (double)((*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) - local_b484)
                                     + -1));
                iVar2 = FUN_0040c770();
                if (iVar17 / iVar2 < 1) {
                  FUN_00414ad0(local_b450,&DAT_011a0bd4);
                }
                else {
                  iVar17 = iVar17 - iVar2;
                  FUN_00414ad0(local_b450,&DAT_011a0be4);
                }
                local_b484 = local_b484 + 1;
                local_b450 = (uint *)((longlong)local_b450 + 8);
                iVar15 = iVar15 + -1;
              } while (iVar15 != 0);
            }
            FUN_00414480(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8);
            FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_aff8);
            FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_aff0);
            FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_afe8);
            FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_afe0);
            FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_afd8);
            FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_afd0);
            FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_afc8);
            FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8);
            FUN_00414480(&local_b040);
            FUN_00414480(&local_b038);
            FUN_00414480(&local_b030);
            FUN_00414480(&local_b028);
            FUN_00414480(&local_b020);
            FUN_00414480(&local_b018);
            FUN_00414480(&local_b010);
            FUN_00414480(local_b008);
            uVar8 = 1;
            iVar15 = 1;
            local_b440[0] = *local_b460;
            uVar7 = *local_b4b8;
            iVar17 = 0;
            do {
              if ((uVar7 | uVar8) == uVar7) {
                iVar2 = 0;
                if (-1 < iVar15 + -1) {
                  puVar10 = local_b440;
                  iVar6 = iVar15;
                  do {
                    local_b440[iVar2 + iVar15] = *puVar10 - uVar8;
                    iVar2 = iVar2 + 1;
                    puVar10 = puVar10 + 1;
                    iVar6 = iVar6 + -1;
                  } while (iVar6 != 0);
                }
                iVar15 = iVar15 * 2;
              }
              uVar8 = uVar8 * 2;
              iVar17 = iVar17 + 1;
            } while (iVar17 != 8);
            if (iVar15 - 1U < 0x80000000) {
              local_b450 = local_b440;
              do {
                uVar7 = *local_b450;
                FUN_00414480(&local_b040);
                FUN_00414480(&local_b038);
                FUN_00414480(&local_b030);
                FUN_00414480(&local_b028);
                FUN_00414480(&local_b020);
                FUN_00414480(&local_b018);
                FUN_00414480(&local_b010);
                FUN_00414480(local_b008);
                FUN_00414b50(&local_aff8,&DAT_011a0bd4);
                FUN_00414b50(&local_aff0,&DAT_011a0bd4);
                FUN_00414b50(&local_afe8,&DAT_011a0bd4);
                FUN_00414b50(&local_afe0,&DAT_011a0bd4);
                FUN_00414b50(&local_afd8,&DAT_011a0bd4);
                FUN_00414b50(&local_afd0,&DAT_011a0bd4);
                FUN_00414b50(&local_afc8,&DAT_011a0bd4);
                FUN_00414b50(local_afc0,&DAT_011a0bd4);
                iVar17 = *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764);
                local_b484 = 0;
                if (-1 < iVar17 + -1) {
                  puVar14 = &local_aff8;
                  puVar16 = &local_b040;
                  local_b478 = uVar7;
                  do {
                    FUN_00526500(0x4000000000000000,
                                 (double)((*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) -
                                          local_b484) + -1));
                    iVar2 = FUN_0040c770();
                    if ((int)local_b478 / iVar2 < 1) {
                      FUN_00414ad0(puVar14,&DAT_011a0bd4);
                      if (*(short *)(*(longlong *)
                                      (param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8)
                                     + -2 + (longlong)(local_b484 + 1) * 2) == 0x30) {
                        FUN_00414ad0(puVar16,&DAT_011a0bd4);
                      }
                      else {
                        FUN_00414ad0(puVar16,&LAB_011a0bf4);
                      }
                    }
                    else {
                      local_b478 = local_b478 - iVar2;
                      FUN_00414ad0(puVar14,&DAT_011a0be4);
                      if (*(short *)(*(longlong *)
                                      (param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8)
                                     + -2 + (longlong)(local_b484 + 1) * 2) == 0x31) {
                        FUN_00414ad0(puVar16,&DAT_011a0be4);
                      }
                      else {
                        FUN_00414ad0(puVar16,&LAB_011a0bf4);
                      }
                    }
                    local_b484 = local_b484 + 1;
                    puVar16 = puVar16 + 1;
                    puVar14 = puVar14 + 1;
                    iVar17 = iVar17 + -1;
                  } while (iVar17 != 0);
                }
                FUN_00414480(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8);
                FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_b040)
                ;
                FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_b038)
                ;
                FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_b030)
                ;
                FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_b028)
                ;
                FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_b020)
                ;
                FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_b018)
                ;
                FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_b010)
                ;
                FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8);
                *(undefined4 *)(param_1 + 0x40c38 + (longlong)(int)uVar7 * 4) = 1;
                *(undefined4 *)
                 (param_1 + 0x838 + (longlong)*(int *)(param_1 + 0x82c) * 0x400 +
                 (longlong)(int)uVar7 * 4) = 1;
                local_b450 = local_b450 + 1;
                iVar15 = iVar15 + -1;
              } while (iVar15 != 0);
            }
            *(int *)(param_1 + 0x82c) = *(int *)(param_1 + 0x82c) + 1;
          }
          local_b460 = local_b460 + 1;
          local_b4b8 = local_b4b8 + 1;
          local_b4d0 = local_b4d0 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      local_b4f8 = local_b4f8 + 0x231;
      local_b4f0 = local_b4f0 + 0x231;
      local_b4e8 = local_b4e8 + 0x231;
      local_b4e0 = local_b4e0 + 1;
      local_b4d4 = local_b4d4 + -1;
    } while (local_b4d4 != 0);
  }
  *(undefined4 *)(param_1 + 0x828) = *(undefined4 *)(param_1 + 0x82c);
  FUN_00417840(&local_b040,&DAT_00401390,9);
  FUN_00417840(&local_aff8,&DAT_00401390,9);
  return;
}


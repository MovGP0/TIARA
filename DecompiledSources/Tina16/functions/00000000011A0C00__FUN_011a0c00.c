/* Ghidra address: 011a0c00 */
/* Ghidra symbol: FUN_011a0c00 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011a0c00(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint *puVar7;
  undefined8 *puVar8;
  uint *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  uint *local_960;
  uint *local_958;
  longlong *local_950;
  int local_944;
  uint *local_940;
  int *local_938;
  int local_92c;
  int *local_928;
  int local_920;
  int *local_918;
  int local_90c;
  undefined4 *local_908;
  uint *local_8f8;
  int local_8ec;
  uint *local_8e8;
  uint local_8dc;
  int *local_8d0;
  int local_8c0 [256];
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined1 local_488 [16];
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined1 local_440 [16];
  undefined8 local_430 [129];
  
  local_430[0] = 0;
  FUN_00417600(&local_478,&DAT_00401390,9);
  FUN_00417600(&local_4c0,&DAT_00401390,9);
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while (_DAT_01f29e94 = _DAT_01f29e94 + 1, DAT_01f29e24 != '\0') {
                  if ((&DAT_020420cc)[DAT_020420c8] != '\0') {
                    DAT_01f29e98 = DAT_01f29e98 + 1;
                    iVar3 = FUN_0119a4f0(DAT_020420c8);
                    (&DAT_0204799c)[(longlong)iVar3 * 0x231 + (longlong)(int)(&DAT_020c61c4)[iVar3]]
                         = DAT_020420c8;
                    (&DAT_020736dc)[(longlong)iVar3 * 0x231 + (longlong)(int)(&DAT_020c61c4)[iVar3]]
                         = 0;
                    (&DAT_020c61c4)[iVar3] = (&DAT_020c61c4)[iVar3] + 1;
                    (&DAT_020421cc)[(longlong)iVar3 * 0x231 + (longlong)(int)(&DAT_02047974)[iVar3]]
                         = DAT_020420c8;
                    (&DAT_02047974)[iVar3] = (&DAT_02047974)[iVar3] + 1;
                  }
                  DAT_020420c8 = DAT_020420c8 + 1;
                  if (DAT_01f29eb4 <= DAT_020420c8) {
                    DAT_01f29e24 = '\0';
                    DAT_01f29e25 = '\x01';
                    FUN_0119a380();
                  }
                }
                if (DAT_01f29e25 == '\0') break;
                FUN_0119ade0(DAT_020c61b4,1);
                local_92c = 0;
                local_928 = &DAT_020c61ec;
                local_918 = &DAT_02047974;
                local_8f8 = &DAT_0204799c;
                local_960 = &DAT_02078e84;
                local_958 = &DAT_0204d144;
                local_950 = (longlong *)&DAT_0209f41c;
                do {
                  *local_928 = 0;
                  iVar3 = *local_918;
                  if (-1 < iVar3 + -1) {
                    local_8e8 = local_8f8;
                    plVar6 = local_950;
                    do {
                      iVar11 = (&DAT_02047974)[local_92c + 1];
                      if (-1 < iVar11 + -1) {
                        local_908 = &DAT_0204799c;
                        puVar14 = &DAT_0209f41c;
                        do {
                          lVar5 = (longlong)(local_92c + 1);
                          uVar1 = local_908[lVar5 * 0x231];
                          uVar2 = *local_8e8;
                          iVar4 = FUN_0119a4f0();
                          if (iVar4 == 1) {
                            local_960[*local_928] = uVar1 ^ uVar2;
                            local_958[*local_928] = local_908[lVar5 * 0x231];
                            *local_928 = *local_928 + 1;
                            *(undefined4 *)plVar6 = 1;
                            puVar14[lVar5 * 0x231] = 1;
                          }
                          puVar14 = puVar14 + 1;
                          local_908 = local_908 + 1;
                          iVar11 = iVar11 + -1;
                        } while (iVar11 != 0);
                      }
                      plVar6 = (longlong *)((longlong)plVar6 + 4);
                      local_8e8 = local_8e8 + 1;
                      iVar3 = iVar3 + -1;
                    } while (iVar3 != 0);
                  }
                  local_92c = local_92c + 1;
                  local_950 = (longlong *)((longlong)local_950 + 0x8c4);
                  local_958 = local_958 + 0x231;
                  local_960 = local_960 + 0x231;
                  local_8f8 = local_8f8 + 0x231;
                  local_918 = local_918 + 1;
                  local_928 = local_928 + 1;
                } while (local_92c != 9);
                local_92c = 0;
                local_950 = (longlong *)&DAT_02047974;
                local_958 = &DAT_0209f41c;
                local_960 = &DAT_0204799c;
                do {
                  iVar3 = (int)*local_950;
                  puVar7 = local_958;
                  puVar9 = local_960;
                  if (-1 < iVar3 + -1) {
                    do {
                      if (*puVar7 == 0) {
                        *puVar7 = 2;
                        (&DAT_020c5db4)[(int)*puVar9] = 1;
                        FUN_00414480(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8);
                        local_8dc = 1;
                        iVar11 = DAT_020c61b4;
                        if (-1 < DAT_020c61b4 + -1) {
                          do {
                            if ((*puVar9 & local_8dc) == local_8dc) {
                              FUN_00416ba0(param_1 + 0x41838 +
                                           (longlong)*(int *)(param_1 + 0x82c) * 8,&DAT_011a21f0,
                                           *(undefined8 *)
                                            (param_1 + 0x41838 +
                                            (longlong)*(int *)(param_1 + 0x82c) * 8));
                            }
                            else {
                              FUN_00416ba0(param_1 + 0x41838 +
                                           (longlong)*(int *)(param_1 + 0x82c) * 8,&DAT_011a2200,
                                           *(undefined8 *)
                                            (param_1 + 0x41838 +
                                            (longlong)*(int *)(param_1 + 0x82c) * 8));
                            }
                            local_8dc = local_8dc * 2;
                            iVar11 = iVar11 + -1;
                          } while (iVar11 != 0);
                        }
                        uVar1 = *puVar9;
                        *(undefined4 *)(param_1 + 0x40c38 + (longlong)(int)uVar1 * 4) = 1;
                        *(undefined4 *)
                         (param_1 + 0x838 + (longlong)*(int *)(param_1 + 0x82c) * 0x400 +
                         (longlong)(int)uVar1 * 4) = 1;
                        *(int *)(param_1 + 0x82c) = *(int *)(param_1 + 0x82c) + 1;
                      }
                      iVar3 = iVar3 + -1;
                      puVar7 = puVar7 + 1;
                      puVar9 = puVar9 + 1;
                    } while (iVar3 != 0);
                  }
                  local_92c = local_92c + 1;
                  local_960 = local_960 + 0x231;
                  local_958 = local_958 + 0x231;
                  local_950 = (longlong *)((longlong)local_950 + 4);
                } while (local_92c != 9);
                DAT_01f29e25 = '\0';
                DAT_01f29e26 = '\x01';
              }
              if (DAT_01f29e26 == '\0') break;
              DAT_01f29ea0 = 1;
              FUN_0119ade0(DAT_020c61b4,2);
              FUN_0119fdb0(param_1,&DAT_0204d144,&DAT_02078e84,&DAT_020a4bc4,&DAT_020c61ec,
                           &DAT_020528ec,&DAT_0207e62c,&DAT_020c6214,7,4,1,1);
              DAT_01f29e26 = '\0';
              if (2 < DAT_020c61b4) {
                DAT_01f29e27 = '\x01';
              }
            }
            if (DAT_01f29e27 == '\0') break;
            DAT_01f29ea0 = 1;
            FUN_0119ade0(DAT_020c61b4,3);
            FUN_0119fdb0(param_1,&DAT_020528ec,&DAT_0207e62c,&DAT_020aa36c,&DAT_020c6214,
                         &DAT_02058094,&DAT_02083dd4,&DAT_020c623c,6,8,2,1);
            DAT_01f29e27 = '\0';
            if (3 < DAT_020c61b4) {
              DAT_01f29e28 = '\x01';
            }
          }
          if (DAT_01f29e28 == '\0') break;
          DAT_01f29ea0 = 1;
          FUN_0119ade0(DAT_020c61b4,4);
          FUN_0119fdb0(param_1,&DAT_02058094,&DAT_02083dd4,&DAT_020afb14,&DAT_020c623c,&DAT_0205d83c
                       ,&DAT_0208957c,&DAT_020c6264,5,0x10,3,2);
          DAT_01f29e28 = '\0';
          if (4 < DAT_020c61b4) {
            DAT_01f29e29 = '\x01';
          }
        }
        if (DAT_01f29e29 == '\0') break;
        DAT_01f29ea0 = 1;
        FUN_0119ade0(DAT_020c61b4,5);
        FUN_0119fdb0(param_1,&DAT_0205d83c,&DAT_0208957c,&DAT_020b52bc,&DAT_020c6264,&DAT_02062fe4,
                     &DAT_0208ed24,&DAT_020c628c,4,0x20,4,4);
        DAT_01f29e29 = '\0';
        if (5 < DAT_020c61b4) {
          DAT_01f29e2a = '\x01';
        }
      }
      if (DAT_01f29e2a == '\0') break;
      DAT_01f29ea0 = 1;
      FUN_0119ade0(DAT_020c61b4,6);
      FUN_0119fdb0(param_1,&DAT_02062fe4,&DAT_0208ed24,&DAT_020baa64,&DAT_020c628c,&DAT_0206878c,
                   &DAT_020944cc,&DAT_020c62b4,3,0x40,5,8);
      DAT_01f29e2a = '\0';
      if (6 < DAT_020c61b4) {
        DAT_01f29e2b = '\x01';
      }
    }
    if (DAT_01f29e2b == '\0') break;
    DAT_01f29ea0 = 1;
    FUN_0119fdb0(param_1,&DAT_0206878c,&DAT_020944cc,&DAT_020c020c,&DAT_020c62b4,&DAT_0206df34,
                 &DAT_02099c74,&DAT_020c62dc,2,0x80,5,8);
    DAT_01f29e2b = '\0';
    DAT_01f29e2c = 1;
    local_944 = 3;
    local_960 = &DAT_020c62dc;
    local_958 = &DAT_02099c74;
    local_950 = (longlong *)&DAT_0206df34;
    do {
      local_920 = *local_960;
      if (local_920 - 1U < 0x80000000) {
        local_940 = local_958;
        local_938 = (int *)local_950;
        do {
          local_8dc = 1;
          iVar3 = 0;
          do {
            if ((*local_940 | local_8dc) == *local_940) {
              (&DAT_020c5db4)[(int)local_8dc] = 1;
            }
            local_8dc = local_8dc * 2;
            iVar3 = iVar3 + 1;
          } while (iVar3 != 8);
          iVar11 = *local_938 - *local_940;
          FUN_00414b50(&local_478,&DAT_011a2200);
          FUN_00414b50(&local_470,&DAT_011a2200);
          FUN_00414b50(&local_468,&DAT_011a2200);
          FUN_00414b50(&local_460,&DAT_011a2200);
          FUN_00414b50(&local_458,&DAT_011a2200);
          FUN_00414b50(&local_450,&DAT_011a2200);
          FUN_00414b50(&local_448,&DAT_011a2200);
          FUN_00414b50(local_440,&DAT_011a2200);
          iVar3 = *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764);
          local_8ec = 0;
          if (-1 < iVar3 + -1) {
            local_8d0 = (int *)&local_478;
            do {
              FUN_00526500(0x4000000000000000,
                           (double)((*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) - local_8ec) +
                                   -1));
              iVar4 = FUN_0040c770();
              if (iVar11 / iVar4 < 1) {
                FUN_00414ad0(local_8d0,&DAT_011a2200);
              }
              else {
                iVar11 = iVar11 - iVar4;
                FUN_00414ad0(local_8d0,&DAT_011a21f0);
              }
              local_8ec = local_8ec + 1;
              local_8d0 = (int *)((longlong)local_8d0 + 8);
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          FUN_00414480(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8);
          FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_478);
          FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_470);
          FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_468);
          FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_460);
          FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_458);
          FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_450);
          FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_448);
          FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8);
          FUN_00414480(&local_4c0);
          FUN_00414480(&local_4b8);
          FUN_00414480(&local_4b0);
          FUN_00414480(&local_4a8);
          FUN_00414480(&local_4a0);
          FUN_00414480(&local_498);
          FUN_00414480(&local_490);
          FUN_00414480(local_488);
          local_8dc = 1;
          iVar3 = 1;
          local_8c0[0] = *local_938;
          uVar1 = *local_940;
          iVar11 = 0;
          do {
            if ((uVar1 | local_8dc) == uVar1) {
              iVar4 = 0;
              if (-1 < iVar3 + -1) {
                piVar12 = local_8c0;
                iVar13 = iVar3;
                do {
                  local_8c0[iVar4 + iVar3] = *piVar12 - local_8dc;
                  iVar4 = iVar4 + 1;
                  piVar12 = piVar12 + 1;
                  iVar13 = iVar13 + -1;
                } while (iVar13 != 0);
              }
              iVar3 = iVar3 * 2;
            }
            local_8dc = local_8dc * 2;
            iVar11 = iVar11 + 1;
          } while (iVar11 != 8);
          if (-1 < iVar3 + -1) {
            local_8d0 = local_8c0;
            do {
              iVar11 = *local_8d0;
              FUN_00414480(&local_4c0);
              FUN_00414480(&local_4b8);
              FUN_00414480(&local_4b0);
              FUN_00414480(&local_4a8);
              FUN_00414480(&local_4a0);
              FUN_00414480(&local_498);
              FUN_00414480(&local_490);
              FUN_00414480(local_488);
              FUN_00414b50(&local_478,&DAT_011a2200);
              FUN_00414b50(&local_470,&DAT_011a2200);
              FUN_00414b50(&local_468,&DAT_011a2200);
              FUN_00414b50(&local_460,&DAT_011a2200);
              FUN_00414b50(&local_458,&DAT_011a2200);
              FUN_00414b50(&local_450,&DAT_011a2200);
              FUN_00414b50(&local_448,&DAT_011a2200);
              FUN_00414b50(local_440,&DAT_011a2200);
              iVar4 = *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764);
              local_8ec = 0;
              if (-1 < iVar4 + -1) {
                puVar8 = &local_478;
                puVar10 = &local_4c0;
                local_90c = iVar11;
                do {
                  FUN_00526500(0x4000000000000000,
                               (double)((*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) - local_8ec
                                        ) + -1));
                  iVar13 = FUN_0040c770();
                  if (local_90c / iVar13 < 1) {
                    FUN_00414ad0(puVar8,&DAT_011a2200);
                    if (*(short *)(*(longlong *)
                                    (param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8) +
                                   -2 + (longlong)(local_8ec + 1) * 2) == 0x30) {
                      FUN_00414ad0(puVar10,&DAT_011a2200);
                    }
                    else {
                      FUN_00414ad0(puVar10,&LAB_011a2210);
                    }
                  }
                  else {
                    local_90c = local_90c - iVar13;
                    FUN_00414ad0(puVar8,&DAT_011a21f0);
                    if (*(short *)(*(longlong *)
                                    (param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8) +
                                   -2 + (longlong)(local_8ec + 1) * 2) == 0x31) {
                      FUN_00414ad0(puVar10,&DAT_011a21f0);
                    }
                    else {
                      FUN_00414ad0(puVar10,&LAB_011a2210);
                    }
                  }
                  local_8ec = local_8ec + 1;
                  puVar10 = puVar10 + 1;
                  puVar8 = puVar8 + 1;
                  iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
              }
              FUN_00414480(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8);
              FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_4c0);
              FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_4b8);
              FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_4b0);
              FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_4a8);
              FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_4a0);
              FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_498);
              FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,local_490);
              FUN_00416ad0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8);
              *(undefined4 *)(param_1 + 0x40c38 + (longlong)iVar11 * 4) = 1;
              *(undefined4 *)
               (param_1 + 0x838 + (longlong)*(int *)(param_1 + 0x82c) * 0x400 + (longlong)iVar11 * 4
               ) = 1;
              local_8d0 = local_8d0 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          *(int *)(param_1 + 0x82c) = *(int *)(param_1 + 0x82c) + 1;
          local_938 = local_938 + 1;
          local_940 = local_940 + 1;
          local_920 = local_920 + -1;
        } while (local_920 != 0);
      }
      local_950 = (longlong *)((longlong)local_950 + 0x8c4);
      local_958 = local_958 + 0x231;
      local_960 = local_960 + 1;
      local_944 = local_944 + -1;
    } while (local_944 != 0);
    *(undefined4 *)(param_1 + 0x828) = *(undefined4 *)(param_1 + 0x82c);
  }
  FUN_0119a380();
  *(undefined4 *)(param_1 + 0x830) = 0;
  iVar3 = 0;
  do {
    if (*(int *)(param_1 + 0x40c38 + (longlong)iVar3 * 4) == 1) {
      *(int *)(param_1 + 0x830) = *(int *)(param_1 + 0x830) + 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x100);
  if (DAT_01f29ea1 != '\0') {
    FUN_008059a0(*(undefined8 *)PTR_DAT_020040c0);
  }
  *(undefined4 *)(param_1 + 0x4203c) = 0;
  iVar3 = *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764);
  if (0 < iVar3) {
    local_950 = (longlong *)PTR_DAT_020013a0;
    do {
      iVar11 = 0;
      if (*local_950 != 0) {
        iVar11 = *(int *)(*local_950 + -4);
      }
      *(int *)(param_1 + 0x4203c) = *(int *)(param_1 + 0x4203c) + iVar11;
      local_950 = local_950 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) == 8) {
    FUN_0064cbf0(*(undefined8 *)(*(longlong *)PTR_DAT_020040c0 + 0x6b8),
                 *(int *)(param_1 + 0x834) * 0x18 +
                 *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) * 8 +
                 *(int *)(param_1 + 0x4203c) * 7 + 0x50);
    FUN_0064cc50(*(undefined8 *)(*(longlong *)PTR_DAT_020040c0 + 0x6b8),
                 (*(int *)(param_1 + 0x828) + -1) * 0x16 + 0x4a);
  }
  else {
    FUN_0064cbf0(*(undefined8 *)(*(longlong *)PTR_DAT_020040c0 + 0x6b8),
                 *(int *)(param_1 + 0x834) * 0x18 +
                 *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) * 8 +
                 *(int *)(param_1 + 0x4203c) * 7 + 0x50);
    FUN_0064cc50(*(undefined8 *)(*(longlong *)PTR_DAT_020040c0 + 0x6b8),
                 (*(int *)(param_1 + 0x828) + -1) * 0x16 + 0x4a);
  }
  FUN_007fdf50(*(undefined8 *)PTR_DAT_020040c0,1);
  FUN_008059a0(*(undefined8 *)PTR_DAT_020040c0);
  FUN_00417840(&local_4c0,&DAT_00401390,9);
  FUN_00417840(&local_478,&DAT_00401390,9);
  FUN_00414480(local_430);
  return;
}


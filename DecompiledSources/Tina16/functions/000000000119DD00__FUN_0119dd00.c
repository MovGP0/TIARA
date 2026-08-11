/* Ghidra address: 0119dd00 */
/* Ghidra symbol: FUN_0119dd00 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0119dd00(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  int local_5b4;
  longlong *local_5b0;
  int *local_5a8;
  int local_59c;
  uint *local_598;
  longlong *local_590;
  int *local_588;
  int *local_580;
  longlong *local_578;
  int *local_570;
  int *local_568;
  uint *local_560;
  int local_554;
  undefined4 *local_550;
  undefined4 *local_548;
  uint *local_540;
  undefined4 *local_538;
  undefined4 *local_528;
  int local_520;
  int local_51c;
  int local_518;
  uint local_514;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0 [129];
  int local_98 [8];
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40 [3];
  
  local_510 = 0;
  local_508 = 0;
  local_500 = 0;
  local_4f8 = 0;
  local_4f0 = 0;
  local_4e8 = 0;
  local_4e0 = 0;
  local_4c8 = 0;
  local_4d0 = 0;
  local_4d8 = 0;
  local_4c0 = 0;
  local_4b8 = 0;
  local_4b0 = 0;
  local_4a8 = 0;
  local_4a0[0] = 0;
  local_40[2] = 0;
  local_40[1] = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  FUN_00414480(&local_60);
  FUN_00414480(&local_68);
  local_98[0] = 1;
  local_98[1] = 2;
  local_98[2] = 4;
  local_98[3] = 8;
  local_98[4] = 0x10;
  local_98[5] = 0x20;
  local_98[6] = 0x40;
  FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001cc8 + 0x6d8),0);
  FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001cc8 + 0x6e0),0);
  FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001cc8 + 0x6c8),0);
  FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001cc8 + 0x6d0),0);
  FUN_00806af0(*(undefined8 *)PTR_DAT_02001cc8,0x1ae);
  FUN_00806b40(*(undefined8 *)PTR_DAT_02001cc8,0x46);
  FUN_0064cbf0(*(undefined8 *)PTR_DAT_02001cc8,0x14e);
  FUN_0064cc50(*(undefined8 *)PTR_DAT_02001cc8,0x186);
  do {
    _DAT_01f29e94 = _DAT_01f29e94 + 1;
    if (DAT_01f29e24 == '\0') {
      if (DAT_01f29e25 == '\0') {
        if (DAT_01f29e26 == '\0') {
          if (DAT_01f29e27 == '\0') {
            if (DAT_01f29e28 == '\0') {
              if (DAT_01f29e29 == '\0') {
                if (DAT_01f29e2a == '\0') {
                  FUN_0119a380();
                  *(undefined4 *)(param_1 + 0x830) = 0;
                  iVar10 = 0;
                  do {
                    if (*(int *)(param_1 + 0x40838 + (longlong)iVar10 * 4) == 1) {
                      *(int *)(param_1 + 0x830) = *(int *)(param_1 + 0x830) + 1;
                    }
                    iVar10 = iVar10 + 1;
                  } while (iVar10 != 0x100);
                  if (DAT_01f29ea1 != '\0') {
                    FUN_008059a0(*(undefined8 *)PTR_DAT_020040c0);
                  }
                  *(undefined4 *)(param_1 + 0x4203c) = 0;
                  iVar10 = *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764);
                  if (0 < iVar10) {
                    local_598 = (uint *)PTR_DAT_020013a0;
                    do {
                      iVar12 = 0;
                      if (*(longlong *)local_598 != 0) {
                        iVar12 = *(int *)(*(longlong *)local_598 + -4);
                      }
                      *(int *)(param_1 + 0x4203c) = *(int *)(param_1 + 0x4203c) + iVar12;
                      local_598 = (uint *)((longlong)local_598 + 8);
                      iVar10 = iVar10 + -1;
                    } while (iVar10 != 0);
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
                  FUN_00414560(&local_510,3);
                  FUN_00414560(&local_4f8,4);
                  FUN_00414560(&local_4d8,3);
                  FUN_00414560(&local_4c0,5);
                  FUN_00414560(&local_78,10);
                  return;
                }
                DAT_01f29e9c = 1;
                FUN_0119acb0(DAT_020c61b4,0);
                DAT_01f29ea0 = 1;
                FUN_0119b530(param_1,&DAT_020c64b8,&DAT_02062fe4,&DAT_0208ed24,&DAT_020baa64,
                             &DAT_020c628c,&DAT_020c6508,&DAT_0206878c,&DAT_020944cc,&DAT_020c62b4,1
                             ,0x40,5,8,0);
                FUN_0119acb0(DAT_020c61b4);
                DAT_01f29e2a = '\0';
                DAT_01f29e2c = 1;
                DAT_01f29e98 = 0;
              }
              else {
                DAT_01f29e9c = 1;
                FUN_0119ab80(DAT_020c61b4,0);
                DAT_01f29ea0 = 1;
                FUN_0119b530(param_1,&DAT_020c6468,&DAT_0205d83c,&DAT_0208957c,&DAT_020b52bc,
                             &DAT_020c6264,&DAT_020c64b8,&DAT_02062fe4,&DAT_0208ed24,&DAT_020c628c,2
                             ,0x20,4,4,0);
                FUN_0119ab80(DAT_020c61b4);
                DAT_01f29e29 = '\0';
                if (4 < DAT_020c61b4) {
                  DAT_01f29e2a = '\x01';
                }
                FUN_0119a380();
                DAT_01f29e98 = 0;
              }
            }
            else {
              FUN_0119a380();
              FUN_00806af0(*(undefined8 *)PTR_DAT_02001cc8,0);
              FUN_00806b40(*(undefined8 *)PTR_DAT_02001cc8,0x46);
              FUN_0064cbf0(*(undefined8 *)PTR_DAT_02001cc8,0x14e);
              FUN_0064cc50(*(undefined8 *)PTR_DAT_02001cc8,0x186);
              DAT_01f29e9c = 1;
              FUN_0119aa50(DAT_020c61b4,0);
              DAT_01f29ea0 = 1;
              FUN_0119b530(param_1,&DAT_020c6418,&DAT_02058094,&DAT_02083dd4,&DAT_020afb14,
                           &DAT_020c623c,&DAT_020c6468,&DAT_0205d83c,&DAT_0208957c,&DAT_020c6264,3,
                           0x10,3,2,0);
              FUN_0119aa50(DAT_020c61b4);
              DAT_01f29e28 = '\0';
              if (3 < DAT_020c61b4) {
                DAT_01f29e29 = '\x01';
              }
              FUN_0119a380();
            }
          }
          else {
            FUN_00806af0(*(undefined8 *)PTR_DAT_02001cc8,0x226);
            FUN_00806b40(*(undefined8 *)PTR_DAT_02001cc8,0x46);
            FUN_0064cbf0(*(undefined8 *)PTR_DAT_02001cc8,0x14e);
            FUN_0064cc50(*(undefined8 *)PTR_DAT_02001cc8,0x186);
            DAT_01f29e9c = 1;
            FUN_0119a920(DAT_020c61b4,0);
            DAT_01f29ea0 = 1;
            FUN_0119b530(param_1,&DAT_020c63c8,&DAT_020528ec,&DAT_0207e62c,&DAT_020aa36c,
                         &DAT_020c6214,&DAT_020c6418,&DAT_02058094,&DAT_02083dd4,&DAT_020c623c,4,8,2
                         ,1,0);
            FUN_0119a920(DAT_020c61b4);
            DAT_01f29e27 = '\0';
            if (2 < DAT_020c61b4) {
              DAT_01f29e28 = '\x01';
            }
          }
        }
        else {
          DAT_01f29e9c = 1;
          FUN_0119a7f0(DAT_020c61b4,0);
          DAT_01f29ea0 = 1;
          FUN_0119b530(param_1,&DAT_020c6378,&DAT_0204d144,&DAT_02078e84,&DAT_020a4bc4,&DAT_020c61ec
                       ,&DAT_020c63c8,&DAT_020528ec,&DAT_0207e62c,&DAT_020c6214,5,4,1,1,0);
          FUN_0119a7f0(DAT_020c61b4);
          DAT_01f29e26 = '\0';
          if (1 < DAT_020c61b4) {
            DAT_01f29e27 = '\x01';
          }
          FUN_0119a380();
        }
      }
      else {
        DAT_01f29e9c = 1;
        FUN_0119a6c0(DAT_020c61b4,0);
        local_5b4 = 0;
        local_590 = &DAT_020c6378;
        local_588 = &DAT_020c61ec;
        local_580 = &DAT_02047974;
        local_578 = &DAT_020c6328;
        local_570 = &DAT_020421cc;
        local_560 = &DAT_0204799c;
        local_598 = &DAT_02078e84;
        local_5b0 = (longlong *)&DAT_0204d144;
        local_5a8 = &DAT_0209f41c;
        do {
          FUN_0064de00(*local_590,0);
          if (0 < local_5b4) {
            FUN_0064dd90((&DAT_020c6328)[local_5b4 + -1],&local_4a8);
            FUN_0064de00((&DAT_020c6328)[local_5b4 + -1],local_4a8);
          }
          *local_588 = 0;
          local_520 = *local_580;
          local_59c = 0;
          if (-1 < local_520 + -1) {
            local_568 = local_570;
            local_540 = local_560;
            local_538 = local_5a8;
            do {
              (**(code **)(**(longlong **)(*local_578 + 0x4d8) + 0x18))
                        (*(longlong **)(*local_578 + 0x4d8),&local_70,local_59c);
              if (*(char *)(*local_578 + 0xa9) != '\0') {
                (**(code **)(*(longlong *)*local_578 + 600))((longlong *)*local_578);
              }
              FUN_0064dd90(*local_578,&local_4b0);
              iVar10 = FUN_004170c0(local_48,local_4b0,1);
              (**(code **)(*(longlong *)*local_578 + 0x290))((longlong *)*local_578,iVar10 + -1);
              uVar6 = 0;
              if (local_70 != 0) {
                uVar6 = *(undefined4 *)(local_70 + -4);
              }
              (**(code **)(*(longlong *)*local_578 + 0x288))((longlong *)*local_578,uVar6);
              local_518 = (&DAT_02047974)[local_5b4 + 1];
              local_554 = 0;
              if (-1 < local_518 + -1) {
                local_550 = &DAT_020421cc;
                local_548 = &DAT_0204799c;
                local_528 = &DAT_0209f41c;
                do {
                  iVar12 = local_550[(longlong)(local_5b4 + 1) * 0x231] - *local_568;
                  uVar1 = local_548[(longlong)(local_5b4 + 1) * 0x231];
                  uVar2 = *local_540;
                  iVar10 = FUN_0119a4f0(uVar1 ^ uVar2);
                  if ((iVar10 == 1) && (-1 < iVar12)) {
                    iVar10 = 0;
                    piVar8 = local_98;
                    do {
                      if (iVar12 == *piVar8) break;
                      iVar10 = iVar10 + 1;
                      piVar8 = piVar8 + 1;
                    } while (iVar10 != 6);
                    lVar9 = (longlong)(local_5b4 + 1);
                    (**(code **)(**(longlong **)((&DAT_020c6328)[lVar9] + 0x4d8) + 0x18))
                              (*(longlong **)((&DAT_020c6328)[lVar9] + 0x4d8),&local_78,local_554);
                    if (*(char *)((&DAT_020c6328)[lVar9] + 0xa9) != '\0') {
                      (**(code **)(*(longlong *)(&DAT_020c6328)[lVar9] + 600))
                                ((longlong *)(&DAT_020c6328)[lVar9]);
                    }
                    plVar3 = (longlong *)(&DAT_020c6328)[lVar9];
                    FUN_0064dd90(plVar3,&local_4b8);
                    iVar11 = FUN_004170c0(local_48,local_4b8,1);
                    (**(code **)(*plVar3 + 0x290))(plVar3,iVar11 + -1);
                    (**(code **)(*(longlong *)(&DAT_020c6328)[lVar9] + 0x288))
                              ((longlong *)(&DAT_020c6328)[lVar9]);
                    if (iVar10 < 6) {
                      if (*local_588 != 0) {
                        FUN_0064dd90(*local_590,&local_4c0);
                        FUN_0064de00(*local_590,local_4c0);
                      }
                      FUN_0043f750(&local_4c8,*local_568);
                      FUN_0043f750(&local_4d0,local_550[lVar9 * 0x231]);
                      FUN_0043f750(&local_4d8,iVar12);
                      FUN_00416cd0(&local_48,6,local_4c8,&DAT_0119fd54,local_4d0,&DAT_0119fd64,
                                   local_4d8,&DAT_0119fd78);
                      (**(code **)(**(longlong **)(*local_590 + 0x4d8) + 0x78))
                                (*(longlong **)(*local_590 + 0x4d8),local_48);
                      local_598[*local_588] = uVar1 ^ uVar2;
                      *(undefined4 *)((longlong)local_5b0 + (longlong)*local_588 * 4) =
                           local_548[lVar9 * 0x231];
                      *local_588 = *local_588 + 1;
                      *local_538 = 1;
                      local_528[lVar9 * 0x231] = 1;
                      (**(code **)(**(longlong **)(*local_578 + 0x4d8) + 0x18))
                                (*(longlong **)(*local_578 + 0x4d8),&local_70,local_59c);
                      iVar10 = 0;
                      if (local_70 != 0) {
                        iVar10 = *(int *)(local_70 + -4);
                      }
                      if (*(short *)(local_70 + -2 + (longlong)iVar10 * 2) != 0x2d) {
                        FUN_00416ad0(&local_70,&DAT_0119fd88);
                        (**(code **)(**(longlong **)(*local_578 + 0x4d8) + 0x40))
                                  (*(longlong **)(*local_578 + 0x4d8),local_59c,local_70);
                        if (*(char *)(*local_578 + 0xa9) != '\0') {
                          (**(code **)(*(longlong *)*local_578 + 600))((longlong *)*local_578);
                        }
                        FUN_0064dd90(*local_578,&local_4e0);
                        iVar10 = FUN_004170c0(local_48,local_4e0,1);
                        (**(code **)(*(longlong *)*local_578 + 0x290))
                                  ((longlong *)*local_578,iVar10 + -1);
                        uVar6 = 0;
                        if (local_70 != 0) {
                          uVar6 = *(undefined4 *)(local_70 + -4);
                        }
                        (**(code **)(*(longlong *)*local_578 + 0x288))((longlong *)*local_578,uVar6)
                        ;
                      }
                      (**(code **)(**(longlong **)((&DAT_020c6328)[lVar9] + 0x4d8) + 0x18))
                                (*(longlong **)((&DAT_020c6328)[lVar9] + 0x4d8),&local_78,local_554)
                      ;
                      iVar10 = 0;
                      if (local_78 != 0) {
                        iVar10 = *(int *)(local_78 + -4);
                      }
                      if (*(short *)(local_78 + -2 + (longlong)iVar10 * 2) != 0x2d) {
                        FUN_00416ad0(&local_78,&DAT_0119fd88);
                        (**(code **)(**(longlong **)((&DAT_020c6328)[lVar9] + 0x4d8) + 0x40))
                                  (*(longlong **)((&DAT_020c6328)[lVar9] + 0x4d8),local_554,local_78
                                  );
                        if (*(char *)((&DAT_020c6328)[lVar9] + 0xa9) != '\0') {
                          (**(code **)(*(longlong *)(&DAT_020c6328)[lVar9] + 600))
                                    ((longlong *)(&DAT_020c6328)[lVar9]);
                        }
                        FUN_0064dd90((&DAT_020c6328)[lVar9],&local_4e8);
                        iVar10 = FUN_004170c0(local_48,local_4e8,1);
                        (**(code **)(*(longlong *)(&DAT_020c6328)[lVar9] + 0x290))
                                  ((longlong *)(&DAT_020c6328)[lVar9],iVar10 + -1);
                        (**(code **)(*(longlong *)(&DAT_020c6328)[lVar9] + 0x288))
                                  ((longlong *)(&DAT_020c6328)[lVar9]);
                      }
                    }
                    thunk_FUN_0419965d(DAT_01f29e9c);
                  }
                  local_554 = local_554 + 1;
                  local_528 = local_528 + 1;
                  local_548 = local_548 + 1;
                  local_550 = local_550 + 1;
                  local_518 = local_518 + -1;
                } while (local_518 != 0);
              }
              local_59c = local_59c + 1;
              local_538 = local_538 + 1;
              local_540 = local_540 + 1;
              local_568 = local_568 + 1;
              local_520 = local_520 + -1;
            } while (local_520 != 0);
          }
          local_5b4 = local_5b4 + 1;
          local_5a8 = local_5a8 + 0x231;
          local_5b0 = (longlong *)((longlong)local_5b0 + 0x8c4);
          local_598 = local_598 + 0x231;
          local_560 = local_560 + 0x231;
          local_570 = local_570 + 0x231;
          local_578 = local_578 + 1;
          local_580 = local_580 + 1;
          local_588 = local_588 + 1;
          local_590 = local_590 + 1;
        } while (local_5b4 != 6);
        local_5b4 = 0;
        local_5a8 = &DAT_02047974;
        local_5b0 = &DAT_020c6328;
        do {
          iVar10 = *local_5a8;
          local_59c = 0;
          if (-1 < iVar10 + -1) {
            do {
              (**(code **)(**(longlong **)(*local_5b0 + 0x4d8) + 0x18))
                        (*(longlong **)(*local_5b0 + 0x4d8),&local_70,local_59c);
              if (*(char *)(*local_5b0 + 0xa9) != '\0') {
                (**(code **)(*(longlong *)*local_5b0 + 600))((longlong *)*local_5b0);
              }
              FUN_0064dd90(*local_5b0,&local_4f0);
              uVar6 = FUN_004170c0(local_70,local_4f0,1);
              (**(code **)(*(longlong *)*local_5b0 + 0x290))((longlong *)*local_5b0,uVar6);
              uVar6 = 0;
              if (local_70 != 0) {
                uVar6 = *(undefined4 *)(local_70 + -4);
              }
              (**(code **)(*(longlong *)*local_5b0 + 0x288))((longlong *)*local_5b0,uVar6);
              iVar12 = 0;
              if (local_70 != 0) {
                iVar12 = *(int *)(local_70 + -4);
              }
              if (*(short *)(local_70 + -2 + (longlong)iVar12 * 2) != 0x2d) {
                FUN_00416ad0(&local_70,&LAB_0119fd9c);
                (**(code **)(**(longlong **)(*local_5b0 + 0x4d8) + 0x40))
                          (*(longlong **)(*local_5b0 + 0x4d8),local_59c,local_70);
                if (*(char *)(*local_5b0 + 0xa9) != '\0') {
                  (**(code **)(*(longlong *)*local_5b0 + 600))((longlong *)*local_5b0);
                }
                FUN_0064dd90(*local_5b0,&local_4f8);
                uVar6 = FUN_004170c0(local_70,local_4f8,1);
                (**(code **)(*(longlong *)*local_5b0 + 0x290))((longlong *)*local_5b0,uVar6);
                uVar6 = 0;
                if (local_70 != 0) {
                  uVar6 = *(undefined4 *)(local_70 + -4);
                }
                (**(code **)(*(longlong *)*local_5b0 + 0x288))((longlong *)*local_5b0,uVar6);
                FUN_00414480(&local_50);
                FUN_00414480(&local_58);
                bVar4 = false;
                iVar12 = 0;
                if (local_70 != 0) {
                  iVar12 = *(int *)(local_70 + -4);
                }
                iVar12 = iVar12 + -2;
                local_51c = 1;
                if (0 < iVar12) {
                  do {
                    if (((!bVar4) && (*(short *)(local_70 + -2 + (longlong)local_51c * 2) != 0x7c))
                       && (*(short *)(local_70 + -2 + (longlong)local_51c * 2) != 0x20)) {
                      FUN_00416780(&local_500,
                                   *(undefined2 *)(local_70 + -2 + (longlong)local_51c * 2));
                      FUN_00416ad0(&local_50,local_500);
                    }
                    if (bVar4) {
                      FUN_00416780(&local_508,
                                   *(undefined2 *)(local_70 + -2 + (longlong)local_51c * 2));
                      FUN_00416ad0(&local_58,local_508);
                    }
                    if (*(short *)(local_70 + -2 + (longlong)local_51c * 2) == 0x7c) {
                      bVar4 = true;
                    }
                    local_51c = local_51c + 1;
                    iVar12 = iVar12 + -1;
                  } while (iVar12 != 0);
                }
                iVar12 = FUN_0043fc00(local_50);
                (&DAT_020c59b4)[iVar12] = 1;
                iVar11 = 0;
                FUN_00414480(param_1 + 0x41038 + (longlong)*(int *)(param_1 + 0x828) * 8);
                FUN_0043ea00(&local_510,local_58);
                FUN_00414b50(&local_58,local_510);
                iVar12 = 0;
                if (local_58 != 0) {
                  iVar12 = *(int *)(local_58 + -4);
                }
                local_51c = 1;
                if (0 < iVar12) {
                  do {
                    FUN_00416dc0(&local_68,local_58,local_51c,1);
                    FUN_00416ad0(param_1 + 0x41038 + (longlong)*(int *)(param_1 + 0x828) * 8,
                                 local_68);
                    FUN_00526500(0x4000000000000000,
                                 (double)(*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) -
                                         local_51c));
                    iVar5 = FUN_0040c770();
                    iVar7 = FUN_0043fc00(local_68);
                    iVar11 = iVar11 + iVar5 * iVar7;
                    local_51c = local_51c + 1;
                    iVar12 = iVar12 + -1;
                  } while (iVar12 != 0);
                }
                *(undefined4 *)(param_1 + 0x40838 + (longlong)iVar11 * 4) = 1;
                *(int *)(param_1 + 0x828) = *(int *)(param_1 + 0x828) + 1;
              }
              local_59c = local_59c + 1;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
          local_5b4 = local_5b4 + 1;
          local_5b0 = local_5b0 + 1;
          local_5a8 = local_5a8 + 1;
        } while (local_5b4 != 7);
        local_5b4 = 0;
        local_5b0 = (longlong *)&DAT_02047974;
        local_5a8 = &DAT_0209f41c;
        local_598 = &DAT_0204799c;
        do {
          iVar10 = (int)*local_5b0;
          piVar8 = local_5a8;
          puVar13 = local_598;
          if (-1 < iVar10 + -1) {
            do {
              if (*piVar8 == 0) {
                *piVar8 = 2;
                (&DAT_020c5db4)[(int)*puVar13] = 1;
                FUN_00414480(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8);
                local_514 = 1;
                iVar12 = DAT_020c61b4;
                if (-1 < DAT_020c61b4 + -1) {
                  do {
                    if ((*puVar13 & local_514) == local_514) {
                      FUN_00416ba0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,
                                   &DAT_0119fd14,
                                   *(undefined8 *)
                                    (param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8));
                    }
                    else {
                      FUN_00416ba0(param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8,
                                   &DAT_0119fd24,
                                   *(undefined8 *)
                                    (param_1 + 0x41838 + (longlong)*(int *)(param_1 + 0x82c) * 8));
                    }
                    local_514 = local_514 * 2;
                    iVar12 = iVar12 + -1;
                  } while (iVar12 != 0);
                }
                uVar1 = *puVar13;
                *(undefined4 *)(param_1 + 0x40c38 + (longlong)(int)uVar1 * 4) = 1;
                *(undefined4 *)
                 (param_1 + 0x838 + (longlong)*(int *)(param_1 + 0x82c) * 0x400 +
                 (longlong)(int)uVar1 * 4) = 1;
                *(int *)(param_1 + 0x82c) = *(int *)(param_1 + 0x82c) + 1;
              }
              iVar10 = iVar10 + -1;
              piVar8 = piVar8 + 1;
              puVar13 = puVar13 + 1;
            } while (iVar10 != 0);
          }
          local_5b4 = local_5b4 + 1;
          local_598 = local_598 + 0x231;
          local_5a8 = local_5a8 + 0x231;
          local_5b0 = (longlong *)((longlong)local_5b0 + 4);
        } while (local_5b4 != 7);
        FUN_0119a6c0(DAT_020c61b4);
        DAT_01f29e25 = '\0';
        DAT_01f29e26 = '\x01';
        FUN_0119a380();
      }
    }
    else {
      if (DAT_01f29e98 == 0) {
        DAT_01f29e98 = 1;
      }
      DAT_01f29e9c = 1;
      if ((&DAT_020420cc)[DAT_020420c8] != '\0') {
        DAT_01f29e98 = DAT_01f29e98 + 1;
        FUN_00414480(local_40);
        iVar11 = 0;
        iVar10 = DAT_020420c8;
        iVar12 = DAT_020c61b4;
        if (-1 < DAT_020c61b4 + -1) {
          do {
            FUN_00526500(0x4000000000000000,
                         (double)((*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) - iVar11) + -1));
            iVar5 = FUN_0040c770();
            if (iVar10 / iVar5 < 1) {
              FUN_00416ad0(local_40,&DAT_0119fd24);
            }
            else {
              iVar10 = iVar10 - iVar5;
              FUN_00416ad0(local_40,&DAT_0119fd14);
            }
            iVar11 = iVar11 + 1;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        while( true ) {
          iVar10 = 0;
          if (local_40[0] != 0) {
            iVar10 = *(int *)(local_40[0] + -4);
          }
          if (DAT_020c61b4 <= iVar10) break;
          FUN_00416ba0(local_40,&DAT_0119fd24,local_40[0]);
        }
        FUN_0043f750(local_40 + 2,DAT_020420c8);
        iVar10 = 0;
        if (local_40[2] != 0) {
          iVar10 = *(int *)(local_40[2] + -4);
        }
        if (iVar10 < 2) {
          FUN_00416ba0(local_40 + 2,&DAT_0119fd34,local_40[2]);
        }
        iVar10 = FUN_0119a400(local_40[0]);
        FUN_00416cd0(&local_48,3,local_40[2],&DAT_0119fd44,local_40[0]);
        (**(code **)(**(longlong **)((&DAT_020c6328)[iVar10] + 0x4d8) + 0x78))
                  (*(longlong **)((&DAT_020c6328)[iVar10] + 0x4d8),local_48);
        if (*(char *)((&DAT_020c6328)[iVar10] + 0xa9) != '\0') {
          (**(code **)(*(longlong *)(&DAT_020c6328)[iVar10] + 600))
                    ((longlong *)(&DAT_020c6328)[iVar10]);
        }
        FUN_0064dd90((&DAT_020c6328)[iVar10],local_4a0);
        iVar12 = FUN_004170c0(local_48,local_4a0[0],1);
        (**(code **)(*(longlong *)(&DAT_020c6328)[iVar10] + 0x290))
                  ((longlong *)(&DAT_020c6328)[iVar10],iVar12 + -1);
        uVar6 = 0;
        if (local_48 != 0) {
          uVar6 = *(undefined4 *)(local_48 + -4);
        }
        (**(code **)(*(longlong *)(&DAT_020c6328)[iVar10] + 0x288))
                  ((longlong *)(&DAT_020c6328)[iVar10],uVar6);
        (&DAT_0204799c)[(longlong)iVar10 * 0x231 + (longlong)(int)(&DAT_020c61c4)[iVar10]] =
             DAT_020420c8;
        (&DAT_020736dc)[(longlong)iVar10 * 0x231 + (longlong)(int)(&DAT_020c61c4)[iVar10]] = 0;
        (&DAT_020c61c4)[iVar10] = (&DAT_020c61c4)[iVar10] + 1;
        (&DAT_020421cc)[(longlong)iVar10 * 0x231 + (longlong)(int)(&DAT_02047974)[iVar10]] =
             DAT_020420c8;
        (&DAT_02047974)[iVar10] = (&DAT_02047974)[iVar10] + 1;
      }
      DAT_01f29e9c = 1;
      DAT_020420c8 = DAT_020420c8 + 1;
      if (DAT_01f29eb4 <= DAT_020420c8) {
        if (1 < DAT_01f29e98) {
          FUN_0119a590(DAT_020c61b4);
        }
        DAT_01f29e24 = '\0';
        DAT_01f29e25 = '\x01';
        FUN_0119a380();
      }
    }
    thunk_FUN_0419965d(DAT_01f29e9c);
  } while( true );
}


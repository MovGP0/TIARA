/* Ghidra address: 01b41bc0 */
/* Ghidra symbol: FUN_01b41bc0 */


/* WARNING: Type propagation algorithm not settling */

undefined1
FUN_01b41bc0(undefined8 param_1,undefined8 param_2,char param_3,undefined1 param_4,
            undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 local_res8;
  undefined8 local_res10;
  char local_res18;
  undefined1 local_res20;
  undefined1 auStack_9e8 [32];
  undefined *local_9c8;
  ulonglong local_9c0;
  int *local_9b8;
  undefined8 local_9a0;
  undefined8 local_998;
  undefined8 local_990;
  undefined8 local_988;
  undefined1 *local_980;
  undefined8 local_978;
  undefined1 *local_970;
  undefined8 local_968;
  undefined8 local_960;
  undefined8 local_958;
  undefined8 local_950;
  undefined1 local_948;
  undefined8 local_940;
  undefined1 local_938;
  undefined8 local_930;
  undefined1 *local_928;
  undefined1 *local_920;
  undefined8 local_918;
  undefined8 local_910;
  longlong local_908 [2];
  undefined1 local_8f8 [256];
  undefined8 local_7f8;
  undefined8 local_7f0;
  undefined8 local_7e8;
  undefined1 local_7e0;
  undefined8 local_7d8;
  undefined8 local_7d0;
  undefined8 local_7c8;
  undefined1 *local_7c0;
  ulonglong local_7b8;
  int local_7b0;
  undefined4 local_7ac;
  longlong local_7a8;
  int local_7a0;
  undefined4 local_79c;
  longlong local_798;
  undefined4 local_78c;
  longlong local_788;
  ulonglong local_780;
  ulonglong local_778;
  undefined4 local_770;
  undefined4 local_76c;
  int local_768;
  int local_764;
  longlong *local_760;
  undefined8 local_758;
  undefined8 local_750;
  undefined1 local_748 [760];
  undefined8 *local_450;
  undefined8 *local_448;
  ulonglong local_440;
  undefined1 local_437;
  char local_436;
  char local_435;
  int local_434;
  short local_430;
  ushort local_42e;
  undefined4 local_42c;
  int local_428;
  int local_424;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_408;
  longlong local_400;
  ulonglong local_3f8;
  int local_3ec;
  int local_3e8;
  uint local_3e4;
  char local_3dd;
  int local_3dc;
  int local_3d8;
  undefined4 local_3d4;
  int local_3d0;
  undefined4 local_3cc;
  longlong local_3c8;
  ulonglong local_3c0;
  longlong local_3b8;
  int local_3b0;
  int local_3ac;
  int *local_3a8;
  int *local_3a0;
  uint *local_398;
  longlong local_390;
  longlong local_388;
  undefined8 local_380;
  int local_378;
  int local_374;
  int local_370;
  int local_36c;
  int local_368;
  int local_364;
  int local_35c;
  int local_358;
  undefined1 local_351;
  longlong local_348;
  ulonglong local_340;
  int local_338;
  longlong local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined1 local_310 [760];
  
  local_7c0 = auStack_9e8;
  local_9a0 = 0;
  local_998 = 0;
  local_990 = 0;
  local_988 = 0;
  local_980 = (undefined *)0x0;
  local_978 = 0;
  local_970 = (undefined *)0x0;
  local_960 = 0;
  local_968 = 0;
  local_958 = 0;
  local_930 = 0;
  local_928 = (undefined *)0x0;
  local_920 = (undefined *)0x0;
  local_918 = 0;
  local_910 = 0;
  local_908[0] = 0;
  local_908[1] = 0;
  local_7f8 = 0;
  local_7d0 = 0;
  local_7d8 = 0;
  local_7f0 = 0;
  local_7c8 = 0;
  local_380 = 0;
  local_388 = 0;
  local_390 = 0;
  local_3b8 = 0;
  local_3c0 = 0;
  local_3c8 = 0;
  local_3f8 = 0;
  local_400 = 0;
  local_408 = 0;
  local_410 = 0;
  local_418 = 0;
  local_420 = 0;
  local_440 = 0;
  local_750 = 0;
  local_758 = 0;
  local_340 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_1);
  FUN_0041b910(param_5);
  FUN_00414610(param_7);
  local_351 = 0;
  local_9c8 = (undefined *)CONCAT71(local_9c8._1_7_,local_res20);
  local_9c0 = local_9c0 & 0xffffffffffff0000;
  local_9b8 = &local_358;
  cVar1 = FUN_014b7d50(0,local_res10,1,0);
  if (cVar1 == '\0') {
    uVar3 = FUN_00b89270();
    FUN_00b8e520(uVar3,&local_7c8,local_358 + 0x86);
    FUN_016fd940(local_7c8);
  }
  else {
    FUN_01440040(local_res10,&PTR_DAT_01b43f3c,0);
    local_330 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    iVar2 = FUN_019954d0(local_res10);
    local_328 = FUN_00409570((longlong)((iVar2 + 3) * 0x18));
    iVar2 = FUN_019954d0(local_res10);
    local_320 = FUN_00409570((longlong)((iVar2 + 3) * 0x18));
    local_348 = FUN_007fc180(&PTR_FUN_00c53a28,1,*(undefined8 *)PTR_DAT_02004030);
    FUN_00c54370(local_348,L"Exporting...");
    *(undefined1 *)(local_348 + 0x6c1) = 0;
    FUN_008059a0(local_348);
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    local_318 = FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_017ccae0(local_res10,local_318);
    FUN_017cd0b0(local_res10,local_318,1,0);
    FUN_01b3ea00(&local_340,local_res10,local_318);
    local_9c8 = (undefined *)0x0;
    FUN_01b3eff0(local_res10,local_330,local_340,param_6);
    local_435 = '\0';
    local_436 = '\0';
    uVar3 = FUN_019a45d0();
    FUN_01994230(uVar3);
    local_338 = 0;
    while (local_338 < *(int *)(local_330 + 0x10)) {
      local_448 = (undefined8 *)FUN_004aeac0(local_330,local_338);
      FUN_00414b50(&local_390,*local_448);
      FUN_00414b50(&local_388,local_448[3]);
      local_3cc = *(undefined4 *)((longlong)local_448 + 0x34);
      local_3d0 = 0;
      local_434 = 1;
      local_764 = 0;
      if (local_388 != 0) {
        local_764 = *(int *)(local_388 + -4);
      }
      if ((local_764 == 0) && (local_435 == '\0')) {
        lVar4 = FUN_017ff660(local_448[9]);
        lVar5 = FUN_019a45d0();
        if (lVar4 == lVar5) {
          uVar3 = FUN_019a45d0();
          FUN_01993f30(uVar3,local_448[9],1,0);
        }
        uVar3 = FUN_00b89270();
        FUN_00b8e520(uVar3,&local_7d8,0x9f);
        FUN_0043ea00(&local_7f0,*local_448);
        local_7e8 = local_7f0;
        local_7e0 = 0x11;
        FUN_00442f70(&local_7d0,local_7d8,&local_7e8);
        local_760 = (longlong *)FUN_0072d3f0(local_7d0,0,0x683);
        FUN_0064cf60(local_760,0x159a);
        iVar2 = FUN_00654c00();
        local_364 = 0;
        if (-1 < iVar2 + -1) {
          do {
            uVar3 = FUN_00654bc0(local_760,local_364);
            cVar1 = FUN_004113d0(uVar3,&PTR_FUN_00673008);
            if (cVar1 != '\0') {
              lVar4 = FUN_00654bc0(local_760,local_364);
              if (*(int *)(lVar4 + 0x4f0) == 0xc) {
                uVar3 = FUN_00654bc0(local_760,local_364);
                FUN_0064de00(uVar3,L"Edit");
              }
            }
            local_364 = local_364 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        local_430 = (**(code **)(*local_760 + 0x2d0))(local_760);
        FUN_00410f20(local_760);
        if (local_430 != 0xc) {
          if (local_430 == 6) {
            uVar3 = FUN_019a45d0();
            FUN_01994230(uVar3);
          }
          if (local_430 == 0xe) {
            local_435 = '\x01';
            uVar3 = FUN_019a45d0();
            FUN_01994230(uVar3);
          }
          if (local_430 != 7) goto LAB_01b422dd;
          local_436 = '\x01';
          break;
        }
        FUN_01434e10(local_448[9],5);
        FUN_01d04330(local_448[9],&local_7f8);
        FUN_00414ad0(local_448 + 3,local_7f8);
        FUN_00414b50(&local_388,local_448[3]);
        if (local_388 != 0) {
          uVar3 = FUN_019a45d0();
          FUN_0199e310(uVar3,0,1);
        }
        uVar3 = FUN_019a45d0();
        FUN_01994230(uVar3);
      }
      else {
LAB_01b422dd:
        local_437 = 4;
        local_768 = 0;
        if (local_388 != 0) {
          local_768 = *(int *)(local_388 + -4);
        }
        if (local_768 != 0) {
          local_42e = *(ushort *)(local_448 + 7);
          if (local_42e < 0xb) {
            if (local_42e == 10) {
              local_437 = 1;
            }
            else if (local_42e == 2) {
              local_437 = 3;
            }
            else if ((local_42e == 7) || (local_42e == 9)) {
              local_437 = 2;
            }
          }
          else if (local_42e == 0xe) {
            local_437 = 5;
          }
          else if (local_42e == 0x10) {
            local_437 = 0;
          }
          if (*(int *)(local_448 + 7) == 0xd) {
            local_9c8 = (undefined *)((ulonglong)local_9c8._1_7_ << 8);
            local_9c0 = 0;
            local_9b8 = (int *)0x0;
            FUN_00ec34f0(&local_390,local_388,*(undefined8 *)(local_448[9] + 0x4f8),0);
          }
          else {
            local_9c8 = (undefined *)((ulonglong)local_9c8._1_7_ << 8);
            local_9c0 = 0;
            local_9b8 = (int *)0x0;
            FUN_00ececc0(&local_390,local_437,local_388,*(undefined8 *)(local_448[9] + 0x4f8));
          }
          if (local_390 == 0) {
            iVar2 = *(int *)((longlong)local_448 + 0x34);
            local_35c = 1;
            if (0 < iVar2) {
              do {
                FUN_0040e840(local_8f8,local_35c);
                FUN_004169a0(&local_388,local_8f8);
                local_9c8 = &DAT_01b43f90;
                FUN_00416cd0(&local_390,3,local_390,local_388);
                local_35c = local_35c + 1;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
          }
          FUN_00414b50(&local_380,local_390);
          local_35c = 0;
          while (FUN_0043ea00(local_908,local_380), local_908[0] != 0) {
            FUN_00ea9ab0(local_908 + 1,&local_380);
            local_35c = local_35c + 1;
          }
          FUN_00419260(&local_440,&DAT_01b41b90,1,(longlong)local_35c);
          FUN_00419260(&local_3b8,&DAT_004210c0,1);
          local_35c = 0;
          while (local_390 != 0) {
            FUN_00ea9ab0(&local_910,&local_390);
            FUN_00ea9ef0(&local_388,local_910);
            FUN_00414ad0(local_3b8 + (longlong)local_35c * 8,local_388);
            local_368 = FUN_004170c0(&DAT_01b43fa0,local_388,1);
            if (local_368 != 0) {
              local_76c = 0;
              if (local_388 != 0) {
                local_76c = *(undefined4 *)(local_388 + -4);
              }
              FUN_00416dc0(&local_918,local_388,local_368 + 1);
              local_3b0 = FUN_0040e860(local_918,&local_3ac);
              if (local_434 < local_3b0) {
                local_434 = local_3b0;
              }
            }
            local_35c = local_35c + 1;
            local_3d0 = local_3d0 + 1;
          }
          local_3ec = 0;
          iVar2 = local_3d0;
          if (-1 < local_3d0 + -1) {
            do {
              lVar4 = (longlong)local_3ec;
              *(int *)(local_440 + 4 + lVar4 * 0x20) = local_3ec + 1;
              *(int *)(local_440 + lVar4 * 0x20) = local_3ec + 1;
              FUN_00414ad0(local_440 + 0x18 + lVar4 * 0x20,&PTR_DAT_01b43fb0);
              *(undefined4 *)(local_440 + 8 + lVar4 * 0x20) = 0xffffffff;
              local_3ec = local_3ec + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          FUN_00414b50(&local_3c0,local_448[1]);
          FUN_00414b50(&local_3c8,*local_448);
          local_42c = *(undefined4 *)(local_448 + 6);
          local_770 = 0;
          if (local_3c8 != 0) {
            local_770 = *(undefined4 *)(local_3c8 + -4);
          }
          local_3d4 = local_770;
          local_3d8 = *(int *)(local_448[9] + 0x18c);
          if (local_434 < 2) {
            local_778 = local_440;
            if (local_440 != 0) {
              local_778 = *(ulonglong *)(local_440 - 8);
            }
            iVar2 = FUN_00b905f0(*(int *)((longlong)local_448 + 0x34) + -1,local_778 - 1);
            local_3ec = 0;
            if (-1 < iVar2) {
              iVar2 = iVar2 + 1;
              do {
                *(int *)(local_440 + 4 + (longlong)local_3ec * 0x20) = local_3ec + 1;
                local_3ec = local_3ec + 1;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
            local_3dc = local_338;
            local_450 = local_448;
          }
          else {
            local_9c8 = (undefined *)CONCAT44(local_9c8._4_4_,local_3d8);
            local_9c0 = CONCAT44(local_9c0._4_4_,local_338);
            local_3dc = FUN_01b38440(local_330,local_3c8,local_3c0);
            local_450 = (undefined8 *)FUN_004aeac0(local_330,local_3dc);
            if ((local_3dc != local_338) &&
               (cVar1 = FUN_01b3ec80(local_448[9],local_450[9]), cVar1 != '\0')) {
              lVar4 = FUN_017ff660(local_448[9]);
              lVar5 = FUN_019a45d0();
              if (lVar4 == lVar5) {
                uVar3 = FUN_019a45d0();
                FUN_01993f30(uVar3,local_448[9],1,0);
                uVar3 = FUN_019a45d0();
                FUN_01993f30(uVar3,local_450[9],1,0);
              }
              FUN_0043ea00(&local_410,*local_448);
              if (1 < *(int *)(local_448[9] + 0x18c)) {
                FUN_0043f750(&local_920,*(undefined4 *)(local_448[9] + 0x18c));
                local_9c8 = local_920;
                FUN_00416cd0(&local_410,3,local_410,&DAT_01b43fa0);
              }
              FUN_0043ea00(&local_418,*local_450);
              if (1 < *(int *)(local_450[9] + 0x18c)) {
                FUN_0043f750(&local_928,*(undefined4 *)(local_450[9] + 0x18c));
                local_9c8 = local_928;
                FUN_00416cd0(&local_418,3,local_418,&DAT_01b43fa0);
              }
              local_950 = local_410;
              local_948 = 0x11;
              local_940 = local_418;
              local_938 = 0x11;
              FUN_00442f70(&local_930,
                           L"The VCC and GND parameters of components in the same package (%s and %s) must be identical! Continue?"
                           ,&local_950);
              local_430 = FUN_0072d440(local_930,0,0x203);
              if (local_430 == 6) {
                uVar3 = FUN_019a45d0();
                FUN_01994230(uVar3);
              }
              if (local_430 == 0xe) {
                local_435 = '\x01';
                uVar3 = FUN_019a45d0();
                FUN_01994230(uVar3);
              }
              if (local_430 == 7) {
                local_436 = '\x01';
                break;
              }
            }
          }
          local_398 = (uint *)local_448[10];
          local_428 = *(int *)((longlong)local_448 + 0x34);
          if (*(int *)((longlong)local_448 + 0x34) < local_3d0) {
            local_368 = 1;
            for (local_3a0 = (int *)local_448[10];
                (local_368 <= *(int *)((longlong)local_448 + 0x34) &&
                (*(longlong *)(local_3a0 + 6) != 0)); local_3a0 = *(int **)(local_3a0 + 6)) {
              local_368 = local_368 + 1;
            }
            if (local_368 < local_3d0) {
              do {
                local_3a8 = (int *)FUN_00418560(0x20,&DAT_00ea9378);
                *local_3a8 = local_368 + 1;
                FUN_00414480(local_3a8 + 2);
                *(int **)(local_3a0 + 6) = local_3a8;
                local_3a0 = local_3a8;
                local_3a0[6] = 0;
                local_3a0[7] = 0;
                local_368 = local_368 + 1;
              } while (local_368 < local_3d0);
            }
            *(int *)((longlong)local_448 + 0x34) = local_3d0;
          }
          if (local_338 != local_3dc) {
            local_3a0 = (int *)local_450[10];
            local_35c = 1;
            while( true ) {
              local_780 = local_440;
              if (local_440 != 0) {
                local_780 = *(ulonglong *)(local_440 - 8);
              }
              iVar2 = FUN_00b905f0(*(undefined4 *)((longlong)local_448 + 0x34),
                                   local_780 & 0xffffffff);
              if ((iVar2 < local_35c) || (local_3a0 == (int *)0x0)) break;
              local_368 = *local_3a0 + -1;
              *(int *)(local_440 + 4 + (longlong)local_368 * 0x20) = *local_3a0;
              FUN_00414ad0(local_440 + 0x10 + (longlong)local_368 * 0x20,
                           *(undefined8 *)(local_3a0 + 2));
              *(int *)(local_440 + 8 + (longlong)local_368 * 0x20) = local_3a0[1];
              FUN_00414ad0(local_440 + 0x18 + (longlong)local_368 * 0x20,
                           *(undefined8 *)(local_3a0 + 4));
              local_3a0 = *(int **)(local_3a0 + 6);
              local_35c = local_35c + 1;
            }
          }
          local_35c = 1;
          for (; ((local_35c <= local_428 && (local_398 != (uint *)0x0)) &&
                 (*local_398 < 0x80000000)); local_398 = *(uint **)(local_398 + 6)) {
            local_3dd = '\0';
            local_374 = 0;
            local_378 = local_3d8;
            local_36c = 1;
            iVar2 = *(int *)(local_448 + 7);
            if (((iVar2 == 0x10) || (iVar2 == 0x11)) || ((iVar2 == 0x12 || (iVar2 == 0x13)))) {
              (**(code **)(*(longlong *)local_448[9] + 0x298))
                        ((longlong *)local_448[9],&local_3f8,*local_398 - 1);
              FUN_0043e130(&local_958,local_3f8);
              FUN_00414b50(&local_3f8,local_958);
              local_36c = 0;
              uVar6 = *local_398;
              local_370 = 0;
              if (-1 < (int)(uVar6 - 1)) {
                do {
                  (**(code **)(*(longlong *)local_448[9] + 0x298))
                            ((longlong *)local_448[9],&local_968,local_370);
                  FUN_0043e130(&local_960,local_968);
                  iVar2 = FUN_00416db0(local_960,local_3f8);
                  if (iVar2 == 0) {
                    local_36c = local_36c + 1;
                  }
                  local_370 = local_370 + 1;
                  uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
              }
              if (1 < local_3d8) {
                FUN_0043f750(&local_970,local_3d8);
                local_9c8 = local_970;
                FUN_00416cd0(&local_3f8,3,local_3f8);
              }
            }
            else if (iVar2 != 0xd) {
              if ((*(int *)(local_448 + 7) == 7) || (*(int *)(local_448 + 7) == 9)) {
                FUN_00414b50(&local_3f8,
                             *(undefined8 *)
                              ((longlong)&UNWIND_INFO_01fd6d60 + (longlong)(int)*local_398 * 8));
              }
              else if (*(int *)(local_448 + 7) == 10) {
                FUN_00414b50(&local_3f8,(&PTR_DAT_01fd6d80)[(int)*local_398]);
              }
              else {
                (**(code **)(*(longlong *)local_448[9] + 0x298))
                          ((longlong *)local_448[9],&local_978,*local_398 - 1);
                FUN_0043e130(&local_3f8,local_978);
              }
              if (1 < local_3d8) {
                FUN_0043f750(&local_980,local_3d8);
                local_9c8 = local_980;
                FUN_00416cd0(&local_3f8,3,local_3f8);
              }
            }
            FUN_00414480(&local_400);
            if (*(int *)(local_448 + 7) == 0xd) {
              while ((local_374 < local_3d0 && (local_3dd == '\0'))) {
                lVar4 = (longlong)local_374;
                local_3e4 = FUN_0040e860(*(undefined8 *)(local_3b8 + lVar4 * 8),&local_3ac);
                local_3ec = FUN_004170c0(&DAT_01b43fa0,*(undefined8 *)(local_3b8 + lVar4 * 8),1);
                if (local_3ec == 0) {
                  local_3e8 = -1;
                }
                else {
                  local_788 = *(longlong *)(local_3b8 + lVar4 * 8);
                  local_78c = 0;
                  if (local_788 != 0) {
                    local_78c = *(undefined4 *)(local_788 + -4);
                  }
                  FUN_00416dc0(&local_388,*(undefined8 *)(local_3b8 + lVar4 * 8),local_3ec + 1);
                  local_3e8 = FUN_0040e860(local_388,&local_3ac);
                  if (local_3ac != 0) {
                    local_3e8 = -1;
                  }
                }
                if ((local_3e4 == *local_398) && ((local_378 == local_3e8 || (local_3e8 == -1)))) {
                  local_424 = local_374;
                  local_3dd = '\x01';
                }
                local_374 = local_374 + 1;
              }
            }
            else if (local_36c < 2) {
              if (local_374 < local_3d0) {
                do {
                  lVar4 = (longlong)local_374;
                  iVar2 = FUN_004170c0(&DAT_01b440a0,*(undefined8 *)(local_3b8 + lVar4 * 8),1);
                  FUN_00416dc0(&local_400,*(undefined8 *)(local_3b8 + lVar4 * 8),1,iVar2 + -1);
                  FUN_0043e130(&local_990,*(undefined8 *)(local_3b8 + lVar4 * 8));
                  FUN_00414ad0(local_3b8 + lVar4 * 8,local_990);
                  local_7b0 = FUN_004170c0(&DAT_01b440a0,*(undefined8 *)(local_3b8 + lVar4 * 8),1);
                  local_7b0 = local_7b0 + 1;
                  local_7a8 = *(longlong *)(local_3b8 + lVar4 * 8);
                  local_7ac = 0;
                  if (local_7a8 != 0) {
                    local_7ac = *(undefined4 *)(local_7a8 + -4);
                  }
                  FUN_00416dc0(&local_408,*(undefined8 *)(local_3b8 + lVar4 * 8),local_7b0);
                  iVar2 = FUN_004170c0(&DAT_01b440b0,local_408,1);
                  if (0 < iVar2) {
                    FUN_004170c0(&DAT_01b440b0,local_408,1);
                    FUN_00416dc0(&local_408,local_408,1);
                  }
                  iVar2 = FUN_00416db0(local_3f8,local_408);
                  if (iVar2 == 0) {
                    local_424 = local_374;
                    *(int *)(local_440 + 4 + (longlong)local_374 * 0x20) = local_374 + 1;
                    *(uint *)(local_440 + (longlong)local_374 * 0x20) = *local_398;
                    if (local_400 == 0) {
                      FUN_0043f750(&local_998,local_374 + 1);
                      FUN_00414ad0(local_440 + 0x10 + (longlong)local_424 * 0x20,local_998);
                    }
                    else {
                      FUN_00414ad0(local_440 + 0x10 + (longlong)local_374 * 0x20,local_400);
                    }
                    *(uint *)(local_440 + 8 + (longlong)local_424 * 0x20) = local_398[1];
                    FUN_00414ad0(local_440 + 0x18 + (longlong)local_424 * 0x20,
                                 *(undefined8 *)(local_398 + 4));
                  }
                  local_374 = local_374 + 1;
                } while (local_374 < local_3d0);
              }
            }
            else {
              local_370 = 0;
              if (0 < local_36c) {
                do {
                  local_3dd = '\0';
                  while ((local_374 < local_3d0 && (local_3dd == '\0'))) {
                    lVar4 = (longlong)local_374;
                    iVar2 = FUN_004170c0(&DAT_01b440a0,*(undefined8 *)(local_3b8 + lVar4 * 8),1);
                    FUN_00416dc0(&local_400,*(undefined8 *)(local_3b8 + lVar4 * 8),1,iVar2 + -1);
                    FUN_0043e130(&local_988,*(undefined8 *)(local_3b8 + lVar4 * 8));
                    FUN_00414ad0(local_3b8 + lVar4 * 8,local_988);
                    local_7a0 = FUN_004170c0(&DAT_01b440a0,*(undefined8 *)(local_3b8 + lVar4 * 8),1)
                    ;
                    local_7a0 = local_7a0 + 1;
                    local_798 = *(longlong *)(local_3b8 + lVar4 * 8);
                    local_79c = 0;
                    if (local_798 != 0) {
                      local_79c = *(undefined4 *)(local_798 + -4);
                    }
                    FUN_00416dc0(&local_408,*(undefined8 *)(local_3b8 + lVar4 * 8),local_7a0);
                    iVar2 = FUN_004170c0(&DAT_01b440b0,local_408,1);
                    if (0 < iVar2) {
                      FUN_004170c0(&DAT_01b440b0,local_408,1);
                      FUN_00416dc0(&local_408,local_408,1);
                    }
                    iVar2 = FUN_00416db0(local_3f8,local_408);
                    if (iVar2 == 0) {
                      local_424 = local_374;
                      local_3dd = '\x01';
                    }
                    local_374 = local_374 + 1;
                  }
                  local_370 = local_370 + 1;
                } while (local_370 < local_36c);
              }
            }
            if (local_3dd != '\0') {
              *(int *)(local_440 + 4 + (longlong)local_424 * 0x20) = local_374;
              *(uint *)(local_440 + (longlong)local_424 * 0x20) = *local_398;
              if (local_400 == 0) {
                FUN_0043f750(&local_9a0,local_374);
                FUN_00414ad0(local_440 + 0x10 + (longlong)local_424 * 0x20,local_9a0);
              }
              else {
                FUN_00414ad0(local_440 + 0x10 + (longlong)local_424 * 0x20,local_400);
              }
              *(uint *)(local_440 + 8 + (longlong)local_424 * 0x20) = local_398[1];
              FUN_00414ad0(local_440 + 0x18 + (longlong)local_424 * 0x20,
                           *(undefined8 *)(local_398 + 4));
            }
            local_35c = local_35c + 1;
          }
          local_3a0 = (int *)local_450[10];
          local_35c = 0;
          while( true ) {
            local_7b8 = local_440;
            if (local_440 != 0) {
              local_7b8 = *(ulonglong *)(local_440 - 8);
            }
            iVar2 = FUN_00b905f0(*(undefined4 *)((longlong)local_448 + 0x34),local_7b8 & 0xffffffff)
            ;
            if ((iVar2 <= local_35c) || (local_3a0 == (int *)0x0)) break;
            lVar4 = (longlong)local_35c;
            if (*(int *)(local_440 + 4 + lVar4 * 0x20) == 0) {
              *local_3a0 = local_35c + 1;
            }
            else {
              *local_3a0 = *(int *)(local_440 + 4 + lVar4 * 0x20);
            }
            FUN_00414ad0(local_3a0 + 2,*(undefined8 *)(local_440 + 0x10 + lVar4 * 0x20));
            local_3a0[1] = *(int *)(local_440 + 8 + lVar4 * 0x20);
            FUN_00414ad0(local_3a0 + 4,*(undefined8 *)(local_440 + 0x18 + lVar4 * 0x20));
            local_3a0 = *(int **)(local_3a0 + 6);
            local_35c = local_35c + 1;
          }
          if (local_338 != local_3dc) {
            FUN_01b38530(local_448);
            *(undefined1 *)(local_448 + 0xb) = 1;
          }
          FUN_00419430(&local_440,&DAT_01b41b90);
          FUN_00419430(&local_3b8,&DAT_004210c0);
        }
        local_338 = local_338 + 1;
      }
    }
    if (local_436 == '\0') {
      if (local_res18 == '\x03') {
        FUN_0040cf10(local_310,local_res8,0);
        FUN_0040ca00(local_310);
        FUN_01b3ad30(local_330,local_310);
        FUN_0040d150(local_310);
      }
      FUN_0040cf10(local_748,local_res8,0);
      FUN_0040ca00(local_748);
      if (local_res18 == '\0') {
        FUN_01b38f90(local_330,local_748);
      }
      if (local_res18 == '\x01') {
        FUN_01b390f0(local_330,local_748);
      }
      FUN_01b38bb0(local_res10,local_330,local_320);
      FUN_01b38e20(local_res10,local_328,local_320);
      if (local_res18 == '\x02') {
        FUN_01b39c60(local_res10,local_330,local_328,local_748);
      }
      if (local_res18 == '\x06') {
        FUN_01b3a970(local_res10,local_330,local_328,local_748);
      }
      if (local_res18 == '\a') {
        FUN_01b3a980(local_res10,local_330,local_328,local_748);
      }
      if (local_res18 == '\x05') {
        FUN_01b3a990(local_res10,local_330,local_328,local_748);
      }
      if (local_res18 == '\x04') {
        FUN_01b39770(local_330,local_748);
        FUN_01b37ed0(local_330,local_748);
      }
      if (local_res18 == '\x03') {
        FUN_01b3b0a0(local_res10,local_328,local_748);
      }
      FUN_0040d150(local_748);
      if (((local_res18 == '\x06') || (local_res18 == '\a')) || (local_res18 == '\x01')) {
        FUN_004414c0(&local_420,local_res8,L".hid");
        FUN_0040cf10(local_310,local_420,0);
        FUN_0040ca00(local_310);
        local_9c8 = local_310;
        FUN_01b3a010(local_res10,local_330,local_328,local_318);
        FUN_0040d150(local_310);
      }
      local_351 = 1;
    }
    FUN_00410f20(local_318);
    FUN_01b38b40(local_res10,&local_320);
    FUN_01b38b40(local_res10,&local_328);
    FUN_01b38ad0(local_330);
    iVar2 = *(int *)(local_330 + 0x10);
    local_338 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = FUN_004aeac0(local_330,local_338);
        FUN_00418590(uVar3,&DAT_00ea9440);
        local_338 = local_338 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00410f20(local_330);
    FUN_004095f0(local_328);
    FUN_004095f0(local_320);
    FUN_00419430(&local_340,&DAT_004066f0);
    FUN_00410f20(local_348);
  }
  FUN_00414560(&local_9a0,10);
  FUN_00414560(&local_930,7);
  FUN_00414560(&local_7f8,2);
  FUN_00414560(&local_7d8,3);
  FUN_00417840(&local_758,&LAB_00b9fca0,2);
  FUN_00419430(&local_440,&DAT_01b41b90);
  FUN_00414560(&local_420,6);
  FUN_00414560(&local_3c8,2);
  FUN_00419430(&local_3b8,&DAT_004210c0);
  FUN_00414560(&local_390,3);
  FUN_00419430(&local_340,&DAT_004066f0);
  FUN_00414480(&local_res8);
  FUN_0041b800(&param_5);
  FUN_00414480(&param_7);
  return local_351;
}


/* Ghidra address: 01d23c40 */
/* Ghidra symbol: FUN_01d23c40 */


void FUN_01d23c40(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_3e8 [32];
  undefined2 *local_3c8;
  undefined *local_3c0;
  undefined *local_3b8;
  undefined8 local_3a0;
  longlong local_398;
  longlong local_390;
  longlong local_388;
  undefined8 local_380;
  longlong local_378;
  undefined *local_370;
  undefined *local_368;
  undefined8 local_360;
  longlong local_358;
  undefined1 *local_350;
  undefined4 local_33c;
  char local_337;
  char local_336;
  char local_335;
  int local_334;
  longlong local_330;
  int local_324;
  longlong local_320;
  bool local_315;
  int local_314;
  longlong local_310;
  int local_304;
  longlong local_300;
  int local_2f4;
  int local_2f0;
  longlong *local_2e8;
  int local_2dc;
  undefined2 *local_2d8;
  longlong local_2d0;
  undefined1 local_2c8;
  undefined1 local_2c7 [559];
  undefined8 local_98;
  longlong *local_38;
  undefined8 *local_30;
  longlong local_28;
  longlong local_20;
  
  local_350 = auStack_3e8;
  local_3a0 = 0;
  local_398 = 0;
  local_390 = 0;
  local_388 = 0;
  local_380 = 0;
  local_378 = 0;
  local_370 = (undefined *)0x0;
  local_360 = 0;
  local_368 = (undefined *)0x0;
  local_358 = 0;
  local_2d0 = 0;
  local_2d8 = (undefined2 *)0x0;
  local_20 = 0;
  local_28 = 0;
  local_2e8 = (longlong *)FUN_00723990(&PTR_FUN_0071a1f0,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_00414ad0(local_2e8 + 0x1f,L"Export to MathCad");
  FUN_00414ad0(local_2e8 + 0x1c,L"MathCad file (*.mcd)|*.mcd");
  FUN_00414ad0(local_2e8 + 0x20,&DAT_01d24508);
  *(undefined4 *)(local_2e8 + 0x1b) = 0x116;
  cVar1 = (**(code **)(*local_2e8 + 0xa8))(local_2e8);
  if (cVar1 != '\0') {
    FUN_00724270(local_2e8,&local_358);
    if (local_358 != 0) {
      local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      local_30 = (undefined8 *)FUN_013b2dc0(0,&PTR_FUN_013b25f8,5,5);
      FUN_01694110(local_30,1,0,0);
      FUN_00414480(&local_2d0);
      iVar3 = *(int *)(local_30 + 2);
      local_2dc = 0;
      if (-1 < iVar3 + -1) {
        do {
          FUN_013b49f0(local_30,local_2dc,&local_2c8);
          FUN_004169a0(&local_2d8,local_2c7);
          local_2f0 = 0;
          if (local_2d8 != (undefined2 *)0x0) {
            local_2f0 = *(int *)(local_2d8 + -2);
          }
          if (1 < local_2f0) {
            local_2f4 = 0;
            if (local_2d8 != (undefined2 *)0x0) {
              local_2f4 = *(int *)(local_2d8 + -2);
            }
            FUN_00416780(&local_360,*local_2d8);
            FUN_00416dc0(&local_368,local_2d8,2,local_2f4 + -1);
            local_3c8 = (undefined2 *)&DAT_01d24534;
            local_3c0 = local_368;
            local_3b8 = &DAT_01d24544;
            FUN_00416cd0(&local_2d8,5,&DAT_01d24520,local_360);
          }
          FUN_01d23aa0(&local_370,local_98);
          local_3c8 = local_2d8;
          local_3c0 = &DAT_01d24564;
          local_3b8 = local_370;
          FUN_00416cd0(&local_2d0,5,local_2d0,&DAT_01d24554);
          (**(code **)(*local_38 + 0x78))(local_38,local_2d0);
          FUN_00414480(&local_2d0);
          local_2dc = local_2dc + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_2dc = 1;
      while (iVar3 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))
                               (*(longlong **)(param_1 + 0xa0)), local_2dc <= iVar3) {
        iVar3 = local_2dc + -1;
        (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                  (*(longlong **)(param_1 + 0xa0),&local_378,iVar3);
        local_300 = local_378;
        local_304 = 0;
        if (local_378 != 0) {
          local_304 = *(int *)(local_378 + -4);
        }
        if (0 < local_304) {
          (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                    (*(longlong **)(param_1 + 0xa0),&local_2d0,iVar3);
          while( true ) {
            iVar3 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))
                              (*(longlong **)(param_1 + 0xa0));
            if (local_2dc < iVar3) {
              (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                        (*(longlong **)(param_1 + 0xa0),&local_388,local_2dc + -1);
              local_310 = local_388;
              local_314 = 0;
              if (local_388 != 0) {
                local_314 = *(int *)(local_388 + -4);
              }
              local_315 = 0 < local_314;
            }
            else {
              local_315 = false;
            }
            if (local_315 == false) {
              local_337 = '\0';
            }
            else {
              local_20 = 0;
              iVar3 = local_2dc + -1;
              (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                        (*(longlong **)(param_1 + 0xa0),&local_20,iVar3);
              (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                        (*(longlong **)(param_1 + 0xa0),&local_390,iVar3);
              local_320 = local_390;
              local_324 = 0;
              if (local_390 != 0) {
                local_324 = *(int *)(local_390 + -4);
              }
              local_335 = *(short *)(local_20 + -2 + (longlong)local_324 * 2) == 0x5c;
              FUN_00414480(&local_20);
              if (local_335 == '\0') {
                local_28 = 0;
                iVar3 = local_2dc + -1;
                (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                          (*(longlong **)(param_1 + 0xa0),&local_28,iVar3);
                (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                          (*(longlong **)(param_1 + 0xa0),&local_398,iVar3);
                local_330 = local_398;
                local_334 = 0;
                if (local_398 != 0) {
                  local_334 = *(int *)(local_398 + -4);
                }
                local_336 = *(short *)(local_28 + -2 + (longlong)local_334 * 2) == 0x7c;
                FUN_00414480(&local_28);
              }
              else {
                local_336 = '\x01';
              }
              local_337 = local_336;
            }
            if (local_337 == '\0') break;
            local_33c = 0;
            if (local_2d0 != 0) {
              local_33c = *(undefined4 *)(local_2d0 + -4);
            }
            FUN_00416e20(&local_2d0,local_33c,1);
            (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                      (*(longlong **)(param_1 + 0xa0),&local_380,local_2dc);
            FUN_00416ad0(&local_2d0,local_380);
            local_2dc = local_2dc + 1;
          }
          iVar3 = FUN_004170c0(L"\\s(f)",local_2d0,1);
          if (0 < iVar3) {
            FUN_019b6930(&local_2d0,L"\\s(f)",L"\\s(P)");
          }
          iVar3 = FUN_004170c0(L"DegToRad",local_2d0,1);
          if (0 < iVar3) {
            FUN_019b6930(&local_2d0,L"DegToRad",L"deg*");
          }
          (**(code **)(*local_38 + 0x78))(local_38,local_2d0);
        }
        local_2dc = local_2dc + 1;
      }
      FUN_00724270(local_2e8,&local_3a0);
      FUN_01d24640(param_1,local_38,local_3a0);
      uVar2 = (**(code **)*local_30)(local_30);
      FUN_004095f0(uVar2);
      FUN_00410f20(local_38);
    }
  }
  FUN_00410f20(local_2e8);
  FUN_00414480(&local_3a0);
  FUN_00414560(&local_398,8);
  FUN_00414480(&local_358);
  FUN_00414560(&local_2d8,2);
  return;
}


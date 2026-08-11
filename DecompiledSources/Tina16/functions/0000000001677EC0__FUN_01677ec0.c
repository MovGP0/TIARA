/* Ghidra address: 01677ec0 */
/* Ghidra symbol: FUN_01677ec0 */


longlong FUN_01677ec0(longlong param_1,char param_2,undefined8 param_3,longlong param_4,
                     undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  int *piVar7;
  longlong local_res8;
  undefined1 auStack_5d8 [32];
  undefined1 *local_5b8;
  undefined1 *local_5b0;
  undefined1 *local_5a8;
  int *local_5a0;
  uint local_598;
  uint local_594;
  longlong local_590;
  longlong local_588;
  undefined1 *local_580;
  undefined4 local_564;
  undefined8 local_560;
  longlong local_558;
  longlong local_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  longlong local_530;
  longlong local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 uStack_510;
  longlong local_508;
  longlong local_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  longlong local_4e0;
  longlong local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  longlong local_4b8;
  longlong local_4b0;
  longlong local_4a8;
  uint local_48c;
  undefined8 local_488;
  longlong local_480;
  undefined4 local_464;
  undefined8 local_460;
  longlong local_458;
  longlong local_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  longlong local_430;
  longlong local_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  longlong local_408;
  longlong local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  longlong local_3e0;
  longlong local_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  longlong local_3b8;
  longlong local_3b0;
  longlong local_3a8;
  uint local_38c;
  undefined8 local_388;
  longlong local_380;
  longlong local_378;
  longlong local_370;
  uint local_354;
  undefined8 local_350;
  longlong local_348;
  longlong local_340;
  undefined8 *local_330;
  undefined8 *local_328;
  undefined8 *local_320;
  undefined8 *local_318 [2];
  longlong local_308;
  longlong local_300;
  uint local_2f4;
  uint local_2f0;
  uint local_2ec;
  undefined8 local_2e8;
  undefined8 local_2e0 [17];
  undefined8 local_258 [17];
  int local_1d0 [34];
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  undefined1 local_138 [16];
  undefined1 local_128 [32];
  double local_108;
  double local_f0;
  undefined8 local_a0;
  
  local_580 = auStack_5d8;
  local_300 = 0;
  local_308 = 0;
  local_318[0] = (undefined8 *)0x0;
  local_320 = (undefined8 *)0x0;
  local_328 = (undefined8 *)0x0;
  local_330 = (undefined8 *)0x0;
  puVar6 = local_258;
  for (lVar3 = 0x11; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *param_5;
    param_5 = param_5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar6 = local_2e0;
  for (lVar3 = 0x11; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *param_6;
    param_6 = param_6 + 1;
    puVar6 = puVar6 + 1;
  }
  piVar7 = local_1d0;
  for (lVar3 = 0x33; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)piVar7 = *param_7;
    param_7 = param_7 + 1;
    piVar7 = piVar7 + 2;
  }
  local_res8 = param_1;
  puVar1 = auStack_5d8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_580;
  }
  local_580 = puVar1;
  FUN_01676510(local_res8,0,param_3,param_4);
  if (*(char *)(param_4 + 0xed7) == '\x01') {
    *(double *)(local_res8 + 0x58) = (double)local_1d0[0] * local_108;
    *(undefined8 *)(local_res8 + 0x60) = local_a0;
    FUN_01b0fae0(local_res8,0,2);
    iVar2 = FUN_01b0faf0(local_res8,0);
    local_2f0 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_01b0faa0(local_res8,0,local_2f0);
        local_2f0 = local_2f0 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_01b0fa30(local_res8,0,0);
  }
  else {
    local_5b8 = local_148;
    local_5b0 = local_140;
    local_5a8 = local_138;
    local_5a0 = local_1d0;
    FUN_01674760(0,0,0,local_128);
    if (*(char *)(param_4 + 0xed7) == '\x02') {
      FUN_00419430(local_318,&DAT_01af6c10);
      FUN_00419260(local_318,&DAT_01af6c10,1,3);
      *local_318[0] = 0;
      local_318[0][1] = local_f0;
      local_318[0][2] = local_f0 + 3.0;
      FUN_004194b0(&local_300,local_318[0],&DAT_01af6c10);
      FUN_00419430(&local_320,&DAT_01af6c10);
      FUN_00419260(&local_320,&DAT_01af6c10,1,3);
      *local_320 = 0;
      local_320[1] = 0x4008000000000000;
      local_320[2] = 0x403e000000000000;
      FUN_004194b0(&local_308,local_320,&DAT_01af6c10);
    }
    else {
      FUN_00419430(&local_328,&DAT_01af6c10);
      FUN_00419260(&local_328,&DAT_01af6c10,1,5);
      *local_328 = 0;
      local_328[1] = local_f0;
      local_328[2] = local_f0 + 1.0;
      local_328[3] = local_f0 + 3.0;
      local_328[4] = local_f0 + 10.0;
      FUN_004194b0(&local_300,local_328,&DAT_01af6c10);
      FUN_00419430(&local_330,&DAT_01af6c10);
      FUN_00419260(&local_330,&DAT_01af6c10,1,6);
      *local_330 = 0;
      local_330[1] = 0x3ff0000000000000;
      local_330[2] = 0x4008000000000000;
      local_330[3] = 0x4024000000000000;
      local_330[4] = 0x403e000000000000;
      local_330[5] = 0x4059000000000000;
      FUN_004194b0(&local_308,local_330,&DAT_01af6c10);
    }
    local_340 = local_300;
    if (local_300 != 0) {
      local_340 = *(longlong *)(local_300 + -8);
    }
    iVar2 = (int)local_340;
    local_2f0 = 0;
    if (-1 < iVar2 + -1) {
      do {
        local_348 = *(longlong *)(local_res8 + 0x68);
        local_350 = FUN_0167dfb0(&PTR_FUN_0166b3d8,1);
        local_354 = FUN_00597e50(local_348 + 8,&local_350);
        local_370 = local_308;
        if (local_308 != 0) {
          local_370 = *(longlong *)(local_308 + -8);
        }
        iVar5 = (int)local_370;
        local_2f4 = 0;
        local_2ec = local_354;
        if (-1 < iVar5 + -1) {
          do {
            FUN_01677dd0(auStack_5d8,*(undefined8 *)(local_300 + (longlong)(int)local_2f0 * 8),
                         *(undefined8 *)(local_308 + (longlong)(int)local_2f4 * 8),local_2ec);
            local_2f4 = local_2f4 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_2f0 = local_2f0 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_01b0fae0(local_res8,0,*(int *)(*(longlong *)(local_res8 + 0x68) + 0x10) + -1);
    iVar2 = FUN_01b0faf0(local_res8,0);
    local_2f0 = -1;
    if (-2 < iVar2) {
      iVar2 = iVar2 + 2;
      do {
        FUN_01b0faa0(local_res8,0,local_2f0);
        local_2f0 = local_2f0 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_378 = *(longlong *)(local_res8 + 0x68);
    if (*(int *)(local_378 + 0x10) == 0) {
      FUN_00594f90();
    }
    FUN_01b0fae0(local_res8,1,*(int *)(**(longlong **)(local_378 + 8) + 0x10) + -1);
    iVar2 = FUN_01b0faf0(local_res8,1);
    local_2f0 = -1;
    if (-2 < iVar2) {
      iVar2 = iVar2 + 2;
      do {
        FUN_01b0faa0(local_res8,1,local_2f0);
        local_2f0 = local_2f0 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = *(int *)(*(longlong *)(local_res8 + 0x68) + 0x10);
    local_2f0 = 0;
    if (-1 < iVar2 + -2) {
      iVar2 = iVar2 + -1;
      do {
        local_380 = *(longlong *)(local_res8 + 0x70);
        local_388 = FUN_01680a00(&PTR_FUN_0166efa0,1);
        local_38c = FUN_00597e50(local_380 + 8,&local_388);
        local_3a8 = *(longlong *)(local_res8 + 0x68);
        local_2ec = local_38c;
        if (*(uint *)(local_3a8 + 0x10) <= local_2f0) {
          FUN_00594f90();
        }
        iVar5 = *(int *)(*(longlong *)(*(longlong *)(local_3a8 + 8) + (longlong)(int)local_2f0 * 8)
                        + 0x10);
        local_2f4 = 0;
        if (-1 < iVar5 + -1) {
          do {
            local_3b0 = *(longlong *)(local_res8 + 0x68);
            if (*(uint *)(local_3b0 + 0x10) <= local_2f0) {
              FUN_00594f90();
            }
            local_3b8 = *(longlong *)(*(longlong *)(local_3b0 + 8) + (longlong)(int)local_2f0 * 8);
            local_598 = local_2f4;
            if (*(uint *)(local_3b8 + 0x10) <= local_2f4) {
              FUN_00594f90();
            }
            local_590 = (longlong)(int)local_2f4;
            puVar6 = (undefined8 *)(*(longlong *)(local_3b8 + 8) + local_590 * 0x18);
            local_3d0 = *puVar6;
            uStack_3c8 = puVar6[1];
            uStack_3c0 = puVar6[2];
            local_3d8 = *(longlong *)(local_res8 + 0x68);
            if (*(uint *)(local_3d8 + 0x10) <= local_2f0) {
              FUN_00594f90();
            }
            local_3e0 = *(longlong *)(*(longlong *)(local_3d8 + 8) + (longlong)(int)local_2f0 * 8);
            if (*(uint *)(local_3e0 + 0x10) <= local_598) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_3e0 + 8) + local_590 * 0x18);
            local_3f8 = *puVar6;
            uStack_3f0 = puVar6[1];
            local_3e8 = puVar6[2];
            local_400 = *(longlong *)(local_res8 + 0x68);
            uVar4 = local_2f0 + 1;
            if (*(uint *)(local_400 + 0x10) <= uVar4) {
              FUN_00594f90();
            }
            local_408 = *(longlong *)(*(longlong *)(local_400 + 8) + (longlong)(int)uVar4 * 8);
            if (*(uint *)(local_408 + 0x10) <= local_598) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_408 + 8) + local_590 * 0x18);
            local_420 = *puVar6;
            uStack_418 = puVar6[1];
            uStack_410 = puVar6[2];
            local_428 = *(longlong *)(local_res8 + 0x68);
            if (*(uint *)(local_428 + 0x10) <= uVar4) {
              FUN_00594f90();
            }
            local_430 = *(longlong *)(*(longlong *)(local_428 + 8) + (longlong)(int)uVar4 * 8);
            if (*(uint *)(local_430 + 0x10) <= local_598) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_430 + 8) + local_590 * 0x18);
            local_448 = *puVar6;
            uStack_440 = puVar6[1];
            local_438 = puVar6[2];
            local_2e8 = FUN_01676390(local_3d0,local_3e8,local_420,local_438);
            local_450 = *(longlong *)(local_res8 + 0x70);
            if (*(uint *)(local_450 + 0x10) <= local_2ec) {
              FUN_00594f90();
            }
            local_458 = *(longlong *)(*(longlong *)(local_450 + 8) + (longlong)(int)local_2ec * 8);
            local_460 = local_2e8;
            local_464 = FUN_00597e50(local_458 + 8,&local_460);
            local_2f4 = local_2f4 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_2f0 = local_2f0 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = *(int *)(*(longlong *)(local_res8 + 0x68) + 0x10);
    local_2f0 = 0;
    if (-1 < iVar2 + -1) {
      do {
        local_480 = *(longlong *)(local_res8 + 0x78);
        local_488 = FUN_01680a00(&PTR_FUN_0166efa0,1);
        local_48c = FUN_00597e50(local_480 + 8,&local_488);
        local_4a8 = *(longlong *)(local_res8 + 0x68);
        local_2ec = local_48c;
        if (*(uint *)(local_4a8 + 0x10) <= local_2f0) {
          FUN_00594f90();
        }
        iVar5 = *(int *)(*(longlong *)(*(longlong *)(local_4a8 + 8) + (longlong)(int)local_2f0 * 8)
                        + 0x10);
        local_2f4 = 0;
        if (-1 < iVar5 + -2) {
          iVar5 = iVar5 + -1;
          do {
            local_4b0 = *(longlong *)(local_res8 + 0x68);
            local_594 = local_2f0;
            if (*(uint *)(local_4b0 + 0x10) <= local_2f0) {
              FUN_00594f90();
            }
            local_588 = (longlong)(int)local_2f0;
            local_4b8 = *(longlong *)(*(longlong *)(local_4b0 + 8) + local_588 * 8);
            if (*(uint *)(local_4b8 + 0x10) <= local_2f4) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_4b8 + 8) + (longlong)(int)local_2f4 * 0x18);
            local_4d0 = *puVar6;
            local_4c8 = puVar6[1];
            uStack_4c0 = puVar6[2];
            local_4d8 = *(longlong *)(local_res8 + 0x68);
            if (*(uint *)(local_4d8 + 0x10) <= local_594) {
              FUN_00594f90();
            }
            local_4e0 = *(longlong *)(*(longlong *)(local_4d8 + 8) + local_588 * 8);
            if (*(uint *)(local_4e0 + 0x10) <= local_2f4) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_4e0 + 8) + (longlong)(int)local_2f4 * 0x18);
            local_4f8 = *puVar6;
            uStack_4f0 = puVar6[1];
            local_4e8 = puVar6[2];
            local_500 = *(longlong *)(local_res8 + 0x68);
            if (*(uint *)(local_500 + 0x10) <= local_594) {
              FUN_00594f90();
            }
            local_508 = *(longlong *)(*(longlong *)(local_500 + 8) + local_588 * 8);
            uVar4 = local_2f4 + 1;
            if (*(uint *)(local_508 + 0x10) <= uVar4) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_508 + 8) + (longlong)(int)uVar4 * 0x18);
            local_520 = *puVar6;
            local_518 = puVar6[1];
            uStack_510 = puVar6[2];
            local_528 = *(longlong *)(local_res8 + 0x68);
            if (*(uint *)(local_528 + 0x10) <= local_594) {
              FUN_00594f90();
            }
            local_530 = *(longlong *)(*(longlong *)(local_528 + 8) + local_588 * 8);
            if (*(uint *)(local_530 + 0x10) <= uVar4) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_530 + 8) + (longlong)(int)uVar4 * 0x18);
            local_548 = *puVar6;
            uStack_540 = puVar6[1];
            local_538 = puVar6[2];
            local_2e8 = FUN_01676390(local_4c8,local_4e8,local_518,local_538);
            local_550 = *(longlong *)(local_res8 + 0x78);
            if (*(uint *)(local_550 + 0x10) <= local_2ec) {
              FUN_00594f90();
            }
            local_558 = *(longlong *)(*(longlong *)(local_550 + 8) + (longlong)(int)local_2ec * 8);
            local_560 = local_2e8;
            local_564 = FUN_00597e50(local_558 + 8,&local_560);
            local_2f4 = local_2f4 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_2f0 = local_2f0 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00417840(&local_330,&DAT_01af6c10,4);
  FUN_00417840(&local_308,&DAT_01af6c10,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}


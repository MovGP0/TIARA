/* Ghidra address: 019a9ed0 */
/* Ghidra symbol: FUN_019a9ed0 */


int FUN_019a9ed0(ulonglong param_1,undefined8 param_2,char param_3,byte param_4,char param_5,
                longlong *param_6,undefined1 param_7)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  bool bVar12;
  undefined1 auStack_488 [32];
  ulonglong local_468;
  undefined8 *local_460;
  uint *local_458;
  char local_441;
  undefined8 local_440;
  byte local_435;
  int local_434;
  longlong local_430;
  byte local_425;
  int local_424;
  longlong local_420;
  longlong local_418;
  int local_410;
  int local_40c;
  int local_408;
  undefined4 local_404;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  ulonglong local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  ulonglong local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  ulonglong local_388;
  undefined1 local_380;
  undefined8 local_378;
  undefined1 local_370;
  undefined8 local_368;
  undefined1 local_360;
  undefined8 local_358;
  undefined1 local_350;
  undefined8 local_348;
  undefined1 local_340;
  undefined8 local_338;
  undefined1 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined1 local_2d0 [256];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined1 local_190;
  undefined8 local_188;
  undefined1 local_180;
  undefined8 local_178;
  undefined8 local_170;
  ulonglong local_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong local_150;
  undefined1 local_148;
  ulonglong local_140;
  undefined1 local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_120;
  ulonglong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  longlong local_a0;
  uint local_94;
  undefined1 local_90 [16];
  ulonglong auStack_80 [5];
  undefined8 local_58;
  int local_50;
  undefined1 local_49;
  longlong local_48;
  char local_39;
  undefined8 local_38;
  longlong local_30;
  
  local_400 = 0;
  local_3f0 = 0;
  local_3f8 = 0;
  local_3e8 = 0;
  local_3d0 = 0;
  local_3e0 = 0;
  local_3d8 = 0;
  local_3b0 = 0;
  local_3b8 = 0;
  local_3c0 = 0;
  local_3c8 = 0;
  local_318 = 0;
  local_320 = 0;
  local_390 = 0;
  local_398 = 0;
  local_328 = 0;
  local_310 = 0;
  local_308 = 0;
  local_2f8 = 0;
  local_300 = 0;
  local_2f0 = 0;
  local_2e8 = 0;
  local_2d8 = 0;
  local_2e0 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_170 = 0;
  local_178 = 0;
  local_1a0 = 0;
  local_158 = 0;
  local_168 = 0;
  local_160 = 0;
  local_108 = 0;
  local_110 = 0;
  local_120 = 0;
  local_118 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_38 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_441 = param_3;
  local_440 = param_2;
  local_435 = param_4;
  FUN_00417600(local_90,&DAT_00401390,7);
  local_434 = 0;
  local_50 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x450) + 0x90))(*(longlong **)(param_1 + 0x450));
  FUN_00414b50(&local_38,*(undefined8 *)PTR_DAT_02001f18);
  local_424 = -2;
  puVar11 = local_90;
  do {
    FUN_00de8980(&local_d0,local_424 + 0x91,local_38);
    FUN_00414ad0(puVar11,local_d0);
    local_424 = local_424 + 1;
    puVar11 = puVar11 + 8;
  } while (local_424 != 5);
  FUN_00de8980(&local_d8,0x96,local_38);
  uVar8 = local_d8;
  (**(code **)(*param_6 + 0x78))(param_6,local_d8);
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  if (param_5 != '\x02') {
    local_468 = CONCAT71(local_468._1_7_,param_7);
    local_460 = (undefined8 *)((ulonglong)local_460 & 0xffffffffffff0000);
    local_458 = &local_94;
    uVar8 = param_1;
    FUN_014b7d50(0xf,param_1,1,0);
  }
  if (local_94 == 5) {
    local_94 = 0;
  }
  if (local_94 == 0xffffffff) {
    iVar9 = *(int *)(*(longlong *)(param_1 + 0x3e0) + 0x10);
    local_424 = 0;
    if (-1 < iVar9 + -1) {
      do {
        local_e0 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x3e0),local_424);
        uVar5 = FUN_019a74e0(auStack_488,1,&local_e0,0);
        uVar8 = auStack_80[(int)local_94];
        (**(code **)(*param_6 + 0x80))(param_6,uVar8,uVar5);
        local_424 = local_424 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  else {
    uVar8 = auStack_80[(int)local_94];
    (**(code **)(*param_6 + 0x78))(param_6,uVar8);
  }
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  if (local_94 < 8) {
    bVar12 = ((int)CONCAT71((int7)(uVar8 >> 8),1) << ((byte)local_94 & 0x1f) & 0xeU) != 0;
  }
  else {
    bVar12 = false;
  }
  if (bVar12) {
    FUN_00de8980(&local_400,0x9b,local_38);
    (**(code **)(*param_6 + 0x78))(param_6,local_400);
  }
  else {
    local_30 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    local_430 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    local_48 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    local_58 = FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_004b67b0(local_58,1);
    local_39 = '\0';
    local_49 = FUN_01d3bed0(*(undefined8 *)(param_1 + 0x488));
    local_c8 = (undefined8 *)(param_1 + 0x460);
    uVar5 = *local_c8;
    *local_c8 = 0;
    FUN_00410f20(uVar5);
    sVar2 = FUN_019954d0(param_1);
    uVar5 = FUN_016aee50(&DAT_016aebf8,1,sVar2 + 1);
    *(undefined8 *)(param_1 + 0x460) = uVar5;
    FUN_019a76b0(auStack_488,param_1,0);
    if (local_39 == '\0') {
      FUN_016aef60(*(undefined8 *)(param_1 + 0x460),0,1);
    }
    if (param_5 == '\0') {
      local_418 = 0;
    }
    else {
      local_418 = *(longlong *)(param_1 + 0xe70);
    }
    if (param_5 == '\x02') {
      FUN_016cba70(param_1,*(undefined8 *)(local_418 + 0xa38));
    }
    FUN_016af0f0(*(undefined8 *)(param_1 + 0x460),0xf,0);
    iVar9 = (**(code **)(**(longlong **)(param_1 + 0x450) + 0x28))();
    local_424 = 0;
    if (-1 < iVar9 + -1) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0x450) + 0x18))
                  (*(longlong **)(param_1 + 0x450),&local_e8,local_424);
        (**(code **)(*param_6 + 0x78))(param_6,local_e8);
        local_424 = local_424 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    iVar9 = (**(code **)(**(longlong **)(param_1 + 0x450) + 0x28))(*(longlong **)(param_1 + 0x450));
    local_50 = local_50 + iVar9;
    iVar9 = *(int *)(local_30 + 0x10);
    local_424 = 0;
    if (-1 < iVar9 + -1) {
      do {
        local_420 = FUN_019a7220(auStack_488,local_424);
        cVar1 = FUN_017cc990(*(undefined4 *)(local_420 + 8),local_48);
        if (cVar1 == '\0') {
          if ((*(int *)(local_420 + 8) < 99999) &&
             (0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x460) + 0x28) + 4 +
                          (longlong)*(int *)(local_420 + 8) * 8))) {
            FUN_00de8980(&local_a0,0x3e3,local_38);
            iVar3 = FUN_019a6fd0();
            iVar10 = 0;
            if (-1 < iVar3 + -1) {
              do {
                puVar6 = (undefined8 *)FUN_019a6fe0(local_420,iVar10);
                cVar1 = FUN_0198a580(*puVar6);
                if (cVar1 != '\x05') {
                  puVar6 = (undefined8 *)FUN_019a6fe0(local_420,iVar10);
                  cVar1 = FUN_019a9e90(auStack_488,*puVar6);
                  if (cVar1 == '\0') {
                    local_50 = local_50 + 1;
                    if (param_5 == '\0') {
                      local_468 = CONCAT44(local_468._4_4_,iVar10);
                      local_460 = &local_b0;
                      local_458 = (uint *)0x0;
                      FUN_019a98d0(auStack_488,&local_100,param_1,local_420);
                      FUN_00414b50(&local_a8,local_100);
                    }
                    else {
                      FUN_019a94f0(auStack_488,&local_f0,*(undefined8 *)(local_418 + 0xa50),
                                   *(undefined4 *)(local_420 + 8));
                      FUN_00414b50(&local_a8,local_f0);
                      puVar6 = (undefined8 *)FUN_019a6fe0(local_420,iVar10);
                      FUN_019a9590(auStack_488,&local_f8,local_a8,*puVar6);
                      FUN_00414b50(&local_b0,local_f8);
                    }
                    FUN_0041ddd0(&local_118,&PTR_PTR_0198a520);
                    local_468 = local_118;
                    FUN_00de8a20(&local_110,L"SchEd",L"sERCFloatingNode",local_38);
                    FUN_004168b0(&local_120,local_110);
                    local_150 = local_a0;
                    local_148 = 0x11;
                    local_140 = local_a8;
                    local_138 = 0x11;
                    local_130 = local_b0;
                    local_128 = 0x11;
                    FUN_00442f70(&local_108,local_120,&local_150,2);
                    FUN_00414b50(&local_a0,local_108);
                    if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x460) + 0x28) +
                                (longlong)*(int *)(local_420 + 8) * 8) == 0) {
                      FUN_0041ddd0(&local_160,&PTR_PTR_0198a530);
                      local_468 = local_160;
                      FUN_00de8a20(&local_158,L"SchEd",L"sERCGroundedNode",local_38);
                      FUN_004168b0(&local_168,local_158);
                      local_468 = local_168;
                      FUN_00416cd0(&local_a0,3,local_a0,&DAT_019ab930);
                    }
                    puVar6 = (undefined8 *)FUN_019a6fe0(local_420,iVar10);
                    local_e0 = *puVar6;
                    uVar5 = FUN_019a74e0(auStack_488,1,&local_e0,0);
                    (**(code **)(*param_6 + 0x80))(param_6,local_a0,uVar5);
                  }
                }
                iVar10 = iVar10 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
          }
          iVar3 = FUN_019a6fd0(local_420);
          if (iVar3 == 1) {
            uVar4 = FUN_019a6f60(local_420,0);
            local_425 = FUN_01d447a0(local_440,uVar4,9);
            puVar6 = (undefined8 *)FUN_019a6fe0(local_420,0);
            cVar1 = FUN_0198a580(*puVar6);
            if (cVar1 != '\x05') {
              puVar6 = (undefined8 *)FUN_019a6fe0(local_420,0);
              cVar1 = FUN_0198a580(*puVar6);
              if (((local_435 & cVar1 != '\x05') != 0) || (local_425 != 0)) {
                if (local_425 < 2) {
                  FUN_00de8980(&local_a0,0x3e3,local_38);
                  local_50 = local_50 + 1;
                }
                else if (local_425 == 2) {
                  FUN_00de8980(&local_a0,0x3e2,local_38);
                  local_434 = local_434 + 1;
                }
                puVar6 = (undefined8 *)FUN_019a6fe0(local_420,0);
                cVar1 = FUN_0198a580(*puVar6);
                if (cVar1 == '\x05') {
                  FUN_00de8980(&local_178,0x97,local_38);
                  local_198 = local_a0;
                  local_190 = 0x11;
                  puVar6 = (undefined8 *)FUN_019a6fe0(local_420,0);
                  FUN_019a7350(auStack_488,&local_1a0,*puVar6);
                  local_188 = local_1a0;
                  local_180 = 0x11;
                  FUN_00442f70(&local_170,local_178,&local_198,1);
                  puVar6 = (undefined8 *)FUN_019a6fe0(local_420,0);
                  local_e0 = *puVar6;
                  uVar5 = FUN_019a74e0(auStack_488,local_425,&local_e0,0);
                  (**(code **)(*param_6 + 0x80))(param_6,local_170,uVar5);
                }
                else if (param_5 == '\x01') {
                  FUN_019a94f0(auStack_488,&local_1a8,*(undefined8 *)(local_418 + 0xa50),
                               *(undefined4 *)(local_420 + 8));
                  FUN_00414b50(&local_a8,local_1a8);
                  puVar6 = (undefined8 *)FUN_019a6fe0(local_420,0);
                  FUN_019a9590(auStack_488,&local_1b0,local_a8,*puVar6);
                  FUN_00414b50(&local_b0,local_1b0);
                  FUN_00de8980(&local_1c0,0x98,local_38);
                  local_150 = local_a0;
                  local_148 = 0x11;
                  local_140 = local_a8;
                  local_138 = 0x11;
                  local_130 = local_b0;
                  local_128 = 0x11;
                  FUN_00442f70(&local_1b8,local_1c0,&local_150,2);
                  puVar6 = (undefined8 *)FUN_019a6fe0(local_420,0);
                  local_e0 = *puVar6;
                  uVar5 = FUN_019a74e0(auStack_488,local_425,&local_e0,0);
                  (**(code **)(*param_6 + 0x80))(param_6,local_1b8,uVar5);
                }
                else if (param_5 == '\x02') {
                  FUN_019a94f0(auStack_488,&local_1c8,*(undefined8 *)(local_418 + 0xa50),
                               *(undefined4 *)(local_420 + 8));
                  FUN_00414b50(&local_a8,local_1c8);
                  puVar6 = (undefined8 *)FUN_019a6fe0(local_420,0);
                  FUN_019a9590(auStack_488,&local_1d0,local_a8,*puVar6);
                  FUN_00414b50(&local_b0,local_1d0);
                  FUN_00416910(local_2d0,local_a8,0xff);
                  cVar1 = FUN_016cb9b0(local_2d0,*(undefined8 *)(local_418 + 0xa38));
                  if (cVar1 == '\0') {
                    FUN_00de8980(&local_2e0,0x98,local_38);
                    local_150 = local_a0;
                    local_148 = 0x11;
                    local_140 = local_a8;
                    local_138 = 0x11;
                    local_130 = local_b0;
                    local_128 = 0x11;
                    FUN_00442f70(&local_2d8,local_2e0,&local_150,2);
                    puVar6 = (undefined8 *)FUN_019a6fe0(local_420,0);
                    local_e0 = *puVar6;
                    uVar5 = FUN_019a74e0(auStack_488,local_425,&local_e0,0);
                    (**(code **)(*param_6 + 0x80))(param_6,local_2d8,uVar5);
                  }
                  else {
                    local_50 = local_50 + -1;
                  }
                }
                else {
                  local_468 = local_468 & 0xffffffff00000000;
                  local_460 = &local_b0;
                  local_458 = (uint *)0x0;
                  FUN_019a98d0(auStack_488,&local_2e8,param_1,local_420);
                  FUN_00414b50(&local_a8,local_2e8);
                  puVar6 = (undefined8 *)FUN_019a6fe0(local_420,0);
                  lVar7 = FUN_019a6fe0(local_420,0);
                  local_468 = local_a8;
                  FUN_019a9c60(auStack_488,&local_2f0,*puVar6,*(undefined4 *)(lVar7 + 8));
                  FUN_00414b50(&local_a8,local_2f0);
                  FUN_00de8980(&local_300,0x98,local_38);
                  local_150 = local_a0;
                  local_148 = 0x11;
                  local_140 = local_a8;
                  local_138 = 0x11;
                  local_130 = local_b0;
                  local_128 = 0x11;
                  FUN_00442f70(&local_2f8,local_300,&local_150,2);
                  puVar6 = (undefined8 *)FUN_019a6fe0(local_420,0);
                  local_e0 = *puVar6;
                  uVar5 = FUN_019a74e0(auStack_488,local_425,&local_e0,0);
                  (**(code **)(*param_6 + 0x80))(param_6,local_2f8,uVar5);
                }
              }
            }
          }
          else {
            iVar3 = FUN_019a6fd0();
            local_410 = 0;
            if (-1 < iVar3 + -1) {
              do {
                if ((*(int *)(local_420 + 8) != -1) && (*PTR_DAT_020024c0 != '\0')) {
                  local_404 = FUN_019a6f60(local_420,local_410);
                  iVar10 = FUN_019a6fd0(local_420);
                  local_408 = local_410 + 1;
                  if (local_408 <= iVar10 + -1) {
                    iVar10 = ((iVar10 + -1) - local_408) + 1;
                    do {
                      uVar4 = FUN_019a6f60(local_420,local_408);
                      local_425 = FUN_01d447a0(local_440,local_404,uVar4);
                      if (local_425 == 0) {
                        FUN_00414480(&local_a0);
                      }
                      else if (local_425 == 1) {
                        FUN_00de8980(&local_a0,0x3e3,local_38);
                        local_50 = local_50 + 1;
                      }
                      else if (local_425 == 2) {
                        FUN_00de8980(&local_a0,0x3e2,local_38);
                        local_434 = local_434 + 1;
                      }
                      if (local_a0 != 0) {
                        local_468._0_4_ = local_410;
                        local_460 = &local_b0;
                        local_458 = (uint *)0x0;
                        FUN_019a98d0(auStack_488,&local_308,param_1,local_420);
                        FUN_00414b50(&local_a8,local_308);
                        local_468 = CONCAT44(local_468._4_4_,local_408);
                        local_460 = &local_c0;
                        local_458 = (uint *)0x0;
                        FUN_019a98d0(auStack_488,&local_310,param_1,local_420);
                        FUN_00414b50(&local_b8,local_310);
                        FUN_00de8980(&local_328,0x99,local_38);
                        FUN_00416ba0(&local_320,local_a0,local_328);
                        local_388 = local_a8;
                        local_380 = 0x11;
                        uVar4 = FUN_019a6f60(local_420,local_410);
                        FUN_019a7320(auStack_488,&local_390,uVar4);
                        local_378 = local_390;
                        local_370 = 0x11;
                        local_368 = local_b0;
                        local_360 = 0x11;
                        local_358 = local_b8;
                        local_350 = 0x11;
                        uVar4 = FUN_019a6f60(local_420,local_408);
                        FUN_019a7320(auStack_488,&local_398,uVar4);
                        local_348 = local_398;
                        local_340 = 0x11;
                        local_338 = local_c0;
                        local_330 = 0x11;
                        FUN_00442f70(&local_318,local_320,&local_388,5);
                        puVar6 = (undefined8 *)FUN_019a6fe0(local_420,local_410);
                        local_3a8 = *puVar6;
                        puVar6 = (undefined8 *)FUN_019a6fe0(local_420,local_408);
                        local_3a0 = *puVar6;
                        uVar5 = FUN_019a74e0(auStack_488,local_425,&local_3a8,1);
                        (**(code **)(*param_6 + 0x80))(param_6,local_318,uVar5);
                      }
                      local_408 = local_408 + 1;
                      iVar10 = iVar10 + -1;
                    } while (iVar10 != 0);
                  }
                }
                local_410 = local_410 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
          }
        }
        local_424 = local_424 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    iVar9 = *(int *)(local_430 + 0x10);
    local_424 = 0;
    if (-1 < iVar9 + -1) {
      do {
        FUN_00de8980(&local_3b8,0x98,local_38);
        local_150 = local_a0;
        local_148 = 0x11;
        uVar5 = FUN_004aeac0(local_430,local_424);
        FUN_019a7240(auStack_488,&local_3c0,uVar5);
        local_140 = local_3c0;
        local_138 = 0x11;
        puVar6 = (undefined8 *)FUN_004aeac0(local_430,local_424);
        FUN_019a7350(auStack_488,&local_3c8,*puVar6);
        local_130 = local_3c8;
        local_128 = 0x11;
        FUN_00442f70(&local_3b0,local_3b8,&local_150,2);
        puVar6 = (undefined8 *)FUN_004aeac0(local_430,local_424);
        local_e0 = *puVar6;
        uVar5 = FUN_019a74e0(auStack_488,local_425,&local_e0,0);
        (**(code **)(*param_6 + 0x80))(param_6,local_3b0,uVar5);
        local_424 = local_424 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    if (local_441 != '\0') {
      FUN_019a7f90(auStack_488,param_1);
    }
    FUN_019a82b0(auStack_488,param_1);
    FUN_019a8ac0(auStack_488,param_1);
    FUN_019a8eb0(auStack_488,param_1);
    cVar1 = FUN_019a8c80(auStack_488,param_1);
    if (cVar1 != '\0') {
      FUN_0041ddd0(&local_3d8,&PTR_PTR_0198a540);
      local_468 = local_3d8;
      FUN_00de8a20(&local_3d0,L"SchEd",L"sERCDuplicateIDs",local_38);
      FUN_004168b0(&local_3e0,local_3d0);
      uVar5 = FUN_019a74e0(auStack_488,1,&local_3e0,0xffffffff);
      (**(code **)(*param_6 + 0x80))(param_6,local_3e0,uVar5);
      local_50 = local_50 + 1;
    }
    if (local_39 == '\0') {
      FUN_00de8980(&local_3e8,0x8f,local_38);
      uVar5 = FUN_019a74e0(auStack_488,1,&local_3e0,0xffffffff);
      (**(code **)(*param_6 + 0x80))(param_6,local_3e8,uVar5);
      local_50 = local_50 + 1;
    }
    FUN_019a9230(auStack_488,param_1);
    iVar9 = FUN_01440040(param_1,local_38,param_6);
    local_434 = local_434 + iVar9;
    iVar9 = *(int *)(local_30 + 0x10);
    local_424 = 0;
    if (-1 < iVar9 + -1) {
      do {
        uVar5 = FUN_019a7220(auStack_488,local_424);
        FUN_00410f20(uVar5);
        local_424 = local_424 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    FUN_00410f20(local_30);
    iVar9 = *(int *)(local_430 + 0x10);
    local_424 = 0;
    if (-1 < iVar9 + -1) {
      do {
        uVar5 = FUN_004aeac0(local_430,local_424);
        FUN_004095f0(uVar5);
        local_424 = local_424 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    FUN_00410f20(local_430);
    iVar9 = *(int *)(local_48 + 0x10);
    local_424 = 0;
    if (-1 < iVar9 + -1) {
      do {
        uVar5 = FUN_004aeac0(local_48,local_424);
        FUN_004095f0(uVar5);
        local_424 = local_424 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    FUN_00410f20(local_48);
    FUN_00410f20(local_58);
    FUN_00de8980(&local_3f8,0x9a,local_38);
    local_198 = CONCAT44(local_198._4_4_,local_434);
    local_190 = 0;
    local_188 = CONCAT44(local_188._4_4_,local_50);
    local_180 = 0;
    FUN_00442f70(&local_3f0,local_3f8,&local_198,1);
    (**(code **)(*param_6 + 0x78))(param_6,local_3f0);
  }
  local_40c = ((local_94 ^ (int)local_94 >> 0x1f) - ((int)local_94 >> 0x1f)) + local_434 * 100 +
              local_50 * 100000;
  FUN_00414560(&local_400,6);
  FUN_00414520(&local_3d0);
  FUN_00414560(&local_3c8,4);
  FUN_00414560(&local_398,2);
  FUN_00414560(&local_328,0xb);
  FUN_00414560(&local_1d0,7);
  FUN_00414560(&local_178,4);
  FUN_00414520(&local_158);
  FUN_00414560(&local_120,2);
  FUN_00414520(&local_110);
  FUN_00414560(&local_108,5);
  FUN_00414560(&local_d8,2);
  FUN_00414560(&local_c0,5);
  FUN_00417840(local_90,&DAT_00401390,7);
  FUN_00414480(&local_38);
  return local_40c;
}


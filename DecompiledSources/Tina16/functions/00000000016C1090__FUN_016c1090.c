/* Ghidra address: 016c1090 */
/* Ghidra symbol: FUN_016c1090 */


void FUN_016c1090(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_548 [32];
  undefined4 *local_528;
  longlong local_510;
  longlong local_508;
  byte local_4f9;
  longlong *local_4f8;
  int local_4f0;
  int local_4ec;
  int local_4e8;
  int local_4e4;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined4 *local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined4 *local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined4 *local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined2 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined1 local_3b8 [40];
  undefined1 local_390 [40];
  undefined1 local_368 [48];
  undefined1 local_338 [256];
  undefined1 local_238 [256];
  byte local_138;
  char local_137;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30 [2];
  
  local_4e0 = 0;
  local_4c0 = 0;
  local_4d8 = 0;
  local_4c8 = 0;
  local_4d0 = (undefined4 *)0x0;
  local_4a0 = 0;
  local_4b8 = 0;
  local_4a8 = 0;
  local_4b0 = (undefined4 *)0x0;
  local_498 = 0;
  local_478 = 0;
  local_490 = 0;
  local_480 = 0;
  local_488 = (undefined4 *)0x0;
  local_468 = 0;
  local_470 = 0;
  local_460 = 0;
  local_458 = 0;
  local_450 = 0;
  local_448 = 0;
  local_438 = 0;
  local_440 = 0;
  local_428 = 0;
  local_430 = 0;
  local_420 = 0;
  local_418 = 0;
  local_410 = 0;
  local_408 = 0;
  local_3f0 = 0;
  local_400 = 0;
  local_3e8 = 0;
  local_3e0 = 0;
  local_3d8 = 0;
  local_3d0 = 0;
  local_3c8 = 0;
  local_3c0 = 0;
  local_30[0] = 0;
  local_510 = param_1;
  local_508 = param_2;
  FUN_00417580(local_368,&DAT_00ea5ae8);
  FUN_00417580(local_390,&DAT_00ea5f80);
  FUN_00417580(local_3b8,&DAT_00ea5f80);
  lVar5 = FUN_01d34b90(*(undefined8 *)(local_510 + 0xa40));
  FUN_00414c70(local_30,*(undefined8 *)(lVar5 + 0x10));
  local_4e8 = 1;
  local_4ec = 0;
  iVar8 = 0;
  local_4f8 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  while( true ) {
    if (local_4e8 == 0) {
      bVar2 = false;
    }
    else {
      iVar4 = 0;
      if (local_30[0] != 0) {
        iVar4 = *(int *)(local_30[0] + -4);
      }
      bVar2 = local_4e8 < iVar4;
    }
    if (!bVar2) break;
    FUN_00416880(&local_3c0,local_30[0]);
    cVar3 = FUN_005b8460(&DAT_016c1f18,local_3c0);
    if (cVar3 == '\0') {
      FUN_00ea7a10(local_390,L"\\WV\\(",2);
      FUN_00416880(&local_3c8,local_30[0]);
      FUN_00ea8460(local_390,local_368,local_3c8,local_4e8);
      cVar3 = FUN_00ea74f0(local_368);
      if (cVar3 == '\0') {
        local_4f0 = 0;
      }
      else {
        local_4f0 = FUN_00ea74d0(local_368);
        local_4f0 = local_4f0 + 1;
      }
    }
    else {
      local_4f0 = 1;
    }
    FUN_00416880(&local_3d0,local_30[0]);
    cVar3 = FUN_005b8460(&DAT_016c1f48,local_3d0);
    if (cVar3 == '\0') {
      FUN_00ea7a10(local_3b8,L"\\WI\\(",2);
      FUN_00416880(&local_3d8,local_30[0]);
      FUN_00ea8460(local_3b8,local_368,local_3d8,local_4e8);
      cVar3 = FUN_00ea74f0(local_368);
      if (cVar3 == '\0') {
        local_4e4 = 0;
      }
      else {
        local_4e4 = FUN_00ea74d0(local_368);
        local_4e4 = local_4e4 + 1;
      }
    }
    else {
      local_4e4 = 1;
    }
    if ((local_4f0 < 1) || (local_4e4 < 1)) {
      if (local_4f0 == 0) {
        local_4e8 = local_4e4;
      }
      else {
        local_4e8 = local_4f0;
      }
    }
    else {
      local_4e8 = FUN_00b905f0(local_4f0,local_4e4);
    }
    if ((local_4e8 != 0) &&
       (uVar6 = (ulonglong)*(byte *)(local_30[0] + -1 + (longlong)(local_4e8 + -1)),
       ((byte)(&DAT_016c1f68)[(longlong)uVar6 >> 3] >> (uVar6 & 7) & 1) != 0)) {
      local_4e8 = 0;
    }
    if (local_4e8 != 0) {
      local_4f0 = local_4e8;
      local_4e4 = 0;
      local_138 = 0;
      bVar2 = false;
      while( true ) {
        iVar4 = 0;
        if (local_30[0] != 0) {
          iVar4 = *(int *)(local_30[0] + -4);
        }
        if ((iVar4 < local_4e8) || (*(char *)(local_30[0] + -1 + (longlong)local_4e8) == ')'))
        break;
        cVar3 = *(char *)(local_30[0] + -1 + (longlong)local_4e8);
        if (cVar3 == '(') {
          FUN_004154b0(&local_3e0,&local_138,0);
          FUN_004155b0(&local_3e0,&DAT_016c1f94);
          FUN_00415560(&local_138,local_3e0);
        }
        else if (cVar3 == ',') {
          FUN_004169a0(&local_3e8,&local_138);
          iVar4 = FUN_004170c0(&DAT_016c1fa4,local_3e8,1);
          FUN_004151b0(local_238,&local_138,iVar4 + 1,local_138);
          FUN_00414ff0(local_338,local_238);
          bVar2 = true;
          local_4f9 = local_138;
        }
        else {
          FUN_004154b0(&local_3f0,&local_138,0);
          local_3f8 = CONCAT11(cVar3,1);
          FUN_004154b0(&local_400,&local_3f8,0);
          FUN_004155b0(&local_3f0,local_400);
          FUN_00415560(&local_138,local_3f0);
        }
        local_4e4 = local_4e4 + 1;
        local_4e8 = local_4e8 + 1;
      }
      FUN_00415b50(local_30,local_4f0,local_4e4 + 1);
      if (local_137 == 'V') {
        if (bVar2) {
          FUN_004151b0(local_238,&local_138,local_4f9 + 1,local_138);
          lVar5 = local_508;
          local_528 = &local_34;
          cVar3 = FUN_016c0e70(auStack_548,*(undefined8 *)(local_508 + 0x60),local_338,local_238);
          if (cVar3 == '\0') {
            FUN_004169a0(&local_418,local_338);
            uVar7 = FUN_016a4560(&DAT_0169ffe0,1,local_338,0xffffffff);
            plVar1 = *(longlong **)(lVar5 + 0x60);
            (**(code **)(*plVar1 + 0x80))(plVar1,local_418,uVar7);
            FUN_004169a0(&local_420,local_238);
            uVar7 = FUN_016a4560(&DAT_0169ffe0,1,local_238,0xffffffff);
            plVar1 = *(longlong **)(lVar5 + 0x60);
            (**(code **)(*plVar1 + 0x80))(plVar1,local_420,uVar7);
          }
        }
        else {
          FUN_004169a0(&local_408,&local_138);
          iVar4 = FUN_004170c0(&DAT_016c1fa4,local_408,1);
          FUN_004151b0(local_238,&local_138,iVar4 + 1,local_138);
          lVar5 = local_508;
          local_3f8 = 0x3001;
          local_528 = &local_34;
          cVar3 = FUN_016c0e70(auStack_548,*(undefined8 *)(local_508 + 0x60),local_238,&local_3f8);
          if (cVar3 == '\0') {
            FUN_004169a0(&local_410,local_238);
            uVar7 = FUN_016a4560(&DAT_0169ffe0,1,local_238,0xffffffff);
            plVar1 = *(longlong **)(lVar5 + 0x60);
            (**(code **)(*plVar1 + 0x80))(plVar1,local_410,uVar7);
            local_3f8 = 0x3001;
            uVar7 = FUN_016a4560(&DAT_0169ffe0,1,&local_3f8,0xffffffff);
            plVar1 = *(longlong **)(lVar5 + 0x60);
            (**(code **)(*plVar1 + 0x80))(plVar1,&DAT_016c1fb8,uVar7);
          }
        }
        if (cVar3 == '\0') {
          FUN_0043f750(&local_430,local_4ec);
          FUN_00416ba0(&local_428,&DAT_016c1fc8,local_430);
          FUN_00416910(&local_138,local_428,0xff);
          local_4ec = local_4ec + 1;
        }
        else {
          FUN_0043f750(&local_440,local_34);
          FUN_00416ba0(&local_438,&DAT_016c1fc8,local_440);
          FUN_00416910(&local_138,local_438,0xff);
        }
        local_3f8 = 0x2301;
        FUN_004152c0(&local_3f8,&local_138,0xff,2);
        lVar5 = local_508;
        FUN_004169a0(&local_448,&local_138);
        plVar1 = *(longlong **)(lVar5 + 0x58);
        iVar4 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_448);
        if (iVar4 == -1) {
          FUN_004169a0(&local_450,&local_138);
          plVar1 = *(longlong **)(lVar5 + 0x58);
          (**(code **)(*plVar1 + 0x78))(plVar1,local_450);
        }
        FUN_004154b0(&local_458,&local_138,0);
        FUN_00415bd0(local_458,local_30);
      }
      else {
        FUN_004169a0(&local_460,&local_138);
        iVar4 = FUN_004170c0(&DAT_016c1fa4,local_460,1);
        FUN_004151b0(local_238,&local_138,iVar4 + 1,local_138);
        cVar3 = FUN_016c0fc0(auStack_548,local_4f8,local_238,&local_38);
        if (cVar3 == '\0') {
          FUN_0043f750(&local_470,iVar8);
          FUN_00416ba0(&local_468,&PTR_DAT_016c1fdc,local_470);
          FUN_00416910(&local_138,local_468,0xff);
          iVar8 = iVar8 + 1;
          FUN_004154b0(&local_480,&local_138,0);
          FUN_004154b0(&local_488,local_238,0);
          local_528 = local_488;
          FUN_00415980(&local_478,3,local_480,&LAB_016c1ff0);
          FUN_00416880(&local_490,local_478);
          (**(code **)(*local_4f8 + 0x78))(local_4f8,local_490);
        }
        else {
          FUN_004b3cf0(local_4f8,&local_498,local_38);
          FUN_00416910(&local_138,local_498,0xff);
        }
        local_3f8 = 0x2301;
        FUN_004152c0(&local_3f8,&local_138,0xff,2);
        lVar5 = local_508;
        FUN_004154b0(&local_4a8,&local_138,0);
        FUN_004154b0(&local_4b0,local_238,0);
        local_528 = local_4b0;
        FUN_00415980(&local_4a0,3,local_4a8,&LAB_016c1ff0);
        FUN_00416880(&local_4b8,local_4a0);
        plVar1 = *(longlong **)(lVar5 + 0x58);
        iVar4 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_4b8);
        if (iVar4 == -1) {
          FUN_004154b0(&local_4c8,&local_138,0);
          FUN_004154b0(&local_4d0,local_238,0);
          local_528 = local_4d0;
          FUN_00415980(&local_4c0,3,local_4c8,&LAB_016c1ff0);
          FUN_00416880(&local_4d8,local_4c0);
          plVar1 = *(longlong **)(lVar5 + 0x58);
          (**(code **)(*plVar1 + 0x78))(plVar1,local_4d8);
        }
        FUN_004154b0(&local_4e0,&local_138,0);
        FUN_00415bd0(local_4e0,local_30);
      }
      local_4e8 = local_4f0 + (uint)local_138;
    }
  }
  lVar5 = FUN_01d34b90(*(undefined8 *)(local_510 + 0xa40));
  FUN_00414bf0(lVar5 + 0x10,local_30[0]);
  FUN_00410f20(local_4f8);
  FUN_004144d0(&local_4e0);
  FUN_00414480(&local_4d8);
  FUN_00414590(&local_4d0,3);
  FUN_00414480(&local_4b8);
  FUN_00414590(&local_4b0,3);
  FUN_00414560(&local_498,2);
  FUN_00414590(&local_488,3);
  FUN_00414560(&local_470,3);
  FUN_004144d0(&local_458);
  FUN_00414560(&local_450,10);
  FUN_004144d0(&local_400);
  FUN_004144d0(&local_3f0);
  FUN_00414480(&local_3e8);
  FUN_004144d0(&local_3e0);
  FUN_00414560(&local_3d8,4);
  FUN_00417840(local_3b8,&DAT_00ea5f80,2);
  FUN_00417740(local_368,&DAT_00ea5ae8);
  FUN_004144d0(local_30);
  return;
}


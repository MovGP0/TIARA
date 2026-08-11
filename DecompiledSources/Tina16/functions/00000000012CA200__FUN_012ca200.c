/* Ghidra address: 012ca200 */
/* Ghidra symbol: FUN_012ca200 */


void FUN_012ca200(longlong param_1,longlong param_2,char param_3,char param_4,char param_5,
                 char param_6,char param_7,char param_8,byte *param_9,byte *param_10,byte *param_11)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined1 auStack_508 [32];
  ulonglong local_4e8;
  undefined1 *local_4e0;
  undefined8 local_4d8;
  undefined1 *local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
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
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined1 *local_3e0;
  longlong local_3d0;
  int local_3c4;
  undefined1 local_3c0 [4];
  undefined1 local_3bc [4];
  undefined1 local_3b8 [8];
  longlong local_3b0;
  longlong local_3a8;
  undefined1 local_39c [8];
  undefined1 local_394 [52];
  undefined8 local_360;
  undefined1 *local_358;
  undefined8 local_350;
  undefined8 local_348 [2];
  byte local_338 [256];
  byte local_238 [256];
  byte local_138 [256];
  undefined8 local_38;
  undefined8 local_30;
  
  local_3e0 = auStack_508;
  local_4c0 = 0;
  local_4c8 = 0;
  local_4b8 = 0;
  local_4a8 = 0;
  local_4b0 = 0;
  local_4a0 = 0;
  local_490 = 0;
  local_498 = 0;
  local_488 = 0;
  local_478 = 0;
  local_480 = 0;
  local_470 = 0;
  local_460 = 0;
  local_468 = 0;
  local_458 = 0;
  local_448 = 0;
  local_450 = 0;
  local_440 = 0;
  local_430 = 0;
  local_438 = 0;
  local_420 = 0;
  local_428 = 0;
  local_410 = 0;
  local_418 = 0;
  local_408 = 0;
  local_400 = 0;
  local_3f8 = 0;
  local_3f0 = 0;
  local_3e8 = 0;
  local_348[0] = 0;
  local_350 = 0;
  local_358 = (undefined1 *)0x0;
  local_360 = 0;
  lVar5 = (ulonglong)*param_9 + 1;
  pbVar6 = local_138;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pbVar6 = *param_9;
    param_9 = param_9 + 1;
    pbVar6 = pbVar6 + 1;
  }
  lVar5 = (ulonglong)*param_10 + 1;
  pbVar6 = local_238;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pbVar6 = *param_10;
    param_10 = param_10 + 1;
    pbVar6 = pbVar6 + 1;
  }
  lVar5 = (ulonglong)*param_11 + 1;
  pbVar6 = local_338;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pbVar6 = *param_11;
    param_11 = param_11 + 1;
    pbVar6 = pbVar6 + 1;
  }
  FUN_00417580(local_394,&DAT_01d2e6d8);
  (**(code **)(**(longlong **)(param_1 + 0x960) + 0x90))(*(longlong **)(param_1 + 0x960));
  (**(code **)(**(longlong **)(param_1 + 0x968) + 0x90))(*(longlong **)(param_1 + 0x968));
  (**(code **)(**(longlong **)(param_1 + 0x970) + 0x90))(*(longlong **)(param_1 + 0x970));
  (**(code **)(**(longlong **)(param_1 + 0x7f8) + 0x278))(*(longlong **)(param_1 + 0x7f8));
  (**(code **)(**(longlong **)(param_1 + 0x880) + 0x278))(*(longlong **)(param_1 + 0x880));
  (**(code **)(**(longlong **)(param_1 + 0x8f0) + 0x278))(*(longlong **)(param_1 + 0x8f0));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7f8) + 0x4f0);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"Default");
  (**(code **)(**(longlong **)(param_1 + 0x960) + 0x78))(*(longlong **)(param_1 + 0x960),L"Default")
  ;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x880) + 0x4f0);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"Default");
  (**(code **)(**(longlong **)(param_1 + 0x968) + 0x78))(*(longlong **)(param_1 + 0x968),L"Default")
  ;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8f0) + 0x4f0);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"Default");
  (**(code **)(**(longlong **)(param_1 + 0x970) + 0x78))(*(longlong **)(param_1 + 0x970),L"Default")
  ;
  (**(code **)(**(longlong **)(param_1 + 0x7f8) + 0x268))(*(longlong **)(param_1 + 0x7f8),0);
  (**(code **)(**(longlong **)(param_1 + 0x880) + 0x268))(*(longlong **)(param_1 + 0x880),0);
  (**(code **)(**(longlong **)(param_1 + 0x8f0) + 0x268))(*(longlong **)(param_1 + 0x8f0),0);
  if ((param_3 != '\0' || param_4 != '\0') || (param_5 != '\0')) {
    FUN_00414480(&local_360);
    if (param_3 == '\0') {
      if (param_4 == '\0') {
        if (param_8 != '\0') {
          FUN_00414b50(&local_360,L".corner");
        }
        FUN_00416ba0(&local_358,local_360,L".refresult.dc");
      }
      else {
        if (param_7 != '\0') {
          FUN_00414b50(&local_360,L".corner");
        }
        FUN_00416ba0(&local_358,local_360,L".refresult.ac");
      }
    }
    else {
      if (param_6 != '\0') {
        FUN_00414b50(&local_360,L".corner");
      }
      FUN_00416ba0(&local_358,local_360,L".refresult.tr");
    }
    lVar5 = FUN_006dd390(param_2);
    iVar3 = FUN_00416db0(*(undefined8 *)(lVar5 + 0x10),&LAB_012cb234);
    if (iVar3 == 0) {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),&local_3e8);
      local_4e8 = *(ulonglong *)(param_2 + 0x10);
      local_4e0 = local_358;
      FUN_00416cd0(local_348,4,local_3e8,&LAB_012cb234);
    }
    else {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),&local_3f0);
      lVar5 = FUN_006dd390(param_2);
      local_4e8 = *(ulonglong *)(lVar5 + 0x10);
      local_4e0 = &LAB_012cb234;
      local_4d8 = *(undefined8 *)(param_2 + 0x10);
      local_4d0 = local_358;
      FUN_00416cd0(local_348,6,local_3f0,&LAB_012cb234);
    }
    cVar2 = FUN_00440a20(local_348[0],1);
    if (cVar2 == '\0') {
      if (param_3 != '\0') {
        FUN_004169a0(&local_488,local_138);
        (**(code **)(**(longlong **)(param_1 + 0x960) + 0x78))
                  (*(longlong **)(param_1 + 0x960),local_488);
        FUN_004169a0(&local_498,local_138);
        FUN_012ca160(auStack_508,&local_490,local_498);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7f8) + 0x4f0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_490);
        (**(code **)(**(longlong **)(param_1 + 0x7f8) + 0x268))(*(longlong **)(param_1 + 0x7f8),1);
      }
      if (param_4 != '\0') {
        FUN_004169a0(&local_4a0,local_238);
        (**(code **)(**(longlong **)(param_1 + 0x968) + 0x78))
                  (*(longlong **)(param_1 + 0x968),local_4a0);
        FUN_004169a0(&local_4b0,local_238);
        FUN_012ca160(auStack_508,&local_4a8,local_4b0);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x880) + 0x4f0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_4a8);
        (**(code **)(**(longlong **)(param_1 + 0x880) + 0x268))(*(longlong **)(param_1 + 0x880),1);
      }
      if (param_5 != '\0') {
        FUN_004169a0(&local_4b8,local_338);
        (**(code **)(**(longlong **)(param_1 + 0x970) + 0x78))
                  (*(longlong **)(param_1 + 0x970),local_4b8);
        FUN_004169a0(&local_4c8,local_338);
        FUN_012ca160(auStack_508,&local_4c0,local_4c8);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8f0) + 0x4f0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_4c0);
        (**(code **)(**(longlong **)(param_1 + 0x8f0) + 0x268))(*(longlong **)(param_1 + 0x8f0),1);
      }
    }
    else {
      local_38 = FUN_004b9860(&PTR_FUN_0047c498,1,local_348[0],0x20);
      local_4e8 = local_4e8 & 0xffffffffffffff00;
      local_30 = FUN_01d30b30(&DAT_01d2e8e8,1,local_38,0x40);
      FUN_01d317c0(local_30,local_394);
      FUN_01d30e90(local_30,local_39c);
      if (*(char *)(param_1 + 0x993) == '\0') {
        FUN_01d30f00(local_30,local_3b8,8);
        FUN_01d30f00(local_30,local_3bc,4);
        FUN_01d30f00(local_30,local_3c0,4);
      }
      local_3a8 = FUN_01cc3ce0(&PTR_FUN_01cb5bc0,1,local_30);
      local_3d0 = *(longlong *)(local_3a8 + 8);
      iVar3 = *(int *)(local_3d0 + 0x10);
      local_3c4 = 0;
      if (-1 < iVar3 + -1) {
        do {
          local_3b0 = FUN_01d347d0(local_3d0,local_3c4);
          if (*(int *)(local_3b0 + 0x158) == 0) {
            FUN_01cc0ae0(local_3b0,&local_350);
            if (param_3 == '\0') {
              if (param_4 == '\0') {
                (**(code **)(**(longlong **)(param_1 + 0x970) + 0x78))
                          (*(longlong **)(param_1 + 0x970),local_350);
                FUN_012ca160(auStack_508,&local_408,local_350);
                plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8f0) + 0x4f0);
                (**(code **)(*plVar1 + 0x78))(plVar1,local_408);
              }
              else {
                (**(code **)(**(longlong **)(param_1 + 0x968) + 0x78))
                          (*(longlong **)(param_1 + 0x968),local_350);
                FUN_012ca160(auStack_508,&local_400,local_350);
                plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x880) + 0x4f0);
                (**(code **)(*plVar1 + 0x78))(plVar1,local_400);
              }
            }
            else {
              (**(code **)(**(longlong **)(param_1 + 0x960) + 0x78))
                        (*(longlong **)(param_1 + 0x960),local_350);
              FUN_012ca160(auStack_508,&local_3f8,local_350);
              plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7f8) + 0x4f0);
              (**(code **)(*plVar1 + 0x78))(plVar1,local_3f8);
            }
          }
          local_3c4 = local_3c4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      if ((param_3 != '\0') && (local_138[0] != 0)) {
        FUN_004169a0(&local_418,local_138);
        FUN_012ca160(auStack_508,&local_410,local_418);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7f8) + 0x4f0);
        local_3c4 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_410);
        if (-1 < local_3c4) {
          (**(code **)(**(longlong **)(param_1 + 0x7f8) + 0x268))
                    (*(longlong **)(param_1 + 0x7f8),local_3c4);
        }
      }
      if ((param_4 != '\0') && (local_238[0] != 0)) {
        FUN_004169a0(&local_428,local_238);
        FUN_012ca160(auStack_508,&local_420,local_428);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x880) + 0x4f0);
        local_3c4 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_420);
        if (-1 < local_3c4) {
          (**(code **)(**(longlong **)(param_1 + 0x880) + 0x268))
                    (*(longlong **)(param_1 + 0x880),local_3c4);
        }
      }
      if ((param_5 != '\0') && (local_338[0] != 0)) {
        FUN_004169a0(&local_438,local_338);
        FUN_012ca160(auStack_508,&local_430,local_438);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8f0) + 0x4f0);
        local_3c4 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_430);
        if (-1 < local_3c4) {
          (**(code **)(**(longlong **)(param_1 + 0x8f0) + 0x268))
                    (*(longlong **)(param_1 + 0x8f0),local_3c4);
        }
      }
      FUN_00410f20(local_3a8);
      iVar3 = FUN_01d31a40(local_30);
      if (iVar3 != 0) {
        uVar4 = FUN_01d31a40(local_30);
        FUN_00b047e0(uVar4);
      }
      FUN_00410f20(local_30);
      FUN_00410f20(local_38);
    }
  }
  FUN_00414560(&local_4c8,0x1b);
  FUN_00414560(&local_3f0,2);
  FUN_00417740(local_394,&DAT_01d2e6d8);
  FUN_00414560(&local_360,4);
  return;
}


/* Ghidra address: 00eeb0b0 */
/* Ghidra symbol: FUN_00eeb0b0 */


void FUN_00eeb0b0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong in_stack_fffffffffffffb78;
  int local_450;
  int local_44c;
  int local_43c;
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
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  longlong local_338;
  longlong local_330;
  char local_328 [256];
  char local_228 [256];
  byte local_128 [256];
  
  local_420 = 0;
  local_430 = 0;
  local_428 = 0;
  local_418 = 0;
  local_410 = 0;
  local_408 = 0;
  local_400 = 0;
  local_3f8 = 0;
  local_3f0 = 0;
  local_3e8 = 0;
  local_3e0 = 0;
  local_3d8 = 0;
  local_3d0 = 0;
  local_3c8 = 0;
  local_3b8 = 0;
  local_3c0 = 0;
  local_3a0 = 0;
  local_3a8 = 0;
  local_3b0 = 0;
  local_398 = 0;
  local_390 = 0;
  local_380 = 0;
  local_388 = 0;
  local_378 = 0;
  local_360 = 0;
  local_368 = 0;
  local_370 = 0;
  local_358 = 0;
  local_348 = 0;
  local_350 = 0;
  local_340 = 0;
  local_330 = 0;
  local_338 = 0;
  FUN_01d04330(param_1,&local_340);
  FUN_00ececc0(&local_330,4,local_340,param_1[0x9f],in_stack_fffffffffffffb78 & 0xffffffffffffff00,0
               ,0);
  if ((local_330 != 0) && (iVar2 = (**(code **)(*param_2 + 0x28))(param_2), iVar2 == 0)) {
    plVar8 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    plVar9 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    local_43c = 0;
    FUN_00ea9ab0(&local_350,&local_330);
    FUN_00ea9ef0(&local_348,local_350);
    FUN_00416910(local_228,local_348,0xff);
    while (local_228[0] != '\0') {
      FUN_004169a0(&local_358,local_228);
      (**(code **)(*plVar8 + 0x78))(plVar8,local_358);
      if (*(int *)((longlong)param_1 + 0x18c) < 2) {
        (**(code **)(*param_1 + 0x298))(param_1,&local_378,local_43c);
        (**(code **)(*plVar9 + 0x78))(plVar9,local_378);
      }
      else {
        (**(code **)(*param_1 + 0x298))(param_1,&local_368,local_43c);
        FUN_0043f750(&local_370,*(undefined4 *)((longlong)param_1 + 0x18c));
        FUN_00416cd0(&local_360,3,local_368,&DAT_00eebb48,local_370);
        (**(code **)(*plVar9 + 0x78))(plVar9,local_360);
      }
      FUN_00ea9ab0(&local_388,&local_330);
      FUN_00ea9ef0(&local_380,local_388);
      FUN_00416910(local_228,local_380,0xff);
      local_43c = local_43c + 1;
    }
    iVar2 = (**(code **)(*param_1 + 0x1c8))();
    local_44c = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*param_1 + 0x298))(param_1,&local_390,local_44c);
        FUN_00416910(local_128,local_390,0xff);
        FUN_004169a0(&local_398,local_128);
        cVar1 = FUN_00ee6d10(param_1,local_398);
        iVar3 = *(int *)((longlong)param_1 + 0x18c);
        if (1 < iVar3) {
          FUN_004154b0(&local_3a0,local_128,0);
          FUN_004155b0(&local_3a0,&DAT_00eebb58);
          FUN_00416880(&local_3a8,local_3a0);
          FUN_0043f750(&local_3b0,iVar3);
          FUN_00416ad0(&local_3a8,local_3b0);
          FUN_00416910(local_128,local_3a8,0xff);
        }
        if (cVar1 == '\0') {
          local_450 = 0;
          iVar3 = (**(code **)(*plVar9 + 0x28))(plVar9);
          uVar4 = FUN_00b905f0(local_44c,iVar3 + -1);
          local_43c = 0;
          if (uVar4 < 0x80000000) {
            iVar3 = uVar4 + 1;
            do {
              (**(code **)(*plVar9 + 0x18))(plVar9,&local_3b8,local_43c);
              FUN_004169a0(&local_3c0,local_128);
              iVar5 = FUN_00416db0(local_3b8,local_3c0);
              if (iVar5 == 0) {
                local_450 = local_450 + 1;
              }
              local_43c = local_43c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
        local_43c = 0;
        iVar3 = 0;
        FUN_00414480(&local_338);
        while (((cVar1 != '\0' && (iVar5 = (**(code **)(*plVar8 + 0x28))(plVar8), iVar3 < iVar5)) ||
               ((cVar1 == '\0' && (local_43c < local_450))))) {
          iVar5 = (**(code **)(*plVar8 + 0x28))(plVar8);
          if (iVar3 < iVar5) {
            (**(code **)(*plVar8 + 0x18))(plVar8,&local_3c8,iVar3);
            FUN_00416910(local_228,local_3c8,0xff);
          }
          FUN_004169a0(&local_3d0,local_228);
          iVar5 = FUN_004170c0(&DAT_00eebb68,local_3d0,1);
          FUN_004151b0(local_328,local_228,1,iVar5 + -1);
          if (local_328[0] == '\0') {
            FUN_0043f750(&local_3d8,iVar3 + 1);
            FUN_00416910(local_328,local_3d8,0xff);
          }
          FUN_004169a0(&local_3e0,local_228);
          iVar5 = FUN_004170c0(&DAT_00eebb68,local_3e0,1);
          FUN_004151b0(local_228,local_228,iVar5 + 1,local_228[0]);
          iVar6 = FUN_00414f50(local_128,local_228,(ulonglong)local_128[0] + 1);
          iVar5 = iVar3;
          if (iVar6 == 0) {
            FUN_004169a0(&local_3e8,local_328);
            FUN_00416cd0(&local_338,3,local_338,local_3e8,&DAT_00eebb78);
          }
          while ((iVar3 = iVar5, iVar5 = (**(code **)(*plVar8 + 0x28))(plVar8), iVar3 < iVar5 &&
                 ((cVar1 != '\0' ||
                  (iVar5 = FUN_00414f50(local_128,local_228,(ulonglong)local_128[0] + 1), iVar5 != 0
                  ))))) {
            iVar5 = iVar3 + 1;
            iVar6 = (**(code **)(*plVar8 + 0x28))(plVar8);
            if (iVar5 < iVar6) {
              (**(code **)(*plVar8 + 0x18))(plVar8,&local_3f0,iVar5);
              FUN_00416910(local_228,local_3f0,0xff);
              FUN_004169a0(&local_3f8,local_228);
              iVar6 = FUN_004170c0(&DAT_00eebb68,local_3f8,1);
              FUN_004151b0(local_328,local_228,1,iVar6 + -1);
              if (local_328[0] == '\0') {
                FUN_0043f750(&local_400,iVar3 + 2);
                FUN_00416910(local_328,local_400,0xff);
              }
              FUN_004169a0(&local_408,local_228);
              iVar3 = FUN_004170c0(&DAT_00eebb68,local_408,1);
              FUN_004151b0(local_228,local_228,iVar3 + 1,local_228[0]);
              iVar3 = FUN_00414f50(local_128,local_228,(ulonglong)local_128[0] + 1);
              if (iVar3 == 0) {
                FUN_004169a0(&local_410,local_328);
                FUN_00416cd0(&local_338,3,local_338,local_410,&DAT_00eebb78);
              }
            }
          }
          local_43c = local_43c + 1;
          if ((cVar1 == '\0') && (local_43c < local_450)) {
            iVar3 = iVar3 + 1;
          }
        }
        if (cVar1 == '\0') {
          iVar5 = (**(code **)(*plVar8 + 0x28))(plVar8);
          if (iVar3 < iVar5) {
            FUN_004154b0(&local_428,local_328,0);
            FUN_004156b0(&local_420,"pin: ",local_428);
            FUN_00416880(&local_430,local_420);
            (**(code **)(*param_2 + 0x78))(param_2,local_430);
          }
          else {
            (**(code **)(*param_2 + 0x78))(param_2,0);
          }
        }
        else {
          iVar5 = (**(code **)(*plVar8 + 0x28))(plVar8);
          if (iVar3 <= iVar5) {
            uVar7 = 0;
            if (local_338 != 0) {
              uVar7 = *(undefined4 *)(local_338 + -4);
            }
            FUN_00416e20(&local_338,uVar7,1);
            FUN_00416ba0(&local_418,L"pin: ",local_338);
            (**(code **)(*param_2 + 0x78))(param_2,local_418);
          }
        }
        local_44c = local_44c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00410f20(plVar8);
    FUN_00410f20(plVar9);
  }
  FUN_00414480(&local_430);
  FUN_00414590(&local_428,2);
  FUN_00414560(&local_418,0xf);
  FUN_004144d0(&local_3a0);
  FUN_00414560(&local_398,0xe);
  return;
}


/* Ghidra address: 0133e010 */
/* Ghidra symbol: FUN_0133e010 */


void FUN_0133e010(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_498 [32];
  undefined8 local_478;
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
  undefined1 *local_340;
  int local_330;
  char local_329;
  longlong local_328;
  undefined1 local_31a;
  undefined8 local_318;
  undefined1 local_310 [760];
  
  local_340 = auStack_498;
  local_460 = 0;
  local_448 = 0;
  local_450 = 0;
  local_458 = 0;
  local_438 = 0;
  local_440 = 0;
  local_428 = 0;
  local_430 = 0;
  local_418 = 0;
  local_420 = 0;
  local_408 = 0;
  local_410 = 0;
  local_3f8 = 0;
  local_400 = 0;
  local_3e8 = 0;
  local_3f0 = 0;
  local_3d8 = 0;
  local_3e0 = 0;
  local_3c8 = 0;
  local_3d0 = 0;
  local_3b8 = 0;
  local_3c0 = 0;
  local_3a8 = 0;
  local_3b0 = 0;
  local_398 = 0;
  local_3a0 = 0;
  local_388 = 0;
  local_390 = 0;
  local_378 = 0;
  local_380 = 0;
  local_368 = 0;
  local_370 = 0;
  local_358 = 0;
  local_360 = 0;
  local_348 = 0;
  local_350 = 0;
  local_318 = 0;
  puVar1 = auStack_498;
  if (*(char *)(param_1 + 0xf18) != '\0') {
    local_31a = FUN_00b905e0(4,(longlong)*(char *)(param_1 + 0x12f1));
    FUN_01b08b90(param_1,local_310,&local_318);
    FUN_0040f590(local_310);
    FUN_00409900();
    uVar3 = FUN_0040f200(local_310,L">> Transient Statistics <<");
    FUN_0040f590(uVar3);
    FUN_00409900();
    FUN_0040f590(local_310);
    FUN_00409900();
    FUN_01b08ea0(param_1,local_310,local_318);
    FUN_0040f590(local_310);
    FUN_00409900();
    local_478 = (undefined *)((ulonglong)local_478._4_4_ << 0x20);
    FUN_01b0dbf0(param_1,local_310,local_31a,0);
    FUN_0040f590(local_310);
    FUN_00409900();
    local_478 = (undefined *)CONCAT71(local_478._1_7_,1);
    FUN_00b8fd60(&local_350,*(undefined8 *)(param_1 + 0x390),local_31a,0);
    local_478 = &DAT_0133eccc;
    FUN_00416cd0(&local_348,3,L"Transient Analysis End Time = ",local_350);
    uVar3 = FUN_0040f200(local_310,local_348);
    FUN_0040f590(uVar3);
    FUN_00409900();
    local_478 = (undefined *)CONCAT71(local_478._1_7_,1);
    FUN_00b8fd60(&local_360,*(undefined8 *)(param_1 + 0xf40),local_31a,0);
    local_478 = &DAT_0133eccc;
    FUN_00416cd0(&local_358,3,L"Transient Analysis Init Time = ",local_360);
    uVar3 = FUN_0040f200(local_310,local_358);
    FUN_0040f590(uVar3);
    FUN_00409900();
    local_478 = (undefined *)CONCAT71(local_478._1_7_,1);
    FUN_00b8fd60(&local_370,*(undefined8 *)(param_1 + 0xf20),local_31a,0);
    local_478 = &DAT_0133eccc;
    FUN_00416cd0(&local_368,3,L"Transient Analysis Run-Time = ",local_370);
    uVar3 = FUN_0040f200(local_310,local_368);
    FUN_0040f590(uVar3);
    FUN_00409900();
    if (*PTR_DAT_020027b0 != '\0') {
      local_478 = (undefined *)((ulonglong)local_478 & 0xffffffffffffff00);
      FUN_01b0a6f0(param_1,&local_380,*(undefined8 *)(param_1 + 0x14a8),local_31a);
      FUN_00416ba0(&local_378,L"   Transient Vektors Move Time          = ",local_380);
      uVar3 = FUN_0040f200(local_310,local_378);
      FUN_0040f590(uVar3);
      FUN_00409900();
      local_478 = (undefined *)((ulonglong)local_478 & 0xffffffffffffff00);
      FUN_01b0a6f0(param_1,&local_390,*(undefined8 *)(param_1 + 0x14b0),local_31a);
      FUN_00416ba0(&local_388,L"   Transient Data Save Time             = ",local_390);
      uVar3 = FUN_0040f200(local_310,local_388);
      FUN_0040f590(uVar3);
      FUN_00409900();
      local_478 = (undefined *)((ulonglong)local_478 & 0xffffffffffffff00);
      FUN_01b0a6f0(param_1,&local_3a0,*(undefined8 *)(param_1 + 0x14b8),local_31a);
      FUN_00416ba0(&local_398,L"   Transient Prediction Time            = ",local_3a0);
      uVar3 = FUN_0040f200(local_310,local_398);
      FUN_0040f590(uVar3);
      FUN_00409900();
      local_478 = (undefined *)((ulonglong)local_478 & 0xffffffffffffff00);
      FUN_01b0a6f0(param_1,&local_3b0,*(undefined8 *)(param_1 + 0x14c0),local_31a);
      FUN_00416ba0(&local_3a8,L"   Transient Time Step Calculation Time = ",local_3b0);
      uVar3 = FUN_0040f200(local_310,local_3a8);
      FUN_0040f590(uVar3);
      FUN_00409900();
      local_478 = (undefined *)((ulonglong)local_478 & 0xffffffffffffff00);
      FUN_01b0a6f0(param_1,&local_3c0,*(undefined8 *)PTR_DAT_02003c58,local_31a);
      FUN_00416ba0(&local_3b8,L"       Transient Trunc. Err. Calc. Time = ",local_3c0);
      uVar3 = FUN_0040f200(local_310,local_3b8);
      FUN_0040f590(uVar3);
      FUN_00409900();
      local_478 = (undefined *)((ulonglong)local_478 & 0xffffffffffffff00);
      FUN_01b0a6f0(param_1,&local_3d0,*(undefined8 *)PTR_DAT_020037e0,local_31a);
      FUN_00416ba0(&local_3c8,L"       Transient Max. Step Calc. Time   = ",local_3d0);
      uVar3 = FUN_0040f200(local_310,local_3c8);
      FUN_0040f590(uVar3);
      FUN_00409900();
      local_478 = (undefined *)((ulonglong)local_478 & 0xffffffffffffff00);
      FUN_01b0a6f0(param_1,&local_3e0,*(undefined8 *)PTR_DAT_02005358,local_31a);
      FUN_00416ba0(&local_3d8,L"       Transient Max. Change Calc. Time = ",local_3e0);
      uVar3 = FUN_0040f200(local_310,local_3d8);
      FUN_0040f590(uVar3);
      FUN_00409900();
      FUN_01b0af80(param_1,local_310,local_31a);
      FUN_0133db60(param_1,local_310,local_31a);
    }
    FUN_0040f590(local_310);
    FUN_00409900();
    FUN_01b09e30(param_1,local_310);
    FUN_0040f590(local_310);
    FUN_00409900();
    FUN_0043f750(&local_3f0,*(undefined4 *)(param_1 + 0x1208));
    FUN_00416ba0(&local_3e8,L"Number Of Iterations = ",local_3f0);
    uVar3 = FUN_0040f200(local_310,local_3e8);
    FUN_0040f590(uVar3);
    FUN_00409900();
    FUN_0043f750(&local_400,*(undefined4 *)(param_1 + 0x120c));
    FUN_00416ba0(&local_3f8,L"Number Of Transient Points = ",local_400);
    uVar3 = FUN_0040f200(local_310,local_3f8);
    FUN_0040f590(uVar3);
    FUN_00409900();
    FUN_0043f750(&local_410,*(undefined4 *)(param_1 + 0x1210));
    FUN_00416ba0(&local_408,L"Number Of Accepted Transient Points = ",local_410);
    uVar3 = FUN_0040f200(local_310,local_408);
    FUN_0040f590(uVar3);
    FUN_00409900();
    FUN_0043f750(&local_420,*(undefined4 *)(param_1 + 0x1214));
    FUN_00416ba0(&local_418,L"Number Of Rejected Transient Points = ",local_420);
    uVar3 = FUN_0040f200(local_310,local_418);
    FUN_0040f590(uVar3);
    FUN_00409900();
    FUN_0043f750(&local_430,*(undefined4 *)(param_1 + 0x1218));
    FUN_00416ba0(&local_428,L"Number Of Iteration Over Transient Points = ",local_430);
    uVar3 = FUN_0040f200(local_310,local_428);
    FUN_0040f590(uVar3);
    FUN_00409900();
    if (*PTR_DAT_020027b0 != '\0') {
      FUN_0043f750(&local_440,*(undefined4 *)(param_1 + 0x121c));
      FUN_00416ba0(&local_438,L"Number Of Not Go On Transient Points = ",local_440);
      uVar3 = FUN_0040f200(local_310,local_438);
      FUN_0040f590(uVar3);
      FUN_00409900();
    }
    FUN_0040f590(local_310);
    FUN_00409900();
    if (*PTR_DAT_02003da8 == '\0') {
      uVar3 = FUN_0040f200(local_310,L"Auto converge mode disabled ");
      FUN_0040f590(uVar3);
      FUN_00409900();
    }
    else {
      uVar3 = FUN_0040f200(local_310,L"Auto converge mode enabled ");
      FUN_0040f590(uVar3);
      FUN_00409900();
      if (0 < *(int *)(param_1 + 0x1480)) {
        uVar3 = FUN_0040f200(local_310,L"Used parameter setting files ");
        FUN_0040f590(uVar3);
        FUN_00409900();
        iVar4 = *(int *)(param_1 + 0x1480);
        local_330 = 0;
        if (-1 < iVar4 + -1) {
          do {
            (**(code **)(**(longlong **)(param_1 + 0x1450) + 0x18))
                      (*(longlong **)(param_1 + 0x1450),&local_458,local_330);
            FUN_00b92430(&local_450,local_458);
            FUN_00416ba0(&local_448,L"    ",local_450);
            uVar3 = FUN_0040f200(local_310,local_448);
            FUN_0040f590(uVar3);
            FUN_00409900();
            local_330 = local_330 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
    }
    FUN_0040f590(local_310);
    FUN_00409900();
    cVar2 = FUN_01b07dd0(param_1);
    if ((cVar2 != '\0') && ((*(uint *)(*(longlong *)(param_1 + 0xe8) + 0x22c0) & 4) != 0)) {
      uVar3 = FUN_014cdce0(*(undefined8 *)(param_1 + 0xe8));
      local_328 = _XMC_GetStatisticsMessages(uVar3,&local_329);
      if ((local_329 != '\0') && (local_328 != 0)) {
        uVar3 = FUN_0040f200(local_310,L"XMC Statistics");
        FUN_0040f590(uVar3);
        FUN_00409900();
        uVar3 = FUN_0040f360(local_310,local_328);
        FUN_0040f590(uVar3);
        FUN_00409900();
        FUN_0040f590(local_310);
        FUN_00409900();
      }
    }
    if (*(longlong *)(param_1 + 0x12e0) != 0) {
      FUN_00416ba0(&local_460,L"Exception: ",*(undefined8 *)(param_1 + 0x12e0));
      uVar3 = FUN_0040f200(local_310,local_460);
      FUN_0040f590(uVar3);
      FUN_00409900();
    }
    FUN_0040d040(local_310);
    FUN_00409900();
    FUN_0040d150(local_310);
    FUN_00409900();
    puVar1 = local_340;
  }
  local_340 = puVar1;
  FUN_00414560(&local_460,0x24);
  FUN_00414480(&local_318);
  return;
}


/* Ghidra address: 01b0e980 */
/* Ghidra symbol: FUN_01b0e980 */


void FUN_01b0e980(longlong param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_3b8 [32];
  wchar_t *local_398;
  undefined *local_390;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined1 *local_330;
  int local_31c;
  int local_318;
  undefined1 local_312;
  undefined8 local_310;
  undefined8 local_308;
  undefined1 local_300 [760];
  
  local_330 = auStack_3b8;
  local_380 = 0;
  local_370 = 0;
  local_378 = 0;
  local_360 = 0;
  local_368 = 0;
  local_350 = 0;
  local_358 = 0;
  local_340 = 0;
  local_348 = 0;
  local_338 = 0;
  local_308 = 0;
  local_310 = 0;
  puVar2 = auStack_3b8;
  if (*(char *)(param_1 + 0xf18) == '\0') goto code_r0x01b0eed7;
  local_318 = (int)*(char *)(param_1 + 0x12f1);
  local_31c = local_318;
  if (local_318 < 4) {
    local_31c = 4;
  }
  local_312 = (undefined1)local_31c;
  FUN_01b08b90(param_1,local_300,&local_308);
  FUN_0040f590(local_300);
  FUN_00409900();
  bVar1 = *(byte *)(param_1 + 0x98);
  if (bVar1 < 7) {
    if (bVar1 == 6) {
      FUN_00414b50(&local_310,L"Transient");
    }
    else if (bVar1 == 1) {
      FUN_00414b50(&local_310,&PTR_DAT_01b0ef50);
    }
    else if (bVar1 == 2) {
      FUN_00414b50(&local_310,L"DC Transfer");
    }
    else {
      if (bVar1 != 4) goto LAB_01b0eb5c;
      FUN_00414b50(&local_310,L"Temperature");
    }
  }
  else if (bVar1 == 8) {
    FUN_00414b50(&local_310,&PTR_DAT_01b0efa8);
  }
  else if (bVar1 == 0xc) {
    FUN_00414b50(&local_310,L"Noise");
  }
  else {
LAB_01b0eb5c:
    FUN_00414480(&local_310);
  }
  local_398 = L" Statistics <<";
  FUN_00416cd0(&local_338,3,&DAT_01b0eff8,local_310);
  uVar3 = FUN_0040f200(local_300,local_338);
  FUN_0040f590(uVar3);
  FUN_00409900();
  FUN_0040f590(local_300);
  FUN_00409900();
  FUN_01b08ea0(param_1,local_300,local_308);
  FUN_0040f590(local_300);
  FUN_00409900();
  local_398 = (wchar_t *)((ulonglong)local_398 & 0xffffffff00000000);
  FUN_01b0dbf0(param_1,local_300,local_312,0);
  FUN_0040f590(local_300);
  FUN_00409900();
  local_398 = (wchar_t *)CONCAT71(local_398._1_7_,1);
  FUN_00b8fd60(&local_348,*(undefined8 *)(param_1 + 0xf40),local_312,0);
  local_398 = (wchar_t *)local_348;
  local_390 = &DAT_01b0f074;
  FUN_00416cd0(&local_340,4,local_310,L" Analysis Init Time = ");
  uVar3 = FUN_0040f200(local_300,local_340);
  FUN_0040f590(uVar3);
  FUN_00409900();
  local_398 = (wchar_t *)CONCAT71(local_398._1_7_,1);
  FUN_00b8fd60(&local_358,*(undefined8 *)(param_1 + 0xf20),local_312,0);
  local_398 = (wchar_t *)local_358;
  local_390 = &DAT_01b0f074;
  FUN_00416cd0(&local_350,4,local_310,L" Analysis Run-Time = ");
  uVar3 = FUN_0040f200(local_300,local_350);
  FUN_0040f590(uVar3);
  FUN_00409900();
  local_398 = (wchar_t *)CONCAT71(local_398._1_7_,1);
  FUN_00b8fd60(&local_368,*(undefined8 *)(param_1 + 0xf38),local_312,0);
  local_398 = (wchar_t *)local_368;
  local_390 = &DAT_01b0f074;
  FUN_00416cd0(&local_360,4,local_310,L" Analysis Total Job Time = ");
  uVar3 = FUN_0040f200(local_300,local_360);
  FUN_0040f590(uVar3);
  FUN_00409900();
  if (*PTR_DAT_020027b0 != '\0') {
    FUN_01b0af80(param_1,local_300,local_312);
  }
  FUN_0040f590(local_300);
  FUN_00409900();
  FUN_01b09e30(param_1,local_300);
  FUN_0040f590(local_300);
  FUN_00409900();
  FUN_0043f750(&local_378,*(undefined4 *)(param_1 + 0x1208));
  FUN_00416ba0(&local_370,L"Number Of Iterations = ",local_378);
  uVar3 = FUN_0040f200(local_300,local_370);
  FUN_0040f590(uVar3);
  FUN_00409900();
  FUN_0040f590(local_300);
  FUN_00409900();
  if (*(longlong *)(param_1 + 0x12e0) != 0) {
    FUN_00416ba0(&local_380,L"Exception: ",*(undefined8 *)(param_1 + 0x12e0));
    uVar3 = FUN_0040f200(local_300,local_380);
    FUN_0040f590(uVar3);
    FUN_00409900();
  }
  FUN_0040d040(local_300);
  FUN_00409900();
  FUN_0040d150(local_300);
  FUN_00409900();
  puVar2 = local_330;
code_r0x01b0eed7:
  local_330 = puVar2;
  FUN_00414560(&local_380,10);
  FUN_00414560(&local_310,2);
  return;
}


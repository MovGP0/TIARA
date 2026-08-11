/* Ghidra address: 013858d0 */
/* Ghidra symbol: FUN_013858d0 */


void FUN_013858d0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_res10 [3];
  undefined1 auStack_3c8 [32];
  undefined8 local_3a8;
  wchar_t *local_3a0;
  undefined8 local_398;
  wchar_t *local_390;
  longlong *local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  longlong *local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  longlong *local_330;
  undefined8 local_328;
  undefined8 local_320;
  longlong *local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined1 local_2f8 [256];
  undefined8 local_1f8;
  undefined1 local_1f0 [256];
  undefined1 *local_f0;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  int local_50;
  char local_49;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_f0 = auStack_3c8;
  local_380 = 0;
  local_388 = (longlong *)0x0;
  local_378 = 0;
  local_370 = 0;
  local_368 = 0;
  local_358 = 0;
  local_360 = (longlong *)0x0;
  local_350 = 0;
  local_348 = 0;
  local_340 = 0;
  local_338 = 0;
  local_328 = 0;
  local_330 = (longlong *)0x0;
  local_320 = 0;
  local_310 = 0;
  local_318 = (longlong *)0x0;
  local_308 = 0;
  local_300 = 0;
  local_1f8 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = (longlong *)0x0;
  local_88 = (longlong *)0x0;
  local_90 = (longlong *)0x0;
  local_98 = (longlong *)0x0;
  local_a0 = (longlong *)0x0;
  local_a8 = (longlong *)0x0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (*(char *)(param_1 + 0x7f9) == '\0') {
    FUN_00414480(&local_68);
  }
  else {
    FUN_00414b50(&local_68,L"-real");
  }
  uVar4 = FUN_019a4600();
  FUN_019ac280(uVar4,&local_1f8);
  FUN_00416910(local_2f8,local_1f8,0xff);
  FUN_00b93c80(local_1f0,local_2f8);
  FUN_004169a0(&local_300,local_1f0);
  local_3a8 = local_300;
  local_3a0 = L"_siganal";
  local_398 = local_68;
  local_390 = L".xml";
  FUN_00416cd0(&local_78,6,*(undefined8 *)PTR_DAT_02005010,L"\\T&M\\");
  FUN_00bac3d0(&local_a8);
  (**(code **)(*local_a8 + 0x148))(local_a8,&local_308,L"siganal");
  (**(code **)(*local_a8 + 0x108))(local_a8,local_308);
  (**(code **)(*local_a8 + 0x148))(local_a8,&local_80,L"display");
  (**(code **)(*local_a8 + 0x100))(local_a8,&local_318);
  (**(code **)(*local_318 + 0x98))(local_318,&local_310,local_80);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0xba0) + 0x260))(*(longlong **)(param_1 + 0xba0));
  FUN_0043f750(&local_320,uVar2);
  (**(code **)(*local_80 + 0x108))(local_80,L"mode",local_320);
  FUN_00414480(&local_20);
  local_c0 = FUN_00b90090(*(undefined8 *)(param_1 + 0xc48));
  FUN_00448450(&local_20,local_c0,PTR_DAT_02004830);
  (**(code **)(*local_80 + 0x108))(local_80,L"high",local_20);
  FUN_00414480(&local_20);
  FUN_00414480(&local_28);
  local_c8 = FUN_00b90090(*(undefined8 *)(param_1 + 0xc50));
  FUN_00448450(&local_28,local_c8,PTR_DAT_02004830);
  (**(code **)(*local_80 + 0x108))(local_80,&DAT_013868ac,local_28);
  FUN_00414480(&local_28);
  (**(code **)(*local_a8 + 0x148))(local_a8,&local_90,L"measurement");
  (**(code **)(*local_a8 + 0x100))(local_a8,&local_330);
  (**(code **)(*local_330 + 0x98))(local_330,&local_328,local_90);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0xbf0) + 0x260))(*(longlong **)(param_1 + 0xbf0));
  FUN_0043f750(&local_338,uVar2);
  (**(code **)(*local_90 + 0x108))(local_90,L"mode",local_338);
  (**(code **)(*local_a8 + 0x148))(local_a8,&local_98,L"amplitude");
  (**(code **)(*local_90 + 0x98))(local_90,&local_340,local_98);
  FUN_00414480(&local_30);
  local_d0 = FUN_00b90090(*(undefined8 *)(param_1 + 0xcb8));
  FUN_00448450(&local_30,local_d0,PTR_DAT_02004830);
  (**(code **)(*local_98 + 0x108))(local_98,L"range",local_30);
  FUN_00414480(&local_30);
  if (*(char *)(*(longlong *)(param_1 + 0xbd0) + 0x328) == '\0') {
    FUN_00414b50(&local_68,&DAT_0138692c);
  }
  else {
    FUN_00414b50(&local_68,&DAT_0138691c);
  }
  (**(code **)(*local_98 + 0x108))(local_98,L"mode",local_68);
  (**(code **)(*local_a8 + 0x148))(local_a8,&local_a0,L"frequency");
  (**(code **)(*local_90 + 0x98))(local_90,&local_348,local_a0);
  FUN_00414480(&local_38);
  local_d8 = FUN_00b90090(*(undefined8 *)(param_1 + 0xc28));
  FUN_00448450(&local_38,local_d8,PTR_DAT_02004830);
  (**(code **)(*local_a0 + 0x108))(local_a0,L"start",local_38);
  FUN_00414480(&local_38);
  FUN_00414480(&local_40);
  local_e0 = FUN_00b90090(*(undefined8 *)(param_1 + 0xc30));
  FUN_00448450(&local_40,local_e0,PTR_DAT_02004830);
  (**(code **)(*local_a0 + 0x108))(local_a0,L"stop",local_40);
  FUN_00414480(&local_40);
  uVar2 = FUN_00f04d50(*(undefined8 *)(param_1 + 0xc38));
  FUN_0043f750(&local_350,uVar2);
  (**(code **)(*local_a0 + 0x108))(local_a0,L"resolution",local_350);
  if (*(char *)(*(longlong *)(param_1 + 0xd38) + 0x328) == '\0') {
    FUN_00414b50(&local_68,&DAT_0138691c);
  }
  else {
    FUN_00414b50(&local_68,&DAT_0138692c);
  }
  (**(code **)(*local_a0 + 0x108))(local_a0,L"scale",local_68);
  (**(code **)(*local_a8 + 0x148))(local_a8,&local_88,L"channels");
  (**(code **)(*local_a8 + 0x100))(local_a8,&local_360);
  (**(code **)(*local_360 + 0x98))(local_360,&local_358,local_88);
  local_60 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0) + 0x28))();
  local_50 = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
      uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,local_50);
      lVar5 = FUN_004113f0(uVar4,&PTR_FUN_011051a8);
      (**(code **)(*local_60 + 0x78))(local_60,*(undefined8 *)(lVar5 + 8));
      local_50 = local_50 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (local_60 != (longlong *)0x0) {
    iVar3 = (**(code **)(*local_60 + 0x28))();
    local_50 = 0;
    if (-1 < iVar3 + -1) {
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
        uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,local_50);
        local_b0 = FUN_004113f0(uVar4,&PTR_FUN_011051a8);
        (**(code **)(*local_a8 + 0x148))(local_a8,&local_80,L"channel");
        (**(code **)(*local_88 + 0x98))(local_88,&local_368,local_80);
        (**(code **)(*local_80 + 0x108))(local_80,L"name",*(undefined8 *)(local_b0 + 8));
        FUN_0043f750(&local_370,*(undefined1 *)(local_b0 + 0x11));
        (**(code **)(*local_80 + 0x108))(local_80,L"isactive",local_370);
        FUN_0043f750(&local_378,*(undefined1 *)(local_b0 + 0x38));
        (**(code **)(*local_80 + 0x108))(local_80,L"coupling",local_378);
        local_50 = local_50 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    (**(code **)(*local_a8 + 0x148))(local_a8,&local_80,L"activechannel");
    (**(code **)(*local_a8 + 0x100))(local_a8,&local_388);
    (**(code **)(*local_388 + 0x98))(local_388,&local_380,local_80);
    local_49 = '\0';
    local_50 = (**(code **)(*local_60 + 0x28))(local_60);
    local_50 = local_50 + -1;
    if (-1 < local_50) {
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
        uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,local_50);
        local_b0 = FUN_004113f0(uVar4,&PTR_FUN_011051a8);
        if (*(char *)(local_b0 + 0x11) != '\0') {
          (**(code **)(*local_80 + 0x108))(local_80,L"name",*(undefined8 *)(local_b0 + 8));
          local_49 = '\x01';
          break;
        }
        local_50 = local_50 + -1;
      } while (local_50 != -1);
    }
    if (local_49 == '\0') {
      (**(code **)(*local_80 + 0x108))(local_80,L"name",0);
    }
  }
  (**(code **)(*local_a8 + 0x180))(local_a8,local_78,0);
  FUN_0041b800(&local_388);
  FUN_0041b800(&local_380);
  FUN_00414560(&local_378,2);
  FUN_0041b800(&local_368);
  FUN_0041b800(&local_360);
  FUN_0041b800(&local_358);
  FUN_00414480(&local_350);
  FUN_00417840(&local_348,&DAT_00b9f8e0,2);
  FUN_00414480(&local_338);
  FUN_0041b800(&local_330);
  FUN_0041b800(&local_328);
  FUN_00414480(&local_320);
  FUN_0041b800(&local_318);
  FUN_0041b800(&local_310);
  FUN_0041b800(&local_308);
  FUN_00414480(&local_300);
  FUN_00414480(&local_1f8);
  FUN_0041b800(&local_a8);
  FUN_00417840(&local_a0,&LAB_00b9fca0,5);
  FUN_00414560(&local_78,3);
  FUN_00414560(&local_40,5);
  FUN_00414480(local_res10);
  return;
}


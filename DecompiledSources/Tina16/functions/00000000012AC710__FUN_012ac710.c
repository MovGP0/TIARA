/* Ghidra address: 012ac710 */
/* Ghidra symbol: FUN_012ac710 */


void FUN_012ac710(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res10 [3];
  undefined1 auStack_3e8 [32];
  undefined1 *local_3c8;
  wchar_t *local_3c0;
  undefined8 local_3b8;
  wchar_t *local_3b0;
  int local_39c;
  longlong *local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  longlong *local_370;
  undefined8 local_368;
  undefined1 *local_360;
  undefined8 local_358;
  longlong *local_350;
  undefined8 local_348;
  undefined1 *local_340;
  undefined8 local_338;
  undefined8 local_330;
  longlong *local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined1 local_2f8 [256];
  undefined8 local_1f8;
  undefined1 local_1f0 [256];
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong *local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
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
  int local_54;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  int local_4c;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_f0 = auStack_3e8;
  local_390 = 0;
  local_398 = (longlong *)0x0;
  local_388 = 0;
  local_380 = 0;
  local_378 = 0;
  local_368 = 0;
  local_370 = (longlong *)0x0;
  local_360 = (undefined1 *)0x0;
  local_358 = 0;
  local_348 = 0;
  local_350 = (longlong *)0x0;
  local_340 = (undefined1 *)0x0;
  local_338 = 0;
  local_330 = 0;
  local_320 = 0;
  local_328 = (longlong *)0x0;
  local_318 = 0;
  local_310 = 0;
  local_308 = 0;
  local_300 = 0;
  local_1f8 = 0;
  local_80 = (longlong *)0x0;
  local_88 = (longlong *)0x0;
  local_90 = (longlong *)0x0;
  local_98 = (longlong *)0x0;
  local_a0 = (longlong *)0x0;
  local_a8 = (longlong *)0x0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_d0 = (longlong *)0x0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (*(char *)(param_1 + 0x7f9) == '\0') {
    FUN_00414480(&local_b0);
  }
  else {
    FUN_00414b50(&local_b0,L"-real");
  }
  uVar3 = FUN_019a4600();
  FUN_019ac280(uVar3,&local_1f8);
  FUN_00416910(local_2f8,local_1f8,0xff);
  FUN_00b93c80(local_1f0,local_2f8);
  FUN_004169a0(&local_300,local_1f0);
  local_3c8 = (undefined1 *)local_300;
  local_3c0 = L"_scope";
  local_3b8 = local_b0;
  local_3b0 = L".xml";
  FUN_00416cd0(&local_c0,6,*(undefined8 *)PTR_DAT_02005010,L"\\T&M\\");
  FUN_00bac3d0(&local_d0);
  (**(code **)(*local_d0 + 0x148))(local_d0,&local_308,L"scope");
  (**(code **)(*local_d0 + 0x108))(local_d0,local_308);
  (**(code **)(*local_d0 + 0x100))(local_d0,&local_310);
  FUN_0041b890(&local_a8,local_310,&DAT_012ad810);
  (**(code **)(*local_a8 + 0x108))(local_a8,L"width",&DAT_012ad844);
  (**(code **)(*local_a8 + 0x108))(local_a8,L"height",&DAT_012ad874);
  FUN_00440030(&local_318,*(undefined1 *)(*(longlong *)(param_1 + 0xbc0) + 0x328),0);
  (**(code **)(*local_a8 + 0x108))(local_a8,L"store",local_318);
  (**(code **)(*local_d0 + 0x148))(local_d0,&local_80,L"trigger");
  (**(code **)(*local_d0 + 0x100))(local_d0,&local_328);
  (**(code **)(*local_328 + 0x98))(local_328,&local_320,local_80);
  local_3c8 = &local_4e;
  local_3c0 = (wchar_t *)&local_68;
  FUN_012adc40(param_1,&local_4d,&local_54,&local_60);
  FUN_0043f750(&local_330,local_4d);
  (**(code **)(*local_80 + 0x108))(local_80,L"mode",local_330);
  FUN_00414480(&local_20);
  FUN_00448450(&local_20,local_68,PTR_DAT_02004830);
  (**(code **)(*local_80 + 0x108))(local_80,L"level",local_20);
  FUN_00414480(&local_20);
  FUN_0043f750(&local_338,local_4e);
  (**(code **)(*local_80 + 0x108))(local_80,&DAT_012ad8ec,local_338);
  FUN_00414480(&local_b0);
  FUN_00414480(&local_b8);
  if ((local_60 != (longlong *)0x0) &&
     (iVar1 = (**(code **)(*local_60 + 0x28))(local_60), 0 < iVar1)) {
    if ((-1 < local_54) && (iVar1 = (**(code **)(*local_60 + 0x28))(local_60), local_54 < iVar1)) {
      (**(code **)(*local_60 + 0x18))(local_60,&local_b8,local_54);
    }
    (**(code **)(*local_60 + 0x18))(local_60,&local_b0,0);
    iVar1 = (**(code **)(*local_60 + 0x28))(local_60);
    iVar1 = iVar1 + -1;
    local_4c = 1;
    if (0 < iVar1) {
      do {
        (**(code **)(*local_60 + 0x18))(local_60,&local_340,local_4c);
        local_3c8 = local_340;
        FUN_00416cd0(&local_b0,3,local_b0,&DAT_012ad900);
        local_4c = local_4c + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  (**(code **)(*local_80 + 0x108))(local_80,L"source",local_b8);
  (**(code **)(*local_80 + 0x108))(local_80,L"sources",local_b0);
  (**(code **)(*local_d0 + 0x148))(local_d0,&local_88,L"horizontal");
  (**(code **)(*local_d0 + 0x100))(local_d0,&local_350);
  (**(code **)(*local_350 + 0x98))(local_350,&local_348,local_88);
  FUN_012adc10(param_1,&local_70);
  FUN_00414480(&local_28);
  FUN_00448450(&local_28,local_70,PTR_DAT_02004830);
  (**(code **)(*local_88 + 0x108))(local_88,L"timediv",local_28);
  FUN_00414480(&local_28);
  FUN_012adc30(param_1,&local_78);
  FUN_00414480(&local_30);
  FUN_00448450(&local_30,local_78,PTR_DAT_02004830);
  (**(code **)(*local_88 + 0x108))(local_88,L"position",local_30);
  FUN_00414480(&local_30);
  FUN_012adcd0(param_1,&local_4d,&local_54,&local_60);
  FUN_0043f750(&local_358,local_4d);
  (**(code **)(*local_88 + 0x108))(local_88,L"mode",local_358);
  FUN_00414480(&local_b0);
  FUN_00414480(&local_b8);
  if ((local_60 != (longlong *)0x0) &&
     (iVar1 = (**(code **)(*local_60 + 0x28))(local_60), 0 < iVar1)) {
    if ((-1 < local_54) && (iVar1 = (**(code **)(*local_60 + 0x28))(local_60), local_54 < iVar1)) {
      (**(code **)(*local_60 + 0x18))(local_60,&local_b8,local_54);
    }
    (**(code **)(*local_60 + 0x18))(local_60,&local_b0,0);
    iVar1 = (**(code **)(*local_60 + 0x28))(local_60);
    iVar1 = iVar1 + -1;
    local_4c = 1;
    if (0 < iVar1) {
      do {
        (**(code **)(*local_60 + 0x18))(local_60,&local_360,local_4c);
        local_3c8 = local_360;
        FUN_00416cd0(&local_b0,3,local_b0,&DAT_012ad900);
        local_4c = local_4c + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  (**(code **)(*local_88 + 0x108))(local_88,L"xsource",local_b8);
  (**(code **)(*local_88 + 0x108))(local_88,L"xsources",local_b0);
  (**(code **)(*local_d0 + 0x148))(local_d0,&local_90,L"channels");
  (**(code **)(*local_d0 + 0x100))(local_d0,&local_370);
  (**(code **)(*local_370 + 0x98))(local_370,&local_368,local_90);
  FUN_012adac0(param_1,&local_4f,&local_60);
  if (local_60 != (longlong *)0x0) {
    iVar1 = (**(code **)(*local_60 + 0x28))();
    local_39c = iVar1 + -1;
    local_4c = 0;
    if (-1 < local_39c) {
      do {
        local_39c = iVar1;
        uVar3 = (**(code **)(*local_60 + 0x30))(local_60,local_4c);
        local_c8 = FUN_004113f0(uVar3,&PTR_FUN_01105a20);
        (**(code **)(*local_d0 + 0x148))(local_d0,&local_a0,L"channel");
        (**(code **)(*local_90 + 0x98))(local_90,&local_378,local_a0);
        (**(code **)(*local_a0 + 0x108))(local_a0,L"name",*(undefined8 *)(local_c8 + 8));
        FUN_0043f750(&local_380,*(undefined1 *)(local_c8 + 0x11));
        (**(code **)(*local_a0 + 0x108))(local_a0,L"isactive",local_380);
        FUN_0043f750(&local_388,*(undefined1 *)(local_c8 + 0x38));
        (**(code **)(*local_a0 + 0x108))(local_a0,L"coupling",local_388);
        FUN_00414480(&local_38);
        local_e0 = *(undefined8 *)(local_c8 + 0x118);
        FUN_00448450(&local_38,local_e0,PTR_DAT_02004830);
        (**(code **)(*local_a0 + 0x108))(local_a0,L"voltsdiv",local_38);
        FUN_00414480(&local_38);
        FUN_00414480(&local_40);
        local_e8 = *(undefined8 *)(local_c8 + 0x110);
        FUN_00448450(&local_40,local_e8,PTR_DAT_02004830);
        (**(code **)(*local_a0 + 0x108))(local_a0,L"position",local_40);
        FUN_00414480(&local_40);
        local_4c = local_4c + 1;
        local_39c = local_39c + -1;
        iVar1 = local_39c;
      } while (local_39c != 0);
    }
    (**(code **)(*local_d0 + 0x148))(local_d0,&local_98,L"activechannel");
    (**(code **)(*local_d0 + 0x100))(local_d0,&local_398);
    (**(code **)(*local_398 + 0x98))(local_398,&local_390,local_98);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x260))(*(longlong **)(param_1 + 0x7d8))
    ;
    uVar3 = (**(code **)(*local_60 + 0x30))(local_60,uVar2);
    lVar4 = FUN_004113f0(uVar3,&PTR_FUN_01105a20);
    (**(code **)(*local_98 + 0x108))(local_98,L"name",*(undefined8 *)(lVar4 + 8));
  }
  (**(code **)(*local_d0 + 0x180))(local_d0,local_c0,0);
  FUN_0041b800(&local_398);
  FUN_0041b800(&local_390);
  FUN_00414560(&local_388,2);
  FUN_0041b800(&local_378);
  FUN_0041b800(&local_370);
  FUN_0041b800(&local_368);
  FUN_00414560(&local_360,2);
  FUN_0041b800(&local_350);
  FUN_0041b800(&local_348);
  FUN_00414560(&local_340,3);
  FUN_0041b800(&local_328);
  FUN_0041b800(&local_320);
  FUN_00414480(&local_318);
  FUN_00417840(&local_310,&LAB_00b9fca0,2);
  FUN_00414480(&local_300);
  FUN_00414480(&local_1f8);
  FUN_0041b800(&local_d0);
  FUN_00414560(&local_c0,3);
  FUN_00417840(&local_a8,&LAB_00b9fca0,6);
  FUN_00414560(&local_40,5);
  FUN_00414480(local_res10);
  return;
}


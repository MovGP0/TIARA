/* Ghidra address: 01b63550 */
/* Ghidra symbol: FUN_01b63550 */


void FUN_01b63550(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_res10 [3];
  undefined1 auStack_3f8 [32];
  undefined8 local_3d8;
  wchar_t *local_3d0;
  undefined8 local_3c8;
  wchar_t *local_3c0;
  char local_3b5;
  int local_3b4;
  longlong *local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  longlong *local_390;
  undefined8 local_388;
  undefined8 local_380;
  longlong *local_378;
  undefined8 local_370;
  undefined8 local_368;
  longlong *local_360;
  undefined8 local_358;
  undefined8 local_350;
  longlong *local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined1 local_328 [256];
  undefined8 local_228;
  undefined1 local_220 [256];
  undefined1 *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong *local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_74;
  byte local_6d;
  byte local_6c;
  char local_6b;
  byte local_6a;
  char local_69 [9];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_120 = auStack_3f8;
  local_3a8 = 0;
  local_3b0 = (longlong *)0x0;
  local_3a0 = 0;
  local_398 = 0;
  local_388 = 0;
  local_390 = (longlong *)0x0;
  local_380 = 0;
  local_370 = 0;
  local_378 = (longlong *)0x0;
  local_368 = 0;
  local_358 = 0;
  local_360 = (longlong *)0x0;
  local_350 = 0;
  local_340 = 0;
  local_348 = (longlong *)0x0;
  local_338 = 0;
  local_330 = 0;
  local_228 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_c0 = (longlong *)0x0;
  local_c8 = (longlong *)0x0;
  local_d0 = (longlong *)0x0;
  local_e0 = (longlong *)0x0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (*(char *)(param_1 + 0x7f9) == '\0') {
    FUN_00414480(&local_90);
  }
  else {
    FUN_00414b50(&local_90,L"-real");
  }
  uVar4 = FUN_019a4600();
  FUN_019ac280(uVar4,&local_228);
  FUN_00416910(local_328,local_228,0xff);
  FUN_00b93c80(local_220,local_328);
  FUN_004169a0(&local_330,local_220);
  local_3d8 = local_330;
  local_3d0 = L"_paranal";
  local_3c8 = local_90;
  local_3c0 = L".xml";
  FUN_00416cd0(&local_a0,6,*(undefined8 *)PTR_DAT_02005010,L"\\T&M\\");
  FUN_00bac3d0(&local_e0);
  local_6a = (**(code **)(**(longlong **)(param_1 + 0xda0) + 0xe8))(*(longlong **)(param_1 + 0xda0))
  ;
  local_a8 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0xda0) + 0xe0))(*(longlong **)(param_1 + 0xda0))
  ;
  local_80 = (**(code **)(**(longlong **)(param_1 + 0xda0) + 0x100))
                       (*(longlong **)(param_1 + 0xda0));
  (**(code **)(**(longlong **)(param_1 + 0xda0) + 0xf8))(*(longlong **)(param_1 + 0xda0),&local_6b);
  local_6c = (**(code **)(**(longlong **)(param_1 + 0xcb0) + 0x260))
                       (*(longlong **)(param_1 + 0xcb0));
  local_b0 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0xda0) + 0x70))(*(longlong **)(param_1 + 0xda0))
  ;
  local_6d = (**(code **)(**(longlong **)(param_1 + 0xb68) + 0x260))
                       (*(longlong **)(param_1 + 0xb68));
  local_b8 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0) + 0x28))();
  local_74 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
      uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,local_74);
      lVar5 = FUN_004113f0(uVar4,&PTR_FUN_011061a0);
      (**(code **)(*local_b8 + 0x78))(local_b8,*(undefined8 *)(lVar5 + 8));
      local_74 = local_74 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(*local_e0 + 0x148))(local_e0,&local_338,L"paranal");
  (**(code **)(*local_e0 + 0x108))(local_e0,local_338);
  (**(code **)(*local_e0 + 0x148))(local_e0,&local_c0,L"mode");
  (**(code **)(*local_e0 + 0x100))(local_e0,&local_348);
  (**(code **)(*local_348 + 0x98))(local_348,&local_340,local_c0);
  FUN_00414480(&local_90);
  FUN_00414480(&local_98);
  if ((local_a8 != (longlong *)0x0) &&
     (iVar2 = (**(code **)(*local_a8 + 0x28))(local_a8), 0 < iVar2)) {
    iVar2 = (**(code **)(*local_a8 + 0x28))(local_a8);
    if ((int)(uint)local_6a < iVar2) {
      (**(code **)(*local_a8 + 0x18))(local_a8,&local_98,local_6a);
    }
    (**(code **)(*local_a8 + 0x18))(local_a8,&local_90,0);
    iVar2 = (**(code **)(*local_a8 + 0x28))(local_a8);
    iVar2 = iVar2 + -1;
    local_74 = 1;
    if (0 < iVar2) {
      do {
        (**(code **)(*local_a8 + 0x18))(local_a8,&local_350,local_74);
        local_3d8 = local_350;
        FUN_00416cd0(&local_90,3,local_90,&DAT_01b64b54);
        local_74 = local_74 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  (**(code **)(*local_c0 + 0x108))(local_c0,L"name",local_98);
  (**(code **)(*local_c0 + 0x108))(local_c0,L"names",local_90);
  if (local_6b != '\0') {
    local_69[0] = '\0';
    (**(code **)(**(longlong **)(param_1 + 0xda0) + 0x108))
              (*(longlong **)(param_1 + 0xda0),local_69,&local_88,1);
    FUN_00414480(&local_20);
    FUN_00448450(&local_20,local_88,PTR_DAT_02004830);
    FUN_00414b50(&local_90,local_20);
    FUN_00414480(&local_20);
    local_69[0] = '\x01';
    while (local_3b5 = local_6b + -1, local_3b5 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0xda0) + 0x108))
                (*(longlong **)(param_1 + 0xda0),local_69,&local_88,1);
      FUN_00414480(&local_28);
      FUN_00448450(&local_28,local_88,PTR_DAT_02004830);
      local_3d8 = local_28;
      FUN_00416cd0(&local_90,3,local_90,&DAT_01b64b54);
      FUN_00414480(&local_28);
      local_69[0] = local_69[0] + '\x01';
      local_6b = local_3b5;
    }
  }
  FUN_00414480(&local_30);
  FUN_00448450(&local_30,local_80,PTR_DAT_02004830);
  (**(code **)(*local_c0 + 0x108))(local_c0,L"interval",local_30);
  FUN_00414480(&local_30);
  (**(code **)(*local_c0 + 0x108))(local_c0,L"intervals",local_90);
  (**(code **)(*local_e0 + 0x148))(local_e0,&local_c8,L"sweep");
  (**(code **)(*local_e0 + 0x100))(local_e0,&local_360);
  (**(code **)(*local_360 + 0x98))(local_360,&local_358,local_c8);
  FUN_00414480(&local_90);
  FUN_00414480(&local_98);
  if ((local_b0 != (longlong *)0x0) &&
     (iVar2 = (**(code **)(*local_b0 + 0x28))(local_b0), 0 < iVar2)) {
    iVar2 = (**(code **)(*local_b0 + 0x28))(local_b0);
    if ((int)(uint)local_6c < iVar2) {
      (**(code **)(*local_b0 + 0x18))(local_b0,&local_98,local_6c);
    }
    (**(code **)(*local_b0 + 0x18))(local_b0,&local_90,0);
    iVar2 = (**(code **)(*local_b0 + 0x28))(local_b0);
    iVar2 = iVar2 + -1;
    local_74 = 1;
    if (0 < iVar2) {
      do {
        (**(code **)(*local_b0 + 0x18))(local_b0,&local_368,local_74);
        local_3d8 = local_368;
        FUN_00416cd0(&local_90,3,local_90,&DAT_01b64b54);
        local_74 = local_74 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  (**(code **)(*local_c8 + 0x108))(local_c8,L"name",local_98);
  (**(code **)(*local_c8 + 0x108))(local_c8,L"names",local_90);
  FUN_00414480(&local_38);
  local_f0 = *(undefined8 *)(param_1 + 0xd88);
  FUN_00448450(&local_38,local_f0,PTR_DAT_02004830);
  (**(code **)(*local_c8 + 0x108))(local_c8,L"unitdiv",local_38);
  FUN_00414480(&local_38);
  FUN_00414480(&local_40);
  local_f8 = *(undefined8 *)(param_1 + 0xd90);
  FUN_00448450(&local_40,local_f8,PTR_DAT_02004830);
  (**(code **)(*local_c8 + 0x108))(local_c8,L"position",local_40);
  FUN_00414480(&local_40);
  (**(code **)(*local_e0 + 0x148))(local_e0,&local_c8,&DAT_01b64c28);
  (**(code **)(*local_e0 + 0x100))(local_e0,&local_378);
  (**(code **)(*local_378 + 0x98))(local_378,&local_370,local_c8);
  FUN_00414480(&local_90);
  FUN_00414480(&local_98);
  if ((local_b8 != (longlong *)0x0) &&
     (iVar2 = (**(code **)(*local_b8 + 0x28))(local_b8), 0 < iVar2)) {
    iVar2 = (**(code **)(*local_b8 + 0x28))(local_b8);
    if ((int)(uint)local_6d < iVar2) {
      (**(code **)(*local_b8 + 0x18))(local_b8,&local_98,local_6d);
    }
    (**(code **)(*local_b8 + 0x18))(local_b8,&local_90,0);
    iVar2 = (**(code **)(*local_b8 + 0x28))(local_b8);
    iVar2 = iVar2 + -1;
    local_74 = 1;
    if (0 < iVar2) {
      do {
        (**(code **)(*local_b8 + 0x18))(local_b8,&local_380,local_74);
        local_3d8 = local_380;
        FUN_00416cd0(&local_90,3,local_90,&DAT_01b64b54);
        local_74 = local_74 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  (**(code **)(*local_c8 + 0x108))(local_c8,L"name",local_98);
  (**(code **)(*local_c8 + 0x108))(local_c8,L"names",local_90);
  plVar1 = *(longlong **)(param_1 + 0x7d8);
  uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
  uVar4 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar3);
  FUN_004113f0(uVar4,&PTR_FUN_011061a0);
  FUN_00414480(&local_48);
  plVar1 = *(longlong **)(param_1 + 0x7d8);
  uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
  uVar4 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar3);
  lVar5 = FUN_004113f0(uVar4,&PTR_FUN_011061a0);
  local_100 = *(undefined8 *)(lVar5 + 0x118);
  FUN_00448450(&local_48,local_100,PTR_DAT_02004830);
  (**(code **)(*local_c8 + 0x108))(local_c8,L"unitdiv",local_48);
  FUN_00414480(&local_48);
  FUN_00414480(&local_50);
  plVar1 = *(longlong **)(param_1 + 0x7d8);
  uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
  uVar4 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar3);
  lVar5 = FUN_004113f0(uVar4,&PTR_FUN_011061a0);
  local_108 = *(undefined8 *)(lVar5 + 0x150);
  FUN_00448450(&local_50,local_108,PTR_DAT_02004830);
  (**(code **)(*local_c8 + 0x108))(local_c8,L"position",local_50);
  FUN_00414480(&local_50);
  (**(code **)(*local_e0 + 0x148))(local_e0,&local_d0,L"channels");
  (**(code **)(*local_e0 + 0x100))(local_e0,&local_390);
  (**(code **)(*local_390 + 0x98))(local_390,&local_388,local_d0);
  if (local_b8 != (longlong *)0x0) {
    iVar2 = (**(code **)(*local_b8 + 0x28))();
    local_3b4 = iVar2 + -1;
    local_74 = 0;
    if (-1 < local_3b4) {
      do {
        local_3b4 = iVar2;
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
        uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,local_74);
        local_d8 = FUN_004113f0(uVar4,&PTR_FUN_011061a0);
        (**(code **)(*local_e0 + 0x148))(local_e0,&local_c8,L"channel");
        (**(code **)(*local_d0 + 0x98))(local_d0,&local_398,local_c8);
        (**(code **)(*local_c8 + 0x108))(local_c8,L"name",*(undefined8 *)(local_d8 + 8));
        FUN_0043f750(&local_3a0,*(undefined1 *)(local_d8 + 0x11));
        (**(code **)(*local_c8 + 0x108))(local_c8,L"isactive",local_3a0);
        FUN_00414480(&local_58);
        local_110 = *(undefined8 *)(local_d8 + 0x118);
        FUN_00448450(&local_58,local_110,PTR_DAT_02004830);
        (**(code **)(*local_c8 + 0x108))(local_c8,L"voltsdiv",local_58);
        FUN_00414480(&local_58);
        FUN_00414480(&local_60);
        local_118 = *(undefined8 *)(local_d8 + 0x150);
        FUN_00448450(&local_60,local_118,PTR_DAT_02004830);
        (**(code **)(*local_c8 + 0x108))(local_c8,L"position",local_60);
        FUN_00414480(&local_60);
        local_74 = local_74 + 1;
        local_3b4 = local_3b4 + -1;
        iVar2 = local_3b4;
      } while (local_3b4 != 0);
    }
    (**(code **)(*local_e0 + 0x148))(local_e0,&local_c8,L"activechannel");
    (**(code **)(*local_e0 + 0x100))(local_e0,&local_3b0);
    (**(code **)(*local_3b0 + 0x98))(local_3b0,&local_3a8,local_c8);
    plVar1 = *(longlong **)(param_1 + 0x7d8);
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    uVar4 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar3);
    lVar5 = FUN_004113f0(uVar4,&PTR_FUN_011061a0);
    (**(code **)(*local_c8 + 0x108))(local_c8,L"name",*(undefined8 *)(lVar5 + 8));
  }
  (**(code **)(*local_e0 + 0x180))(local_e0,local_a0,0);
  FUN_0041b800(&local_3b0);
  FUN_0041b800(&local_3a8);
  FUN_00414480(&local_3a0);
  FUN_0041b800(&local_398);
  FUN_0041b800(&local_390);
  FUN_0041b800(&local_388);
  FUN_00414480(&local_380);
  FUN_0041b800(&local_378);
  FUN_0041b800(&local_370);
  FUN_00414480(&local_368);
  FUN_0041b800(&local_360);
  FUN_0041b800(&local_358);
  FUN_00414480(&local_350);
  FUN_0041b800(&local_348);
  FUN_0041b800(&local_340);
  FUN_0041b800(&local_338);
  FUN_00414480(&local_330);
  FUN_00414480(&local_228);
  FUN_0041b800(&local_e0);
  FUN_00417840(&local_d0,&LAB_00b9fca0,3);
  FUN_00414560(&local_a0,3);
  FUN_00414560(&local_60,9);
  FUN_00414480(local_res10);
  return;
}


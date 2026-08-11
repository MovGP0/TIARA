/* Ghidra address: 012ab400 */
/* Ghidra symbol: FUN_012ab400 */


/* WARNING: Removing unreachable block (ram,0x012ac1fb) */

void FUN_012ab400(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_3d8 [32];
  char *local_3b8;
  wchar_t *local_3b0;
  undefined8 local_3a8;
  wchar_t *local_3a0;
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
  undefined8 local_338;
  undefined8 local_330;
  longlong *local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  char *local_2f0;
  undefined1 local_2e8 [256];
  undefined8 local_1e8;
  undefined1 local_1e0 [256];
  undefined1 *local_e0;
  char local_d1;
  undefined8 local_d0 [2];
  char local_b9;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  int local_30;
  undefined1 local_2b;
  char local_2a;
  undefined1 local_29 [5];
  int local_24;
  
  local_e0 = auStack_3d8;
  local_390 = 0;
  local_388 = 0;
  local_380 = 0;
  local_378 = 0;
  local_370 = 0;
  local_368 = 0;
  local_360 = 0;
  local_358 = 0;
  local_350 = 0;
  local_348 = 0;
  local_340 = 0;
  local_338 = 0;
  local_330 = 0;
  local_328 = (longlong *)0x0;
  local_320 = 0;
  local_318 = 0;
  local_310 = 0;
  local_308 = 0;
  local_300 = 0;
  local_2f8 = 0;
  local_2f0 = (char *)0x0;
  local_1e8 = 0;
  local_58 = (longlong *)0x0;
  local_60 = (longlong *)0x0;
  local_68 = 0;
  local_70 = (longlong *)0x0;
  local_78 = (longlong *)0x0;
  local_80 = 0;
  local_88 = 0;
  local_90 = (longlong *)0x0;
  local_98 = (longlong *)0x0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_d0[0] = 0;
  if (*(char *)((longlong)param_1 + 0x7f9) == '\0') {
    local_e0 = auStack_3d8;
    FUN_00414480(&local_a0);
  }
  else {
    FUN_00414b50(&local_a0,L"-real");
  }
  uVar4 = FUN_019a4600();
  FUN_019ac280(uVar4,&local_1e8);
  FUN_00416910(local_2e8,local_1e8,0xff);
  FUN_00b93c80(local_1e0,local_2e8);
  FUN_004169a0(&local_2f0,local_1e0);
  local_3b8 = local_2f0;
  local_3b0 = L"_scope";
  local_3a8 = local_a0;
  local_3a0 = L".xml";
  FUN_00416cd0(&local_b0,6,*(undefined8 *)PTR_DAT_02005010,L"\\T&M\\");
  FUN_00bac3d0(&local_98);
  local_d1 = '\0';
  cVar1 = FUN_00440a20(local_b0,1);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*local_98 + 0x170))(local_98,local_b0);
    if (cVar1 == '\0') {
      FUN_012ac710(param_1,0);
    }
    else {
      FUN_00416ba0(&local_2f8,local_b0,L".old");
      FUN_004412f0(local_2f8);
      uVar4 = FUN_00416740(local_b0);
      FUN_00416ba0(&local_300,local_b0,L".old");
      uVar5 = FUN_00416740(local_300);
      thunk_FUN_03f98e1c(uVar4,uVar5);
      local_b9 = '\0';
      (**(code **)(*local_98 + 0xd8))(local_98,&local_308,L"scope/horizontal");
      FUN_0041b890(&local_60,local_308,&DAT_012ac53e);
      if (local_60 != (longlong *)0x0) {
        FUN_012adc10(param_1,&local_48);
        (**(code **)(*local_60 + 0x100))(local_60,&local_310,L"timediv");
        local_48 = FUN_00b920a0(local_310,&local_b9,local_48);
        if (local_b9 != '\0') {
          FUN_012adb80(param_1,local_48);
          local_d1 = '\x01';
        }
        local_b9 = '\0';
        FUN_012adc30(param_1,&local_50);
        (**(code **)(*local_60 + 0x100))(local_60,&local_318,L"position");
        local_50 = FUN_00b920a0(local_318,&local_b9,local_50);
        FUN_00b90440(param_1[0x1a2],local_50);
        if (local_b9 != '\0') {
          FUN_012adb50(param_1,local_50);
        }
        local_b9 = '\0';
        FUN_012adcd0(param_1,local_29,&local_30,&local_38);
        (**(code **)(*local_60 + 0x100))(local_60,&local_320,L"mode");
        local_29[0] = FUN_00b92030(local_320,&local_b9,local_29[0]);
        (**(code **)(*local_60 + 0x100))(local_60,&local_a0,L"xsource");
        local_24 = (**(code **)(*local_38 + 0xb0))(local_38,local_a0);
        if ((local_24 != -1) && (bVar7 = local_24 != local_30, local_30 = local_24, bVar7)) {
          local_b9 = '\x01';
        }
        if (local_b9 != '\0') {
          FUN_012add20(param_1,local_29,&local_30);
        }
      }
      FUN_012adac0(param_1,&local_2b,&local_38);
      (**(code **)(*local_98 + 0x100))(local_98,&local_328);
      (**(code **)(*local_328 + 0xe8))(local_328,&local_90,L"//channels/channel");
      if (local_90 != (longlong *)0x0) {
        (**(code **)(*local_90 + 0x68))(local_90);
        (**(code **)(*local_90 + 0x70))(local_90,&local_330);
        FUN_0041b890(&local_70,local_330,&DAT_012ac53e);
        while (local_70 != (longlong *)0x0) {
          (**(code **)(*local_70 + 0x100))(local_70,&local_a0,&DAT_012ac600);
          local_24 = (**(code **)(*local_38 + 0xb0))(local_38,local_a0);
          local_b9 = '\0';
          if (local_24 != -1) {
            uVar4 = (**(code **)(*local_38 + 0x30))(local_38,local_24);
            local_b8 = FUN_004113f0(uVar4,&PTR_FUN_01105a20);
            (**(code **)(*local_70 + 0x100))(local_70,&local_338,L"isactive");
            uVar2 = FUN_00b92030(local_338,&local_b9,*(undefined1 *)(local_b8 + 0x11));
            *(undefined1 *)(local_b8 + 0x11) = uVar2;
            (**(code **)(*local_70 + 0x100))(local_70,&local_340,L"coupling");
            uVar2 = FUN_00b92030(local_340,&local_b9,*(undefined1 *)(local_b8 + 0x38));
            *(undefined1 *)(local_b8 + 0x38) = uVar2;
            (**(code **)(*local_70 + 0x100))(local_70,&local_348,L"voltsdiv");
            uVar4 = FUN_00b920a0(local_348,&local_b9,*(undefined8 *)(local_b8 + 0x118));
            *(undefined8 *)(local_b8 + 0x118) = uVar4;
            (**(code **)(*local_70 + 0x100))(local_70,&local_350,L"position");
            uVar4 = FUN_00b920a0(local_350,&local_b9,*(undefined8 *)(local_b8 + 0x110));
            *(undefined8 *)(local_b8 + 0x110) = uVar4;
            if (local_b9 != '\0') {
              (**(code **)(*(longlong *)param_1[0xfb] + 0x268))((longlong *)param_1[0xfb],local_24);
              local_b9 = *(char *)(local_b8 + 0x11);
              lVar6 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x30))
                                (*(longlong **)(param_1[0xfb] + 0x4f0),local_24);
              *(undefined1 *)(lVar6 + 0x38) = *(undefined1 *)(local_b8 + 0x38);
              (**(code **)(*param_1 + 0x3f0))(param_1,param_1);
              FUN_012b1410(param_1,param_1);
              FUN_0082a6c0(param_1[0xfa],local_b9);
              FUN_012af7d0(param_1,param_1);
              (**(code **)(*(longlong *)param_1[0x1b7] + 0x78))
                        ((longlong *)param_1[0x1b7],local_b8 + 0x2a,local_b8 + 0x118,0);
              FUN_00b90440(param_1[0x1a6],*(undefined8 *)(local_b8 + 0x118));
              FUN_012b1410(param_1,param_1);
            }
          }
          (**(code **)(*local_90 + 0x70))(local_90,&local_358);
          FUN_0041b890(&local_70,local_358,&DAT_012ac53e);
        }
      }
      local_3b8 = &local_2a;
      local_3b0 = (wchar_t *)&local_40;
      FUN_012adc40(param_1,local_29,&local_30,&local_38);
      (**(code **)(*local_98 + 0xd8))(local_98,&local_360,L"scope/trigger");
      FUN_0041b890(&local_58,local_360,&DAT_012ac53e);
      if (local_58 != (longlong *)0x0) {
        local_b9 = '\0';
        (**(code **)(*local_58 + 0x100))(local_58,&local_368,L"mode");
        local_29[0] = FUN_00b92030(local_368,&local_b9,local_29[0]);
        if (local_b9 != '\0') {
          (**(code **)(*(longlong *)param_1[0x173] + 0x268))((longlong *)param_1[0x173],local_29[0])
          ;
          FUN_012b1d40(param_1,param_1);
        }
        local_b9 = '\0';
        (**(code **)(*local_58 + 0x100))(local_58,&local_a0,L"source");
        local_24 = (**(code **)(*local_38 + 0xb0))(local_38,local_a0);
        if ((local_24 != -1) && (local_24 != local_30)) {
          local_b9 = '\x01';
        }
        if (local_b9 != '\0') {
          (**(code **)(*(longlong *)param_1[0x170] + 0x268))((longlong *)param_1[0x170],local_24);
          FUN_012b0640(param_1,param_1);
        }
        local_b9 = '\0';
        (**(code **)(*local_58 + 0x100))(local_58,&local_370,L"level");
        local_40 = FUN_00b920a0(local_370,&local_b9,local_40);
        if (local_b9 != '\0') {
          FUN_00b90440(param_1[0x1a8],local_40);
          FUN_012ae910(param_1,6,1,0);
          local_d1 = '\x01';
        }
        local_b9 = '\0';
        (**(code **)(*local_58 + 0x100))(local_58,&local_378,&DAT_012ac6d4);
        local_2a = FUN_00b92030(local_378,&local_b9,local_2a);
        if (local_b9 != '\0') {
          if (local_2a == '\0') {
            FUN_012b0130(param_1,param_1);
          }
          else {
            FUN_012b0180(param_1,param_1);
          }
        }
      }
      (**(code **)(*local_98 + 0xd8))(local_98,&local_380,L"scope/activechannel");
      FUN_0041b890(&local_78,local_380,&DAT_012ac53e);
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x100))(local_78,&local_388,&DAT_012ac600);
        local_24 = (**(code **)(**(longlong **)(param_1[0x1b7] + 8) + 0xb0))
                             (*(longlong **)(param_1[0x1b7] + 8),local_388);
        if ((local_24 != -1) &&
           (iVar3 = (**(code **)(*(longlong *)param_1[0xfb] + 0x260))((longlong *)param_1[0xfb]),
           local_24 != iVar3)) {
          (**(code **)(*(longlong *)param_1[0xfb] + 0x268))((longlong *)param_1[0xfb],local_24);
          lVar6 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x30))
                            (*(longlong **)(param_1[0xfb] + 0x4f0),local_24);
          local_b9 = *(char *)(lVar6 + 0x11);
          (**(code **)(*param_1 + 0x3f0))(param_1,param_1);
          FUN_0082a6c0(param_1[0xfa],local_b9);
          FUN_012af7d0(param_1,param_1);
        }
      }
      (**(code **)(*local_98 + 0x100))(local_98,&local_390);
      FUN_0041b890(&local_88,local_390,&DAT_012ac53e);
      if (local_88 != 0) {
        local_b9 = '\0';
      }
      if (local_d1 != '\0') {
        FUN_010e8e30(param_1[0x136],1);
      }
    }
  }
  FUN_0041b800(&local_390);
  FUN_00414480(&local_388);
  FUN_0041b800(&local_380);
  FUN_00414560(&local_378,3);
  FUN_00417840(&local_360,&DAT_00b9f8e0,2);
  FUN_00414560(&local_350,4);
  FUN_0041b800(&local_330);
  FUN_0041b800(&local_328);
  FUN_00414560(&local_320,3);
  FUN_0041b800(&local_308);
  FUN_00414560(&local_300,3);
  FUN_00414480(&local_1e8);
  FUN_00414480(local_d0);
  FUN_00414560(&local_b0,3);
  FUN_0041b800(&local_98);
  FUN_0041b800(&local_90);
  FUN_00417840(&local_88,&LAB_00b9fca0,7);
  return;
}


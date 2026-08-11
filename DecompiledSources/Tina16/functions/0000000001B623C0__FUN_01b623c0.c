/* Ghidra address: 01b623c0 */
/* Ghidra symbol: FUN_01b623c0 */


void FUN_01b623c0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auStack_398 [32];
  undefined8 local_378;
  wchar_t *local_370;
  undefined8 local_368;
  wchar_t *local_360;
  longlong local_358;
  longlong local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  longlong *local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined1 local_2d8 [256];
  undefined8 local_1d8;
  undefined1 local_1d0 [256];
  undefined1 *local_d0;
  longlong local_c8;
  longlong local_c0;
  char local_b1;
  undefined8 local_b0 [2];
  char local_9a;
  undefined1 local_99;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_38;
  byte local_27;
  byte local_26;
  byte local_25;
  uint local_24;
  
  local_d0 = auStack_398;
  local_358 = 0;
  local_350 = 0;
  local_348 = 0;
  local_340 = 0;
  local_338 = 0;
  local_330 = 0;
  local_328 = 0;
  local_320 = (longlong *)0x0;
  local_318 = 0;
  local_310 = 0;
  local_308 = 0;
  local_300 = 0;
  local_2f8 = 0;
  local_2f0 = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_1d8 = 0;
  local_68 = (longlong *)0x0;
  local_70 = (longlong *)0x0;
  local_78 = (longlong *)0x0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_b0[0] = 0;
  if (*(char *)(param_1 + 0x7f9) == '\0') {
    local_d0 = auStack_398;
    FUN_00414480(&local_80);
  }
  else {
    FUN_00414b50(&local_80,L"-real");
  }
  uVar4 = FUN_019a4600();
  FUN_019ac280(uVar4,&local_1d8);
  FUN_00416910(local_2d8,local_1d8,0xff);
  FUN_00b93c80(local_1d0,local_2d8);
  FUN_004169a0(&local_2e0,local_1d0);
  local_378 = local_2e0;
  local_370 = L"_paranal";
  local_368 = local_80;
  local_360 = L".xml";
  FUN_00416cd0(&local_90,6,*(undefined8 *)PTR_DAT_02005010,L"\\T&M\\");
  FUN_00bac3d0(&local_78);
  local_b1 = '\0';
  cVar1 = FUN_00440a20(local_90,1);
  if (cVar1 == '\0') {
    FUN_01b63550(param_1,0);
  }
  else {
    cVar1 = (**(code **)(*local_78 + 0x170))(local_78,local_90);
    if (cVar1 != '\0') {
      local_25 = (**(code **)(**(longlong **)(param_1 + 0xda0) + 0xe8))
                           (*(longlong **)(param_1 + 0xda0));
      local_38 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0xda0) + 0xe0))
                           (*(longlong **)(param_1 + 0xda0));
      local_58 = (**(code **)(**(longlong **)(param_1 + 0xda0) + 0x100))
                           (*(longlong **)(param_1 + 0xda0));
      local_26 = (**(code **)(**(longlong **)(param_1 + 0xcb0) + 0x260))
                           (*(longlong **)(param_1 + 0xcb0));
      local_48 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0xda0) + 0x70))
                           (*(longlong **)(param_1 + 0xda0));
      local_27 = (**(code **)(**(longlong **)(param_1 + 0xb68) + 0x260))
                           (*(longlong **)(param_1 + 0xb68));
      local_50 = (longlong *)
                 (**(code **)**(undefined8 **)(param_1 + 0xda0))(*(undefined8 **)(param_1 + 0xda0));
      (**(code **)(*local_78 + 0xd8))(local_78,&local_2e8,L"paranal/mode");
      FUN_0041b890(&local_68,local_2e8,&DAT_01b633d6);
      if (local_68 != (longlong *)0x0) {
        local_9a = '\0';
        (**(code **)(*local_68 + 0x100))(local_68,&local_80,L"name");
        local_24 = (**(code **)(*local_38 + 0xb0))(local_38,local_80);
        if ((local_24 != 0xffffffff) && (local_24 != local_25)) {
          local_9a = '\x01';
        }
        if (local_9a != '\0') {
          (**(code **)(**(longlong **)(param_1 + 0xcf0) + 0x268))
                    (*(longlong **)(param_1 + 0xcf0),local_24);
          FUN_01b69150(param_1,param_1);
        }
        local_9a = '\0';
        (**(code **)(*local_68 + 0x100))(local_68,&local_2f0,L"interval");
        FUN_00b920a0(local_2f0,&local_9a,local_58);
      }
      (**(code **)(*local_78 + 0xd8))(local_78,&local_2f8,L"paranal/sweep");
      FUN_0041b890(&local_68,local_2f8,&DAT_01b633d6);
      if (local_68 != (longlong *)0x0) {
        local_9a = '\0';
        (**(code **)(*local_68 + 0x100))(local_68,&local_80,L"name");
        local_24 = (**(code **)(*local_48 + 0xb0))(local_48,local_80);
        if ((local_24 != 0xffffffff) && (local_24 != local_26)) {
          local_9a = '\x01';
        }
        if (local_9a != '\0') {
          (**(code **)(**(longlong **)(param_1 + 0xcb0) + 0x268))
                    (*(longlong **)(param_1 + 0xcb0),local_24);
          FUN_01b68830(param_1,param_1);
        }
        local_9a = '\0';
        local_60 = FUN_00b90090(*(undefined8 *)(param_1 + 0xcb8));
        (**(code **)(*local_68 + 0x100))(local_68,&local_300,L"position");
        local_60 = FUN_00b920a0(local_300,&local_9a,local_60);
        FUN_00b90440(*(undefined8 *)(param_1 + 0xcb8),local_60);
        if (local_9a != '\0') {
          FUN_01b68510(param_1,param_1);
        }
      }
      (**(code **)(*local_78 + 0xd8))(local_78,&local_308,L"paranal/y");
      FUN_0041b890(&local_68,local_308,&DAT_01b633d6);
      if (local_68 != (longlong *)0x0) {
        local_9a = '\0';
        (**(code **)(*local_68 + 0x100))(local_68,&local_80,L"name");
        local_24 = (**(code **)(*local_50 + 0xb0))(local_50,local_80);
        if ((local_24 != 0xffffffff) && (local_24 != local_27)) {
          local_9a = '\x01';
        }
        if (local_9a != '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x268))
                    (*(longlong **)(param_1 + 0x7d8),local_24);
          FUN_01b65820(param_1,param_1);
          local_9a = '\0';
        }
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x260))
                          (*(longlong **)(param_1 + 0x7d8));
        (**(code **)(**(longlong **)(param_1 + 0xda0) + 0x58))
                  (*(longlong **)(param_1 + 0xda0),uVar2);
        local_c0 = FUN_004113f0(*(undefined8 *)(param_1 + 0x870),&PTR_FUN_011061a0);
        (**(code **)(**(longlong **)(param_1 + 0xda0) + 0xa8))
                  (*(longlong **)(param_1 + 0xda0),*(undefined1 *)(local_c0 + 0x2a));
        (**(code **)(**(longlong **)(param_1 + 0xda0) + 0x98))
                  (*(longlong **)(param_1 + 0xda0),local_c0 + 0x2a,local_c0 + 0x118,1);
        (**(code **)(*local_68 + 0x100))(local_68,&local_310,L"unitdiv");
        uVar4 = FUN_00b920a0(local_310,&local_9a,*(undefined8 *)(local_c0 + 0x118));
        *(undefined8 *)(local_c0 + 0x118) = uVar4;
        if (local_9a != '\0') {
          *(double *)(local_c0 + 0x118) = *(double *)(local_c0 + 0x118) * 5.0;
          (**(code **)(**(longlong **)(param_1 + 0xda0) + 0x98))
                    (*(longlong **)(param_1 + 0xda0),local_c0 + 0x2a,local_c0 + 0x118,0);
          *(char *)(local_c0 + 0x2a) = *(char *)(local_c0 + 0x2a) + '\x01';
          FUN_01b65a50(param_1,param_1);
          FUN_01b68560(param_1,param_1);
          local_9a = '\0';
        }
        local_c8 = FUN_004113f0(*(undefined8 *)(param_1 + 0x870),&PTR_FUN_011061a0);
        FUN_01b677e0(param_1,local_c8 + 0x150,*(undefined8 *)(local_c8 + 0x118),6);
        (**(code **)(*local_68 + 0x100))(local_68,&local_318,L"position");
        uVar4 = FUN_00b920a0(local_318,&local_9a,*(undefined8 *)(local_c8 + 0x150));
        *(undefined8 *)(local_c8 + 0x150) = uVar4;
        if (local_9a != '\0') {
          FUN_00b90440(*(undefined8 *)(param_1 + 0xc68),*(undefined8 *)(local_c8 + 0x150));
          FUN_01b67900(param_1,param_1);
          local_9a = '\0';
        }
      }
      (**(code **)(*local_78 + 0x100))(local_78,&local_320);
      (**(code **)(*local_320 + 0xe8))(local_320,&local_70,L"//channels/channel");
      if (local_70 != (longlong *)0x0) {
        (**(code **)(*local_70 + 0x68))(local_70);
        (**(code **)(*local_70 + 0x70))(local_70,&local_328);
        FUN_0041b890(&local_68,local_328,&DAT_01b633d6);
        while (local_68 != (longlong *)0x0) {
          (**(code **)(*local_68 + 0x100))(local_68,&local_80,L"name");
          local_24 = (**(code **)(*local_50 + 0xb0))(local_50,local_80);
          if (local_24 != 0xffffffff) {
            uVar4 = (**(code **)(*local_50 + 0x30))(local_50,local_24);
            local_98 = FUN_004113f0(uVar4,&PTR_FUN_011061a0);
            (**(code **)(*local_68 + 0x100))(local_68,&local_330,L"isactive");
            local_99 = FUN_00b92030(local_330,&local_9a,*(undefined1 *)(local_98 + 0x11));
            *(undefined1 *)(local_98 + 0x11) = local_99;
            (**(code **)(*local_68 + 0x100))(local_68,&local_338,L"voltsdiv");
            uVar4 = FUN_00b920a0(local_338,&local_9a,*(undefined8 *)(local_98 + 0x118));
            *(undefined8 *)(local_98 + 0x118) = uVar4;
            (**(code **)(*local_68 + 0x100))(local_68,&local_340,L"position");
            uVar4 = FUN_00b920a0(local_340,&local_9a,*(undefined8 *)(local_98 + 0x150));
            *(undefined8 *)(local_98 + 0x150) = uVar4;
            if (local_9a != '\0') {
              (**(code **)(**(longlong **)(param_1 + 0xb68) + 0x268))
                        (*(longlong **)(param_1 + 0xb68),local_24);
              FUN_01b65820(param_1,param_1);
              FUN_01b68560(param_1,param_1);
              FUN_0082a6c0(*(undefined8 *)(param_1 + 2000),local_99);
              FUN_01b65960(param_1,param_1);
            }
          }
          (**(code **)(*local_70 + 0x70))(local_70,&local_348);
          FUN_0041b890(&local_68,local_348,&DAT_01b633d6);
        }
      }
      (**(code **)(*local_78 + 0xd8))(local_78,&local_350,L"paranal/activechannel");
      FUN_0041b890(&local_68,local_350,&DAT_01b633d6);
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 0x100))(local_68,&local_358,L"name");
        local_24 = (**(code **)(*local_50 + 0xb0))(local_50,local_358);
        if ((local_24 != 0xffffffff) &&
           (uVar3 = (**(code **)(**(longlong **)(param_1 + 0xb68) + 0x260))
                              (*(longlong **)(param_1 + 0xb68)), local_24 != uVar3)) {
          (**(code **)(**(longlong **)(param_1 + 0xb68) + 0x268))
                    (*(longlong **)(param_1 + 0xb68),local_24);
          FUN_01b65820(param_1,param_1);
        }
      }
    }
    if (local_b1 != '\0') {
      FUN_010e8e30(*(undefined8 *)(param_1 + 0x9b0),1);
    }
  }
  FUN_00414480(&local_358);
  FUN_00417840(&local_350,&DAT_00b9f8e0,2);
  FUN_00414560(&local_340,3);
  FUN_0041b800(&local_328);
  FUN_0041b800(&local_320);
  FUN_00414560(&local_318,2);
  FUN_0041b800(&local_308);
  FUN_00414480(&local_300);
  FUN_0041b800(&local_2f8);
  FUN_00414480(&local_2f0);
  FUN_0041b800(&local_2e8);
  FUN_00414480(&local_2e0);
  FUN_00414480(&local_1d8);
  FUN_00414480(local_b0);
  FUN_00414560(&local_90,3);
  FUN_0041b800(&local_78);
  FUN_0041b800(&local_70);
  FUN_0041b800(&local_68);
  return;
}


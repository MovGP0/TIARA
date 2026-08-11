/* Ghidra address: 01384540 */
/* Ghidra symbol: FUN_01384540 */


void FUN_01384540(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_388 [32];
  undefined8 local_368;
  wchar_t *local_360;
  undefined8 local_358;
  wchar_t *local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  longlong *local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined1 *local_2a8;
  undefined8 local_2a0;
  undefined1 local_298 [256];
  undefined8 local_198;
  undefined1 local_190 [256];
  undefined1 *local_90;
  char local_83;
  char local_82;
  undefined1 local_81;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined8 local_38;
  int local_2c;
  undefined4 local_28;
  int local_24;
  
  local_90 = auStack_388;
  local_348 = 0;
  local_340 = 0;
  local_338 = 0;
  local_330 = 0;
  local_328 = 0;
  local_320 = 0;
  local_318 = 0;
  local_310 = 0;
  local_308 = 0;
  local_300 = 0;
  local_2f8 = 0;
  local_2f0 = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2d0 = 0;
  local_2c8 = (longlong *)0x0;
  local_2c0 = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  local_2a8 = (undefined1 *)0x0;
  local_2a0 = 0;
  local_198 = 0;
  local_48 = (longlong *)0x0;
  local_50 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  if (*(char *)((longlong)param_1 + 0x7f9) == '\0') {
    local_90 = auStack_388;
    FUN_00414480(&local_68);
  }
  else {
    FUN_00414b50(&local_68,L"-real");
  }
  uVar5 = FUN_019a4600();
  FUN_019ac280(uVar5,&local_198);
  FUN_00416910(local_298,local_198,0xff);
  FUN_00b93c80(local_190,local_298);
  FUN_004169a0(&local_2a0,local_190);
  local_368 = local_2a0;
  local_360 = L"_siganal";
  local_358 = local_68;
  local_350 = L".xml";
  FUN_00416cd0(&local_78,6,*(undefined8 *)PTR_DAT_02005010,L"\\T&M\\");
  FUN_00bac3d0(&local_58);
  local_83 = '\0';
  cVar1 = FUN_00440a20(local_78,1);
  if (cVar1 == '\0') {
    FUN_013858d0(param_1,0);
  }
  else {
    cVar1 = (**(code **)(*local_58 + 0x170))(local_58,local_78);
    if (cVar1 != '\0') {
      (**(code **)(*local_58 + 0xd8))(local_58,&local_2a8,L"siganal/display");
      FUN_0041b890(&local_48,local_2a8,&DAT_01385648);
      if (local_48 != (longlong *)0x0) {
        local_82 = '\0';
        (**(code **)(*local_48 + 0x100))(local_48,&local_2b0,L"mode");
        uVar3 = (**(code **)(*(longlong *)param_1[0x174] + 0x260))((longlong *)param_1[0x174]);
        local_24 = FUN_00b92030(local_2b0,&local_82,uVar3);
        if (local_82 != '\0') {
          (**(code **)(*(longlong *)param_1[0x174] + 0x268))((longlong *)param_1[0x174],local_24);
          FUN_0138bf10(param_1,param_1);
        }
        local_82 = '\0';
        (**(code **)(*local_48 + 0x100))(local_48,&local_2b8,L"high");
        uVar5 = FUN_00b90090(param_1[0x189]);
        local_38 = FUN_00b920a0(local_2b8,&local_82,uVar5);
        if (local_82 != '\0') {
          FUN_00b90440(param_1[0x189],local_38);
          FUN_0138c2a0(param_1,6);
        }
        local_82 = '\0';
        (**(code **)(*local_48 + 0x100))(local_48,&local_2c0,&DAT_01385694);
        uVar5 = FUN_00b90090(param_1[0x18a]);
        local_38 = FUN_00b920a0(local_2c0,&local_82,uVar5);
        if (local_82 != '\0') {
          FUN_00b90440(param_1[0x18a],local_38);
          FUN_0138c060(param_1,6);
        }
      }
      local_82 = '\0';
      local_2c = (**(code **)(*(longlong *)param_1[0x16e] + 0x260))((longlong *)param_1[0x16e]);
      local_40 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      iVar4 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))();
      local_24 = 0;
      if (-1 < iVar4 + -1) {
        do {
          uVar5 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x30))
                            (*(longlong **)(param_1[0xfb] + 0x4f0),local_24);
          lVar6 = FUN_004113f0(uVar5,&PTR_FUN_011051a8);
          (**(code **)(*local_40 + 0x78))(local_40,*(undefined8 *)(lVar6 + 8));
          local_24 = local_24 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      (**(code **)(*local_58 + 0x100))(local_58,&local_2c8);
      (**(code **)(*local_2c8 + 0xe8))(local_2c8,&local_50,L"//channels/channel");
      if (local_50 != (longlong *)0x0) {
        (**(code **)(*local_50 + 0x68))(local_50);
        (**(code **)(*local_50 + 0x70))(local_50,&local_2d0);
        FUN_0041b890(&local_48,local_2d0,&DAT_01385648);
        local_2c = -1;
        while (local_48 != (longlong *)0x0) {
          (**(code **)(*local_48 + 0x100))(local_48,&local_68,L"name");
          local_24 = (**(code **)(*local_40 + 0xb0))(local_40,local_68);
          if (local_24 != -1) {
            local_80 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x30))
                                 (*(longlong **)(param_1[0xfb] + 0x4f0),local_24);
            (**(code **)(*local_48 + 0x100))(local_48,&local_2d8,L"isactive");
            uVar2 = FUN_00b92030(local_2d8,&local_82,*(undefined1 *)(local_80 + 0x11));
            *(undefined1 *)(local_80 + 0x11) = uVar2;
            if ((local_2c == -1) && (*(char *)(local_80 + 0x11) != '\0')) {
              local_2c = local_24;
            }
            (**(code **)(*local_48 + 0x100))(local_48,&local_2e0,L"coupling");
            uVar2 = FUN_00b92030(local_2e0,&local_82,*(undefined1 *)(local_80 + 0x38));
            *(undefined1 *)(local_80 + 0x38) = uVar2;
            local_81 = *(undefined1 *)(local_80 + 0x11);
            if (local_82 != '\0') {
              (**(code **)(*(longlong *)param_1[0xfb] + 0x268))((longlong *)param_1[0xfb],local_24);
              (**(code **)(*param_1 + 0x3f0))(param_1,param_1);
              FUN_0082a6c0(param_1[0xfa],local_81);
              FUN_01389b50(param_1,param_1);
            }
          }
          (**(code **)(*local_50 + 0x70))(local_50,&local_2e8);
          FUN_0041b890(&local_48,local_2e8,&DAT_01385648);
        }
      }
      (**(code **)(*local_58 + 0xd8))(local_58,&local_2f0,L"siganal/activechannel");
      FUN_0041b890(&local_48,local_2f0,&DAT_01385648);
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x100))(local_48,&local_2f8,L"name");
        local_24 = (**(code **)(*local_40 + 0xb0))(local_40,local_2f8);
        if ((local_24 != -1) &&
           (iVar4 = (**(code **)(*(longlong *)param_1[0xfb] + 0x260))((longlong *)param_1[0xfb]),
           local_24 != iVar4)) {
          (**(code **)(*(longlong *)param_1[0xfb] + 0x268))((longlong *)param_1[0xfb],local_24);
          (**(code **)(*param_1 + 0x3f0))(param_1,param_1);
        }
      }
      if ((local_2c != -1) &&
         (iVar4 = (**(code **)(*(longlong *)param_1[0xfb] + 0x260))((longlong *)param_1[0xfb]),
         local_2c != iVar4)) {
        (**(code **)(*(longlong *)param_1[0xfb] + 0x268))((longlong *)param_1[0xfb],local_24);
        (**(code **)(*param_1 + 0x3f0))(param_1,param_1);
      }
      local_82 = '\0';
      (**(code **)(*local_58 + 0xd8))(local_58,&local_300,L"siganal/measurement");
      FUN_0041b890(&local_48,local_300,&DAT_01385648);
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x100))(local_48,&local_308,L"mode");
        uVar3 = (**(code **)(*(longlong *)param_1[0x17e] + 0x260))((longlong *)param_1[0x17e]);
        local_24 = FUN_00b92030(local_308,&local_82,uVar3);
        if (local_82 != '\0') {
          (**(code **)(*(longlong *)param_1[0x17e] + 0x268))((longlong *)param_1[0x17e],local_24);
        }
      }
      local_82 = '\0';
      (**(code **)(*local_58 + 0xd8))(local_58,&local_310,L"/siganal/measurement/amplitude");
      FUN_0041b890(&local_48,local_310,&DAT_01385648);
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x100))(local_48,&local_318,L"range");
        uVar5 = FUN_00b90090(param_1[0x197]);
        local_38 = FUN_00b920a0(local_318,&local_82,uVar5);
        if (local_82 != '\0') {
          FUN_00b90440(param_1[0x197],local_38);
        }
        if (*(char *)(param_1[0x17a] + 0x328) == '\0') {
          FUN_00414b50(&local_60,&DAT_01385814);
        }
        else {
          FUN_00414b50(&local_60,&DAT_01385804);
        }
        (**(code **)(*local_48 + 0x100))(local_48,&local_320,L"mode");
        iVar4 = FUN_00416db0(local_60,local_320);
        if (iVar4 != 0) {
          FUN_0082a6c0(param_1[0x17a],*(char *)(param_1[0x17a] + 0x328) == '\0');
        }
      }
      local_82 = '\0';
      (**(code **)(*local_58 + 0xd8))(local_58,&local_328,L"/siganal/measurement/frequency");
      FUN_0041b890(&local_48,local_328,&DAT_01385648);
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x100))(local_48,&local_330,L"start");
        uVar5 = FUN_00b90090(param_1[0x185]);
        local_38 = FUN_00b920a0(local_330,&local_82,uVar5);
        if (local_82 != '\0') {
          FUN_00b90440(param_1[0x185],local_38);
        }
        local_82 = '\0';
        (**(code **)(*local_48 + 0x100))(local_48,&local_338,L"stop");
        uVar5 = FUN_00b90090(param_1[0x186]);
        local_38 = FUN_00b920a0(local_338,&local_82,uVar5);
        if (local_82 != '\0') {
          FUN_00b90440(param_1[0x186],local_38);
        }
        local_82 = '\0';
        (**(code **)(*local_48 + 0x100))(local_48,&local_340,L"resolution");
        uVar3 = FUN_00f04d50(param_1[0x187]);
        local_28 = FUN_00b92030(local_340,&local_82,uVar3);
        if (local_82 != '\0') {
          FUN_00f04fa0(param_1[0x187],local_28);
        }
        if (*(char *)(param_1[0x1a7] + 0x328) == '\0') {
          FUN_00414b50(&local_60,&DAT_01385814);
        }
        else {
          FUN_00414b50(&local_60,&DAT_01385804);
        }
        (**(code **)(*local_48 + 0x100))(local_48,&local_348,L"scale");
        iVar4 = FUN_00416db0(local_60,local_348);
        if (iVar4 != 0) {
          FUN_0082a6c0(param_1[0x1a7],*(char *)(param_1[0x1a7] + 0x328) == '\0');
        }
      }
    }
    if (local_83 != '\0') {
      FUN_010e8e30(param_1[0x136],1);
    }
  }
  FUN_00414560(&local_348,4);
  FUN_0041b800(&local_328);
  FUN_00414560(&local_320,2);
  FUN_0041b800(&local_310);
  FUN_00414480(&local_308);
  FUN_0041b800(&local_300);
  FUN_00414480(&local_2f8);
  FUN_00417840(&local_2f0,&DAT_00b9f8e0,2);
  FUN_00414560(&local_2e0,2);
  FUN_0041b800(&local_2d0);
  FUN_0041b800(&local_2c8);
  FUN_00414560(&local_2c0,3);
  FUN_0041b800(&local_2a8);
  FUN_00414480(&local_2a0);
  FUN_00414480(&local_198);
  FUN_00414560(&local_78,4);
  FUN_0041b800(&local_58);
  FUN_0041b800(&local_50);
  FUN_0041b800(&local_48);
  return;
}


/* Ghidra address: 00b02f00 */
/* Ghidra symbol: FUN_00b02f00 */


longlong FUN_00b02f00(longlong param_1,char param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res8;
  undefined8 local_res18 [2];
  undefined1 auStack_478 [32];
  wchar_t *local_458;
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
  undefined *local_3c0;
  undefined8 local_3b8;
  undefined *local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined1 *local_370;
  longlong local_360;
  longlong local_358;
  longlong local_350;
  longlong local_348;
  longlong local_340;
  longlong local_338;
  longlong local_330;
  longlong local_328;
  ulonglong local_320;
  longlong local_318;
  longlong local_310;
  longlong local_308;
  longlong *local_2f8;
  char local_2ed;
  int local_2ec;
  longlong local_2e8;
  undefined1 local_2e0 [24];
  undefined8 local_2c8;
  longlong *local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  local_370 = auStack_478;
  local_440 = 0;
  local_438 = 0;
  local_430 = 0;
  local_428 = 0;
  local_420 = 0;
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
  local_3a0 = 0;
  local_398 = 0;
  local_380 = 0;
  local_388 = 0;
  local_390 = 0;
  local_378 = 0;
  local_2e8 = 0;
  local_20 = 0;
  local_28 = 0;
  local_40 = 0;
  local_30 = 0;
  local_48 = 0;
  local_50 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00417580(local_2e0,&DAT_00432b90);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  cVar1 = FUN_00440a20(local_res18[0],1);
  if (cVar1 == '\0') {
    FUN_00416ba0(&local_378,local_res18[0],L" does not exist.");
    uVar4 = FUN_0044d490(&PTR_FUN_00471c70,1,local_378);
    FUN_004134c0(uVar4);
  }
  FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0xfff5);
  FUN_00414ad0(local_res8 + 8,local_res18[0]);
  FUN_009e1e60(&local_380);
  FUN_009dfd30(&local_390,local_res18[0],0x2e);
  FUN_009e02c0(&local_388,local_390,0);
  local_458 = (wchar_t *)local_388;
  FUN_00416cd0(local_res8 + 0x20,3,local_380,L"DesignSoft\\Help\\");
  FUN_00440c30(*(undefined8 *)(local_res8 + 0x20));
  FUN_009e01d0(&local_398,*(undefined8 *)(local_res8 + 0x20),0x5c,0);
  FUN_00414ad0(local_res8 + 0x20,local_398);
  FUN_00416ba0(&local_3a0,*(undefined8 *)(local_res8 + 0x20),L"chm_ok.dat");
  cVar1 = FUN_00440a20(local_3a0,1);
  if (cVar1 != '\0') goto LAB_00b03369;
  FUN_009e1bc0(*(undefined8 *)(local_res8 + 0x20),1);
  local_3c0 = &DAT_00b041ac;
  FUN_00416ba0(&local_3c8,&DAT_00b041bc,*(undefined8 *)(local_res8 + 0x20));
  local_3b8 = local_3c8;
  local_3b0 = &DAT_00b041d0;
  local_3a8 = local_res18[0];
  local_458 = (wchar_t *)CONCAT44(local_458._4_4_,2);
  cVar1 = FUN_009e1060(L"7z.exe",&local_3c0,3,1);
  if (cVar1 == '\0') {
LAB_00b032b2:
    FUN_00416ba0(&local_3d8,local_res18[0],L" could not extract help file.");
    uVar4 = FUN_0044d490(&PTR_FUN_00471c70,1,local_3d8);
    FUN_004134c0(uVar4);
  }
  else {
    FUN_00416ba0(&local_3d0,*(undefined8 *)(local_res8 + 0x20),&DAT_00b041e4);
    iVar2 = FUN_00441230(local_3d0,0x1ff,local_2e0);
    if (iVar2 != 0) goto LAB_00b032b2;
  }
  FUN_004412c0(local_2e0);
  FUN_00416ba0(&local_3e0,*(undefined8 *)(local_res8 + 0x20),L"chm_ok.dat");
  local_58 = (longlong *)FUN_004b9860(&PTR_FUN_0047c498,1,local_3e0,0xff00);
  uVar4 = FUN_00414de0(local_res18);
  (**(code **)(*local_58 + 0x20))(local_58,uVar4,1);
  FUN_00410f20(local_58);
LAB_00b03369:
  FUN_00416ba0(&local_3e8,*(undefined8 *)(local_res8 + 0x20),L"#IVB");
  cVar1 = FUN_00440a20(local_3e8,1);
  if (cVar1 != '\0') {
    FUN_00416ba0(&local_3f0,*(undefined8 *)(local_res8 + 0x20),L"#IVB");
    local_58 = (longlong *)FUN_004b9860(&PTR_FUN_0047c498,1,local_3f0,0);
    lVar5 = (**(code **)*local_58)(local_58);
    FUN_00419260(&local_2e8,&DAT_00b026d8,1,lVar5 / 4);
    uVar3 = (**(code **)*local_58)(local_58);
    (**(code **)(*local_58 + 0x18))(local_58,local_2e8,uVar3);
    FUN_00410f20(local_58);
    local_308 = local_2e8;
    if (local_2e8 != 0) {
      local_308 = *(longlong *)(local_2e8 + -8);
    }
    FUN_00419260(local_res8 + 0x30,&DAT_00b01e10,1,(local_308 + -1) / 2);
    FUN_00416ba0(&local_3f8,*(undefined8 *)(local_res8 + 0x20),L"#STRINGS");
    local_58 = (longlong *)FUN_004b9860(&PTR_FUN_0047c498,1,local_3f8,0);
    local_310 = *(longlong *)(local_res8 + 0x30);
    local_318 = local_310;
    if (local_310 != 0) {
      local_318 = *(longlong *)(local_310 + -8);
    }
    local_2ec = 0;
    iVar2 = (int)local_318;
    if (-1 < (int)local_318 + -1) {
      do {
        *(undefined4 *)(*(longlong *)(local_res8 + 0x30) + (longlong)local_2ec * 0x18) =
             *(undefined4 *)(local_2e8 + (longlong)(local_2ec * 2 + 1) * 4);
        local_320 = (ulonglong)*(uint *)(local_2e8 + (longlong)(local_2ec * 2 + 2) * 4);
        (**(code **)(*local_58 + 0x50))(local_58,local_320,0);
        FUN_00414480(&local_20);
        while( true ) {
          lVar5 = FUN_004b6da0(local_58);
          lVar6 = (**(code **)*local_58)(local_58);
          if ((lVar6 <= lVar5) ||
             ((**(code **)(*local_58 + 0x18))(local_58,&local_2ed,1), local_2ed == '\0')) break;
          FUN_00416760(&local_400,local_2ed);
          FUN_00416ad0(&local_20,local_400);
        }
        FUN_00414ad0(*(longlong *)(local_res8 + 0x30) + 8 + (longlong)local_2ec * 0x18,local_20);
        local_2ec = local_2ec + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00410f20(local_58);
  }
  FUN_00416ba0(&local_408,*(undefined8 *)(local_res8 + 0x20),L"#SYSTEM");
  cVar1 = FUN_00440a20(local_408,1);
  if (cVar1 != '\0') {
    FUN_00416ba0(&local_410,*(undefined8 *)(local_res8 + 0x20),L"#SYSTEM");
    local_58 = (longlong *)FUN_004b9860(&PTR_FUN_0047c498,1,local_410,0);
    (**(code **)(*local_58 + 0x48))(local_58,0x52,0);
    FUN_00414480(&local_20);
    while( true ) {
      lVar5 = FUN_004b6da0(local_58);
      lVar6 = (**(code **)*local_58)(local_58);
      if ((lVar6 <= lVar5) ||
         ((**(code **)(*local_58 + 0x18))(local_58,&local_2ed,1), local_2ed == '\0')) break;
      FUN_00416760(&local_418,local_2ed);
      FUN_00416ad0(&local_20,local_418);
    }
    FUN_00414ad0(local_res8 + 0x28,local_20);
    FUN_00410f20(local_58);
  }
  *(undefined1 *)(local_res8 + 0x10) = 0;
  *(undefined1 *)(local_res8 + 0x11) = 0;
  local_38 = FUN_00853840(&PTR_FUN_008521f8,1,0);
  *(undefined4 *)(local_res8 + 0x44) = 0;
  local_458._0_1_ = 0xa4;
  local_458._1_7_ = 0xb042;
  FUN_00416cd0(&local_420,3,*(undefined8 *)(local_res8 + 0x20),&DAT_00b04294);
  iVar2 = FUN_00441230(local_420,0x1ff,local_2e0);
  if (iVar2 == 0) {
    *(undefined1 *)(local_res8 + 0x10) = 1;
    local_2f8 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_00416ba0(&local_428,*(undefined8 *)(local_res8 + 0x20),local_2c8);
    (**(code **)(*local_2f8 + 0xd8))(local_2f8,local_428);
    iVar2 = (**(code **)(*local_2f8 + 0x28))(local_2f8);
    FUN_00419260(local_res8 + 0x48,&DAT_00b01fd8,1,(longlong)(iVar2 / 4));
    (**(code **)(*local_2f8 + 0x38))(local_2f8,&local_20);
    FUN_00410f20(local_2f8);
    while (local_20 != 0) {
      local_458._0_1_ = 1;
      FUN_009dfe20(&local_28,&local_20,L"<object",L"</object>");
      if (local_28 == 0) break;
      iVar2 = FUN_004170c0(L"name=\"SiteType\"",local_28,1);
      if ((iVar2 < 1) && (iVar2 = FUN_004170c0(L"type=\"text/sitemap\"",local_28,1), iVar2 != 0)) {
        local_458._0_1_ = 1;
        FUN_009dfe20(&local_40,&local_28,L"<param",&DAT_00b04374);
        FUN_00b02710(auStack_478,local_40);
        uVar4 = FUN_00414480(&local_30);
        cVar1 = FUN_00854130(local_38,L"name",uVar4);
        if ((cVar1 != '\0') && (iVar2 = FUN_00416db0(local_30,L"Name"), iVar2 == 0)) {
          uVar4 = FUN_00414480(*(longlong *)(local_res8 + 0x48) +
                               (longlong)*(int *)(local_res8 + 0x44) * 0x10);
          cVar1 = FUN_00854130(local_38,L"value",uVar4);
          if ((cVar1 != '\0') &&
             (*(longlong *)
               (*(longlong *)(local_res8 + 0x48) + (longlong)*(int *)(local_res8 + 0x44) * 0x10) !=
              0)) {
            local_328 = *(longlong *)(local_res8 + 0x48);
            local_330 = local_328;
            if (local_328 != 0) {
              local_330 = *(longlong *)(local_328 + -8);
            }
            if (*(int *)(local_res8 + 0x44) == local_330) {
              local_338 = *(longlong *)(local_res8 + 0x48);
              local_340 = local_338;
              if (local_338 != 0) {
                local_340 = *(longlong *)(local_338 + -8);
              }
              FUN_00419260(local_res8 + 0x48,&DAT_00b01fd8,1,local_340 + 100);
            }
            FUN_00419430(*(longlong *)(local_res8 + 0x48) + 8 +
                         (longlong)*(int *)(local_res8 + 0x44) * 0x10,&DAT_00b01f10);
            FUN_00414480(&local_48);
            FUN_00414480(&local_50);
            while (local_40 != 0) {
              local_458._0_1_ = 1;
              FUN_009dfe20(&local_40,&local_28,L"<param",&DAT_00b04374);
              FUN_00b02710(auStack_478,local_40);
              uVar4 = FUN_00414480(&local_30);
              cVar1 = FUN_00854130(local_38,L"name",uVar4);
              if (cVar1 != '\0') {
                iVar2 = FUN_00416db0(local_30,L"Name");
                if (iVar2 == 0) {
                  FUN_00853280(local_38,&local_48,L"value");
                }
                iVar2 = FUN_00416db0(local_30,L"Local");
                if (iVar2 == 0) {
                  FUN_00853280(local_38,&local_50,L"value");
                }
                if ((local_48 != 0) && (local_50 != 0)) {
                  local_348 = *(longlong *)
                               (*(longlong *)(local_res8 + 0x48) + 8 +
                               (longlong)*(int *)(local_res8 + 0x44) * 0x10);
                  local_350 = local_348;
                  if (local_348 != 0) {
                    local_350 = *(longlong *)(local_348 + -8);
                  }
                  local_2ec = (int)local_350;
                  FUN_00419260(*(longlong *)(local_res8 + 0x48) + 8 +
                               (longlong)*(int *)(local_res8 + 0x44) * 0x10,&DAT_00b01f10,1,
                               (longlong)((int)local_350 + 1));
                  lVar5 = (longlong)local_2ec;
                  FUN_00414ad0(*(longlong *)
                                (*(longlong *)(local_res8 + 0x48) + 8 +
                                (longlong)*(int *)(local_res8 + 0x44) * 0x10) + lVar5 * 0x10,
                               local_48);
                  FUN_00414ad0(*(longlong *)
                                (*(longlong *)(local_res8 + 0x48) + 8 +
                                (longlong)*(int *)(local_res8 + 0x44) * 0x10) + 8 + lVar5 * 0x10,
                               local_50);
                  FUN_00414480(&local_48);
                  FUN_00414480(&local_50);
                }
              }
            }
            local_358 = *(longlong *)
                         (*(longlong *)(local_res8 + 0x48) + 8 +
                         (longlong)*(int *)(local_res8 + 0x44) * 0x10);
            local_360 = local_358;
            if (local_358 != 0) {
              local_360 = *(longlong *)(local_358 + -8);
            }
            if (0 < local_360) {
              *(int *)(local_res8 + 0x44) = *(int *)(local_res8 + 0x44) + 1;
            }
          }
        }
      }
    }
  }
  FUN_004412c0(local_2e0);
  local_458 = L".hhc";
  FUN_00416cd0(&local_430,3,*(undefined8 *)(local_res8 + 0x20),&DAT_00b04294);
  iVar2 = FUN_00441230(local_430,0x1ff,local_2e0);
  if (iVar2 == 0) {
    *(undefined1 *)(local_res8 + 0x11) = 1;
    local_2f8 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_00416ba0(&local_438,*(undefined8 *)(local_res8 + 0x20),local_2c8);
    (**(code **)(*local_2f8 + 0xd8))(local_2f8,local_438);
    (**(code **)(*local_2f8 + 0x38))(local_2f8,&local_20);
    FUN_00410f20(local_2f8);
    FUN_009dff80(&local_440,&local_20,L"<ul>",1);
    *(undefined4 *)(local_res8 + 0x40) = 0;
    FUN_00b02860(auStack_478,local_res8 + 0x50,1);
  }
  FUN_004412c0(local_2e0);
  FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0);
  FUN_00414560(&local_440,0x10);
  FUN_00414560(&local_3a0,6);
  FUN_00419430(&local_2e8,&DAT_00b026d8);
  FUN_00417740(local_2e0,&DAT_00432b90);
  FUN_00414560(&local_50,3);
  FUN_00414560(&local_30,3);
  FUN_00414480(local_res18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}


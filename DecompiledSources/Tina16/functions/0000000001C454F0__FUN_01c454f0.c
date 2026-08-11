/* Ghidra address: 01c454f0 */
/* Ghidra symbol: FUN_01c454f0 */


void FUN_01c454f0(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_618 [32];
  longlong *local_5f8;
  ulonglong local_5f0;
  int local_5e4;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  wchar_t *local_588;
  undefined8 local_580;
  undefined1 local_578;
  undefined8 local_570;
  undefined1 local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined1 *local_4e0;
  undefined8 local_4d8;
  bool local_4ca;
  bool local_4c9;
  wchar_t *local_4c8;
  undefined4 local_4bc;
  int local_4b4;
  int local_4b0;
  bool local_4a9;
  longlong *local_4a8;
  longlong *local_4a0;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_4e0 = auStack_618;
  local_5d8 = 0;
  local_5e0 = 0;
  local_5d0 = 0;
  local_5c0 = 0;
  local_5c8 = 0;
  local_5b0 = 0;
  local_5b8 = 0;
  local_5a8 = 0;
  local_590 = 0;
  local_598 = 0;
  local_5a0 = 0;
  local_588 = (wchar_t *)0x0;
  local_550 = 0;
  local_558 = 0;
  local_560 = 0;
  local_548 = 0;
  local_540 = 0;
  local_538 = 0;
  local_528 = 0;
  local_530 = 0;
  local_520 = 0;
  local_518 = 0;
  local_508 = 0;
  local_510 = 0;
  local_500 = 0;
  local_4f8 = 0;
  local_4e8 = 0;
  local_4f0 = 0;
  local_60[0] = 0;
  local_68 = 0;
  local_70 = 0;
  local_48 = 0;
  local_50 = 0;
  local_78 = 0;
  local_80 = 0;
  local_4a0 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_4a8 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_40 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0));
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x298))(*(longlong **)(param_1 + 0x6c0));
  if (iVar3 < iVar4) {
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0))
    ;
    FUN_004b5390(*(undefined8 *)(param_1 + 0x6e0),&local_80,uVar5);
    local_4b0 = FUN_004170c0(&DAT_01c462e0,local_80,1);
    FUN_00416dc0(local_60,local_80,1,local_4b0 + -1);
    FUN_00416e20(&local_80,1,local_4b0);
    local_4b0 = FUN_004170c0(&DAT_01c462e0,local_80,1);
    FUN_00416dc0(&local_68,local_80,1,local_4b0 + -1);
    FUN_00416e20(&local_80,1,local_4b0);
    local_4bc = 0;
    if (local_80 != 0) {
      local_4bc = *(undefined4 *)(local_80 + -4);
    }
    FUN_00416dc0(&local_70,local_80,1,local_4bc);
  }
  local_5f8 = local_4a0;
  local_5f0 = local_5f0 & 0xffffffffffffff00;
  FUN_01c46ed0(param_1,local_70,L".ddb;.fpl;.3dl;.tcr",L"<CATALOGDIR>");
  FUN_00416ba0(&local_4e8,local_70,*(undefined8 *)PTR_DAT_02004c08);
  FUN_00416ba0(&local_4f0,L"<CATALOGDIR>",*(undefined8 *)PTR_DAT_02004c08);
  local_5f8 = local_4a0;
  local_5f0 = local_5f0 & 0xffffffffffffff00;
  FUN_01c46ed0(param_1,local_4e8,L".pdb",local_4f0);
  FUN_00416ba0(&local_4f8,local_70,L"\\SPICELIB");
  local_5f8 = local_4a0;
  local_5f0 = local_5f0 & 0xffffffffffffff00;
  FUN_01c46ed0(param_1,local_4f8,L".lib;.tld",L"<CATALOGDIR>\\SPICELIB");
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x260))(*(longlong **)(param_1 + 0x6b8));
  if (cVar2 != '\0') {
    FUN_00416ba0(&local_500,local_68,L"\\User Examples");
    local_5f8 = local_4a0;
    local_5f0 = CONCAT71(local_5f0._1_7_,1);
    FUN_01c46ed0(param_1,local_500,L".tsc",L"<SETTINGSDIR>\\User Examples");
  }
  local_5f8 = local_4a8;
  local_5f0 = local_5f0 & 0xffffffffffffff00;
  FUN_01c46ed0(param_1,*(undefined8 *)PTR_DAT_02004438,L".ddb;.fpl;.3dl;.tcr",L"<CATALOGDIR>");
  FUN_00416ba0(&local_508,*(undefined8 *)PTR_DAT_02004438,*(undefined8 *)PTR_DAT_02004c08);
  FUN_00416ba0(&local_510,L"<CATALOGDIR>",*(undefined8 *)PTR_DAT_02004c08);
  local_5f8 = local_4a8;
  local_5f0 = local_5f0 & 0xffffffffffffff00;
  FUN_01c46ed0(param_1,local_508,L".pdb",local_510);
  FUN_00416ba0(&local_518,*(undefined8 *)PTR_DAT_02004438,L"\\SPICELIB");
  local_5f8 = local_4a8;
  local_5f0 = local_5f0 & 0xffffffffffffff00;
  FUN_01c46ed0(param_1,local_518,L".lib;.tld",L"<CATALOGDIR>\\SPICELIB");
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x260))(*(longlong **)(param_1 + 0x6b8));
  if (cVar2 != '\0') {
    FUN_00416ba0(&local_520,*(undefined8 *)PTR_DAT_02005010,L"\\User Examples");
    local_5f8 = local_4a8;
    local_5f0 = CONCAT71(local_5f0._1_7_,1);
    FUN_01c46ed0(param_1,local_520,L".tsc",L"<SETTINGSDIR>\\User Examples");
  }
  uVar6 = FUN_007fc180(&PTR_FUN_00c53a28,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_02004208 = uVar6;
  uVar6 = FUN_00b89270();
  FUN_0041ddd0(&local_530,&PTR_PTR_01c442c0);
  FUN_00b8e650(uVar6,&local_528,L"d.SelectTinaFolder_sCopyInProgress",local_530);
  FUN_00c54370(*(undefined8 *)PTR_DAT_02004208,local_528);
  *(undefined1 *)(*(longlong *)PTR_DAT_02004208 + 0x6c1) = 0;
  FUN_008059a0(*(undefined8 *)PTR_DAT_02004208);
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  local_4a9 = false;
  iVar3 = (**(code **)(*local_4a0 + 0x28))();
  local_5e4 = iVar3 + -1;
  local_4b4 = 0;
  if (-1 < local_5e4) {
    do {
      local_5e4 = iVar3;
      (**(code **)(*local_4a0 + 0x18))(local_4a0,&local_538,local_4b4);
      iVar3 = (**(code **)(*local_4a8 + 0xb0))(local_4a8,local_538);
      if (iVar3 == -1) {
        (**(code **)(*local_4a0 + 0x18))(local_4a0,&local_540,local_4b4);
        local_5f8 = (longlong *)local_68;
        local_5f0 = local_70;
        FUN_01c470b0(param_1,&local_48,local_540,local_60[0]);
        (**(code **)(*local_4a0 + 0x18))(local_4a0,&local_548,local_4b4);
        local_5f8 = *(longlong **)PTR_DAT_02005010;
        local_5f0 = *(ulonglong *)PTR_DAT_02004438;
        FUN_01c470b0(param_1,&local_50,local_548,*(undefined8 *)PTR_DAT_020049a0);
        FUN_00441640(&local_78,local_50);
        cVar2 = FUN_00b96de0(local_78);
        if (cVar2 == '\0') {
          FUN_00b96df0(local_78);
        }
        local_38 = (undefined8 *)FUN_004b9860(&PTR_FUN_0047c498,1,local_48,0x20);
        local_28 = FUN_004b9860(&PTR_FUN_0047c498,1,local_50,0xff30);
        uVar6 = (**(code **)*local_38)(local_38);
        FUN_004b8ba0(local_28,local_38,uVar6);
        uVar6 = FUN_00b89270();
        FUN_0041ddd0(&local_560,&PTR_PTR_01c442a0);
        FUN_00b8e650(uVar6,&local_558,L"d.SelectTinaFolder_sFileCopied",local_560);
        local_580 = local_48;
        local_578 = 0x11;
        local_570 = local_50;
        local_568 = 0x11;
        FUN_00442f70(&local_550,local_558,&local_580,1);
        (**(code **)(*local_40 + 0x78))(local_40,local_550);
        if (local_4a9 == false) {
          FUN_00441a10(&local_588,local_50);
          local_4c8 = local_588;
          if (local_588 == L".LIB") {
            local_4c9 = true;
          }
          else if (local_588 == (wchar_t *)0x0) {
            local_4c9 = false;
          }
          else {
            iVar3 = FUN_0043e420(local_588,L".LIB");
            local_4c9 = iVar3 == 0;
          }
          local_4ca = local_4c9;
        }
        else {
          local_4ca = true;
        }
        uVar6 = local_28;
        local_4a9 = local_4ca;
        local_20 = local_28;
        local_28 = 0;
        FUN_00410f20(uVar6);
        puVar1 = local_38;
        local_30 = local_38;
        local_38 = (undefined8 *)0x0;
        FUN_00410f20(puVar1);
      }
      local_4b4 = local_4b4 + 1;
      local_5e4 = local_5e4 + -1;
      iVar3 = local_5e4;
    } while (local_5e4 != 0);
  }
  FUN_00410f20(*(undefined8 *)PTR_DAT_02004208);
  *(undefined8 *)PTR_DAT_02004208 = 0;
  iVar3 = (**(code **)(*local_40 + 0x28))(local_40);
  if (iVar3 < 1) {
    uVar6 = FUN_00b89270();
    FUN_0041ddd0(&local_5e0,&PTR_PTR_01c442d0);
    FUN_00b8e650(uVar6,&local_5d8,L"d.SelectTinaFolder_sNothingToCopy",local_5e0);
    local_4d8 = local_5d8;
    FUN_0072d730(local_5d8,0xffffffff,0xffffffff);
  }
  else {
    if (local_4a9 != false) {
      FUN_00f06730(L"ForceReBuildLibrary",1);
    }
    FUN_00416ba0(&local_5a8,*(undefined8 *)PTR_DAT_020030c8,L"\\Library Import.log");
    (**(code **)(*local_40 + 0x100))(local_40,local_5a8);
    uVar6 = FUN_00b89270();
    FUN_0041ddd0(&local_5b8,&PTR_PTR_01c442e0);
    FUN_00b8e650(uVar6,&local_5b0,L"d.SelectTinaFolder_sSuccess",local_5b8);
    FUN_0072d440(local_5b0,2,4,0);
    uVar6 = FUN_00b89270();
    FUN_0041ddd0(&local_5c8,&PTR_PTR_01c442f0);
    FUN_00b8e650(uVar6,&local_5c0,L"d.SelectTinaFolder_sOpenLog",local_5c8);
    iVar3 = FUN_0072d440(local_5c0,3,3,0);
    if (iVar3 == 6) {
      FUN_00416ba0(&local_5d0,*(undefined8 *)PTR_DAT_020030c8,L"\\Library Import.log");
      uVar6 = FUN_00416740(local_5d0);
      local_5f8 = (longlong *)0x0;
      local_5f0 = CONCAT44(local_5f0._4_4_,1);
      thunk_FUN_0419adcc(0,L"open",L"notepad.exe",uVar6);
    }
  }
  FUN_00410f20(local_4a0);
  FUN_00410f20(local_4a8);
  FUN_00410f20(local_40);
  FUN_00414560(&local_5e0,0xc);
  FUN_00414560(&local_560,0x10);
  FUN_00414560(&local_80,5);
  FUN_00414560(&local_50,2);
  return;
}


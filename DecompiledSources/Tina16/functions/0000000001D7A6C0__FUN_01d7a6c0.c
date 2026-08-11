/* Ghidra address: 01d7a6c0 */
/* Ghidra symbol: FUN_01d7a6c0 */


void FUN_01d7a6c0(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  char local_4fd;
  char local_4fc;
  char local_4fb;
  char local_4fa;
  char local_4f9;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460 [2];
  undefined1 local_44c [522];
  undefined1 local_242 [530];
  
  local_4f0 = 0;
  local_4e8 = 0;
  local_4e0 = 0;
  local_4d8 = 0;
  local_4d0 = 0;
  local_4c8 = 0;
  local_4c0 = 0;
  local_4b8 = 0;
  local_4b0 = 0;
  local_4a8 = 0;
  local_4a0 = 0;
  local_498 = 0;
  local_490 = 0;
  local_488 = 0;
  local_480 = 0;
  local_478 = 0;
  local_470 = 0;
  local_468 = 0;
  local_460[0] = 0;
  cVar3 = FUN_01b1fd70();
  if (cVar3 == '\0') {
    bVar2 = false;
    local_4fd = '\x01';
    local_4fc = '\x01';
    local_4fb = '\x01';
    local_4fa = '\x01';
    local_4f9 = '\x01';
    lVar8 = 0;
    lVar9 = 0;
    plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    uVar7 = FUN_007fc180(&PTR_FUN_00c53a28,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_02004208 = uVar7;
    *(undefined1 *)(*(longlong *)PTR_DAT_02004208 + 0x6c1) = 0;
    FUN_00416ba0(local_460,*(undefined8 *)PTR_DAT_020049a0,L"\\SPICELIB\\");
    uVar7 = FUN_0170a480(&DAT_017094c8,1,local_460[0]);
    FUN_00416ba0(&local_468,*(undefined8 *)PTR_DAT_020049a0,L"\\SPICELIB\\");
    (**(code **)(*plVar6 + 0x78))(plVar6,local_468);
    FUN_00416ba0(&local_470,*(undefined8 *)PTR_DAT_02001340,L"\\SPICELIB\\");
    iVar5 = (**(code **)(*plVar6 + 0xb0))(plVar6,local_470);
    if (iVar5 == -1) {
      FUN_00416ba0(&local_478,*(undefined8 *)PTR_DAT_02001340,L"\\SPICELIB\\");
      lVar8 = FUN_0170a480(&DAT_017094c8,1,local_478);
      FUN_00416ba0(&local_480,*(undefined8 *)PTR_DAT_02001340,L"\\SPICELIB\\");
      (**(code **)(*plVar6 + 0x78))(plVar6,local_480);
    }
    FUN_00416ba0(&local_488,*(undefined8 *)PTR_DAT_02004438,L"\\SPICELIB\\");
    iVar5 = (**(code **)(*plVar6 + 0xb0))(plVar6,local_488);
    if (iVar5 == -1) {
      FUN_00416ba0(&local_490,*(undefined8 *)PTR_DAT_02004438,L"\\SPICELIB\\");
      lVar9 = FUN_0170a480(&DAT_017094c8,1,local_490);
      FUN_00416ba0(&local_498,*(undefined8 *)PTR_DAT_02004438,L"\\SPICELIB\\");
      (**(code **)(*plVar6 + 0x78))(plVar6,local_498);
    }
    FUN_00410f20(plVar6);
    FUN_00416cd0(&local_4a0,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01d7adcc,L"TINA.INI");
    plVar6 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_4a0);
    cVar3 = (**(code **)(*plVar6 + 0x30))(plVar6,L"Analysis Setup",L"ForceReBuildLibrary",0);
    if (cVar3 != '\0') {
      (**(code **)(*plVar6 + 0x38))(plVar6,L"Analysis Setup",L"ForceReBuildLibrary",0);
    }
    FUN_00410f20(plVar6);
    cVar4 = FUN_0170ad50(uVar7,*(undefined8 *)PTR_DAT_020049a0);
    if ((cVar4 == '\0') || (cVar3 != '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (lVar8 != 0) {
      local_4fa = FUN_0170ad50(lVar8,*(undefined8 *)PTR_DAT_02001340);
    }
    if (lVar9 != 0) {
      local_4f9 = FUN_0170ad50(lVar9,*(undefined8 *)PTR_DAT_02004438);
    }
    if (((!bVar1) || (local_4fa == '\0')) || (local_4f9 == '\0')) {
      uVar10 = FUN_00b89270();
      FUN_00b8e520(uVar10,&local_4a8,0x9e);
      iVar5 = FUN_0072d440(local_4a8,0,0x43,0);
      if (iVar5 == 5) {
        bVar2 = true;
      }
      else if (iVar5 == 6) {
        FUN_008059a0(*(undefined8 *)PTR_DAT_02004208);
        if (!bVar1) {
          local_4fd = FUN_0170a6e0(uVar7);
        }
        if (local_4fa == '\0') {
          local_4fc = FUN_0170a6e0(lVar8);
        }
        if (local_4f9 == '\0') {
          local_4fb = FUN_0170a6e0(lVar9);
        }
      }
      else if (iVar5 == 7) {
        FUN_00414140(1);
      }
    }
    FUN_00410f20(uVar7);
    FUN_00410f20(lVar8);
    FUN_00410f20(lVar9);
    if (!bVar2) {
      if (local_4fd == '\0') {
        FUN_00416ba0(&local_4b0,*(undefined8 *)PTR_DAT_020049a0,L"\\SPICELIB\\SPMACROS.IND");
        FUN_00442620(local_242,local_4b0);
        FUN_00416ba0(&local_4b8,*(undefined8 *)PTR_DAT_020049a0,L"\\SPMACROS.IND");
        FUN_00442620(local_44c,local_4b8);
        FUN_00427810(local_242,local_44c,0);
        FUN_00416ba0(&local_4c0,*(undefined8 *)PTR_DAT_020049a0,L"\\SPICELIB\\SPMACROS.IND");
        FUN_004412f0(local_4c0);
      }
      if (local_4fc == '\0') {
        FUN_00416ba0(&local_4c8,*(undefined8 *)PTR_DAT_02001340,L"\\SPICELIB\\SPMACROS.IND");
        FUN_00442620(local_242,local_4c8);
        FUN_00416ba0(&local_4d0,*(undefined8 *)PTR_DAT_02001340,L"\\SPMACROS.IND");
        FUN_00442620(local_44c,local_4d0);
        FUN_00427810(local_242,local_44c,0);
        FUN_00416ba0(&local_4d8,*(undefined8 *)PTR_DAT_02001340,L"\\SPICELIB\\SPMACROS.IND");
        FUN_004412f0(local_4d8);
      }
      if (local_4fb == '\0') {
        FUN_00416ba0(&local_4e0,*(undefined8 *)PTR_DAT_02004438,L"\\SPICELIB\\SPMACROS.IND");
        FUN_00442620(local_242,local_4e0);
        FUN_00416ba0(&local_4e8,*(undefined8 *)PTR_DAT_02004438,L"\\SPMACROS.IND");
        FUN_00442620(local_44c,local_4e8);
        FUN_00427810(local_242,local_44c,0);
        FUN_00416ba0(&local_4f0,*(undefined8 *)PTR_DAT_02004438,L"\\SPICELIB\\SPMACROS.IND");
        FUN_004412f0(local_4f0);
      }
    }
    FUN_00410f20(*(undefined8 *)PTR_DAT_02004208);
    *(undefined8 *)PTR_DAT_02004208 = 0;
  }
  FUN_00414560(&local_4f0,0x13);
  return;
}


/* Ghidra address: 01c44300 */
/* Ghidra symbol: FUN_01c44300 */


void FUN_01c44300(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  bool bVar11;
  int local_b4;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  wchar_t *local_38;
  undefined8 local_30;
  
  local_a0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70[0] = 0;
  local_30 = 0;
  local_38 = (wchar_t *)0x0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  lVar6 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong *)(param_1 + 0x6e0) = lVar6;
  *(undefined2 *)(lVar6 + 0x30) = 0x2a;
  plVar7 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  uVar8 = FUN_005ea470(&DAT_005e7878,1,0x20019);
  FUN_005ea670(uVar8,0xffffffff80000002);
  cVar2 = FUN_005eaa60(uVar8,L"SOFTWARE\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Uninstall"
                      );
  if (cVar2 != '\0') {
    FUN_005eb0d0(uVar8,plVar7);
    FUN_005ea630(uVar8);
    iVar3 = (**(code **)(*plVar7 + 0x28))();
    local_b4 = 0;
    if (-1 < iVar3 + -1) {
      do {
        (**(code **)(*plVar7 + 0x18))(plVar7,&local_30,local_b4);
        FUN_00416ba0(local_70,
                     L"SOFTWARE\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\",
                     local_30);
        cVar2 = FUN_005eaa60(uVar8,local_70[0]);
        if (cVar2 != '\0') {
          FUN_005eb6d0(uVar8,&local_38,L"ProductGuid");
          bVar11 = false;
          if (local_38 == L"{3D7D43D0-A5EE-4972-92DB-CD32A40A4976}") {
            bVar10 = true;
          }
          else if (local_38 == (wchar_t *)0x0) {
            bVar10 = false;
          }
          else {
            iVar4 = FUN_0043e420(local_38,L"{3D7D43D0-A5EE-4972-92DB-CD32A40A4976}");
            bVar10 = iVar4 == 0;
          }
          if (bVar10) {
            bVar10 = true;
          }
          else if (local_38 == L"{C9AF7B6C-A0FA-46D8-85CB-A0B418773659}") {
            bVar10 = true;
          }
          else if (local_38 == (wchar_t *)0x0) {
            bVar10 = false;
          }
          else {
            iVar4 = FUN_0043e420(local_38,L"{C9AF7B6C-A0FA-46D8-85CB-A0B418773659}");
            bVar10 = iVar4 == 0;
          }
          if (bVar10) {
            bVar10 = true;
          }
          else if (local_38 == L"{43FA4B8E-8906-43CC-95C7-1D3F7CE27F9E}") {
            bVar10 = true;
          }
          else if (local_38 == (wchar_t *)0x0) {
            bVar10 = false;
          }
          else {
            iVar4 = FUN_0043e420(local_38,L"{43FA4B8E-8906-43CC-95C7-1D3F7CE27F9E}");
            bVar10 = iVar4 == 0;
          }
          if (bVar10) {
            bVar10 = true;
          }
          else if (local_38 == L"{06E2580F-7A30-4FF6-9ACF-A9876F10D3F8}") {
            bVar10 = true;
          }
          else if (local_38 == (wchar_t *)0x0) {
            bVar10 = false;
          }
          else {
            iVar4 = FUN_0043e420(local_38,L"{06E2580F-7A30-4FF6-9ACF-A9876F10D3F8}");
            bVar10 = iVar4 == 0;
          }
          if (bVar10) {
            bVar10 = true;
          }
          else if (local_38 == L"{96EECE06-DFF8-40BF-9EE3-99F445EB3D0A}") {
            bVar10 = true;
          }
          else if (local_38 == (wchar_t *)0x0) {
            bVar10 = false;
          }
          else {
            iVar4 = FUN_0043e420(local_38,L"{96EECE06-DFF8-40BF-9EE3-99F445EB3D0A}");
            bVar10 = iVar4 == 0;
          }
          if (bVar10) {
            bVar10 = true;
          }
          else if (local_38 == L"{8BCACB8B-E2DA-4870-AEEC-300A52E50C65}") {
            bVar10 = true;
          }
          else if (local_38 == (wchar_t *)0x0) {
            bVar10 = false;
          }
          else {
            iVar4 = FUN_0043e420(local_38,L"{8BCACB8B-E2DA-4870-AEEC-300A52E50C65}");
            bVar10 = iVar4 == 0;
          }
          if (bVar10) {
            bVar10 = true;
          }
          else if (local_38 == L"{B1EC34D8-D2D6-4846-A58D-ED9F451527B4}") {
            bVar10 = true;
          }
          else if (local_38 == (wchar_t *)0x0) {
            bVar10 = false;
          }
          else {
            iVar4 = FUN_0043e420(local_38,L"{B1EC34D8-D2D6-4846-A58D-ED9F451527B4}");
            bVar10 = iVar4 == 0;
          }
          if (bVar10) {
            FUN_005eb6d0(uVar8,&local_40,L"DisplayName");
            FUN_005eb6d0(uVar8,&local_48,L"InstallLocation");
            FUN_00416ba0(&local_78,local_48,L"\\setup.ini");
            plVar9 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_78);
            (**(code **)(*plVar9 + 0x10))(plVar9,&local_60,L"Setup Settings",L"Program Folder",0);
            FUN_00410f20(plVar9);
            if (*(longlong *)PTR_DAT_020049a0 == local_48) {
              bVar11 = true;
            }
            else if ((*(longlong *)PTR_DAT_020049a0 == 0) || (local_48 == 0)) {
              bVar11 = false;
            }
            else {
              iVar4 = FUN_0043e420(*(undefined8 *)PTR_DAT_020049a0,local_48);
              bVar11 = iVar4 == 0;
            }
            bVar11 = !bVar11;
            if (bVar11) {
              FUN_00416cd0(&local_80,3,local_40,&DAT_01c44f00,local_48);
              (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x78))
                        (*(longlong **)(param_1 + 0x6e0),local_80);
              plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x6c0) + 0x4a0);
              (**(code **)(*plVar9 + 0x78))(plVar9,local_40);
            }
          }
          FUN_005ea630(uVar8);
          FUN_005ea670(uVar8,0xffffffff80000001);
          if (bVar11) {
            FUN_00416ba0(&local_88,L"\\SOFTWARE\\DesignSoft\\",local_60);
            cVar2 = FUN_005eaa60(uVar8,local_88);
            if (cVar2 != '\0') {
              FUN_005eb6d0(uVar8,&local_50,L"SettingsDir");
              FUN_005eb6d0(uVar8,&local_58,L"CatalogDir");
              plVar9 = *(longlong **)(param_1 + 0x6e0);
              iVar4 = (**(code **)(*plVar9 + 0x28))(plVar9);
              plVar1 = *(longlong **)(param_1 + 0x6e0);
              iVar5 = (**(code **)(*plVar1 + 0x28))(plVar1);
              (**(code **)(*plVar1 + 0x18))(plVar1,&local_98,iVar5 + -1);
              FUN_00416cd0(&local_90,5,local_98,&DAT_01c44f90,local_50,&DAT_01c44f90,local_58);
              (**(code **)(*plVar9 + 0x40))(plVar9,iVar4 + -1,local_90);
              FUN_005ea630(uVar8);
            }
          }
          FUN_005ea670(uVar8,0xffffffff80000002);
        }
        local_b4 = local_b4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_00410f20(uVar8);
  FUN_00410f20(plVar7);
  uVar8 = FUN_00b89270();
  FUN_0041ddd0(&local_a8,&PTR_PTR_01c44290);
  FUN_00b8e650(uVar8,&local_a0,L"d.SelectTinaFolder_sBrowseTina",local_a8);
  plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x6c0) + 0x4a0);
  (**(code **)(*plVar7 + 0x78))(plVar7,local_a0);
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x78))(*(longlong **)(param_1 + 0x6e0),0);
  (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x268))(*(longlong **)(param_1 + 0x6c0),0);
  FUN_00414560(&local_a8,8);
  FUN_00414560(&local_60,7);
  return;
}


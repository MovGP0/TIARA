/* Ghidra address: 01ca2170 */
/* Ghidra symbol: FUN_01ca2170 */


void FUN_01ca2170(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  wchar_t *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_b8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_78 = 0;
  local_a0 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = (wchar_t *)0x0;
  local_48 = 0;
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00416ba0(&local_50,*(undefined8 *)PTR_DAT_020030c8,&DAT_01ca2860);
  FUN_00416ba0(&local_58,*(undefined8 *)PTR_DAT_02005010,L"\\openfromweb.ini");
  iVar1 = FUN_01c1de60(0,local_50,local_58,plVar3);
  if (iVar1 == 1) {
    FUN_00414480(&local_48);
    iVar1 = (**(code **)(*plVar3 + 0x28))();
    iVar6 = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_30,iVar6);
        FUN_00441920(&local_38,local_30);
        FUN_00450070(&local_60,local_38,&DAT_01ca28a0,&DAT_01ca28b4,1);
        FUN_00414b50(&local_38,local_60);
        FUN_00441a10(&local_40,local_30);
        if (local_40 == L".TSC") {
          bVar7 = true;
        }
        else if (local_40 == (wchar_t *)0x0) {
          bVar7 = false;
        }
        else {
          iVar2 = FUN_0043e420(local_40,L".TSC");
          bVar7 = iVar2 == 0;
        }
        if (bVar7) {
          bVar7 = true;
        }
        else if (local_40 == L".SCH") {
          bVar7 = true;
        }
        else if (local_40 == (wchar_t *)0x0) {
          bVar7 = false;
        }
        else {
          iVar2 = FUN_0043e420(local_40,L".SCH");
          bVar7 = iVar2 == 0;
        }
        if (bVar7) {
          FUN_01c681b0(param_1,local_30,0,0,0,0,1);
          FUN_00416cd0(&local_68,3,*(undefined8 *)PTR_DAT_02005010,L"\\User Examples\\",local_38);
          FUN_014a1260(local_68,0);
          uVar4 = FUN_00416740(local_30);
          thunk_FUN_0418581b(uVar4);
          FUN_0199e310(*(undefined8 *)(param_1 + 0x27a8),0,1,0);
        }
        else {
          if (local_40 == L".TSM") {
            bVar7 = true;
          }
          else if (local_40 == (wchar_t *)0x0) {
            bVar7 = false;
          }
          else {
            iVar2 = FUN_0043e420(local_40,L".TSM");
            bVar7 = iVar2 == 0;
          }
          if (bVar7) {
            uVar4 = FUN_00416740(local_30);
            FUN_00416cd0(&local_70,3,*(undefined8 *)PTR_DAT_02005010,L"\\Macrolib\\",local_38);
            uVar5 = FUN_00416740(local_70);
            iVar2 = thunk_FUN_03ba0c85(uVar4,uVar5,3);
            if (iVar2 != 0) {
              local_98 = local_38;
              local_90 = 0x11;
              FUN_00416ba0(&local_a0,*(undefined8 *)PTR_DAT_02005010,L"\\Macrolib");
              local_88 = local_a0;
              local_80 = 0x11;
              FUN_00442f70(&local_78,L"%s copied into: %s\r\n",&local_98,1);
              FUN_00416ad0(&local_48,local_78);
            }
          }
          else {
            if (local_40 == L".CIR") {
              bVar7 = true;
            }
            else if (local_40 == (wchar_t *)0x0) {
              bVar7 = false;
            }
            else {
              iVar2 = FUN_0043e420(local_40,L".CIR");
              bVar7 = iVar2 == 0;
            }
            if (bVar7) {
              FUN_01c806a0(param_1,param_2);
              FUN_00724270(*(undefined8 *)(param_1 + 0x18f0),&local_a8);
              FUN_01530bb0(*(undefined8 *)PTR_DAT_020023c0,local_a8);
            }
            else {
              if (local_40 == L".LIB") {
                bVar7 = true;
              }
              else if (local_40 == (wchar_t *)0x0) {
                bVar7 = false;
              }
              else {
                iVar2 = FUN_0043e420(local_40,L".LIB");
                bVar7 = iVar2 == 0;
              }
              if (bVar7) {
                bVar7 = true;
              }
              else if (local_40 == L".TLD") {
                bVar7 = true;
              }
              else if (local_40 == (wchar_t *)0x0) {
                bVar7 = false;
              }
              else {
                iVar2 = FUN_0043e420(local_40,L".TLD");
                bVar7 = iVar2 == 0;
              }
              if (bVar7) {
                uVar4 = FUN_00416740(local_30);
                FUN_00416cd0(&local_b0,3,*(undefined8 *)PTR_DAT_02004438,L"\\Spicelib\\",local_38);
                uVar5 = FUN_00416740(local_b0);
                iVar2 = thunk_FUN_03ba0c85(uVar4,uVar5,3);
                if (iVar2 != 0) {
                  local_98 = local_38;
                  local_90 = 0x11;
                  FUN_00416ba0(&local_c0,*(undefined8 *)PTR_DAT_02004438,L"\\Spicelib");
                  local_88 = local_c0;
                  local_80 = 0x11;
                  FUN_00442f70(&local_b8,L"%s copied into: %s\r\n",&local_98,1);
                  FUN_00416ad0(&local_48,local_b8);
                }
              }
              else {
                uVar4 = FUN_00416740(local_30);
                thunk_FUN_0418581b(uVar4);
              }
            }
          }
        }
        iVar6 = iVar6 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    if (local_48 != 0) {
      FUN_01542950(local_48);
    }
  }
  FUN_00410f20(plVar3);
  FUN_00414560(&local_c0,3);
  FUN_00414480(&local_a8);
  FUN_00414480(&local_a0);
  FUN_00414560(&local_78,10);
  return;
}


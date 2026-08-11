/* Ghidra address: 01c8d9a0 */
/* Ghidra symbol: FUN_01c8d9a0 */


void FUN_01c8d9a0(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_8d8 [32];
  undefined8 local_8b8;
  undefined8 local_8b0;
  undefined1 local_8a8;
  longlong *local_898;
  undefined1 *local_890;
  undefined8 local_888;
  undefined8 local_880;
  undefined8 local_878;
  longlong local_870;
  wchar_t *local_868;
  undefined8 local_860;
  undefined8 local_858;
  undefined8 local_850;
  undefined4 local_848;
  undefined4 local_844;
  undefined1 local_83e [2046];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_888 = 0;
  local_880 = 0;
  local_878 = 0;
  local_870 = 0;
  local_868 = (wchar_t *)0x0;
  local_860 = 0;
  local_858 = 0;
  local_850 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_898 = param_2;
  local_890 = param_3;
  if (((int)param_2[1] != 0x8d2) || (param_2[3] != 0xf1206)) {
    iVar3 = (int)param_2[1];
    if ((iVar3 == 0x8d6) && (param_2[3] == 0xf1206)) {
      if (*PTR_DAT_020052b8 == '\0') {
        FUN_01c8e3e0(param_1,0);
      }
      else {
        FUN_013a54d0(*(undefined8 *)PTR_DAT_020032b8);
      }
    }
    else if (iVar3 == 0x8d3) {
      thunk_FUN_03cc0d62(&local_848);
      FUN_013a5020(*(undefined8 *)PTR_DAT_020032b8,1,local_848,local_844);
    }
    else if (iVar3 == 0x8d4) {
      thunk_FUN_03cc0d62(&local_848);
      FUN_013a5020(*(undefined8 *)PTR_DAT_020032b8,2,local_848,local_844);
    }
    else if (iVar3 == 0x8d5) {
      thunk_FUN_03cc0d62(&local_848);
      FUN_013a5020(*(undefined8 *)PTR_DAT_020032b8,0,local_848,local_844);
    }
    else if (((int)param_2[1] == 0x432) && (param_2[3] == 0xfefe)) {
      *param_3 = 1;
      bVar7 = false;
      thunk_FUN_041ada2f((short)param_2[2],local_83e,0x7fe);
      FUN_00442b00(&local_28,local_83e);
      FUN_00415dd0(&local_850,local_28,0);
      FUN_017f5440(&local_30,local_850);
      FUN_01350dd0(&local_38,&local_30);
      iVar3 = FUN_00415a60(local_38,"SelectPart");
      if (iVar3 == 0) {
        FUN_01350dd0(&local_40,&local_30);
        FUN_00416880(&local_858,local_40);
        lVar6 = FUN_019ac500(*(undefined8 *)(param_1 + 0x27a8),local_858);
        if (lVar6 != 0) {
          uVar4 = FUN_01350fa0(&local_30);
          FUN_01993f30(*(undefined8 *)(param_1 + 0x27a8),lVar6,uVar4,0);
          FUN_01c8d930(auStack_8d8,lVar6,uVar4);
          FUN_00415dd0(&local_860,local_28,0);
          FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,local_860,0,1);
          bVar7 = true;
        }
      }
      else {
        iVar3 = FUN_00415a60(local_38,"TileWindows");
        if (iVar3 == 0) {
          FUN_017f5560(*(undefined8 *)(param_1 + 0x27a8),0);
          bVar7 = true;
        }
        else {
          iVar3 = FUN_00415a60(local_38,"SetWindowState");
          if (iVar3 == 0) {
            if (*PTR_DAT_020052b8 != '\0') {
              FUN_01350dd0(&local_38,&local_30);
              FUN_00416880(&local_868,local_38);
              if (local_868 == L"Minimize") {
                bVar7 = true;
              }
              else {
                FUN_00416880(&local_870,local_38);
                if (local_870 == 0) {
                  bVar7 = false;
                }
                else {
                  FUN_00416880(&local_878,local_38);
                  iVar3 = FUN_0043e420(local_878,L"Minimize");
                  bVar7 = iVar3 == 0;
                }
              }
              if (bVar7) {
                FUN_0080bf50(*(undefined8 *)PTR_DAT_02004030);
              }
              else {
                FUN_0080c0e0(*(undefined8 *)PTR_DAT_02004030);
              }
              FUN_00415dd0(&local_880,local_28,0);
              FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,local_880,0,1);
            }
            bVar7 = true;
          }
          else {
            iVar3 = FUN_00415a60(local_38,"ExitProgram");
            if (iVar3 == 0) {
              FUN_017f5560(*(undefined8 *)(param_1 + 0x27a8),1);
              bVar7 = true;
            }
            else {
              iVar3 = FUN_00415a60(local_38,"PCBDesignerHandle");
              if (iVar3 == 0) {
                iVar3 = FUN_01350fa0(&local_30);
                *(longlong *)(param_1 + 0x27c8) = (longlong)iVar3;
                bVar7 = true;
              }
              else {
                iVar3 = FUN_00415a60(local_38,"BackAnnotate");
                if (iVar3 == 0) {
                  FUN_01350dd0(&local_38,&local_30);
                  FUN_00416880(&local_888,local_38);
                  FUN_01bb4cc0(local_888,0,0);
                  bVar7 = true;
                }
              }
            }
          }
        }
      }
      if (bVar7) {
        thunk_FUN_0418b98f((short)local_898[2]);
      }
    }
    else if (((int)param_2[1] == 0x100) &&
            (lVar6 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa10)), *local_898 == lVar6)) {
      iVar3 = (int)local_898[2];
      if (iVar3 == 0x25) {
        uVar5 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa10));
        thunk_FUN_041b2403(uVar5,0x114,0,0);
      }
      else if (iVar3 == 0x26) {
        uVar5 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa10));
        thunk_FUN_041b2403(uVar5,0x115,0,0);
      }
      else if (iVar3 == 0x27) {
        uVar5 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa10));
        thunk_FUN_041b2403(uVar5,0x114,1,0);
      }
      else if (iVar3 == 0x28) {
        uVar5 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa10));
        thunk_FUN_041b2403(uVar5,0x115,1,0);
      }
    }
    goto LAB_01c8e1b6;
  }
  *param_3 = 1;
  thunk_FUN_041ada2f((short)param_2[2],local_83e,0x7fe);
  thunk_FUN_0418b98f((short)local_898[2]);
  FUN_00442b00(&local_28,local_83e);
  if (*PTR_DAT_020052b8 == '\0') {
LAB_01c8dadb:
    bVar7 = false;
  }
  else {
    uVar5 = FUN_01aecdf0(*(undefined8 *)PTR_DAT_020041a8);
    if ((byte)uVar5 < 8) {
      bVar7 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << ((byte)uVar5 & 0x1f) & 6U) != 0;
    }
    else {
      bVar7 = false;
    }
    if (!bVar7) goto LAB_01c8dadb;
    bVar7 = true;
  }
  if ((!bVar7) && ((*PTR_DAT_020052b8 == '\0' || (*PTR_DAT_020037c0 != '\0')))) {
    uVar5 = FUN_0080f4a0(*(undefined8 *)PTR_DAT_02004030);
    iVar3 = thunk_FUN_03d44949(uVar5);
    if (iVar3 != 0) {
      uVar5 = FUN_0080f4a0(*(undefined8 *)PTR_DAT_02004030);
      thunk_FUN_03ab0e43(uVar5,9);
    }
    uVar5 = FUN_0080f4a0(*(undefined8 *)PTR_DAT_02004030);
    thunk_FUN_039c4287(uVar5);
  }
  if ((!bVar7) && (*PTR_DAT_020052b8 != '\0')) {
    FUN_013a51a0(*(undefined8 *)PTR_DAT_020032b8,&local_28);
  }
  if ((*PTR_DAT_020052b8 == '\0') && (*(longlong *)(param_1 + 7000) == 0)) {
    FUN_00c36da0(&local_20,local_28);
    cVar1 = FUN_00440a20(local_20,1);
    if (cVar1 != '\0') {
      if ((*(byte *)(*(longlong *)(*(longlong *)PTR_DAT_02005950 + 0xd8) + 0x6a8) & 8) == 0) {
        local_8b8 = 0;
        local_8b0 = 0;
        local_8a8 = 1;
        FUN_01c681b0(param_1,local_20,0,0);
      }
      else {
        *(undefined4 *)(*(longlong *)(*(longlong *)PTR_DAT_02005950 + 0xd8) + 0x508) = 2;
        uVar2 = thunk_FUN_041e8323(local_83e);
        thunk_FUN_0413e052(*local_898,0x8d2,uVar2,0xf1206);
      }
    }
  }
LAB_01c8e1b6:
  FUN_00e1dfd0(local_898,local_890);
  FUN_00414480(&local_888);
  FUN_004144d0(&local_880);
  FUN_00414560(&local_878,3);
  FUN_004144d0(&local_860);
  FUN_00414480(&local_858);
  FUN_004144d0(&local_850);
  FUN_00414590(&local_40,3);
  FUN_00414560(&local_28,2);
  return;
}


/* Ghidra address: 0186af00 */
/* Ghidra symbol: FUN_0186af00 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0186af00(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 *local_10;
  
  local_10 = auStack_38;
  local_18 = 0;
  DAT_021103a4 = DAT_021103a4 + -1;
  puVar1 = auStack_38;
  if (DAT_021103a4 == -1) {
    FUN_00413b90(&DAT_0186ae48);
    DAT_021103a0 = 1;
    DAT_021103a1 = '\0';
    DAT_021103a2 = 0;
    DAT_021103c0 = thunk_FUN_04118f82(0x8000);
    _DAT_021103d0 = 0x114;
    thunk_FUN_03ed3ad2(&DAT_021103d0);
    if (((5 < DAT_021103d4) && (1 < DAT_021103d8)) || (9 < DAT_021103d4)) {
      DAT_021103a1 = '\x01';
    }
    if (DAT_021103a1 != '\0') {
      DAT_021103a8 = FUN_005ea3c0(&DAT_005e7878,1);
      FUN_005ea670(DAT_021103a8,0xffffffff80000002);
      cVar2 = FUN_005eaa60(DAT_021103a8,L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion");
      if (cVar2 != '\0') {
        FUN_005eb6d0(DAT_021103a8,&local_18,L"CurrentBuildNumber");
        FUN_00414ad0(&DAT_021104e8,local_18);
        DAT_021104f0 = 0;
        FUN_0043fc80(DAT_021104e8,&DAT_021104f0);
        DAT_021103a2 = 9999 < DAT_021104f0;
      }
      FUN_00410f20(DAT_021103a8);
    }
    if ((DAT_021103e0 == 2) && (4 < DAT_021103d4)) {
      DAT_021103c8 = thunk_FUN_04163be6(L"Msftedit.DLL");
    }
    if ((DAT_021103c8 != 0) && (DAT_021103c8 < 0x20)) {
      DAT_021103c8 = 0;
    }
    if (DAT_021103c8 == 0) {
      DAT_021103c8 = thunk_FUN_04163be6(L"RICHED20.DLL");
      if (DAT_021103c8 == 0) {
        DAT_021103c8 = thunk_FUN_04163be6(L"RICHED32.DLL");
        if ((DAT_021103c8 != 0) && (DAT_021103c8 < 0x20)) {
          DAT_021103c8 = 0;
        }
      }
      else {
        DAT_021103a0 = 2;
        if ((DAT_021103e0 == 2) && (4 < DAT_021103d4)) {
          DAT_021103a0 = 3;
        }
      }
    }
    else {
      DAT_021103a0 = 4;
    }
    thunk_FUN_04118f82(DAT_021103c0);
    _DAT_021103b0 = thunk_FUN_03d4bee8(L"Embedded Object");
    _DAT_021103b4 = thunk_FUN_03d4bee8(L"Link Source");
    _DAT_021103b8 = thunk_FUN_03d4bee8(L"Rich Text Format");
    _DAT_021103bc = thunk_FUN_03d4bee8(L"Rich Text Format Without Objects");
    puVar1 = local_10;
  }
  local_10 = puVar1;
  FUN_00414480(&local_18);
  return;
}


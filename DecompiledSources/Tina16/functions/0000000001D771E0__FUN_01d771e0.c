/* Ghidra address: 01d771e0 */
/* Ghidra symbol: FUN_01d771e0 */


uint FUN_01d771e0(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  uint local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  local_50 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_54 = 0;
  FUN_00414480(PTR_DAT_02002328);
  *PTR_DAT_02004cc0 = 0;
  lVar2 = thunk_FUN_04163be6(L"kernel32.dll");
  if (lVar2 != 0) {
    lVar3 = FUN_00427c10(lVar2,L"wine_get_unix_file_name");
    if (lVar3 != 0) {
      local_54 = 1;
    }
  }
  if (lVar2 != 0) {
    thunk_FUN_041c8c2f(lVar2);
  }
  lVar2 = thunk_FUN_04163be6(L"ntdll.dll");
  if (lVar2 != 0) {
    lVar3 = FUN_00427c10(lVar2,L"wine_get_version");
    if (lVar3 != 0) {
      local_54 = local_54 | 2;
    }
  }
  if (lVar2 != 0) {
    pcVar4 = (code *)FUN_00427c10(lVar2,L"wine_get_host_version");
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(&local_20,&local_28);
      if (local_20 == 0) {
        FUN_00414480(PTR_DAT_02002328);
      }
      else {
        FUN_004167a0(PTR_DAT_02002328,local_20);
      }
      if (local_28 != 0) {
        FUN_004167a0(&local_40,local_28);
        FUN_00416cd0(&local_38,3,*(undefined8 *)PTR_DAT_02002328,&DAT_01d774b4,local_40);
        FUN_0043ea00(&local_30,local_38);
        FUN_00414ad0(PTR_DAT_02002328,local_30);
      }
      FUN_0043e1a0(&local_48,*(undefined8 *)PTR_DAT_02002328);
      iVar1 = FUN_004170c0(&DAT_01d774c4,local_48,1);
      *PTR_DAT_02004cc0 = 0 < iVar1;
      FUN_0043e1a0(&local_50,*(undefined8 *)PTR_DAT_02002328);
      iVar1 = FUN_004170c0(L"darwin",local_50,1);
      *PTR_DAT_02004298 = 0 < iVar1;
    }
  }
  if (lVar2 != 0) {
    thunk_FUN_041c8c2f(lVar2);
  }
  FUN_00414560(&local_50,5);
  return local_54;
}


/* Ghidra address: 0060ea90 */
/* Ghidra symbol: FUN_0060ea90 */


void FUN_0060ea90(void)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_148 [40];
  undefined1 local_120 [256];
  undefined1 *local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_20 = auStack_148;
  local_18 = 0;
  iVar2 = thunk_FUN_03f3ed25(8,DAT_02011fac,0x48);
  DAT_01decc08._0_4_ = -iVar2;
  iVar2 = FUN_0044f060();
  if (iVar2 == 1) {
    cVar1 = FUN_0060ea30();
    if (cVar1 == -0x80) {
      FUN_00414b50(&local_18,L"Tahoma");
    }
  }
  local_10 = FUN_005ea3c0(&DAT_005e7878,1);
  FUN_005ea670(local_10,0xffffffff80000002);
  cVar1 = FUN_005eaa60(local_10,L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\FontSubstitutes")
  ;
  if (cVar1 != '\0') {
    FUN_005eb6d0(local_10,&local_18,L"MS Shell Dlg 2");
    FUN_005ea630(local_10);
  }
  FUN_00410f20(local_10);
  if (local_18 != 0) {
    FUN_0041d990(local_120,local_18);
    FUN_00415020(&DAT_01decc13,local_120,0x7c);
  }
  FUN_00414480(&local_18);
  return;
}


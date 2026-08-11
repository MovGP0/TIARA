/* Ghidra address: 01a26bf0 */
/* Ghidra symbol: FUN_01a26bf0 */


undefined1 FUN_01a26bf0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  wchar_t *local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  longlong local_20;
  undefined1 local_11;
  undefined8 local_10;
  
  local_30 = auStack_68;
  local_38 = 0;
  local_28 = 0;
  local_10 = FUN_00410e60(&PTR_FUN_00c3b600,1);
  cVar1 = FUN_01a24a30();
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"LTSpice is not installed!");
    FUN_004134c0(uVar2);
  }
  local_20 = FUN_01a25a40(param_1,*(undefined8 *)(param_1 + 0x350));
  if (local_20 != 0) {
    FUN_004ae7e0(local_10,local_20);
  }
  local_48 = L"LTSYM";
  local_40 = L".ddb";
  FUN_00416cd0(&local_38,4,*(undefined8 *)PTR_DAT_02005360,&DAT_01a26d94);
  FUN_00c3fba0(local_10,local_38);
  FUN_00c3fe50(local_10);
  FUN_00410f20(local_10);
  FUN_00414480(&local_38);
  FUN_00414480(&local_28);
  return local_11;
}


/* Ghidra address: 01a26dd0 */
/* Ghidra symbol: FUN_01a26dd0 */


undefined1 FUN_01a26dd0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  wchar_t *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_40;
  longlong local_38;
  int local_30;
  undefined1 local_29;
  longlong *local_28;
  undefined8 local_20;
  
  local_50 = auStack_a8;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_40 = 0;
  local_20 = FUN_00410e60(&PTR_FUN_00c3b600,1);
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_28 + 0xd8))(local_28,*(undefined8 *)(param_1 + 0x350));
  cVar1 = FUN_01a24a30();
  if (cVar1 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"LTSpice is not installed!");
    FUN_004134c0(uVar3);
  }
  iVar2 = (**(code **)(*local_28 + 0x28))();
  local_30 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*local_28 + 0x18))(local_28,&local_40,local_30);
      local_38 = FUN_01a25a40(param_1,local_40);
      if (local_38 != 0) {
        FUN_004ae7e0(local_20,local_38);
      }
      local_30 = local_30 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_88 = L"LTSPice\\";
  local_80 = L"ltsym_ind.ddb";
  FUN_00416cd0(&local_58,4,*(undefined8 *)PTR_DAT_02005360,&DAT_01a27178);
  FUN_00c3f870(local_20,local_58);
  local_88 = L"LTSPice\\";
  local_80 = L"ltsym_and.ddb";
  FUN_00416cd0(&local_60,4,*(undefined8 *)PTR_DAT_02005360,&DAT_01a27178);
  FUN_00c3f870(local_20,local_60);
  local_88 = L"LTSPice\\";
  local_80 = L"ltsym_or.ddb";
  FUN_00416cd0(&local_68,4,*(undefined8 *)PTR_DAT_02005360,&DAT_01a27178);
  FUN_00c3f870(local_20,local_68);
  local_88 = L"LTSPice\\";
  local_80 = L"ltsym_xor.ddb";
  FUN_00416cd0(&local_70,4,*(undefined8 *)PTR_DAT_02005360,&DAT_01a27178);
  FUN_00c3f870(local_20,local_70);
  local_88 = L"LTSYM";
  local_80 = L".ddb";
  FUN_00416cd0(&local_78,4,*(undefined8 *)PTR_DAT_02005360,&DAT_01a27178);
  FUN_00c3fba0(local_20,local_78);
  FUN_00c3fe50(local_20);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00414560(&local_78,5);
  FUN_00414480(&local_40);
  return local_29;
}


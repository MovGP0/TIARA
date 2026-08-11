/* Ghidra address: 007303b0 */
/* Ghidra symbol: FUN_007303b0 */


void FUN_007303b0(void)

{
  undefined8 uVar1;
  undefined **local_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined1 local_50;
  undefined1 local_48 [72];
  
  DAT_020124d4 = thunk_FUN_03ce67dd(L"commdlg_help");
  DAT_020124d8 = thunk_FUN_03ce67dd(L"commdlg_FindReplace");
  local_68 = &PTR_IMAGE_DOS_HEADER_0200c280;
  local_60 = 0x10;
  local_58 = FUN_00427ab0();
  local_50 = 0;
  uVar1 = FUN_00442dd0(local_48,L"WndProcPtr%.8X%.8X",&local_68,1);
  DAT_01e050f8 = thunk_FUN_041e8323(uVar1);
  return;
}


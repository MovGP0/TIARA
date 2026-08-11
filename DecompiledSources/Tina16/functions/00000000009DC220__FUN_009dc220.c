/* Ghidra address: 009dc220 */
/* Ghidra symbol: FUN_009dc220 */


void FUN_009dc220(void)

{
  undefined8 uVar1;
  wchar_t *local_18;
  undefined1 local_10;
  
  if (DAT_01e40518 == 0) {
    DAT_02012ae0 = thunk_FUN_04163be6(L"URLMON.DLL");
    if (DAT_02012ae0 == 0) {
      local_18 = L"URLMON.DLL";
      local_10 = 0x11;
      uVar1 = FUN_0044d8d0(&PTR_FUN_004334c0,1,&PTR_PTR_009d13f8,&local_18,0);
      FUN_004134c0(uVar1);
    }
    DAT_01e40518 = FUN_00427c10(DAT_02012ae0,L"URLDownloadToCacheFileW");
  }
  return;
}


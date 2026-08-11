/* Ghidra address: 00e05e10 */
/* Ghidra symbol: FUN_00e05e10 */


void FUN_00e05e10(void)

{
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_78;
  local_40 = 0;
  local_38 = 0;
  local_58 = L"vhdl_95_global.ini";
  FUN_00416cd0(&local_38,3,DAT_0202dfd8,L"\\Vhdl\\");
  local_20 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_38);
  DAT_0202e0e8 = (**(code **)(*local_20 + 0x30))(local_20,L"Developer",L"GenAsmCode",0);
  DAT_0202e0e9 = (**(code **)(*local_20 + 0x30))(local_20,L"Developer",L"ExecuteAsmCode",0);
  local_58 = L"Packages";
  (**(code **)(*local_20 + 0x10))(local_20,&local_40,L"LibraryNames",L"PackagesBinDir");
  FUN_00414ad0(&DAT_0202e0e0,local_40);
  FUN_00410f20(local_20);
  FUN_00414560(&local_40,2);
  return;
}


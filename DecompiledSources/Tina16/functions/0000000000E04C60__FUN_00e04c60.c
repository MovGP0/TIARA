/* Ghidra address: 00e04c60 */
/* Ghidra symbol: FUN_00e04c60 */


undefined1 FUN_00e04c60(void)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00414b50(local_20,*(undefined8 *)PTR_DAT_02005360);
  FUN_00414ad0(&DAT_0202e010,&DAT_00e04e24);
  FUN_00414ad0(&DAT_0202e018,&DAT_00e04e34);
  FUN_00416cd0(&DAT_0202e000,4,L"Software\\DesignSoft\\TINA Vhdl\\",DAT_0202e010,&DAT_00e04e90,
               DAT_0202e018);
  FUN_00416ad0(&DAT_0202e000,&DAT_00e04ea0);
  FUN_00416cd0(&DAT_0202e008,3,DAT_0202e000,&DAT_00e04eb4,L"Global");
  uVar1 = FUN_005ea3c0(&DAT_005e7878,1);
  FUN_005ea670(uVar1,0xffffffff80000001);
  FUN_00414ad0(&DAT_0202dff0,*(undefined8 *)PTR_DAT_020049a0);
  FUN_00414ad0(&DAT_0202dfd8,*(undefined8 *)PTR_DAT_02005010);
  FUN_00416ba0(&DAT_0202dff8,DAT_0202dff0,L"\\Vhdl");
  FUN_00416ba0(&DAT_0202dfe0,DAT_0202dfd8,L"\\Vhdl");
  FUN_00416ba0(&DAT_0202dfe8,*(undefined8 *)PTR_DAT_02005010,L"\\Vhdl\\Temp");
  FUN_00414ad0(&DAT_0202dff0,*(undefined8 *)PTR_DAT_020049a0);
  FUN_00410f20(uVar1);
  FUN_00414480(local_20);
  return 1;
}


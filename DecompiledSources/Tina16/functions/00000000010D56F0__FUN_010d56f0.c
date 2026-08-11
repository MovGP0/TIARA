/* Ghidra address: 010d56f0 */
/* Ghidra symbol: FUN_010d56f0 */


undefined8 FUN_010d56f0(undefined8 param_1)

{
  char cVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_00416cd0(&local_10,5,*(undefined8 *)PTR_DAT_020049a0,&DAT_010d5818,L"Vhdl",&DAT_010d5818,
               L"PyDist2");
  FUN_00416ba0(&local_18,local_10,L"\\PCBuild\\amd64\\py.exe");
  cVar1 = FUN_00440b00(local_10,1);
  if (cVar1 != '\0') {
    cVar1 = FUN_00440a20(local_18,1);
    if (cVar1 != '\0') goto LAB_010d57c5;
  }
  FUN_00416cd0(&local_10,5,*(undefined8 *)PTR_DAT_020049a0,&DAT_010d5818,L"Vhdl",&DAT_010d5818,
               L"PyDist");
LAB_010d57c5:
  FUN_00414ad0(param_1,local_10);
  FUN_00414560(&local_18,2);
  return param_1;
}


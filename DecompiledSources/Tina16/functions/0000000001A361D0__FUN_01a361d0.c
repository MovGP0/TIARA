/* Ghidra address: 01a361d0 */
/* Ghidra symbol: FUN_01a361d0 */


void FUN_01a361d0(longlong param_1)

{
  char cVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_00416ba0(&local_20,*(undefined8 *)(param_1 + 0x50),L"\\data");
  FUN_00440c30(local_20);
  FUN_00416ba0(&local_28,*(undefined8 *)(param_1 + 0x50),L"\\temp");
  FUN_00440c30(local_28);
  FUN_00416ba0(&local_10,*(undefined8 *)(param_1 + 0x50),L"\\temp\\");
  FUN_00416ba0(&local_18,local_10,L"temp-solution.json");
  cVar1 = FUN_00440a20(local_18,1);
  if (cVar1 != '\0') {
    FUN_004412f0(local_18);
  }
  FUN_00416ba0(&local_18,local_10,L"_dctable.xml");
  cVar1 = FUN_00440a20(local_18,1);
  if (cVar1 != '\0') {
    FUN_004412f0(local_18);
  }
  FUN_00416ba0(&local_18,local_10,L"_dc_ext.xml");
  cVar1 = FUN_00440a20(local_18,1);
  if (cVar1 != '\0') {
    FUN_004412f0(local_18);
  }
  FUN_00416ba0(&local_10,*(undefined8 *)(param_1 + 0x50),L"\\data\\");
  FUN_00416ba0(&local_18,local_10,L"temp.json");
  cVar1 = FUN_00440a20(local_18,1);
  if (cVar1 != '\0') {
    FUN_004412f0(local_18);
  }
  FUN_00414560(&local_28,4);
  return;
}


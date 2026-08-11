/* Ghidra address: 013a9e80 */
/* Ghidra symbol: FUN_013a9e80 */


undefined8 FUN_013a9e80(undefined8 param_1)

{
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_00414b50(&local_18,L"x64\\Debug");
  FUN_015fca00(&local_20,0,0);
  FUN_00416cd0(&local_10,3,local_20,L"\\Temp\\",L"conv");
  FUN_00416cd0(param_1,5,local_10,&DAT_013a9fbc,L"obj_dir",&DAT_013a9fbc,local_18);
  FUN_00414560(&local_20,3);
  return param_1;
}


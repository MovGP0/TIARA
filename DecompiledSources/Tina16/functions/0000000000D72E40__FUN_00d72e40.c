/* Ghidra address: 00d72e40 */
/* Ghidra symbol: FUN_00d72e40 */


undefined8 FUN_00d72e40(undefined8 param_1)

{
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  FUN_00d74990(&PTR_FUN_00d5c6d8,&local_10);
  FUN_00d74950(&PTR_FUN_00d5c6d8,&local_18);
  FUN_00d74950(&PTR_FUN_00d5c6d8,&local_20);
  FUN_00416cd0(param_1,5,local_10,&DAT_00d72f18,local_18,&DAT_00d72f2c,local_20);
  FUN_00414560(&local_20,3);
  return param_1;
}


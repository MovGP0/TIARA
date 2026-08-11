/* Ghidra address: 00440160 */
/* Ghidra symbol: FUN_00440160 */


undefined8 FUN_00440160(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_18 [2];
  undefined8 local_10;
  
  FUN_00417580(local_18,&DAT_004400a8);
  local_18[0] = param_2;
  FUN_00414480(&local_10);
  FUN_0041b560(FUN_00440110,local_18);
  FUN_00414ad0(param_1,local_10);
  FUN_00417740(local_18,&DAT_004400a8);
  return param_1;
}


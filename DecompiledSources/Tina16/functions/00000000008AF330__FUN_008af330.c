/* Ghidra address: 008af330 */
/* Ghidra symbol: FUN_008af330 */


undefined8 FUN_008af330(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  FUN_00414b50(&local_10,param_2);
  FUN_00874ee0(local_20,&local_10,&DAT_008af3e4,1,1);
  FUN_0043ea00(param_1,local_20[0]);
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return param_1;
}


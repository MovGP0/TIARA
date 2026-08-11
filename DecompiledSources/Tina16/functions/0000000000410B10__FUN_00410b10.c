/* Ghidra address: 00410b10 */
/* Ghidra symbol: FUN_00410b10 */


undefined8 FUN_00410b10(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_20 [2];
  longlong local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  FUN_00411330(param_1,&local_10);
  if (local_10 == 0) {
    FUN_00410ae0(param_1,param_2);
  }
  else {
    FUN_00410ae0(param_1,local_20);
    FUN_00416cd0(param_2,3,local_10,&LAB_00410bd4,local_20[0]);
  }
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return param_2;
}


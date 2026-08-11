/* Ghidra address: 00cd9730 */
/* Ghidra symbol: FUN_00cd9730 */


undefined8 FUN_00cd9730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_20 [2];
  longlong local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  FUN_00cd9270(param_1,&local_10,param_3);
  if (local_10 == 0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_00874ee0(local_20,&local_10,&LAB_00cd97f4,1,1);
    FUN_0043ea00(param_2,local_10);
  }
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return param_2;
}


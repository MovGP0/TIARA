/* Ghidra address: 00f05e70 */
/* Ghidra symbol: FUN_00f05e70 */


undefined8
FUN_00f05e70(undefined8 param_1,double param_2,double param_3,char param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined8 local_10;
  
  local_10 = 0;
  param_2 = param_2 / param_3;
  if (param_4 == '\0') {
    FUN_00f05d50(param_1,param_2,param_5,param_6);
  }
  else if (param_4 == '\x01') {
    FUN_00f05860(param_1,param_2,param_5,param_6);
  }
  else if (param_4 == '\x02') {
    FUN_00f05b80(param_1,param_2,param_5,param_6);
  }
  FUN_00414480(&local_10);
  return param_1;
}


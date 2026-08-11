/* Ghidra address: 00a57b50 */
/* Ghidra symbol: FUN_00a57b50 */


void FUN_00a57b50(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,longlong param_7,undefined4 param_8)

{
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  if (param_7 == 0) {
    FUN_00a5adf0(param_1,param_2,param_3,param_4,0,0,param_5,0,param_6,0,param_8);
  }
  else {
    FUN_00a72920(param_7,&local_10);
    FUN_00a72b50(param_7,&local_18);
    FUN_00a72c00(param_7,&local_20);
    FUN_00a5adf0(param_1,param_2,param_3,param_4,local_10,local_18,param_5,local_20,param_6,param_7,
                 param_8);
  }
  FUN_00414560(&local_20,3);
  return;
}


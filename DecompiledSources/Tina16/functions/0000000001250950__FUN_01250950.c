/* Ghidra address: 01250950 */
/* Ghidra symbol: FUN_01250950 */


void FUN_01250950(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6)

{
  undefined8 local_res20;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_5);
  FUN_0043f750(&local_10,param_6);
  FUN_0124fe60(local_20,param_1,param_2,param_3,L"boolean",local_res20,param_5,0,local_10);
  FUN_0041b800(local_20);
  FUN_00414480(&local_10);
  FUN_00414560(&local_res20,2);
  return;
}


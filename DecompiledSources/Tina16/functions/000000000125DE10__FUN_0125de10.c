/* Ghidra address: 0125de10 */
/* Ghidra symbol: FUN_0125de10 */


void FUN_0125de10(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined8 local_res8;
  undefined8 local_res10 [3];
  
  local_res8 = param_1;
  local_res10[0] = param_2;
  FUN_0041b910(param_1);
  FUN_0041b910(local_res10[0]);
  FUN_00414610(param_6);
  FUN_00414610(param_7);
  FUN_0125d4b0(local_res8,local_res10[0],param_3,param_4,param_5,param_6,param_7,param_8,
               &DAT_0125df94,0);
  FUN_0125d4b0(local_res8,local_res10[0],param_3,param_4,param_5,param_6,param_7,param_8,
               &DAT_0125dfa8,1);
  FUN_0041b800(&local_res8);
  FUN_0041b800(local_res10);
  FUN_00414560(&param_6,2);
  return;
}


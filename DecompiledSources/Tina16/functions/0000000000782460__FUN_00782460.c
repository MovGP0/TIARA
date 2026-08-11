/* Ghidra address: 00782460 */
/* Ghidra symbol: FUN_00782460 */


void FUN_00782460(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                 undefined8 param_5)

{
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  if (param_4 >> 0x10 == 0) {
    FUN_0043f780(&local_18,param_4);
    FUN_00416ba0(&local_10,&LAB_00782558,local_18);
    FUN_00782560(param_1,param_2,param_3,local_10,param_5);
  }
  else {
    FUN_004167d0(&local_20,param_4);
    FUN_00782560(param_1,param_2,param_3,local_20,param_5);
  }
  FUN_00414560(&local_20,3);
  return;
}


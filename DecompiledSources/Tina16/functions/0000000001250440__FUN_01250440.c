/* Ghidra address: 01250440 */
/* Ghidra symbol: FUN_01250440 */


undefined8
FUN_01250440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_20 = 0;
  local_18 = 0;
  FUN_00414610(param_5);
  FUN_00414610(param_6);
  FUN_00414610(param_7);
  FUN_004168e0(&local_18,param_7);
  FUN_01242880(&local_10,local_18);
  FUN_004168b0(&local_20,local_10);
  FUN_0124fe60(param_1,param_2,param_3,param_4,L"string",param_5,param_6,0,local_20);
  FUN_00414480(&local_20);
  FUN_004145c0(&local_18,2);
  FUN_00414560(&param_5,3);
  return param_1;
}


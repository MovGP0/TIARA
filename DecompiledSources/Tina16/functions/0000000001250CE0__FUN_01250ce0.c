/* Ghidra address: 01250ce0 */
/* Ghidra symbol: FUN_01250ce0 */


undefined8
FUN_01250ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,char param_8)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_30 = 0;
  local_28 = 0;
  local_10 = 0;
  FUN_00414610(param_5);
  FUN_00414610(param_6);
  FUN_00414610(param_7);
  if (param_8 == '\0') {
    FUN_00414b50(&local_10,L"memo");
  }
  else {
    FUN_00414b50(&local_10,L"memo_sh");
  }
  FUN_004168e0(&local_28,param_7);
  FUN_01242880(local_20,local_28);
  FUN_004168b0(&local_30,local_20[0]);
  FUN_0124fe60(param_1,param_2,param_3,param_4,local_10,param_5,param_6,0,local_30);
  FUN_00414480(&local_30);
  FUN_004145c0(&local_28,2);
  FUN_00414480(&local_10);
  FUN_00414560(&param_5,3);
  return param_1;
}


/* Ghidra address: 015f5100 */
/* Ghidra symbol: FUN_015f5100 */


undefined8 FUN_015f5100(undefined8 param_1,undefined4 param_2,int param_3)

{
  undefined1 local_70 [96];
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01aa0f40(local_70,param_2,8);
  FUN_004169a0(&local_10,local_70);
  FUN_00416dc0(param_1,local_10,8 - param_3,1);
  FUN_00414480(&local_10);
  return param_1;
}


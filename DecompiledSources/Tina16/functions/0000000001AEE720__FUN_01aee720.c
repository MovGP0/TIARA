/* Ghidra address: 01aee720 */
/* Ghidra symbol: FUN_01aee720 */


undefined8 FUN_01aee720(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 local_res20;
  undefined1 local_118 [256];
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_0040e780(local_118,param_2,0);
  FUN_004169a0(&local_10,local_118);
  FUN_0040e780(local_118,param_3,0);
  FUN_004169a0(&local_18,local_118);
  FUN_00416cd0(param_1,5,local_10,&DAT_01aee84c,local_18,&DAT_01aee84c,local_res20);
  FUN_00414560(&local_18,2);
  FUN_00414480(&local_res20);
  return param_1;
}


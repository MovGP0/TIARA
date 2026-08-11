/* Ghidra address: 01260da0 */
/* Ghidra symbol: FUN_01260da0 */


void FUN_01260da0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414650(&local_res10);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  FUN_004168b0(&local_18,local_res10);
  FUN_0043f750(&local_20,param_5 + *(int *)(param_1 + 0x7a0));
  FUN_01250a90(&local_10,*(undefined8 *)(param_1 + 0x758),*(undefined8 *)(param_1 + 0x760),
               *(undefined1 *)(param_1 + 0x770),local_18,local_20,local_res18,local_res20);
  FUN_00414560(&local_20,2);
  FUN_0041b800(&local_10);
  FUN_00414520(&local_res10);
  FUN_00414560(&local_res18,2);
  return;
}


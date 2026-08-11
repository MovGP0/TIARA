/* Ghidra address: 01260f00 */
/* Ghidra symbol: FUN_01260f00 */


void FUN_01260f00(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  undefined8 local_res10 [3];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414650(local_res10);
  FUN_004168b0(&local_18,local_res10[0]);
  FUN_0043f750(&local_20,param_4 + *(int *)(param_1 + 0x7a0));
  FUN_012505f0(&local_10,*(undefined8 *)(param_1 + 0x758),*(undefined8 *)(param_1 + 0x760),
               *(undefined1 *)(param_1 + 0x770),local_18,local_20,param_3);
  FUN_00414560(&local_20,2);
  FUN_0041b800(&local_10);
  FUN_00414520(local_res10);
  return;
}


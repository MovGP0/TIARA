/* Ghidra address: 004d1af0 */
/* Ghidra symbol: FUN_004d1af0 */


void FUN_004d1af0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  FUN_00417580(&local_30,&DAT_00483468);
  local_10 = 0;
  local_28 = 0;
  local_20 = 0;
  local_30 = param_1;
  FUN_0041b840(local_18,local_res10[0]);
  FUN_004d17e0(&PTR_FUN_00483698,&local_30,0,0);
  FUN_00417740(&local_30,&DAT_00483468);
  FUN_0041b800(local_res10);
  return;
}


/* Ghidra address: 01bbee30 */
/* Ghidra symbol: FUN_01bbee30 */


void FUN_01bbee30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00b8fd60(&local_10,param_3,*PTR_DAT_02005310,0,1);
  FUN_00416cd0(*(undefined8 *)(param_1 + 0xf0),5,**(undefined8 **)(param_1 + 0xf0),local_res10[0],
               &DAT_01bbef14,local_10,&LAB_01bbef24);
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return;
}


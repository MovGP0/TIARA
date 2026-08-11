/* Ghidra address: 01a3ca00 */
/* Ghidra symbol: FUN_01a3ca00 */


undefined8 FUN_01a3ca00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30 [40];
  
  local_40 = 0;
  local_38 = 0;
  FUN_00417580(local_30,&DAT_00ea5f80);
  FUN_00ea7ad0(&local_40,param_3,0);
  FUN_00416cd0(&local_38,3,&DAT_01a3cb10,local_40,&DAT_01a3cb10);
  FUN_00ea7a10(local_30,local_38,2);
  FUN_00ea8c00(local_30,param_1,param_2,param_4);
  FUN_00414560(&local_40,2);
  FUN_00417740(local_30,&DAT_00ea5f80);
  return param_1;
}


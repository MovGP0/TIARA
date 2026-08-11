/* Ghidra address: 015f5620 */
/* Ghidra symbol: FUN_015f5620 */


undefined8 FUN_015f5620(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 local_res10 [3];
  undefined1 local_20 [8];
  undefined4 local_18;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00417580(local_20,&DAT_00e021a8);
  FUN_00414b50(local_20,local_res10[0]);
  local_18 = param_3;
  FUN_00417c40(param_1,local_20,&DAT_00e021a8);
  FUN_00417740(local_20,&DAT_00e021a8);
  FUN_00414480(local_res10);
  return param_1;
}


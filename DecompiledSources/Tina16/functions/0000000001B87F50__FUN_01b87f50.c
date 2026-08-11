/* Ghidra address: 01b87f50 */
/* Ghidra symbol: FUN_01b87f50 */


void FUN_01b87f50(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 local_res10 [3];
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = *param_3;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00417580(local_28,&DAT_01b7d278);
  FUN_00414b50(local_28,local_res10[0]);
  local_20 = local_10;
  local_18 = param_4;
  FUN_00597ec0(*(longlong *)(param_1 + 0x3e0) + 8,local_28);
  FUN_00417740(local_28,&DAT_01b7d278);
  FUN_00414480(local_res10);
  return;
}


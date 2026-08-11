/* Ghidra address: 015e2c80 */
/* Ghidra symbol: FUN_015e2c80 */


char FUN_015e2c80(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 local_res10;
  undefined4 *local_res18;
  undefined1 local_260 [61];
  undefined4 local_223;
  char local_9;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00417580(local_260,&DAT_015b8318);
  local_9 = FUN_015c33c0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_res10,
                         local_res18);
  if (local_9 == '\0') {
    local_9 = FUN_015de7f0(param_1,local_res10,local_260,0x28bf,0);
    *local_res18 = local_223;
  }
  FUN_00417740(local_260,&DAT_015b8318);
  FUN_00414480(&local_res10);
  return local_9;
}


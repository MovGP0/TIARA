/* Ghidra address: 01437b50 */
/* Ghidra symbol: FUN_01437b50 */


void FUN_01437b50(longlong param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  if (*(char *)(param_1 + 0x71c) == '\0') {
    FUN_0041ddd0(&local_18,&LAB_01437438);
    FUN_0064de00(param_1,local_18);
  }
  else {
    FUN_0041ddd0(&local_10,&PTR_PTR_01437428);
    FUN_0064de00(param_1,local_10);
  }
  FUN_00414560(&local_18,2);
  return;
}


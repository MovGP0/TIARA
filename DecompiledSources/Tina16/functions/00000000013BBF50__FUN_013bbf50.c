/* Ghidra address: 013bbf50 */
/* Ghidra symbol: FUN_013bbf50 */


void FUN_013bbf50(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_20 = local_res10[0];
  local_18 = 0x11;
  FUN_00442f70(&local_10,L"-W %s",&local_20,0);
  FUN_00416cd0(param_1 + 0xb8,3,*(undefined8 *)(param_1 + 0xb8),local_10,&DAT_013bc02c);
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return;
}


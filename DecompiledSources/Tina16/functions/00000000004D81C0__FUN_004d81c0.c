/* Ghidra address: 004d81c0 */
/* Ghidra symbol: FUN_004d81c0 */


void FUN_004d81c0(longlong param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_0043f7e0(&local_18,param_2);
  FUN_00459ca0(*(undefined8 *)(param_1 + 0x10),&local_10,local_18);
  FUN_004d8330(param_1,local_10);
  FUN_00414480(&local_18);
  FUN_00419430(&local_10,&DAT_00406578);
  return;
}


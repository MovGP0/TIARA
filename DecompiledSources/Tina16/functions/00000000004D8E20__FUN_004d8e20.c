/* Ghidra address: 004d8e20 */
/* Ghidra symbol: FUN_004d8e20 */


void FUN_004d8e20(longlong param_1,undefined1 param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_00440030(&local_18,param_2,1);
  FUN_00416ad0(&local_18,*(undefined8 *)(param_1 + 0x18));
  FUN_00459ca0(*(undefined8 *)(param_1 + 0x10),&local_10,local_18);
  FUN_004d8330(param_1,local_10);
  FUN_00414480(&local_18);
  FUN_00419430(&local_10,&DAT_00406578);
  return;
}


/* Ghidra address: 004cb330 */
/* Ghidra symbol: FUN_004cb330 */


void FUN_004cb330(longlong param_1)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_004c9bf0(param_1);
  FUN_004c1d80(*(undefined8 *)(param_1 + 0x1d0),&local_10);
  FUN_00414b50(param_1 + 0x38,local_10);
  FUN_004c9ea0(param_1,*(undefined8 *)(param_1 + 0x38));
  FUN_004c9d80(param_1,&DAT_004cb3e4);
  FUN_004ca3d0(param_1);
  FUN_004c9d80(param_1,&LAB_004cb3f8);
  FUN_00414480(&local_10);
  return;
}


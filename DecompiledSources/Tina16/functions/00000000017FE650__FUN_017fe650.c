/* Ghidra address: 017fe650 */
/* Ghidra symbol: FUN_017fe650 */


void FUN_017fe650(longlong param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e0),&local_10);
  FUN_00415dd0(&local_18,local_10,0);
  FUN_017fe450(param_1,local_18,*(undefined1 *)(*(longlong *)(param_1 + 0x700) + 0x4a8),1);
  FUN_004144d0(&local_18);
  FUN_00414480(&local_10);
  return;
}


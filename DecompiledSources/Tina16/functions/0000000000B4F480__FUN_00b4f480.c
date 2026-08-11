/* Ghidra address: 00b4f480 */
/* Ghidra symbol: FUN_00b4f480 */


void FUN_00b4f480(longlong param_1,undefined1 param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_004153d0(&local_18,param_2,0);
  FUN_00b156f0(&local_10,*(undefined8 *)(param_1 + 0x40),&LAB_00b4f528,local_18);
  FUN_00414bf0(param_1 + 0x40,local_10);
  FUN_00414590(&local_18,2);
  return;
}


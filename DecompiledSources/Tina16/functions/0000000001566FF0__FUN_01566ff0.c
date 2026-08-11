/* Ghidra address: 01566ff0 */
/* Ghidra symbol: FUN_01566ff0 */


void FUN_01566ff0(longlong param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_015fcdf0(&local_10,*(undefined8 *)(param_1 + 0xa18));
  FUN_00414ad0(param_1 + 0x7a0,local_10);
  FUN_015fcd70(&local_18,*(undefined8 *)(param_1 + 0xa18));
  FUN_00414ad0(param_1 + 0x7a8,local_18);
  FUN_00b96df0(*(undefined8 *)(param_1 + 0x7a0));
  FUN_00b96df0(*(undefined8 *)(param_1 + 0x7a8));
  FUN_00414560(&local_18,2);
  return;
}


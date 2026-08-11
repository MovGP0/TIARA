/* Ghidra address: 00b22d50 */
/* Ghidra symbol: FUN_00b22d50 */


undefined4 FUN_00b22d50(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00414c70(&local_10,param_2);
  uVar1 = FUN_00b1b100(*(undefined8 *)(param_1 + 8),&local_10);
  FUN_004144d0(&local_10);
  return uVar1;
}


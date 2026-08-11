/* Ghidra address: 00b22c80 */
/* Ghidra symbol: FUN_00b22c80 */


int FUN_00b22c80(longlong param_1,undefined8 param_2)

{
  int local_1c;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00414c70(&local_10,param_2);
  local_1c = FUN_00b1b100(*(undefined8 *)(param_1 + 8),&local_10);
  if (local_1c < 0) {
    FUN_00b1b070(*(undefined8 *)(param_1 + 8),param_2);
    local_1c = FUN_00b1b130(*(undefined8 *)(param_1 + 8));
    local_1c = local_1c + -1;
  }
  FUN_004144d0(&local_10);
  return local_1c;
}


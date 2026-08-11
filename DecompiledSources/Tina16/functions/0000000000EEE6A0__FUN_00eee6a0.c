/* Ghidra address: 00eee6a0 */
/* Ghidra symbol: FUN_00eee6a0 */


undefined8 FUN_00eee6a0(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  FUN_00414c70(&local_10,**(undefined8 **)(param_1 + 8));
  FUN_00414bf0(param_2,local_10);
  FUN_004144d0(&local_10);
  return param_2;
}


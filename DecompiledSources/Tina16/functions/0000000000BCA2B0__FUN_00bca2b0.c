/* Ghidra address: 00bca2b0 */
/* Ghidra symbol: FUN_00bca2b0 */


undefined8 FUN_00bca2b0(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (*(char *)(param_1 + 0x1d0) == '\0') {
    FUN_00414480(param_2);
  }
  else {
    FUN_00416780(param_2,*(undefined2 *)(param_1 + 0x1d2));
    FUN_00416780(&local_10,*(undefined2 *)(param_1 + 0x1d4));
    FUN_00416ad0(param_2,local_10);
  }
  FUN_00414480(&local_10);
  return param_2;
}


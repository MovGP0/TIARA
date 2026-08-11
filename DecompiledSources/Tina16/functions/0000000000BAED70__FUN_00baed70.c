/* Ghidra address: 00baed70 */
/* Ghidra symbol: FUN_00baed70 */


undefined8 FUN_00baed70(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x40) == -1) {
    FUN_00414480(param_2);
  }
  else {
    FUN_00b9c9f0(*(undefined8 *)(param_1 + 0x48),param_2,*(int *)(param_1 + 0x40));
  }
  return param_2;
}


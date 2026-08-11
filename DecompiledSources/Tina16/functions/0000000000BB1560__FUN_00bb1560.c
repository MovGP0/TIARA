/* Ghidra address: 00bb1560 */
/* Ghidra symbol: FUN_00bb1560 */


undefined8 FUN_00bb1560(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x58) == -1) {
    FUN_00414480(param_2);
  }
  else {
    FUN_00b9c9f0(*(undefined8 *)(param_1 + 0x48),param_2,*(int *)(param_1 + 0x58));
  }
  return param_2;
}


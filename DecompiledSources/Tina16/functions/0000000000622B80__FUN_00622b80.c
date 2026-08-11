/* Ghidra address: 00622b80 */
/* Ghidra symbol: FUN_00622b80 */


undefined8 FUN_00622b80(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x65) == '\0') {
    FUN_00414520(param_2);
  }
  else {
    FUN_00414b90(param_2,*(undefined8 *)(param_1 + 0x58));
  }
  return param_2;
}


/* Ghidra address: 0054a800 */
/* Ghidra symbol: FUN_0054a800 */


undefined8 FUN_0054a800(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x59) == '\0') {
    FUN_0054abe0(param_1);
  }
  FUN_004192a0(param_2,*(undefined8 *)(param_1 + 0x38),&DAT_0052f648);
  return param_2;
}


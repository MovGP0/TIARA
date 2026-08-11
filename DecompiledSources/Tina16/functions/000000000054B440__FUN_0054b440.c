/* Ghidra address: 0054b440 */
/* Ghidra symbol: FUN_0054b440 */


undefined8 FUN_0054b440(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x58) == '\0') {
    FUN_0054a550(param_1);
  }
  FUN_004194b0(param_2,*(undefined8 *)(param_1 + 0x48),&DAT_0052f750);
  return param_2;
}


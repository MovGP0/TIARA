/* Ghidra address: 0054a7c0 */
/* Ghidra symbol: FUN_0054a7c0 */


undefined8 FUN_0054a7c0(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x58) == '\0') {
    FUN_0054a550(param_1);
  }
  FUN_004192a0(param_2,*(undefined8 *)(param_1 + 0x30),&DAT_0052f6f8);
  return param_2;
}


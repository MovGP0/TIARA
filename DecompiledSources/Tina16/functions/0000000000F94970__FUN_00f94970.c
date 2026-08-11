/* Ghidra address: 00f94970 */
/* Ghidra symbol: FUN_00f94970 */


void FUN_00f94970(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x6f8) == '\0';
  *(undefined1 *)(param_1 + 0x6f8) = 0;
  return;
}


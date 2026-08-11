/* Ghidra address: 00f92860 */
/* Ghidra symbol: FUN_00f92860 */


void FUN_00f92860(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x6e8) == '\0';
  *(undefined1 *)(param_1 + 0x6e8) = 0;
  return;
}


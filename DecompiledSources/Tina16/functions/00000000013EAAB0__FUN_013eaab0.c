/* Ghidra address: 013eaab0 */
/* Ghidra symbol: FUN_013eaab0 */


void FUN_013eaab0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x8c8) == '\0';
  *(undefined1 *)(param_1 + 0x8c8) = 0;
  return;
}


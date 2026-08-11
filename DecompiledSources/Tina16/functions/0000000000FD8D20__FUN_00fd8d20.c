/* Ghidra address: 00fd8d20 */
/* Ghidra symbol: FUN_00fd8d20 */


void FUN_00fd8d20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x6d8) == '\0';
  *(undefined1 *)(param_1 + 0x6d8) = 0;
  return;
}


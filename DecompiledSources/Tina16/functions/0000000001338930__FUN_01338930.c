/* Ghidra address: 01338930 */
/* Ghidra symbol: FUN_01338930 */


void FUN_01338930(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x778) == '\0';
  *(undefined1 *)(param_1 + 0x778) = 0;
  return;
}


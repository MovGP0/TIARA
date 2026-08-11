/* Ghidra address: 013e7290 */
/* Ghidra symbol: FUN_013e7290 */


void FUN_013e7290(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x768) == '\0';
  *(undefined1 *)(param_1 + 0x768) = 0;
  return;
}


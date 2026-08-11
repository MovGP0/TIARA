/* Ghidra address: 01155b90 */
/* Ghidra symbol: FUN_01155b90 */


void FUN_01155b90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x7c8) == '\0';
  *(undefined1 *)(param_1 + 0x7c8) = 0;
  return;
}


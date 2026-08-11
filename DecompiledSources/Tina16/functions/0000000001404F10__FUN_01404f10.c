/* Ghidra address: 01404f10 */
/* Ghidra symbol: FUN_01404f10 */


void FUN_01404f10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x7b0) == '\0';
  *(undefined1 *)(param_1 + 0x7b0) = 0;
  return;
}


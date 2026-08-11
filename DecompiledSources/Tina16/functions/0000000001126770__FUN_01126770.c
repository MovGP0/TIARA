/* Ghidra address: 01126770 */
/* Ghidra symbol: FUN_01126770 */


void FUN_01126770(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0xb4c) == '\0';
  *(undefined1 *)(param_1 + 0xb4c) = 0;
  return;
}


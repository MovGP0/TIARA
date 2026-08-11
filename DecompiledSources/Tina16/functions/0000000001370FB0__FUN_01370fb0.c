/* Ghidra address: 01370fb0 */
/* Ghidra symbol: FUN_01370fb0 */


void FUN_01370fb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x7b1) == '\0';
  *(undefined1 *)(param_1 + 0x7b1) = 0;
  return;
}


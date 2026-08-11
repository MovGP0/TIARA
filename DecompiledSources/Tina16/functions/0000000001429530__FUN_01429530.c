/* Ghidra address: 01429530 */
/* Ghidra symbol: FUN_01429530 */


void FUN_01429530(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x728) == '\0';
  *(undefined1 *)(param_1 + 0x728) = 0;
  return;
}


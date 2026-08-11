/* Ghidra address: 019d5390 */
/* Ghidra symbol: FUN_019d5390 */


void FUN_019d5390(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x811) == '\0';
  *(undefined1 *)(param_1 + 0x811) = 0;
  return;
}


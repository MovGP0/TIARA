/* Ghidra address: 014f3b60 */
/* Ghidra symbol: FUN_014f3b60 */


void FUN_014f3b60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x8c8) == '\0';
  *(undefined1 *)(param_1 + 0x8c8) = 0;
  return;
}


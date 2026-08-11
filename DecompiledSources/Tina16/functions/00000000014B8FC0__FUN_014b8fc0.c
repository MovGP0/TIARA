/* Ghidra address: 014b8fc0 */
/* Ghidra symbol: FUN_014b8fc0 */


void FUN_014b8fc0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x708) == '\0';
  *(undefined1 *)(param_1 + 0x708) = 0;
  return;
}


/* Ghidra address: 015284a0 */
/* Ghidra symbol: FUN_015284a0 */


void FUN_015284a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x718) == '\0';
  *(undefined1 *)(param_1 + 0x718) = 0;
  return;
}


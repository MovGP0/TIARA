/* Ghidra address: 010a0690 */
/* Ghidra symbol: FUN_010a0690 */


void FUN_010a0690(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x6e8) == '\0';
  *(undefined1 *)(param_1 + 0x6e8) = 0;
  return;
}


/* Ghidra address: 010a0e70 */
/* Ghidra symbol: FUN_010a0e70 */


void FUN_010a0e70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x6d0) == '\0';
  *(undefined1 *)(param_1 + 0x6d0) = 0;
  return;
}


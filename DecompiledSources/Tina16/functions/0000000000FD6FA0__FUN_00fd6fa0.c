/* Ghidra address: 00fd6fa0 */
/* Ghidra symbol: FUN_00fd6fa0 */


void FUN_00fd6fa0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x6f8) == '\0';
  *(undefined1 *)(param_1 + 0x6f8) = 0;
  return;
}


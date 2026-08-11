/* Ghidra address: 01535da0 */
/* Ghidra symbol: FUN_01535da0 */


void FUN_01535da0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x7d8) == '\0';
  *(undefined1 *)(param_1 + 0x7d8) = 0;
  return;
}


/* Ghidra address: 00fce640 */
/* Ghidra symbol: FUN_00fce640 */


void FUN_00fce640(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x7cc) == '\0';
  *(undefined1 *)(param_1 + 0x7cc) = 0;
  return;
}


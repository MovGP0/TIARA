/* Ghidra address: 01b8fd80 */
/* Ghidra symbol: FUN_01b8fd80 */


void FUN_01b8fd80(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x710) == '\0';
  *(undefined1 *)(param_1 + 0x710) = 0;
  return;
}


/* Ghidra address: 00fc7010 */
/* Ghidra symbol: FUN_00fc7010 */


void FUN_00fc7010(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x748) == '\0';
  *(undefined1 *)(param_1 + 0x748) = 0;
  return;
}


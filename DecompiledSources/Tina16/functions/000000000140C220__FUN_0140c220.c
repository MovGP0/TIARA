/* Ghidra address: 0140c220 */
/* Ghidra symbol: FUN_0140c220 */


void FUN_0140c220(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x700) == '\0';
  *(undefined1 *)(param_1 + 0x700) = 0;
  return;
}


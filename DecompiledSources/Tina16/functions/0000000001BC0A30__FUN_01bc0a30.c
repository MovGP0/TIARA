/* Ghidra address: 01bc0a30 */
/* Ghidra symbol: FUN_01bc0a30 */


void FUN_01bc0a30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x718) == '\0';
  *(undefined1 *)(param_1 + 0x718) = 0;
  return;
}


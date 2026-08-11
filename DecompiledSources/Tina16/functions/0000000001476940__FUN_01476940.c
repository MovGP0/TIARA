/* Ghidra address: 01476940 */
/* Ghidra symbol: FUN_01476940 */


void FUN_01476940(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x768) == '\0';
  *(undefined1 *)(param_1 + 0x768) = 0;
  return;
}


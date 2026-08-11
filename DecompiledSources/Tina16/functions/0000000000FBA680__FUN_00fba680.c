/* Ghidra address: 00fba680 */
/* Ghidra symbol: FUN_00fba680 */


void FUN_00fba680(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x818) == '\0';
  *(undefined1 *)(param_1 + 0x818) = 0;
  return;
}


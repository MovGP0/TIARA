/* Ghidra address: 0141b540 */
/* Ghidra symbol: FUN_0141b540 */


void FUN_0141b540(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x6e4) == '\0';
  *(undefined1 *)(param_1 + 0x6e4) = 0;
  return;
}


/* Ghidra address: 00faf540 */
/* Ghidra symbol: FUN_00faf540 */


void FUN_00faf540(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x6e0) == '\0';
  *(undefined1 *)(param_1 + 0x6e0) = 0;
  return;
}


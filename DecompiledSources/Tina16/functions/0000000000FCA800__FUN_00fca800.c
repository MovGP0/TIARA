/* Ghidra address: 00fca800 */
/* Ghidra symbol: FUN_00fca800 */


void FUN_00fca800(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x768) == '\0';
  *(undefined1 *)(param_1 + 0x768) = 0;
  return;
}


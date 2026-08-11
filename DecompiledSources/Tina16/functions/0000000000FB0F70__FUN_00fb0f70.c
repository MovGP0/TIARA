/* Ghidra address: 00fb0f70 */
/* Ghidra symbol: FUN_00fb0f70 */


void FUN_00fb0f70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x730) == '\0';
  *(undefined1 *)(param_1 + 0x730) = 0;
  return;
}


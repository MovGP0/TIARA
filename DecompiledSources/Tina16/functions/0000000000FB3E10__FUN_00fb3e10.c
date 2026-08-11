/* Ghidra address: 00fb3e10 */
/* Ghidra symbol: FUN_00fb3e10 */


void FUN_00fb3e10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x810) == '\0';
  *(undefined1 *)(param_1 + 0x810) = 0;
  return;
}


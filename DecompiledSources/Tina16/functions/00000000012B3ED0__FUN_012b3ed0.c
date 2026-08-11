/* Ghidra address: 012b3ed0 */
/* Ghidra symbol: FUN_012b3ed0 */


void FUN_012b3ed0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x710) == '\0';
  *(undefined1 *)(param_1 + 0x710) = 0;
  return;
}


/* Ghidra address: 01027530 */
/* Ghidra symbol: FUN_01027530 */


void FUN_01027530(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x6d8) == '\0';
  *(undefined1 *)(param_1 + 0x6d8) = 0;
  return;
}


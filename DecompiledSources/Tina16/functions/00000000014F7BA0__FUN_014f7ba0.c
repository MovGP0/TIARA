/* Ghidra address: 014f7ba0 */
/* Ghidra symbol: FUN_014f7ba0 */


void FUN_014f7ba0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x6f0) == '\0';
  *(undefined1 *)(param_1 + 0x6f0) = 0;
  return;
}


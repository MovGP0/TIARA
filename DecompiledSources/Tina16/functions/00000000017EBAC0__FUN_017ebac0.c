/* Ghidra address: 017ebac0 */
/* Ghidra symbol: FUN_017ebac0 */


void FUN_017ebac0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x9b0) == '\0';
  *(undefined1 *)(param_1 + 0x9b0) = 0;
  return;
}


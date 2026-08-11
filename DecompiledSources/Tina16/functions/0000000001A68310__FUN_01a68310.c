/* Ghidra address: 01a68310 */
/* Ghidra symbol: FUN_01a68310 */


void FUN_01a68310(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x728) == '\0';
  *(undefined1 *)(param_1 + 0x728) = 0;
  return;
}


/* Ghidra address: 01439600 */
/* Ghidra symbol: FUN_01439600 */


void FUN_01439600(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x6d8) == '\0';
  *(undefined1 *)(*(longlong *)(param_1 + 0x6b0) + 0xe38) = 0;
  return;
}


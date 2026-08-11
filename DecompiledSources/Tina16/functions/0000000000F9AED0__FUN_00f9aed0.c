/* Ghidra address: 00f9aed0 */
/* Ghidra symbol: FUN_00f9aed0 */


void FUN_00f9aed0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x7c0) == '\0';
  *(undefined1 *)(param_1 + 0x7c0) = 0;
  return;
}


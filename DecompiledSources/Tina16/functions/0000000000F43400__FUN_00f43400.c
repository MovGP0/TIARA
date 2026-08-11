/* Ghidra address: 00f43400 */
/* Ghidra symbol: FUN_00f43400 */


void FUN_00f43400(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x739) == '\0';
  *(undefined1 *)(param_1 + 0x739) = 0;
  return;
}


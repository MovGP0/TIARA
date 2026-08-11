/* Ghidra address: 01411090 */
/* Ghidra symbol: FUN_01411090 */


void FUN_01411090(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x7a8) == '\0';
  *(undefined1 *)(param_1 + 0x7a8) = 0;
  return;
}


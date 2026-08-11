/* Ghidra address: 00fc2600 */
/* Ghidra symbol: FUN_00fc2600 */


void FUN_00fc2600(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x750) == '\0';
  *(undefined1 *)(param_1 + 0x750) = 0;
  return;
}


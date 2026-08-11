/* Ghidra address: 00fc9030 */
/* Ghidra symbol: FUN_00fc9030 */


void FUN_00fc9030(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x720) == '\0';
  *(undefined1 *)(param_1 + 0x720) = 0;
  return;
}


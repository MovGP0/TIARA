/* Ghidra address: 013f5590 */
/* Ghidra symbol: FUN_013f5590 */


void FUN_013f5590(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x8e0) == '\0';
  *(undefined1 *)(param_1 + 0x8e0) = 0;
  return;
}


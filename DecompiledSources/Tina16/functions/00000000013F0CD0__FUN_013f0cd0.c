/* Ghidra address: 013f0cd0 */
/* Ghidra symbol: FUN_013f0cd0 */


void FUN_013f0cd0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x850) == '\0';
  *(undefined1 *)(param_1 + 0x850) = 0;
  return;
}


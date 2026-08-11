/* Ghidra address: 013f67a0 */
/* Ghidra symbol: FUN_013f67a0 */


void FUN_013f67a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(char *)(param_1 + 0x723) == '\0';
  *(undefined1 *)(param_1 + 0x723) = 0;
  return;
}


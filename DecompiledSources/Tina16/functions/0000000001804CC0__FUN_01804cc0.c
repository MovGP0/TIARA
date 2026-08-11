/* Ghidra address: 01804cc0 */
/* Ghidra symbol: FUN_01804cc0 */


void FUN_01804cc0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  FUN_004b6dc0(*(undefined8 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


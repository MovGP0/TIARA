/* Ghidra address: 01b8cfb0 */
/* Ghidra symbol: FUN_01b8cfb0 */


void FUN_01b8cfb0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_01b8cf60();
  return;
}


/* Ghidra address: 01681bc0 */
/* Ghidra symbol: FUN_01681bc0 */


void FUN_01681bc0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_01681b70();
  return;
}


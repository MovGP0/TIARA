/* Ghidra address: 0171dbb0 */
/* Ghidra symbol: FUN_0171dbb0 */


void FUN_0171dbb0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_0171db60();
  return;
}


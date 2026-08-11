/* Ghidra address: 004fa090 */
/* Ghidra symbol: FUN_004fa090 */


void FUN_004fa090(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_004fa040();
  return;
}


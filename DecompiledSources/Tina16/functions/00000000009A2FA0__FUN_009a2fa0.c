/* Ghidra address: 009a2fa0 */
/* Ghidra symbol: FUN_009a2fa0 */


void FUN_009a2fa0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_009a2f50();
  return;
}


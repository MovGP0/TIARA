/* Ghidra address: 009a1cb0 */
/* Ghidra symbol: FUN_009a1cb0 */


void FUN_009a1cb0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_009a1c60();
  return;
}


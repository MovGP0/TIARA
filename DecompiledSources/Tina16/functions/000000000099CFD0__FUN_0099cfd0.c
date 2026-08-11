/* Ghidra address: 0099cfd0 */
/* Ghidra symbol: FUN_0099cfd0 */


void FUN_0099cfd0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_0099cf80();
  return;
}


/* Ghidra address: 009aa2c0 */
/* Ghidra symbol: FUN_009aa2c0 */


void FUN_009aa2c0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_009aa270();
  return;
}


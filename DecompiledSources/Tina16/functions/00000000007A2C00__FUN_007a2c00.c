/* Ghidra address: 007a2c00 */
/* Ghidra symbol: FUN_007a2c00 */


void FUN_007a2c00(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_007a2bb0();
  return;
}


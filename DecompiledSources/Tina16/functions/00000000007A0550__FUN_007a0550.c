/* Ghidra address: 007a0550 */
/* Ghidra symbol: FUN_007a0550 */


void FUN_007a0550(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_007a0500();
  return;
}


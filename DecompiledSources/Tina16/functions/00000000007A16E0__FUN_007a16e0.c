/* Ghidra address: 007a16e0 */
/* Ghidra symbol: FUN_007a16e0 */


void FUN_007a16e0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_007a1690();
  return;
}


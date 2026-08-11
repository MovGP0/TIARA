/* Ghidra address: 007a8650 */
/* Ghidra symbol: FUN_007a8650 */


void FUN_007a8650(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_007a8600();
  return;
}


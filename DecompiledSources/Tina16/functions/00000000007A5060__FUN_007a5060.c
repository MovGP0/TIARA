/* Ghidra address: 007a5060 */
/* Ghidra symbol: FUN_007a5060 */


void FUN_007a5060(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_007a5010();
  return;
}


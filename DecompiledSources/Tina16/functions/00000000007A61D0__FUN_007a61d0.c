/* Ghidra address: 007a61d0 */
/* Ghidra symbol: FUN_007a61d0 */


void FUN_007a61d0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_007a6180();
  return;
}


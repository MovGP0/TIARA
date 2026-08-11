/* Ghidra address: 008177b0 */
/* Ghidra symbol: FUN_008177b0 */


void FUN_008177b0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0xc) = *param_2;
  *(undefined8 *)(param_1 + 0x14) = param_2[1];
  return;
}


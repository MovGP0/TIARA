/* Ghidra address: 004f05b0 */
/* Ghidra symbol: FUN_004f05b0 */


void FUN_004f05b0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_004f0560();
  return;
}


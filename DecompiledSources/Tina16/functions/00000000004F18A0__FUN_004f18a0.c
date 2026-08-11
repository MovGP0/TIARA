/* Ghidra address: 004f18a0 */
/* Ghidra symbol: FUN_004f18a0 */


void FUN_004f18a0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_004f1850();
  return;
}


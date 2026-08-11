/* Ghidra address: 004f7580 */
/* Ghidra symbol: FUN_004f7580 */


void FUN_004f7580(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_004f7530();
  return;
}


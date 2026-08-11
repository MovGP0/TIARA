/* Ghidra address: 004f4400 */
/* Ghidra symbol: FUN_004f4400 */


void FUN_004f4400(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_004f43b0();
  return;
}


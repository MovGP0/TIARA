/* Ghidra address: 00a77a90 */
/* Ghidra symbol: FUN_00a77a90 */


void FUN_00a77a90(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x638) = *param_2;
  *(undefined8 *)(param_1 + 0x640) = param_2[1];
  return;
}


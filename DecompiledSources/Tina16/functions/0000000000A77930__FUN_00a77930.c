/* Ghidra address: 00a77930 */
/* Ghidra symbol: FUN_00a77930 */


void FUN_00a77930(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x588) = *param_2;
  *(undefined8 *)(param_1 + 0x590) = param_2[1];
  return;
}


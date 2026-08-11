/* Ghidra address: 00a77800 */
/* Ghidra symbol: FUN_00a77800 */


void FUN_00a77800(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x548) = *param_2;
  *(undefined8 *)(param_1 + 0x550) = param_2[1];
  return;
}


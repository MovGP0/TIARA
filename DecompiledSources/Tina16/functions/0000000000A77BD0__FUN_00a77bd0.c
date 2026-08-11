/* Ghidra address: 00a77bd0 */
/* Ghidra symbol: FUN_00a77bd0 */


void FUN_00a77bd0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x6d8) = *param_2;
  *(undefined8 *)(param_1 + 0x6e0) = param_2[1];
  return;
}


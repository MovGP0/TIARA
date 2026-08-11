/* Ghidra address: 00be37e0 */
/* Ghidra symbol: FUN_00be37e0 */


void FUN_00be37e0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_00be3790();
  return;
}


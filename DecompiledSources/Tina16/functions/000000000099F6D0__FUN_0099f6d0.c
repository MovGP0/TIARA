/* Ghidra address: 0099f6d0 */
/* Ghidra symbol: FUN_0099f6d0 */


void FUN_0099f6d0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_0099f680();
  return;
}


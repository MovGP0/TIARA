/* Ghidra address: 015859f0 */
/* Ghidra symbol: FUN_015859f0 */


void FUN_015859f0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_015859a0();
  return;
}


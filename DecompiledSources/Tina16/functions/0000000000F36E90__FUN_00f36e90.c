/* Ghidra address: 00f36e90 */
/* Ghidra symbol: FUN_00f36e90 */


void FUN_00f36e90(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_00f36e40();
  return;
}


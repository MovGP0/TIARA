/* Ghidra address: 00f39310 */
/* Ghidra symbol: FUN_00f39310 */


void FUN_00f39310(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_00f392c0();
  return;
}


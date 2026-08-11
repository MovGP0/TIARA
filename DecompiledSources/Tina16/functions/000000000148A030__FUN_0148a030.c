/* Ghidra address: 0148a030 */
/* Ghidra symbol: FUN_0148a030 */


void FUN_0148a030(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_01489fe0();
  return;
}


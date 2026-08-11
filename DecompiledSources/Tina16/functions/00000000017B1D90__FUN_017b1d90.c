/* Ghidra address: 017b1d90 */
/* Ghidra symbol: FUN_017b1d90 */


void FUN_017b1d90(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_017aff80(param_1,param_2,param_3);
  if (param_3 == 1) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x48);
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x48);
  return;
}


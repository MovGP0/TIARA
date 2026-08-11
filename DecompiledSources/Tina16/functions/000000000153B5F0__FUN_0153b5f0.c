/* Ghidra address: 0153b5f0 */
/* Ghidra symbol: FUN_0153b5f0 */


void FUN_0153b5f0(undefined8 param_1,longlong param_2)

{
  FUN_0153a8e0(param_2);
  if (param_2 == 0) {
    *(undefined8 *)(PTR_DAT_02004010 + 0x2b0) = 0;
    *(undefined8 *)(PTR_DAT_02004010 + 0x2b8) = param_1;
  }
  else {
    *(undefined8 *)(param_2 + 0x742) = 0;
    *(undefined8 *)(param_2 + 0x74a) = param_1;
  }
  return;
}


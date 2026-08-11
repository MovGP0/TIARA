/* Ghidra address: 00729e20 */
/* Ghidra symbol: FUN_00729e20 */


void FUN_00729e20(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    thunk_FUN_0398fb79(*(longlong *)(param_1 + 0x30));
  }
  FUN_004b17c0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


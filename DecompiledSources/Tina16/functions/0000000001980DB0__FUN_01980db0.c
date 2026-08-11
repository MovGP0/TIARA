/* Ghidra address: 01980db0 */
/* Ghidra symbol: FUN_01980db0 */


void FUN_01980db0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00452320(param_1 + 0x20);
  FUN_004b1010(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


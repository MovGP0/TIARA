/* Ghidra address: 01888370 */
/* Ghidra symbol: FUN_01888370 */


void FUN_01888370(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_018883e0(param_1);
  FUN_00452320(param_1 + 0x18);
  FUN_00452320(param_1 + 0x20);
  FUN_00452320(param_1 + 0x28);
  FUN_00452320(param_1 + 0x48);
  FUN_00452320(param_1 + 0x50);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


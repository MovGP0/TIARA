/* Ghidra address: 01980190 */
/* Ghidra symbol: FUN_01980190 */


void FUN_01980190(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00452320(param_1 + 8);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


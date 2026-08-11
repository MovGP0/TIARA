/* Ghidra address: 006a60d0 */
/* Ghidra symbol: FUN_006a60d0 */


void FUN_006a60d0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (DAT_020123f8 == param_1) {
    DAT_020123f8 = 0;
  }
  FUN_004b1010(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


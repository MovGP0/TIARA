/* Ghidra address: 00c8c850 */
/* Ghidra symbol: FUN_00c8c850 */


void FUN_00c8c850(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (DAT_01ea9398 == param_1) {
    DAT_01ea9398 = 0;
  }
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


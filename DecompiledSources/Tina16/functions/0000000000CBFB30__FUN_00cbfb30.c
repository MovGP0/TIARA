/* Ghidra address: 00cbfb30 */
/* Ghidra symbol: FUN_00cbfb30 */


void FUN_00cbfb30(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(char *)(param_1 + 0x20) != '\0') {
    FUN_00cbfb80(param_1);
  }
  FUN_004afb60(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


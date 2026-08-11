/* Ghidra address: 00b171a0 */
/* Ghidra symbol: FUN_00b171a0 */


void FUN_00b171a0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_0041b800(param_1 + 0x10);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


/* Ghidra address: 00c400b0 */
/* Ghidra symbol: FUN_00c400b0 */


void FUN_00c400b0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00c403e0(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
  FUN_004ae7a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


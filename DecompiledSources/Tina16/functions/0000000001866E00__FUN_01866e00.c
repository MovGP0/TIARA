/* Ghidra address: 01866e00 */
/* Ghidra symbol: FUN_01866e00 */


void FUN_01866e00(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_004ae7a0(param_1,param_2 & 0xfffffffc);
  FUN_00452320(param_1 + 0x18);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


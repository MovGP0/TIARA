/* Ghidra address: 00c22d50 */
/* Ghidra symbol: FUN_00c22d50 */


void FUN_00c22d50(longlong *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00c22da0(param_1);
  (**(code **)(*param_1 + 0x38))(param_1);
  FUN_004b1010(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


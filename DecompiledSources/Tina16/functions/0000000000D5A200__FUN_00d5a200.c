/* Ghidra address: 00d5a200 */
/* Ghidra symbol: FUN_00d5a200 */


void FUN_00d5a200(longlong *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)(*param_1 + 0x10))(param_1);
  FUN_004ae7a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


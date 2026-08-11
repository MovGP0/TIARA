/* Ghidra address: 004ae7a0 */
/* Ghidra symbol: FUN_004ae7a0 */


void FUN_004ae7a0(longlong *param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)(*param_1 + 0x10))(param_1);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


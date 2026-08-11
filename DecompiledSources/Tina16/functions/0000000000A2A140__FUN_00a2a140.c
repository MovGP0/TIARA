/* Ghidra address: 00a2a140 */
/* Ghidra symbol: FUN_00a2a140 */


void FUN_00a2a140(longlong *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)(*param_1 + 0x90))(param_1);
  FUN_004b56a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


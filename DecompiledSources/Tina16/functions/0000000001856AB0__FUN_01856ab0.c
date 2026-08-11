/* Ghidra address: 01856ab0 */
/* Ghidra symbol: FUN_01856ab0 */


void FUN_01856ab0(longlong *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_01869670(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


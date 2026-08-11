/* Ghidra address: 00994f90 */
/* Ghidra symbol: FUN_00994f90 */


void FUN_00994f90(longlong *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)(*param_1 + 0x10))(param_1);
  FUN_00410f20(param_1[1]);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


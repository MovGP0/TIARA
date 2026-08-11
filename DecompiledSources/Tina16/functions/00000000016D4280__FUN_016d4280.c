/* Ghidra address: 016d4280 */
/* Ghidra symbol: FUN_016d4280 */


void FUN_016d4280(longlong *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)(*param_1 + 0x268))(param_1);
  (**(code **)(*param_1 + 0x288))(param_1);
  FUN_016d3d60(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


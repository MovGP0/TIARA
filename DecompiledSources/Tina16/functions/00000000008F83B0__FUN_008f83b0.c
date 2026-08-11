/* Ghidra address: 008f83b0 */
/* Ghidra symbol: FUN_008f83b0 */


void FUN_008f83b0(longlong *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_004b1010(param_1,param_2 & 0xfffffffc);
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  (**(code **)(*param_1 + 0x58))(param_1,0);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


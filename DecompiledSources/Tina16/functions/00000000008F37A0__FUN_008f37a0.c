/* Ghidra address: 008f37a0 */
/* Ghidra symbol: FUN_008f37a0 */


void FUN_008f37a0(longlong *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (param_1[1] != 0) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  FUN_004095f0(param_1[2]);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


/* Ghidra address: 01410990 */
/* Ghidra symbol: FUN_01410990 */


void FUN_01410990(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x808));
  FUN_004095f0(*(undefined8 *)(param_1 + 0x7b8),(longlong)(*(int *)(param_1 + 0x7b0) * 4));
  FUN_007fc890(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


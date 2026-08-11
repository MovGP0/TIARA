/* Ghidra address: 018b7c40 */
/* Ghidra symbol: FUN_018b7c40 */


void FUN_018b7c40(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  FUN_018b7df0(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x70));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x58));
  FUN_018b80f0(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x80));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x88));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x98));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xd0));
  FUN_01978bb0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


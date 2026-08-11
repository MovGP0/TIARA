/* Ghidra address: 00f8a610 */
/* Ghidra symbol: FUN_00f8a610 */


void FUN_00f8a610(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_015f4a70(*(undefined8 *)PTR_DAT_02002ba8);
  FUN_00410f20(*(undefined8 *)PTR_DAT_02002ba8);
  *(undefined8 *)PTR_DAT_02002ba8 = 0;
  FUN_015f4a70(*(undefined8 *)(param_1 + 0x34d8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x34d8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x3478));
  FUN_015f4a70(*(undefined8 *)(param_1 + 0x3518));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x3520));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x3528));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x3530));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x3538));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x3540));
  if (*(longlong *)(param_1 + 0x3548) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x3548));
  }
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


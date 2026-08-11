/* Ghidra address: 008f9070 */
/* Ghidra symbol: FUN_008f9070 */


void FUN_008f9070(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  (**(code **)(*param_1 + 0x20))(param_1);
  if (*(int *)((longlong)param_1 + 0xc) == (int)param_1[1]) {
    FUN_008f8e00(param_1);
  }
  if (param_2 < *(int *)((longlong)param_1 + 0xc)) {
    FUN_00409a70(param_1[3] + (longlong)param_2 * 0x10,param_1[3] + (longlong)(param_2 + 1) * 0x10,
                 (longlong)((*(int *)((longlong)param_1 + 0xc) - param_2) * 0x10));
  }
  lVar1 = (longlong)param_2;
  *(undefined8 *)(param_1[3] + lVar1 * 0x10) = 0;
  *(undefined8 *)(param_1[3] + 8 + lVar1 * 0x10) = param_4;
  FUN_00414b90(param_1[3] + lVar1 * 0x10,param_3);
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}


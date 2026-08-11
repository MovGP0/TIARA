/* Ghidra address: 01615b80 */
/* Ghidra symbol: FUN_01615b80 */


void FUN_01615b80(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x10) != param_4) {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_004095f0(*(longlong *)(param_1 + 8));
    }
    *(int *)(param_1 + 0x10) = param_4;
    uVar1 = FUN_00409570((longlong)param_4);
    *(undefined8 *)(param_1 + 8) = uVar1;
  }
  FUN_00409a70(param_2,*(undefined8 *)(param_1 + 8),(longlong)param_4);
  *(undefined4 *)(param_1 + 0x14) = param_3;
  return;
}


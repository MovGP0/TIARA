/* Ghidra address: 01612510 */
/* Ghidra symbol: FUN_01612510 */


void FUN_01612510(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x10) < param_2) {
    lVar1 = *(longlong *)(param_1 + 8);
    uVar2 = FUN_00409570((longlong)param_2);
    *(undefined8 *)(param_1 + 8) = uVar2;
    FUN_00409a70(lVar1,uVar2,(longlong)*(int *)(param_1 + 0x10));
    *(int *)(param_1 + 0x10) = param_2;
    if (lVar1 != 0) {
      FUN_004095f0(lVar1);
    }
  }
  return;
}


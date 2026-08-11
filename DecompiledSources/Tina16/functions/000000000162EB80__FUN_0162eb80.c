/* Ghidra address: 0162eb80 */
/* Ghidra symbol: FUN_0162eb80 */


void FUN_0162eb80(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_0162eae0(param_1,param_2);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_2 + 8);
  FUN_01612510(param_3,*(int *)(param_1 + 0x10) + *(int *)(param_2 + 0x10));
  lVar3 = *(longlong *)(param_3 + 8);
  FUN_00409a70(uVar1,lVar3,(longlong)*(int *)(param_1 + 0x10));
  FUN_00409a70(uVar2,lVar3 + *(int *)(param_1 + 0x10),(longlong)*(int *)(param_2 + 0x10));
  *(int *)(param_3 + 0x10) = *(int *)(param_1 + 0x10) + *(int *)(param_2 + 0x10);
  *(undefined1 *)(param_3 + 0x38) = 1;
  FUN_0162eaa0(param_1,param_2,param_3);
  return;
}


/* Ghidra address: 00a1dc10 */
/* Ghidra symbol: FUN_00a1dc10 */


void FUN_00a1dc10(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  if (iVar1 != 100) {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x14;
    *(int *)(lVar2 + 0x2c) = iVar1;
    (**(code **)*param_1)(param_1);
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  (**(code **)(param_1[5] + 0x10))(param_1);
  FUN_00a1dd30(param_1);
  (**(code **)(param_1[0x3a] + 0x20))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00a1dc69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[5] + 0x20))(param_1);
  return;
}


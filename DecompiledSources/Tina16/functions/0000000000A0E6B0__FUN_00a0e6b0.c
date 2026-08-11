/* Ghidra address: 00a0e6b0 */
/* Ghidra symbol: FUN_00a0e6b0 */


void FUN_00a0e6b0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar2 = param_1[0x44];
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  if (iVar1 != 0xcf) {
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0x28) = 0x14;
    *(int *)(lVar3 + 0x2c) = iVar1;
    (**(code **)*param_1)(param_1);
  }
  if (((*(int *)((longlong)param_1 + 0x6c) != 0) && ((int)param_1[0x10] != 0)) &&
     (param_1[0x14] != 0)) {
    lVar3 = *(longlong *)(lVar2 + 0x28);
    param_1[0x4e] = lVar3;
    (**(code **)(lVar3 + 0x18))(param_1);
    *(undefined4 *)(lVar2 + 0x10) = 0;
    return;
  }
  puVar4 = (undefined8 *)*param_1;
  *(undefined4 *)(puVar4 + 5) = 0x2e;
                    /* WARNING: Could not recover jumptable at 0x00a0e72a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(param_1);
  return;
}


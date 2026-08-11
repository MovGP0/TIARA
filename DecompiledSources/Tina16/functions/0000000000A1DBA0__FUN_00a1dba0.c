/* Ghidra address: 00a1dba0 */
/* Ghidra symbol: FUN_00a1dba0 */


void FUN_00a1dba0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  if (((int)param_1[0x26] != 0) || (2 < iVar1 - 0x65U)) {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x14;
    *(int *)(lVar2 + 0x2c) = iVar1;
    (**(code **)*param_1)(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00a1dbf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[0x3a] + 0x28))(param_1,param_2,param_3);
  return;
}


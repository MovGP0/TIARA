/* Ghidra address: 00806990 */
/* Ghidra symbol: FUN_00806990 */


void FUN_00806990(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if (param_2 == 0) {
    param_2 = FUN_007ffaf0(param_1);
  }
  iVar1 = FUN_007fd7d0(param_1);
  iVar2 = FUN_007fd800(param_1);
  iVar3 = FUN_007fd7d0(param_1);
  FUN_00807850(param_2,&local_38);
  if (local_30 < iVar3 + (int)param_1[0x13]) {
    FUN_00807850(param_2,&local_38);
    iVar1 = local_30 - (int)param_1[0x13];
  }
  iVar3 = FUN_007fd7d0(param_1);
  FUN_00807850(param_2,&local_38);
  if (iVar3 < local_38) {
    FUN_00807850(param_2,&local_38);
    iVar1 = local_38;
  }
  iVar3 = FUN_007fd800(param_1);
  FUN_00807850(param_2,&local_38);
  if (local_2c < iVar3 + *(int *)((longlong)param_1 + 0x9c)) {
    FUN_00807850(param_2,&local_38);
    iVar2 = local_2c - *(int *)((longlong)param_1 + 0x9c);
  }
  iVar3 = FUN_007fd800(param_1);
  FUN_00807850(param_2,&local_38);
  if (iVar3 < local_34) {
    FUN_00807850(param_2,&local_38);
    iVar2 = local_34;
  }
  (**(code **)(*param_1 + 400))
            (param_1,iVar1,iVar2,(int)param_1[0x13],*(undefined4 *)((longlong)param_1 + 0x9c));
  return;
}


/* Ghidra address: 0045a100 */
/* Ghidra symbol: FUN_0045a100 */


void FUN_0045a100(longlong *param_1,longlong param_2,int param_3,int *param_4)

{
  longlong lVar1;
  undefined *puVar2;
  int iVar3;
  int local_28 [2];
  undefined1 local_20;
  
  if ((param_2 == 0) && ((int)param_4 != 0)) {
    param_2 = 1;
    puVar2 = PTR_PTR_020025f0;
    param_1 = (longlong *)FUN_0044d710(&PTR_FUN_0043a1a0);
    param_3 = (int)puVar2;
    FUN_004134c0();
  }
  if (param_3 < 0) {
    local_20 = 0;
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    param_4 = local_28;
    puVar2 = PTR_PTR_02003400;
    local_28[0] = param_3;
    param_1 = (longlong *)FUN_0044d8d0(&PTR_FUN_0043a1a0);
    param_3 = (int)puVar2;
    FUN_004134c0();
  }
  iVar3 = (int)param_4;
  if (iVar3 < 0) {
    local_20 = 0;
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    param_4 = local_28;
    puVar2 = PTR_PTR_020031c0;
    local_28[0] = iVar3;
    param_1 = (longlong *)FUN_0044d8d0(&PTR_FUN_0043a1a0);
    param_3 = (int)puVar2;
    FUN_004134c0();
  }
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + -8);
  }
  iVar3 = (int)param_4;
  if (lVar1 - param_3 < (longlong)iVar3) {
    local_20 = 0;
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    param_4 = local_28;
    puVar2 = PTR_PTR_020031c0;
    local_28[0] = iVar3;
    param_1 = (longlong *)FUN_0044d8d0(&PTR_FUN_0043a1a0,param_2,PTR_PTR_020031c0,param_4,0);
    param_3 = (int)puVar2;
    FUN_004134c0();
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_2 + param_3,(ulonglong)param_4 & 0xffffffff);
  return;
}


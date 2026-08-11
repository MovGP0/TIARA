/* Ghidra address: 004593b0 */
/* Ghidra symbol: FUN_004593b0 */


void FUN_004593b0(undefined8 *param_1,longlong param_2,int param_3,int *param_4)

{
  longlong lVar1;
  undefined *puVar2;
  int iVar3;
  int local_28 [2];
  undefined1 local_20;
  
  if (param_3 < 0) {
    local_20 = 0;
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    param_4 = local_28;
    puVar2 = PTR_PTR_020046a0;
    local_28[0] = param_3;
    param_1 = (undefined8 *)FUN_0044d8d0(&PTR_FUN_0043a1a0);
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
    param_1 = (undefined8 *)FUN_0044d8d0(&PTR_FUN_0043a1a0);
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
    param_1 = (undefined8 *)FUN_0044d8d0(&PTR_FUN_0043a1a0,param_2,PTR_PTR_020031c0,param_4,0);
    param_3 = (int)puVar2;
    FUN_004134c0();
  }
  (**(code **)*param_1)(param_1,param_2 + (longlong)param_3 * 2,(ulonglong)param_4 & 0xffffffff);
  return;
}


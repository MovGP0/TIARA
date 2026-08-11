/* Ghidra address: 004592c0 */
/* Ghidra symbol: FUN_004592c0 */


void FUN_004592c0(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined *puVar1;
  int *piVar2;
  int local_28 [2];
  undefined1 local_20;
  
  if (param_4 < 0) {
    local_20 = 0;
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    piVar2 = local_28;
    puVar1 = PTR_PTR_020046a0;
    local_28[0] = param_4;
    param_1 = (undefined8 *)FUN_0044d8d0(&PTR_FUN_0043a1a0,param_2,PTR_PTR_020046a0,piVar2,0);
    param_4 = (int)piVar2;
    param_3 = (int)puVar1;
    FUN_004134c0();
  }
  if (param_5 < 0) {
    local_28[0] = param_5;
    local_20 = 0;
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    piVar2 = local_28;
    puVar1 = PTR_PTR_020031c0;
    param_1 = (undefined8 *)FUN_0044d8d0(&PTR_FUN_0043a1a0,param_2,PTR_PTR_020031c0,piVar2,0);
    param_4 = (int)piVar2;
    param_3 = (int)puVar1;
    FUN_004134c0();
  }
  if ((param_3 - param_4) + 1 < param_5) {
    local_28[0] = param_5;
    local_20 = 0;
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    piVar2 = local_28;
    param_1 = (undefined8 *)FUN_0044d8d0(&PTR_FUN_0043a1a0,param_2,PTR_PTR_020031c0,piVar2,0);
    param_4 = (int)piVar2;
    FUN_004134c0();
  }
  (**(code **)*param_1)(param_1,param_2 + (longlong)param_4 * 2,param_5);
  return;
}


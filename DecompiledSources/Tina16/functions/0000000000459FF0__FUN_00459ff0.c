/* Ghidra address: 00459ff0 */
/* Ghidra symbol: FUN_00459ff0 */


void FUN_00459ff0(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int local_28 [2];
  undefined1 local_20;
  
  param_3 = param_3 + 1;
  if ((param_3 == 0) && (param_5 != 0)) {
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    param_1 = (longlong *)FUN_0044d710(&PTR_FUN_0043a1a0,param_2,PTR_PTR_020025f0);
    param_3 = FUN_004134c0();
  }
  if (param_4 < 0) {
    local_20 = 0;
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    piVar1 = local_28;
    local_28[0] = param_4;
    param_1 = (longlong *)FUN_0044d8d0(&PTR_FUN_0043a1a0,param_2,PTR_PTR_02003400,piVar1,0);
    param_4 = (int)piVar1;
    param_3 = FUN_004134c0();
  }
  if (param_5 < 0) {
    local_28[0] = param_5;
    local_20 = 0;
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    piVar1 = local_28;
    param_1 = (longlong *)FUN_0044d8d0(&PTR_FUN_0043a1a0,param_2,PTR_PTR_020031c0,piVar1,0);
    param_4 = (int)piVar1;
    param_3 = FUN_004134c0();
  }
  if (param_3 - param_4 < param_5) {
    local_28[0] = param_5;
    local_20 = 0;
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    piVar1 = local_28;
    param_1 = (longlong *)FUN_0044d8d0(&PTR_FUN_0043a1a0,param_2,PTR_PTR_020031c0,piVar1,0);
    param_4 = (int)piVar1;
    FUN_004134c0();
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_2 + param_4,param_5);
  return;
}


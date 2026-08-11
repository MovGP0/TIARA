/* Ghidra address: 00ea4580 */
/* Ghidra symbol: FUN_00ea4580 */


int FUN_00ea4580(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int local_18 [2];
  undefined1 local_10;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x504) < 1) {
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    param_1 = FUN_0044d710(&PTR_FUN_00ea2d28,param_2,PTR_PTR_02001290);
    FUN_004134c0();
  }
  if ((int)param_2 < 0) {
    bVar1 = true;
  }
  else {
    if (*(int *)(param_1 + 0x504) < 1) {
      param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      param_1 = FUN_0044d710(&PTR_FUN_00ea2d28,param_2,PTR_PTR_02001290);
      FUN_004134c0();
    }
    bVar1 = *(int *)(param_1 + 0x504) + -1 < (int)param_2;
  }
  local_18[0] = (int)param_2;
  if (bVar1) {
    local_10 = 0;
    uVar3 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    iVar2 = (int)uVar3;
    param_1 = FUN_0044d8d0(&PTR_FUN_00ea2d28,uVar3,PTR_PTR_020013c8,local_18,0);
    FUN_004134c0();
    local_18[0] = iVar2;
  }
  return *(int *)(param_1 + 0x50 + (longlong)(local_18[0] * 2 + 1) * 4) -
         *(int *)(param_1 + 0x50 + (longlong)(local_18[0] * 2) * 4);
}


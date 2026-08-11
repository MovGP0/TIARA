/* Ghidra address: 00ea4640 */
/* Ghidra symbol: FUN_00ea4640 */


ulonglong FUN_00ea4640(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int local_18 [2];
  undefined1 local_10;
  
  if (*(int *)(param_1 + 0x504) < 1) {
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    param_1 = FUN_0044d710(&PTR_FUN_00ea2d28,param_2,PTR_PTR_02001290);
    FUN_004134c0();
  }
  local_18[0] = (int)param_2;
  if (local_18[0] < 0) {
    bVar1 = false;
  }
  else {
    if (*(int *)(param_1 + 0x504) < 1) {
      uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      local_18[0] = (int)uVar2;
      param_1 = FUN_0044d710(&PTR_FUN_00ea2d28,uVar2,PTR_PTR_02001290);
      FUN_004134c0();
    }
    bVar1 = local_18[0] <= *(int *)(param_1 + 0x504) + -1;
  }
  if (bVar1) {
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x50 + (longlong)(local_18[0] * 2) * 4);
  }
  else {
    local_10 = 0;
    uVar2 = FUN_0044d8d0(&PTR_FUN_00ea2d28,1,PTR_PTR_020013c8,local_18,0);
    uVar3 = FUN_004134c0(uVar2);
  }
  return uVar3;
}


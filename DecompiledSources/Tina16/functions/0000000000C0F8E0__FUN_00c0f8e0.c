/* Ghidra address: 00c0f8e0 */
/* Ghidra symbol: FUN_00c0f8e0 */


undefined8 FUN_00c0f8e0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  thunk_FUN_03cc0d62(&local_20);
  uVar2 = FUN_0064d3a0(param_1,&local_20);
  local_20._0_4_ = (int)uVar2;
  if (((((int)local_20 < 0) ||
       (local_20._4_4_ = (int)(uVar2 >> 0x20), iVar1 = local_20._4_4_, (longlong)uVar2 < 0)) ||
      (*(int *)(param_1 + 0x98) < (int)local_20)) || (*(int *)(param_1 + 0x9c) < local_20._4_4_)) {
    uVar3 = 0;
  }
  else {
    local_20 = uVar2;
    local_30[0] = FUN_00bf19b0(param_1,uVar2 & 0xffffffff,iVar1);
    uVar3 = FUN_00c0ee50(param_1,local_30);
    *param_2 = uVar3;
    uVar3 = 1;
  }
  return uVar3;
}


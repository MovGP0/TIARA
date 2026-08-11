/* Ghidra address: 00651f50 */
/* Ghidra symbol: FUN_00651f50 */


undefined8 FUN_00651f50(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  undefined8 local_20;
  
  uVar1 = *param_2;
  uVar3 = 0;
  local_20._0_4_ = (int)uVar1;
  if ((int)local_20 < 1) {
    uVar3 = 3;
  }
  else if ((int)local_20 < *(int *)(param_1 + 0x98)) {
    local_20._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
    if (local_20._4_4_ < 1) {
      uVar3 = 1;
    }
    else if (local_20._4_4_ < *(int *)(param_1 + 0x9c)) {
      local_48 = (double)(int)local_20;
      local_40 = (double)(*(int *)(param_1 + 0x98) - (int)local_20);
      local_38 = (double)local_20._4_4_;
      local_30 = (double)(*(int *)(param_1 + 0x9c) - local_20._4_4_);
      local_20 = uVar1;
      iVar2 = FUN_00651f00(auStack_68,&local_48,3);
      if (iVar2 == 0) {
        uVar3 = 3;
      }
      else if (iVar2 == 1) {
        uVar3 = 4;
      }
      else if (iVar2 == 2) {
        uVar3 = 1;
      }
      else if (iVar2 == 3) {
        uVar3 = 2;
      }
    }
    else {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 4;
  }
  return uVar3;
}


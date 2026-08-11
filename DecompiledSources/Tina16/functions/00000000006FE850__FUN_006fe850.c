/* Ghidra address: 006fe850 */
/* Ghidra symbol: FUN_006fe850 */


undefined4 FUN_006fe850(undefined8 param_1,undefined8 param_2,int *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  int local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = 0;
  uVar4 = 0;
  FUN_006fe580(param_1,0);
  FUN_006fe240(param_1,&local_38,(longlong)&local_38 + 4);
  FUN_006fe580(param_1,0x7fffffff);
  FUN_006fe240(param_1,&local_30,(longlong)&local_30 + 4);
  do {
    while( true ) {
      uVar2 = local_40;
      if ((int)local_30 <= (int)local_38) {
        return uVar4;
      }
      uVar1 = (longlong)((int)local_38 + (int)local_30) / 2;
      iVar3 = local_40._4_4_;
      local_40 = CONCAT44(local_40._4_4_,(int)uVar1);
      uVar4 = FUN_006fe580(param_1,uVar1 & 0xffffffff);
      FUN_006fe240(param_1,&local_40,(longlong)&local_40 + 4);
      if (local_40._4_4_ <= *param_3) break;
      if (((int)local_38 == (int)local_40) && (local_38._4_4_ == local_40._4_4_)) {
        uVar4 = FUN_006fe580(param_1,local_30 & 0xffffffff);
        return uVar4;
      }
      local_38 = local_40;
    }
    if (*param_3 <= local_40._4_4_) {
      return uVar4;
    }
    local_30 = local_40;
    local_48 = (int)uVar2;
  } while ((local_48 != (int)local_40) || (iVar3 != local_40._4_4_));
  return uVar4;
}


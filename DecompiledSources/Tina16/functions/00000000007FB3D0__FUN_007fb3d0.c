/* Ghidra address: 007fb3d0 */
/* Ghidra symbol: FUN_007fb3d0 */


void FUN_007fb3d0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int extraout_EAX;
  int iVar4;
  int iVar5;
  int iVar6;
  int extraout_var;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int iStack_2c;
  
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0xe0))(param_2,&local_38);
    uVar2 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x498) + 0x22);
    uVar3 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x4b0) + 0x22);
    local_38 = CONCAT44(local_38._4_4_ - uVar3,(int)local_38 - uVar2);
    _local_30 = CONCAT44(iStack_2c + uVar3,local_30 + uVar2);
    local_40 = FUN_0064d1f0(param_2,&local_38);
    local_38 = FUN_0064d3a0(param_1,&local_40);
    local_40 = FUN_0064d1f0(param_2,&local_30);
    FUN_0064d3a0(param_1,&local_40);
    iVar6 = (int)local_38;
    local_30 = extraout_EAX;
    iStack_2c = extraout_var;
    if ((int)local_38 < 0) {
      FUN_007fa6c0(*(longlong *)(param_1 + 0x498),
                   *(int *)(*(longlong *)(param_1 + 0x498) + 0x14) + (int)local_38);
    }
    else {
      iVar4 = FUN_0064d0b0(param_1);
      if (iVar4 < extraout_EAX) {
        iVar4 = FUN_0064d0b0(param_1);
        if (iVar4 < extraout_EAX - iVar6) {
          local_30 = FUN_0064d0b0(param_1);
          local_30 = (int)local_38 + local_30;
        }
        lVar1 = *(longlong *)(param_1 + 0x498);
        iVar6 = FUN_0064d0b0(param_1);
        FUN_007fa6c0(lVar1,(*(int *)(lVar1 + 0x14) + local_30) - iVar6);
      }
    }
    iVar4 = iStack_2c;
    iVar6 = local_38._4_4_;
    if (local_38 < 0) {
      FUN_007fa6c0(*(longlong *)(param_1 + 0x4b0),
                   *(int *)(*(longlong *)(param_1 + 0x4b0) + 0x14) + local_38._4_4_);
    }
    else {
      iVar5 = FUN_0064d120(param_1);
      if (iVar5 < iVar4) {
        iVar5 = FUN_0064d120(param_1);
        if (iVar5 < iVar4 - iVar6) {
          iStack_2c = FUN_0064d120(param_1);
          iStack_2c = local_38._4_4_ + iStack_2c;
        }
        lVar1 = *(longlong *)(param_1 + 0x4b0);
        iVar6 = FUN_0064d120(param_1);
        FUN_007fa6c0(lVar1,(*(int *)(lVar1 + 0x14) + iStack_2c) - iVar6);
      }
    }
  }
  return;
}


/* Ghidra address: 00a39c80 */
/* Ghidra symbol: FUN_00a39c80 */


void FUN_00a39c80(longlong *param_1,undefined8 param_2,ulonglong *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_80;
  longlong *local_70;
  undefined1 local_68 [24];
  undefined8 local_50;
  
  local_50 = *param_3;
  local_70 = param_1;
  uVar5 = thunk_FUN_040ef593(0);
  iVar2 = thunk_FUN_03e5bd07(uVar5,0x5a);
  iVar3 = thunk_FUN_03e5bd07(uVar5,0x58);
  thunk_FUN_041a9b5c(0,uVar5);
  cVar1 = FUN_00a39e20(local_70);
  if (cVar1 == '\0') {
    iVar2 = (**(code **)(*local_70 + 0x60))(local_70);
    local_80 = (**(code **)(*local_70 + 0x48))(local_70);
    local_88 = (int)local_50 + iVar2;
    local_80 = local_50._4_4_ + local_80;
    FUN_00a39c60(auStack_a8,local_68,local_50 & 0xffffffff,local_50._4_4_);
    (**(code **)(*local_70 + 0x28))(local_70,param_2,local_68);
  }
  else {
    lVar6 = FUN_00a39e50(local_70);
    iVar4 = (**(code **)(*local_70 + 0x60))(local_70);
    iVar3 = FUN_0040c840((double)iVar4 /
                         ((double)*(uint *)(lVar6 + 0x28) / ((double)iVar3 / 0.0254)));
    iVar4 = (**(code **)(*local_70 + 0x48))(local_70);
    local_80 = FUN_0040c840((double)iVar4 /
                            ((double)*(uint *)(lVar6 + 0x2c) / ((double)iVar2 / 0.0254)));
    local_88 = (int)local_50 + iVar3;
    local_80 = local_50._4_4_ + local_80;
    FUN_00a39c60(auStack_a8,local_68,local_50 & 0xffffffff,local_50._4_4_);
    (**(code **)(*local_70 + 0x28))(local_70,param_2,local_68);
  }
  return;
}


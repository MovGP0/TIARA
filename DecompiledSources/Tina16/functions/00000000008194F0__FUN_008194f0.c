/* Ghidra address: 008194f0 */
/* Ghidra symbol: FUN_008194f0 */


undefined8 FUN_008194f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe0))(*(longlong **)(param_1 + 0x10),param_2);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x698);
  if (lVar1 != 0) {
    thunk_FUN_03e49910(lVar1,param_2);
    local_38 = 0;
    local_34 = 0;
    uVar2 = FUN_0064d1f0(*(undefined8 *)(param_1 + 0x10),&local_38);
    local_30._0_4_ = (int)uVar2;
    iVar3 = -(int)local_30;
    local_30._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
    iVar4 = -local_30._4_4_;
    local_30 = uVar2;
    FUN_00423b50(param_2,iVar3,iVar4);
  }
  return param_2;
}


/* Ghidra address: 00c0c080 */
/* Ghidra symbol: FUN_00c0c080 */


undefined8 FUN_00c0c080(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_20;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x4e8);
  iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (iVar3 == 0) {
    uVar6 = 1;
  }
  else {
    uVar6 = FUN_00bfaa90(*(undefined8 *)(param_1 + 0x70));
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x4d0);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x5f8);
    local_20._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
    uVar2 = local_20._4_4_;
    local_20 = uVar6;
    iVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,uVar2);
    iVar5 = iVar4 + 1;
    if (iVar3 < iVar4 + 1) {
      iVar5 = iVar3;
    }
    local_20 = CONCAT44(local_20._4_4_,iVar5);
    uVar6 = FUN_00c0ee50(*(undefined8 *)(param_1 + 0x70),&local_20);
  }
  return uVar6;
}


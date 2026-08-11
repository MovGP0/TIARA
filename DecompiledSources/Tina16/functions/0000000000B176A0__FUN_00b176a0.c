/* Ghidra address: 00b176a0 */
/* Ghidra symbol: FUN_00b176a0 */


void FUN_00b176a0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_ffffffffffffffa8;
  uint uVar6;
  undefined8 in_stack_ffffffffffffffb0;
  uint uVar7;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar6 = (uint)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar7 = (uint)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  local_20 = 0;
  local_28 = 0;
  if (*(int *)(param_2 + 1) == 1) {
    lVar3 = FUN_00b17470(&DAT_00b16398,1);
    uVar5 = *param_2;
    FUN_00415460(lVar3 + 8,uVar5,0);
    uVar4 = FUN_0041b800(&local_20);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x10);
    iVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,uVar5,0,0x10,0,(ulonglong)uVar7 << 0x20,uVar4);
    if (iVar2 != 0) {
      uVar5 = FUN_00b17000(&PTR_FUN_00b16d88,1,5);
      FUN_004134c0(uVar5);
    }
    FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x18),lVar3);
    FUN_00b17890(lVar3,local_20);
  }
  else if (*(int *)(param_2 + 1) == 2) {
    lVar3 = FUN_00b17100(&DAT_00b15dc0,1);
    uVar5 = *param_2;
    FUN_00415460(lVar3 + 8,uVar5,0);
    uVar4 = FUN_0041b800(&local_28);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x10);
    iVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,uVar5,0,0x10,(ulonglong)uVar6 << 0x20,uVar4);
    if (iVar2 != 0) {
      uVar5 = FUN_00b17000(&PTR_FUN_00b16d88,1,4);
      FUN_004134c0(uVar5);
    }
    FUN_0041b840(lVar3 + 0x10,local_28);
    FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x18),lVar3);
  }
  FUN_0041b800(&local_28);
  FUN_0041b800(&local_20);
  return;
}


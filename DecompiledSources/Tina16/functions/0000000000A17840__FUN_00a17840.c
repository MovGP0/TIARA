/* Ghidra address: 00a17840 */
/* Ghidra symbol: FUN_00a17840 */


void FUN_00a17840(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong in_stack_00000028;
  uint *in_stack_00000030;
  int in_stack_00000038;
  
  lVar1 = *(longlong *)(param_1 + 0x238);
  uVar3 = *(uint *)(lVar1 + 0x28);
  if (uVar3 == 0) {
    lVar2 = (**(code **)(*(longlong *)(param_1 + 8) + 0x38))
                      (param_1,*(undefined8 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x24),
                       *(undefined4 *)(lVar1 + 0x20),0);
    *(longlong *)(lVar1 + 0x18) = lVar2;
    uVar3 = *(uint *)(lVar1 + 0x28);
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x18);
  }
  uVar4 = *(int *)(lVar1 + 0x20) - uVar3;
  uVar5 = in_stack_00000038 - *in_stack_00000030;
  if (uVar4 <= uVar5) {
    uVar5 = uVar4;
  }
  uVar4 = *(int *)(param_1 + 0x8c) - *(int *)(lVar1 + 0x24);
  if (uVar5 <= uVar4) {
    uVar4 = uVar5;
  }
  (**(code **)(*(longlong *)(param_1 + 0x270) + 8))
            (param_1,lVar2 + (ulonglong)uVar3 * 8,
             in_stack_00000028 + (ulonglong)*in_stack_00000030 * 8,uVar4);
  *in_stack_00000030 = *in_stack_00000030 + uVar4;
  uVar4 = uVar4 + *(int *)(lVar1 + 0x28);
  *(uint *)(lVar1 + 0x28) = uVar4;
  if (*(uint *)(lVar1 + 0x20) <= uVar4) {
    *(int *)(lVar1 + 0x24) = *(int *)(lVar1 + 0x24) + *(uint *)(lVar1 + 0x20);
    *(undefined4 *)(lVar1 + 0x28) = 0;
  }
  return;
}


/* Ghidra address: 00a176b0 */
/* Ghidra symbol: FUN_00a176b0 */


void FUN_00a176b0(longlong param_1)

{
  longlong lVar1;
  longlong in_stack_00000028;
  uint *in_stack_00000030;
  int in_stack_00000038;
  undefined8 uVar2;
  int *piVar3;
  uint uVar4;
  int local_24;
  
  lVar1 = *(longlong *)(param_1 + 0x238);
  uVar4 = in_stack_00000038 - *in_stack_00000030;
  if (*(uint *)(lVar1 + 0x20) < in_stack_00000038 - *in_stack_00000030) {
    uVar4 = *(uint *)(lVar1 + 0x20);
  }
  local_24 = 0;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  piVar3 = &local_24;
  (**(code **)(*(longlong *)(param_1 + 0x260) + 8))(param_1);
  (**(code **)(*(longlong *)(param_1 + 0x270) + 8))
            (param_1,*(undefined8 *)(lVar1 + 0x18),
             (ulonglong)*in_stack_00000030 * 8 + in_stack_00000028,local_24,uVar2,piVar3,uVar4);
  *in_stack_00000030 = *in_stack_00000030 + local_24;
  return;
}


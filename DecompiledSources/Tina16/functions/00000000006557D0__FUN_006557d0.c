/* Ghidra address: 006557d0 */
/* Ghidra symbol: FUN_006557d0 */


void FUN_006557d0(longlong param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x10);
  puVar2 = auStack_48;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
    puVar2 = local_20;
  }
  local_20 = puVar2;
  *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) | 0x200;
  iVar3 = thunk_FUN_04129ca2(*(undefined8 *)(param_1 + 0x468));
  if (iVar3 == 0) {
    FUN_00451a00();
  }
  *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) & 0xfffffdff;
  *(undefined8 *)(param_1 + 0x468) = 0;
  return;
}


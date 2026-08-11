/* Ghidra address: 00add120 */
/* Ghidra symbol: FUN_00add120 */


void FUN_00add120(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0x60);
  (**(code **)(*plVar1 + 200))(plVar1,*(undefined8 *)(param_1 + 0x238));
  FUN_00a74cd0(*(undefined8 *)(param_1 + 0x238));
  FUN_00a9b900(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0x68),
               *(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0x60,
               *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0x7c));
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0xe8);
  uVar3 = FUN_004aeac0(lVar2,*(int *)(lVar2 + 0x10) + -1);
  uVar3 = FUN_00ab3440(&PTR_FUN_00a92a10,1,
                       *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0x68)
                       ,0,uVar3,*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0x70),0);
  *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0x60) = uVar3;
  return;
}


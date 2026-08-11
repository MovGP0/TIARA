/* Ghidra address: 00add010 */
/* Ghidra symbol: FUN_00add010 */


void FUN_00add010(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0x60);
  (**(code **)(*plVar1 + 200))(plVar1,*(undefined8 *)(param_1 + 0x238));
  FUN_00a74cd0(*(undefined8 *)(param_1 + 0x238));
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0x60);
  if (*(int *)(lVar2 + 0x6c) < 1) {
    FUN_00ab3f00(lVar2);
    FUN_00410f20(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0x60));
  }
  else {
    FUN_00a9b900(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0x68),
                 *(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0x60,
                 *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0x7c));
  }
  *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0x60) = 0;
  FUN_00ac0ab0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0xe8),0x66);
  *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0x68) =
       *(undefined8 *)(*(longlong *)(param_1 + 0x220) + 0x28);
  *(undefined1 *)(param_1 + 0x21f) = 0;
  return;
}


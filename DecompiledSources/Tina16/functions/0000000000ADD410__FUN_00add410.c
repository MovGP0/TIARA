/* Ghidra address: 00add410 */
/* Ghidra symbol: FUN_00add410 */


void FUN_00add410(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0) + 0x60);
  (**(code **)(*plVar1 + 200))(plVar1,*(undefined8 *)(param_1 + 0x238));
  FUN_00a74cd0(*(undefined8 *)(param_1 + 0x238));
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x260) + 0x2a0);
  uVar3 = FUN_00a4a4f0(param_2);
  FUN_00ac0ab0(*(undefined8 *)(lVar2 + 0xe8),uVar3);
  return;
}


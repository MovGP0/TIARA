/* Ghidra address: 01c3f0f0 */
/* Ghidra symbol: FUN_01c3f0f0 */


void FUN_01c3f0f0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 local_20;
  
  local_20 = 0;
  lVar1 = *(longlong *)(param_1 + 0x8e0);
  plVar2 = *(longlong **)(param_1 + 0x8e8);
  uVar3 = (**(code **)(*plVar2 + 0x260))(plVar2);
  (**(code **)(*(longlong *)plVar2[0x9e] + 0x18))((longlong *)plVar2[0x9e],&local_20,uVar3);
  FUN_0084e3e0(lVar1,*(undefined4 *)(lVar1 + 0x4a8),*(undefined4 *)(lVar1 + 0x4ac),local_20);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x8e8) + 0x260))(*(longlong **)(param_1 + 0x8e8));
  *(undefined4 *)
   (*(longlong *)(param_1 + 0x988) +
   (longlong)(*(int *)(*(longlong *)(param_1 + 0x8e0) + 0x4ac) + -1) * 4) = uVar3;
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x8e8),0);
  FUN_01c3bc80(param_1,1);
  (**(code **)(**(longlong **)(param_1 + 0x8e0) + 600))(*(longlong **)(param_1 + 0x8e0));
  FUN_00848bf0(*(undefined8 *)(param_1 + 0x8e0),&DAT_01fe6554);
  FUN_00414480(&local_20);
  return;
}


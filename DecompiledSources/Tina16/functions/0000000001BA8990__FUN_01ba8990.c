/* Ghidra address: 01ba8990 */
/* Ghidra symbol: FUN_01ba8990 */


void FUN_01ba8990(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 local_20;
  
  local_20 = 0;
  lVar1 = *(longlong *)(param_1 + 0x6f0);
  plVar2 = *(longlong **)(param_1 + 0x738);
  uVar3 = (**(code **)(*plVar2 + 0x260))(plVar2);
  (**(code **)(*(longlong *)plVar2[0x9e] + 0x18))((longlong *)plVar2[0x9e],&local_20,uVar3);
  FUN_0084e3e0(lVar1,*(undefined4 *)(lVar1 + 0x4a8),*(undefined4 *)(lVar1 + 0x4ac),local_20);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x738),0);
  (**(code **)(**(longlong **)(param_1 + 0x6f0) + 600))(*(longlong **)(param_1 + 0x6f0));
  FUN_00848bf0(*(undefined8 *)(param_1 + 0x6f0),&DAT_01fdd4c8);
  FUN_00414480(&local_20);
  return;
}


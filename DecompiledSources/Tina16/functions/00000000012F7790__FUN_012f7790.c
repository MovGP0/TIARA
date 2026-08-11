/* Ghidra address: 012f7790 */
/* Ghidra symbol: FUN_012f7790 */


void FUN_012f7790(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_20;
  
  local_20 = 0;
  uVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
  iVar2 = FUN_006dd6f0(uVar4);
  uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar2 + -1);
  plVar1 = *(longlong **)(param_1 + 0x830);
  uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_20,uVar3);
  uVar3 = FUN_0043fc00(local_20);
  FUN_012e5870(uVar4,uVar3);
  FUN_00414480(&local_20);
  return;
}


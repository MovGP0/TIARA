/* Ghidra address: 019d9a50 */
/* Ghidra symbol: FUN_019d9a50 */


void FUN_019d9a50(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  plVar1 = *(longlong **)(param_1 + 0x6f0);
  uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],local_20,uVar3);
  FUN_00414ad0(*(longlong *)(param_1 + 0x860) + 8,local_20[0]);
  uVar3 = FUN_00c5a450(*(undefined8 *)(param_1 + 0x700));
  *(undefined4 *)(*(longlong *)(param_1 + 0x860) + 0x48) = uVar3;
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))(*(longlong **)(param_1 + 0x720));
  *(undefined4 *)(*(longlong *)(param_1 + 0x860) + 0x54) = uVar3;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x780),&local_28);
  uVar3 = FUN_0043fc00(local_28);
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x260))(*(longlong **)(param_1 + 0x7a8));
  *(undefined4 *)(*(longlong *)(param_1 + 0x860) + 0x68 + (longlong)iVar4 * 4) = uVar3;
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x260))(*(longlong **)(param_1 + 0x7a0));
  *(undefined4 *)(*(longlong *)(param_1 + 0x860) + 0x5c) = uVar3;
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x260))(*(longlong **)(param_1 + 0x7b8));
  lVar2 = *(longlong *)(param_1 + 0x860);
  *(undefined4 *)(lVar2 + 0x60) = uVar3;
  *(undefined4 *)(lVar2 + 0xa0) = *(undefined4 *)(*(longlong *)(param_1 + 0x778) + 0x4a8);
  plVar1 = *(longlong **)(param_1 + 0x7c8);
  uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_30,uVar3);
  FUN_00414ad0(*(longlong *)(param_1 + 0x860) + 0x80,local_30);
  FUN_00414480(&local_30);
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  return;
}


/* Ghidra address: 013f0060 */
/* Ghidra symbol: FUN_013f0060 */


void FUN_013f0060(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 local_20;
  
  local_20 = 0;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x260))(*(longlong **)(param_1 + 0x6c8));
  *(undefined1 *)(param_1 + 0x720) = uVar2;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4a0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_20,*(undefined2 *)(param_1 + 0x722));
  FUN_0172c930(*(undefined8 *)(param_1 + 0x748),*(undefined1 *)(param_1 + 0x720),
               *(undefined8 *)(*(longlong *)(param_1 + 0x6d0) + 0x4a0),param_1 + 0x724);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4a0);
  uVar4 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_20);
  uVar3 = FUN_00b905e0(uVar4,0);
  *(undefined2 *)(param_1 + 0x722) = uVar3;
  FUN_013efcf0();
  FUN_00b0b020(*(undefined8 *)(param_1 + 0x6f8),0);
  FUN_0172ca20(*(undefined8 *)(param_1 + 0x748),*(undefined1 *)(param_1 + 0x720),
               *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x728) + 0x26) + 0x21),
               *(undefined8 *)(param_1 + 0x730));
  FUN_013efd90(param_1);
  plVar1 = *(longlong **)(param_1 + 0x6d0);
  (**(code **)(*plVar1 + 0x268))(plVar1,*(undefined2 *)(param_1 + 0x722));
  iVar5 = (**(code **)(*(longlong *)plVar1[0x94] + 0x28))((longlong *)plVar1[0x94]);
  iVar6 = FUN_0068bbb0(plVar1);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f0),
               CONCAT71((int7)((ulonglong)
                               ((longlong)*(int *)((longlong)plVar1 + 0x9c) % (longlong)iVar6) >> 8)
                        ,*(int *)((longlong)plVar1 + 0x9c) / iVar6 < iVar5) & 0xffffffff);
  FUN_013f0440(param_1,param_2);
  FUN_00414480(&local_20);
  return;
}


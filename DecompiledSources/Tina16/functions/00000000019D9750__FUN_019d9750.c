/* Ghidra address: 019d9750 */
/* Ghidra symbol: FUN_019d9750 */


void FUN_019d9750(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  *(undefined8 *)(param_1 + 0x858) = param_2;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_1 + 0x860) = param_3;
  local_20 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b4b10(local_20,*(undefined8 *)(*(longlong *)(param_1 + 0x860) + 0x78));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x720) + 0x4f0);
  (**(code **)(*plVar1 + 0x10))(plVar1,local_20);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7b8) + 0x4f0);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x860) + 0x98));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x860) + 0x90);
  *(longlong **)(param_1 + 0x830) = plVar1;
  iVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x860) + 8));
  *(int *)(param_1 + 0x808) = iVar2;
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0x808) = 0;
  }
  FUN_00c5a4c0(*(undefined8 *)(param_1 + 0x700),
               *(undefined4 *)(*(longlong *)(param_1 + 0x860) + 0x48));
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x260))(*(longlong **)(param_1 + 0x7a8));
  FUN_0043f750(&local_38,
               *(undefined4 *)(*(longlong *)(param_1 + 0x860) + 0x68 + (longlong)iVar2 * 4));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x780),local_38);
  (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x268))
            (*(longlong **)(param_1 + 0x7a0),*(undefined4 *)(*(longlong *)(param_1 + 0x860) + 0x5c))
  ;
  (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x268))
            (*(longlong **)(param_1 + 0x7b8),*(undefined4 *)(*(longlong *)(param_1 + 0x860) + 0x60))
  ;
  *(undefined4 *)(param_1 + 0x80c) = *(undefined4 *)(*(longlong *)(param_1 + 0x860) + 0x54);
  FUN_0074b490(*(undefined8 *)(param_1 + 0x778),
               *(undefined4 *)(*(longlong *)(param_1 + 0x860) + 0xa0));
  local_28 = (longlong *)FUN_01b21190(*(undefined8 *)(*(longlong *)(param_1 + 0x860) + 0x88),0x2c,0)
  ;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7c8) + 0x4f0);
  (**(code **)(*plVar1 + 0x10))(plVar1,local_28);
  uVar3 = (**(code **)(*local_28 + 0xb0))
                    (local_28,*(undefined8 *)(*(longlong *)(param_1 + 0x860) + 0x80));
  (**(code **)(**(longlong **)(param_1 + 0x7c8) + 0x268))(*(longlong **)(param_1 + 0x7c8),uVar3);
  FUN_019db720(param_1);
  FUN_00410f20(local_20);
  if (local_28 != (longlong *)0x0) {
    FUN_00410f20(local_28);
  }
  FUN_00414480(&local_38);
  return;
}


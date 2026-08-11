/* Ghidra address: 01bb5ca0 */
/* Ghidra symbol: FUN_01bb5ca0 */


void FUN_01bb5ca0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),2,*(undefined4 *)(param_1 + 0x9c));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),3,*(undefined4 *)(param_1 + 0x98));
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x6e8) = uVar1;
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x6d0) + 0x660);
  lVar2 = FUN_00f03860(uVar1,0);
  uVar3 = FUN_00b89270();
  FUN_00b8e520(uVar3,&local_20,0x400);
  (**(code **)(**(longlong **)(lVar2 + 0x20) + 0x18))(*(longlong **)(lVar2 + 0x20),local_20);
  lVar2 = FUN_00f03860(uVar1,0);
  FUN_00f04400(*(undefined8 *)(lVar2 + 0x20),2);
  lVar2 = FUN_00f03860(uVar1,0);
  uVar3 = FUN_00f040f0(*(undefined8 *)(lVar2 + 0x20));
  FUN_005fce70(uVar3,1);
  uVar3 = FUN_00f03860(uVar1,0);
  FUN_00f03530(uVar3,2);
  lVar2 = FUN_00f03860(uVar1,1);
  uVar3 = FUN_00b89270();
  FUN_00b8e520(uVar3,&local_28,0x401);
  (**(code **)(**(longlong **)(lVar2 + 0x20) + 0x18))(*(longlong **)(lVar2 + 0x20),local_28);
  lVar2 = FUN_00f03860(uVar1,1);
  FUN_00f04400(*(undefined8 *)(lVar2 + 0x20),2);
  lVar2 = FUN_00f03860(uVar1,1);
  uVar3 = FUN_00f040f0(*(undefined8 *)(lVar2 + 0x20));
  FUN_005fce70(uVar3,1);
  uVar3 = FUN_00f03860(uVar1,1);
  FUN_00f03530(uVar3,0);
  plVar4 = (longlong *)FUN_00f03860(uVar1,1);
  (**(code **)(*plVar4 + 0x60))(plVar4,1);
  FUN_0064cf60(param_1,0x493);
  FUN_00414560(&local_28,2);
  return;
}


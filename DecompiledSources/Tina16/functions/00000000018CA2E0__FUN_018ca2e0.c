/* Ghidra address: 018ca2e0 */
/* Ghidra symbol: FUN_018ca2e0 */


void FUN_018ca2e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  
  *(longlong *)(param_1 + 0x148) = param_2;
  uVar2 = (**(code **)(**(longlong **)(param_2 + 0x80) + 0x30))(*(longlong **)(param_2 + 0x80));
  lVar4 = *(longlong *)(param_1 + 0x148);
  *(undefined4 *)(lVar4 + 0x198) = uVar2;
  *(undefined1 *)(lVar4 + 0x1a0) = 0;
  uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0xc);
  (**(code **)(**(longlong **)(param_1 + 0x140) + 0x10))(*(longlong **)(param_1 + 0x140));
  (**(code **)(**(longlong **)(param_1 + 0x150) + 0x10))(*(longlong **)(param_1 + 0x150));
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x150),0);
  *(undefined4 *)(param_1 + 0xc) = 0;
  lVar4 = FUN_01950600(param_2);
  FUN_018ca000(auStack_48,*(undefined8 *)(lVar4 + 0x248));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x148) + 0x80);
  iVar3 = (**(code **)(*plVar1 + 0x30))(plVar1);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x150),(longlong)iVar3);
  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0xc) = uVar2;
  return;
}


/* Ghidra address: 017024f0 */
/* Ghidra symbol: FUN_017024f0 */


void FUN_017024f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  
  FUN_01703240(param_1,0);
  FUN_01716b50(*(undefined8 *)(param_1 + 0x760),*(undefined8 *)(param_1 + 0x738),
               *(undefined8 *)(param_1 + 0x740),*(undefined1 *)(param_1 + 0x758));
  FUN_004b67b0(*(undefined8 *)(param_1 + 0x738),1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e0) + 0x4f0);
  (**(code **)(*plVar1 + 0x88))(plVar1,*(undefined8 *)(param_1 + 0x738));
  FUN_004b67b0(*(undefined8 *)(param_1 + 0x738),0);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e0) + 0x4f0);
  iVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,DAT_0210ff60);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x268))(*(longlong **)(param_1 + 0x6e0),iVar2);
  FUN_01702bb0(param_1,0);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x28))(*(longlong **)(param_1 + 0x738));
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e8),0 < iVar2);
  FUN_017025f0(param_1,param_2);
  FUN_01702a20(param_1,param_2);
  return;
}


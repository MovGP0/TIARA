/* Ghidra address: 0146bfe0 */
/* Ghidra symbol: FUN_0146bfe0 */


void FUN_0146bfe0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int extraout_var;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x858) + 0x78);
  iVar3 = (**(code **)(*plVar1 + 0xd8))(plVar1);
  lVar2 = *(longlong *)(param_1 + 0x858);
  (**(code **)(**(longlong **)(lVar2 + 0x78) + 0xd8))(*(longlong **)(lVar2 + 0x78));
  (**(code **)(**(longlong **)(param_1 + 0x860) + 0xa8))
            (*(longlong **)(param_1 + 0x860),iVar3 + *(int *)(lVar2 + 0x90) + *(int *)(lVar2 + 0x98)
             ,extraout_var + *(int *)(*(longlong *)(param_1 + 0x858) + 0x94));
  return;
}


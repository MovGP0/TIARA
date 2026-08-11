/* Ghidra address: 01510170 */
/* Ghidra symbol: FUN_01510170 */


void FUN_01510170(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xd00) + 0x260))(*(longlong **)(param_1 + 0xd00));
  if (iVar2 != -1) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0xd00) + 0x260))(*(longlong **)(param_1 + 0xd00))
    ;
    plVar1 = *(longlong **)(param_1 + 0xee0);
    if (*(char *)(*(longlong *)(param_1 + 0xcf8) + 0x328) != '\0') {
      (**(code **)(*plVar1 + 0x80))(plVar1,uVar3);
    }
    if (*(char *)(*(longlong *)(param_1 + 0xce0) + 0x328) != '\0') {
      (**(code **)(*plVar1 + 0xb0))(plVar1,uVar3);
    }
    if (*(char *)(*(longlong *)(param_1 + 0xce8) + 0x328) != '\0') {
      (**(code **)(*plVar1 + 0x98))(plVar1,uVar3);
    }
    if (*(char *)(*(longlong *)(param_1 + 0xcf0) + 0x328) != '\0') {
      (**(code **)(*plVar1 + 0x108))(plVar1,uVar3);
    }
  }
  return;
}


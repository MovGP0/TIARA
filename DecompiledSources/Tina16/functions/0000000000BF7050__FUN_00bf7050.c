/* Ghidra address: 00bf7050 */
/* Ghidra symbol: FUN_00bf7050 */


int FUN_00bf7050(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x130) + 0x548);
  if ((iVar3 == 0x1fffffff) || (*(char *)(param_1 + 0xb7) == '\0')) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x130) + 200);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x538);
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0x98))(plVar1,4);
      if ((lVar2 != 0) && (*(int *)(lVar2 + 8) != 0x1fffffff)) {
        iVar3 = *(int *)(lVar2 + 8);
      }
    }
  }
  return iVar3;
}


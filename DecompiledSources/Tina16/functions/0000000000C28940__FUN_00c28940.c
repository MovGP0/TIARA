/* Ghidra address: 00c28940 */
/* Ghidra symbol: FUN_00c28940 */


void FUN_00c28940(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (param_2 != lVar3) {
    if (lVar3 != 0) {
      thunk_FUN_0416f828(lVar3);
    }
    plVar1 = *(longlong **)(param_1 + 0x10);
    if ((plVar1 == (longlong *)0x0) ||
       (lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1), param_2 == lVar3)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    *(longlong *)(param_1 + 0x28) = param_2;
    if (bVar2) {
      FUN_00c28ba0(param_1);
      plVar1 = *(longlong **)(param_1 + 8);
      *(undefined1 *)((longlong)plVar1 + 0x3a) = 1;
      (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
    }
    return;
  }
  return;
}


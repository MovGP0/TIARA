/* Ghidra address: 00c35290 */
/* Ghidra symbol: FUN_00c35290 */


void FUN_00c35290(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_2 != param_1[0xc]) {
    FUN_00c35490(param_1);
    if (param_1[0xc] != 0) {
      thunk_FUN_0416f828(param_1[0xc]);
    }
    plVar1 = (longlong *)param_1[0x10];
    if ((plVar1 == (longlong *)0x0) ||
       (lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1), param_2 == lVar3)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    param_1[0xc] = param_2;
    if (bVar2) {
      FUN_00c34e10(param_1);
      *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
      (**(code **)(*param_1 + 0x20))(param_1,param_1);
    }
    return;
  }
  return;
}


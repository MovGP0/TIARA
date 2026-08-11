/* Ghidra address: 0189ab40 */
/* Ghidra symbol: FUN_0189ab40 */


void FUN_0189ab40(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (param_2 == 0) {
    plVar1 = (longlong *)param_1[0x97];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x130))(plVar1,0);
    }
    plVar1 = (longlong *)param_1[0x9d];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x130))(plVar1,0);
    }
    plVar1 = (longlong *)param_1[0x99];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x130))(plVar1,0);
    }
  }
  FUN_01899810(param_1,param_2);
  if (param_2 != 0) {
    (**(code **)(*(longlong *)param_1[0x97] + 0x130))((longlong *)param_1[0x97],param_1);
    (**(code **)(*param_1 + 0x278))(param_1,*(undefined1 *)((longlong)param_1 + 0x4e1));
    (**(code **)(*(longlong *)param_1[0x9d] + 0x130))((longlong *)param_1[0x9d],param_1);
    FUN_0064c650(param_1[0x9d],5);
    (**(code **)(*(longlong *)param_1[0x98] + 0x130))((longlong *)param_1[0x98],param_1[0x97]);
    (**(code **)(*(longlong *)param_1[0x99] + 0x130))((longlong *)param_1[0x99],param_1[0x98]);
  }
  return;
}


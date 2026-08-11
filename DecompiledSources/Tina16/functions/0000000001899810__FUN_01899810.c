/* Ghidra address: 01899810 */
/* Ghidra symbol: FUN_01899810 */


void FUN_01899810(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (param_2 == 0) {
    plVar1 = (longlong *)param_1[0x97];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x130))(plVar1,0);
    }
    plVar1 = (longlong *)param_1[0x99];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x130))(plVar1,0);
    }
  }
  FUN_0065f000(param_1,param_2);
  if (param_2 != 0) {
    (**(code **)(*(longlong *)param_1[0x97] + 0x130))((longlong *)param_1[0x97],param_1);
    (**(code **)(*param_1 + 0x278))(param_1,*(undefined1 *)((longlong)param_1 + 0x4e1));
    (**(code **)(*(longlong *)param_1[0x98] + 0x130))((longlong *)param_1[0x98],param_1[0x97]);
    (**(code **)(*(longlong *)param_1[0x99] + 0x130))((longlong *)param_1[0x99],param_1[0x98]);
  }
  return;
}


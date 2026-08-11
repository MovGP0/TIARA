/* Ghidra address: 00995d90 */
/* Ghidra symbol: FUN_00995d90 */


longlong * FUN_00995d90(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)FUN_0098cda0(&PTR_FUN_00926660,1);
  (**(code **)(*plVar1 + 0xf0))(plVar1,*(undefined1 *)(param_1 + 0x30));
  if (param_2 != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x188))(param_2);
    plVar3 = (longlong *)(**(code **)(*plVar2 + 0x310))(plVar2,param_2,0xfa,0,0);
    plVar2 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3);
    if (plVar2 == param_2) {
      plVar2 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3);
    }
    while (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x140))(plVar1,plVar2);
      plVar2 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3);
    }
    (**(code **)(*plVar3 + 0x20))(plVar3);
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x188))(param_2);
    (**(code **)(*plVar2 + 0x308))(plVar2);
  }
  return plVar1;
}


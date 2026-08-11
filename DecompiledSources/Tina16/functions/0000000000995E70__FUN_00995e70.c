/* Ghidra address: 00995e70 */
/* Ghidra symbol: FUN_00995e70 */


longlong * FUN_00995e70(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_0098cda0(&PTR_FUN_00926660,1);
  (**(code **)(*plVar1 + 0xf0))(plVar1,*(undefined1 *)(param_1 + 0x30));
  if (param_2 != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x188))(param_2);
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x310))(plVar2,param_2,0x1fa,0,0);
    lVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
    while (lVar3 != 0) {
      (**(code **)(*plVar1 + 0x140))(plVar1,lVar3);
      lVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    (**(code **)(*plVar2 + 0x20))(plVar2);
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x188))(param_2);
    (**(code **)(*plVar2 + 0x308))(plVar2);
  }
  return plVar1;
}


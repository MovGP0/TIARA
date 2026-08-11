/* Ghidra address: 0094f240 */
/* Ghidra symbol: FUN_0094f240 */


longlong * FUN_0094f240(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x178))(param_1);
  plVar3 = plVar2;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x170))(param_1);
  }
  else {
    while (plVar1 = plVar3, plVar1 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*plVar1 + 0x138))(plVar1);
      plVar2 = plVar1;
    }
  }
  return plVar2;
}


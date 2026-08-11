/* Ghidra address: 0094a730 */
/* Ghidra symbol: FUN_0094a730 */


longlong * FUN_0094a730(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x178))(param_2);
  plVar3 = plVar2;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x170))(param_2);
  }
  else {
    while (plVar1 = plVar3, plVar1 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*plVar1 + 0x138))(plVar1);
      plVar2 = plVar1;
    }
  }
  return plVar2;
}


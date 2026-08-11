/* Ghidra address: 00ccf480 */
/* Ghidra symbol: FUN_00ccf480 */


undefined8 FUN_00ccf480(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  
  FUN_00414480(param_2);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x1a0);
  if ((plVar1 != (longlong *)0x0) && (cVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1), cVar2 != '\0'))
  {
    do {
      plVar3 = plVar1;
      plVar1 = (longlong *)plVar3[0x22];
      if (plVar1 == (longlong *)0x0) break;
      cVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1);
    } while (cVar2 != '\0');
    FUN_00414ad0(param_2,plVar3[0x1e]);
  }
  return param_2;
}


/* Ghidra address: 01bfb920 */
/* Ghidra symbol: FUN_01bfb920 */


void FUN_01bfb920(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_01bf1690);
  if ((cVar2 != '\0') && (plVar1 = *(longlong **)(param_2 + 0x80), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x260))(plVar1);
  }
  return;
}


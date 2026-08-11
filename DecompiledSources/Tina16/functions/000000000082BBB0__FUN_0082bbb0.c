/* Ghidra address: 0082bbb0 */
/* Ghidra symbol: FUN_0082bbb0 */


undefined8 FUN_0082bbb0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0xc0);
  cVar2 = FUN_0082bea0();
  if (cVar2 == '\0') {
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x80))(plVar1);
      if (cVar2 != '\0') {
        cVar2 = FUN_0082c6a0(plVar1,(int)plVar1[6]);
        if (cVar2 != '\0') goto LAB_0082bbe9;
      }
    }
    uVar3 = 1;
  }
  else {
LAB_0082bbe9:
    uVar3 = 0;
  }
  return uVar3;
}


/* Ghidra address: 0082a550 */
/* Ghidra symbol: FUN_0082a550 */


undefined8 FUN_0082a550(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if (((plVar1 != (longlong *)0x0) && (cVar2 = (**(code **)(*plVar1 + 0x80))(plVar1), cVar2 != '\0')
      ) && (cVar2 = (**(code **)(*plVar1 + 0x140))(plVar1,(int)plVar1[6]), cVar2 != '\0')) {
    return 0;
  }
  return 1;
}


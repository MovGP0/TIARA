/* Ghidra address: 006878d0 */
/* Ghidra symbol: FUN_006878d0 */


undefined8 FUN_006878d0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if ((plVar1 != (longlong *)0x0) && (cVar2 = (**(code **)(*plVar1 + 0x50))(plVar1), cVar2 != '\0'))
  {
    return 0;
  }
  return 1;
}


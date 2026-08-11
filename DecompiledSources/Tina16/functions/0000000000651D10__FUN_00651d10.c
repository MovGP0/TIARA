/* Ghidra address: 00651d10 */
/* Ghidra symbol: FUN_00651d10 */


undefined8 FUN_00651d10(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if ((plVar1 != (longlong *)0x0) && (cVar2 = (**(code **)(*plVar1 + 0x68))(plVar1), cVar2 != '\0'))
  {
    return 0;
  }
  return 1;
}


/* Ghidra address: 01bfec90 */
/* Ghidra symbol: FUN_01bfec90 */


undefined8 FUN_01bfec90(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x70);
  if ((plVar1 != (longlong *)0x0) && (cVar2 = (**(code **)(*plVar1 + 0x68))(plVar1), cVar2 != '\0'))
  {
    return 0;
  }
  return 1;
}


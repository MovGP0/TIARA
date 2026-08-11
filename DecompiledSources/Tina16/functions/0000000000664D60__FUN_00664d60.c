/* Ghidra address: 00664d60 */
/* Ghidra symbol: FUN_00664d60 */


undefined8 FUN_00664d60(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  if ((plVar1 != (longlong *)0x0) && (cVar2 = (**(code **)(*plVar1 + 0x268))(plVar1), cVar2 != '\0')
     ) {
    return 1;
  }
  return 0;
}


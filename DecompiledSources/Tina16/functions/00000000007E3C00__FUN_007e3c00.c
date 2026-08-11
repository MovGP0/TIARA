/* Ghidra address: 007e3c00 */
/* Ghidra symbol: FUN_007e3c00 */


undefined8 FUN_007e3c00(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x90);
  if ((plVar1 != (longlong *)0x0) && (cVar2 = (**(code **)(*plVar1 + 0x90))(plVar1), cVar2 != '\0'))
  {
    return 0;
  }
  return 1;
}


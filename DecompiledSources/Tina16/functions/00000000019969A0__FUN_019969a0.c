/* Ghidra address: 019969a0 */
/* Ghidra symbol: FUN_019969a0 */


undefined8 FUN_019969a0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  
  if (((param_2 != (longlong *)0x0) && (*(char *)((longlong)param_2 + 10) != '\0')) &&
     (cVar1 = (**(code **)(*param_2 + 0x1a8))(param_2), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}


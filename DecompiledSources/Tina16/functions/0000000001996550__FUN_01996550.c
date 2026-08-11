/* Ghidra address: 01996550 */
/* Ghidra symbol: FUN_01996550 */


undefined8 FUN_01996550(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  
  if ((param_2 != (longlong *)0x0) && (*(char *)((longlong)param_2 + 10) != '\0')) {
    cVar1 = (**(code **)(*param_2 + 0x1a8))(param_2);
    if (cVar1 != '\0') {
      FUN_019964f0(param_1,param_2);
    }
  }
  return 0;
}


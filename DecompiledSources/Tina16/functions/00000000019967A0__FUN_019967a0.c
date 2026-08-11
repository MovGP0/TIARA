/* Ghidra address: 019967a0 */
/* Ghidra symbol: FUN_019967a0 */


undefined8 FUN_019967a0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  
  if ((param_2 != (longlong *)0x0) && (*(char *)((longlong)param_2 + 10) != '\0')) {
    cVar1 = (**(code **)(*param_2 + 0x1a8))(param_2);
    if (cVar1 != '\0') {
      FUN_01996740(param_1,param_2);
    }
  }
  return 0;
}


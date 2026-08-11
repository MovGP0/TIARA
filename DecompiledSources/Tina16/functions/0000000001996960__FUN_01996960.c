/* Ghidra address: 01996960 */
/* Ghidra symbol: FUN_01996960 */


void FUN_01996960(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  
  if ((param_2 != (longlong *)0x0) && (*(char *)((longlong)param_2 + 10) != '\0')) {
    cVar1 = (**(code **)(*param_2 + 0x1a8))(param_2);
    if (cVar1 != '\0') {
      FUN_01996900(param_1,param_2);
    }
  }
  return;
}


/* Ghidra address: 01996680 */
/* Ghidra symbol: FUN_01996680 */


void FUN_01996680(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  
  if ((param_2 != (longlong *)0x0) && (*(char *)((longlong)param_2 + 10) != '\0')) {
    cVar1 = (**(code **)(*param_2 + 0x1a8))(param_2);
    if (cVar1 != '\0') {
      FUN_01996620(param_1,param_2);
    }
  }
  return;
}


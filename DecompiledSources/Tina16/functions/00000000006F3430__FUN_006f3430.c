/* Ghidra address: 006f3430 */
/* Ghidra symbol: FUN_006f3430 */


void FUN_006f3430(longlong param_1,int param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  if (*(int *)(param_1 + 0x548) != param_2) {
    *(int *)(param_1 + 0x548) = param_2;
    cVar2 = FUN_0065be20(param_1);
    if (cVar2 != '\0') {
      uVar1 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar1,0x102f,(longlong)param_2,0);
    }
  }
  return;
}


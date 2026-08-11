/* Ghidra address: 006ec6b0 */
/* Ghidra symbol: FUN_006ec6b0 */


void FUN_006ec6b0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  if (param_2 != *(char *)(param_1 + 0x490)) {
    *(char *)(param_1 + 0x490) = param_2;
    cVar2 = FUN_0065be20(param_1);
    if (cVar2 != '\0') {
      uVar1 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar1,0x469,0,0);
    }
    FUN_00655b90(param_1);
  }
  return;
}


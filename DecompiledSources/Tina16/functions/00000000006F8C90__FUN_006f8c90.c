/* Ghidra address: 006f8c90 */
/* Ghidra symbol: FUN_006f8c90 */


void FUN_006f8c90(longlong param_1,int param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = FUN_006f8d40(param_1);
  if (param_2 != iVar3) {
    cVar2 = FUN_0065be20(param_1);
    if (cVar2 == '\0') {
      *(int *)(param_1 + 0x560) = param_2;
    }
    else {
      uVar1 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar1,0x1047,0,(longlong)param_2);
    }
  }
  return;
}


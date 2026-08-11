/* Ghidra address: 006e6980 */
/* Ghidra symbol: FUN_006e6980 */


void FUN_006e6980(longlong param_1,int param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  if (param_2 != *(int *)(param_1 + 0x4a4)) {
    *(int *)(param_1 + 0x4a4) = param_2;
    cVar2 = FUN_0065be20(param_1);
    if (cVar2 != '\0') {
      uVar1 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar1,0x404,(longlong)*(int *)(param_1 + 0x4a4),0);
    }
  }
  return;
}


/* Ghidra address: 006d8c50 */
/* Ghidra symbol: FUN_006d8c50 */


void FUN_006d8c50(longlong param_1,char param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 0x4a8) != param_2) {
    *(char *)(param_1 + 0x4a8) = param_2;
    cVar2 = FUN_0065be20(param_1);
    if (cVar2 != '\0') {
      uVar1 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar1,0x409,(longlong)*(char *)(param_1 + 0x4a8),0);
    }
  }
  return;
}


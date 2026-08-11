/* Ghidra address: 006f2540 */
/* Ghidra symbol: FUN_006f2540 */


void FUN_006f2540(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  FUN_00651da0(param_1);
  cVar2 = FUN_0065be20(param_1);
  if (cVar2 != '\0') {
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_041b2403(uVar1,0x109d,(longlong)(int)-(uint)(*(char *)(param_1 + 0x778) != '\0'),0);
    FUN_006f7580(param_1);
  }
  return;
}


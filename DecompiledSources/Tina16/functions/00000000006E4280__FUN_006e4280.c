/* Ghidra address: 006e4280 */
/* Ghidra symbol: FUN_006e4280 */


void FUN_006e4280(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_0065be20(param_1);
  if (cVar2 != '\0') {
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_041b2403(uVar1,0x1109,(longlong)param_3,param_2);
  }
  return;
}


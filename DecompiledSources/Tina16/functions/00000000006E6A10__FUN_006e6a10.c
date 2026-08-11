/* Ghidra address: 006e6a10 */
/* Ghidra symbol: FUN_006e6a10 */


void FUN_006e6a10(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_0065be20(param_1);
  if (cVar2 != '\0') {
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_041b2403(uVar1,0x403,(longlong)param_2,0);
  }
  return;
}


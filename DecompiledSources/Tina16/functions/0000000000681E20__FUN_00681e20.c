/* Ghidra address: 00681e20 */
/* Ghidra symbol: FUN_00681e20 */


void FUN_00681e20(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  FUN_0065a2f0(param_1);
  cVar2 = FUN_0065be20(param_1);
  if (cVar2 != '\0') {
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_041543e0(uVar1,0,0,0x401);
  }
  return;
}


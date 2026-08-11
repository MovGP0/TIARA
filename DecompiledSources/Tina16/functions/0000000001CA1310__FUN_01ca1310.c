/* Ghidra address: 01ca1310 */
/* Ghidra symbol: FUN_01ca1310 */


void FUN_01ca1310(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_010e3460();
  if (cVar2 == '\0') {
    uVar1 = FUN_0065b870(param_1);
    FUN_00f83670(uVar1,param_2);
  }
  else {
    FUN_010e3530();
    FUN_00e1e050();
    if (param_1 != 0) {
      FUN_01c8f340(param_1);
    }
  }
  return;
}


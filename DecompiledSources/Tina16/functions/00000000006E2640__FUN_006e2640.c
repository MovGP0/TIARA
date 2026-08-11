/* Ghidra address: 006e2640 */
/* Ghidra symbol: FUN_006e2640 */


void FUN_006e2640(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_0065be20(param_1);
  if (cVar2 != '\0') {
    if (param_2 == 0) {
      uVar1 = FUN_0065b870(param_1);
      FUN_006120b0(uVar1,0);
    }
    else {
      FUN_006dd250(param_2,1);
    }
  }
  return;
}


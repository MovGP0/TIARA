/* Ghidra address: 006f70d0 */
/* Ghidra symbol: FUN_006f70d0 */


void FUN_006f70d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_0065be20(param_1);
  if (cVar2 != '\0') {
    if (param_2 == 0) {
      lVar1 = FUN_006f7090(param_1);
      if (lVar1 != 0) {
        FUN_006ef2d0(lVar1,1,0);
      }
    }
    else {
      FUN_006ef2d0(param_2,1,1);
    }
  }
  return;
}


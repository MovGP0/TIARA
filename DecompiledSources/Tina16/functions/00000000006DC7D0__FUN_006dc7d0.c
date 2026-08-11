/* Ghidra address: 006dc7d0 */
/* Ghidra symbol: FUN_006dc7d0 */


undefined8 FUN_006dc7d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 1;
  }
  else {
    lVar1 = FUN_006dd390(param_1);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      lVar1 = FUN_006dd390(param_1);
      if (lVar1 == param_2) {
        uVar2 = 1;
      }
      else {
        uVar2 = FUN_006dd390(param_1);
        uVar2 = FUN_006dc7d0(uVar2,param_2);
      }
    }
  }
  return uVar2;
}


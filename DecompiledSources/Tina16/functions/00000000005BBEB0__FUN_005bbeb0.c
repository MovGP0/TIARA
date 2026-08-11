/* Ghidra address: 005bbeb0 */
/* Ghidra symbol: FUN_005bbeb0 */


undefined8 FUN_005bbeb0(double param_1,double param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_005bbf70(param_1,param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_005bbf20(param_1,param_2);
    if (cVar1 == '\0') {
      if (param_2 <= param_1) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0xff;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = FUN_005bbfb0(param_1,param_2);
  }
  return uVar2;
}


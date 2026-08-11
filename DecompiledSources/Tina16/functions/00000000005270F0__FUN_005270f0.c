/* Ghidra address: 005270f0 */
/* Ghidra symbol: FUN_005270f0 */


undefined8 FUN_005270f0(double param_1,double param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_00527230(param_1,param_2);
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
  return uVar2;
}


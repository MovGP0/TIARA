/* Ghidra address: 005936e0 */
/* Ghidra symbol: FUN_005936e0 */


undefined8 FUN_005936e0(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_005936b0(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    if (param_2 < param_3) {
      uVar2 = 0xffffffff;
    }
    else if (param_3 < param_2) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


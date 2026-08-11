/* Ghidra address: 005930a0 */
/* Ghidra symbol: FUN_005930a0 */


undefined8 FUN_005930a0(undefined8 param_1,double param_2,double param_3)

{
  undefined8 uVar1;
  
  if (param_3 <= param_2) {
    if (param_2 <= param_3) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


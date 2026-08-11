/* Ghidra address: 00526500 */
/* Ghidra symbol: FUN_00526500 */


undefined8 FUN_00526500(double param_1,double param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  if (param_2 == 0.0) {
    uVar2 = 0x3ff0000000000000;
  }
  else if ((param_1 != 0.0) || (param_2 <= 0.0)) {
    dVar3 = (double)FUN_0040af40(param_2);
    if ((dVar3 != 0.0) || (dVar3 = (double)FUN_0040c850(param_2), 2147483647.0 < dVar3)) {
      if (0.0 <= param_1) {
        dVar3 = (double)FUN_0040c2f0(param_1);
        uVar2 = FUN_0040af80(param_2 * dVar3);
      }
      else {
        FUN_004098e0(6);
        uVar2 = 0;
      }
    }
    else {
      uVar1 = FUN_0040c840(param_2);
      uVar2 = FUN_00525b70(param_1,uVar1);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


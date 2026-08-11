/* Ghidra address: 00526700 */
/* Ghidra symbol: FUN_00526700 */


float FUN_00526700(undefined8 param_1,float param_2)

{
  undefined4 uVar1;
  float fVar2;
  double dVar3;
  
  fVar2 = (float)param_1;
  if (param_2 == 0.0) {
    fVar2 = 1.0;
  }
  else if ((fVar2 != 0.0) || (param_2 <= 0.0)) {
    dVar3 = (double)FUN_0040af40((double)param_2);
    if ((dVar3 != 0.0) || (dVar3 = (double)FUN_0040c850((double)param_2), 2147483647.0 < dVar3)) {
      if (0.0 <= fVar2) {
        dVar3 = (double)FUN_0040c2f0((double)fVar2);
        dVar3 = (double)FUN_0040af80((double)param_2 * dVar3);
        fVar2 = (float)dVar3;
      }
      else {
        FUN_004098e0(6);
        fVar2 = 0.0;
      }
    }
    else {
      uVar1 = FUN_0040c840((double)param_2);
      fVar2 = (float)FUN_00525aa0(param_1,uVar1);
    }
  }
  else {
    fVar2 = 0.0;
  }
  return fVar2;
}


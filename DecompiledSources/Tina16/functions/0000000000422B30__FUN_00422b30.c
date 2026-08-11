/* Ghidra address: 00422b30 */
/* Ghidra symbol: FUN_00422b30 */


float FUN_00422b30(float param_1,float param_2)

{
  float fVar1;
  double dVar2;
  
  fVar1 = 0.0;
  if (param_2 <= 0.0) {
    if (0.0 <= param_2) {
      if (0.0 <= param_1) {
        if (0.0 < param_1) {
          fVar1 = 1.5707964;
        }
      }
      else {
        fVar1 = -1.5707964;
      }
    }
    else {
      dVar2 = (double)FUN_0040c660((double)param_1 / (double)param_2);
      if (0.0 <= param_1) {
        fVar1 = (float)dVar2 + 3.1415927;
      }
      else {
        fVar1 = (float)dVar2 - 3.1415927;
      }
    }
  }
  else {
    dVar2 = (double)FUN_0040c660((double)param_1 / (double)param_2);
    fVar1 = (float)dVar2;
  }
  return fVar1;
}


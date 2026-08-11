/* Ghidra address: 016aa5b0 */
/* Ghidra symbol: FUN_016aa5b0 */


double FUN_016aa5b0(double *param_1)

{
  float fVar1;
  double dVar2;
  
  if (*param_1 <= 80.0) {
    if (-80.0 < *param_1 || *param_1 == -80.0) {
      dVar2 = (double)FUN_00526c50(*param_1);
    }
    else {
      fVar1 = (float)FUN_00526ad0(0xc2a00000);
      dVar2 = (double)fVar1;
    }
  }
  else {
    fVar1 = (float)FUN_00526ad0(0x42a00000);
    dVar2 = (double)fVar1;
  }
  return dVar2;
}


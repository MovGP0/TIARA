/* Ghidra address: 00daa3d0 */
/* Ghidra symbol: FUN_00daa3d0 */


void FUN_00daa3d0(undefined8 param_1,undefined8 param_2,double param_3,double param_4,double param_5
                 ,double param_6,double param_7,double *param_8,double *param_9,double *param_10,
                 undefined8 param_11)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (double)FUN_00c43520(param_1,param_2,param_3 - param_5,param_3 + param_5,param_11,
                               0x4008000000000000,0xbff0000000000000);
  *param_10 = dVar1;
  dVar1 = *param_10;
  if (param_3 - param_5 < dVar1) {
    if (dVar1 < param_3 + param_5) {
      param_3 = param_3 + param_5;
      dVar2 = ((param_7 - param_6) / 4.0) * (1.0 / param_5);
      dVar3 = param_7 - dVar2 * 2.0 * param_3;
      *param_8 = dVar2 * dVar1 * dVar1 + dVar3 * dVar1 +
                 (((param_4 + param_7 * param_5) - dVar2 * param_3 * param_3) - dVar3 * param_3);
      *param_9 = dVar2 * 2.0 * dVar1 + dVar3;
    }
    else {
      *param_8 = (dVar1 - param_3) * param_7 + param_4;
      *param_9 = param_7;
    }
  }
  else {
    *param_8 = (dVar1 - param_3) * param_6 + param_4;
    *param_9 = param_6;
  }
  return;
}


/* Ghidra address: 016dccf0 */
/* Ghidra symbol: FUN_016dccf0 */


double FUN_016dccf0(longlong param_1,char param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if ((param_2 == '\x06') && (param_1 != 0)) {
    dVar3 = param_4[3];
    dVar1 = (double)FUN_0040af10(param_3 / (1.0 / dVar3));
    dVar1 = (double)FUN_0040bdd0(param_4[3] * 6.283185307179586 * (param_3 - dVar1 * (1.0 / dVar3)))
    ;
    dVar3 = param_4[1];
    dVar2 = (double)FUN_0040af10(param_3 / (1.0 / dVar3));
    dVar3 = (double)FUN_0040bdd0(param_4[1] * 6.283185307179586 * (param_3 - dVar2 * (1.0 / dVar3))
                                 + param_4[2] * dVar1);
    dVar3 = dVar3 * *param_4;
  }
  else {
    dVar3 = 0.0;
  }
  return dVar3;
}


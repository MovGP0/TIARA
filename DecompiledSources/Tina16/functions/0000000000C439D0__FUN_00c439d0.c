/* Ghidra address: 00c439d0 */
/* Ghidra symbol: FUN_00c439d0 */


double FUN_00c439d0(double param_1,double param_2,undefined8 param_3,double param_4,double param_5,
                   undefined8 param_6,undefined1 *param_7,double param_8)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  *param_7 = 0;
  if (0.1 <= param_4) {
    param_5 = param_5 / param_8;
  }
  dVar2 = (double)FUN_0040c850(param_1 - param_2);
  dVar3 = (double)FUN_0040c850(param_5);
  if (dVar3 < dVar2) {
    iVar1 = FUN_00c42630(param_1 - param_2);
    dVar2 = (double)FUN_0040c850(param_5);
    param_1 = param_2 + (double)iVar1 * dVar2;
    *param_7 = 1;
  }
  return param_1;
}


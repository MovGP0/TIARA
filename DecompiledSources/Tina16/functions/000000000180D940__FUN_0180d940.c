/* Ghidra address: 0180d940 */
/* Ghidra symbol: FUN_0180d940 */


undefined8 FUN_0180d940(undefined8 param_1,double param_2)

{
  double dVar1;
  double local_40;
  double *local_38;
  undefined1 local_30;
  
  dVar1 = (double)FUN_0040af10(param_2);
  if (dVar1 == param_2) {
    FUN_00448430(param_1,param_2);
  }
  else {
    local_38 = &local_40;
    local_30 = 3;
    local_40 = param_2;
    FUN_00442f70(param_1,L"%2.2f",&local_38,0);
  }
  return param_1;
}


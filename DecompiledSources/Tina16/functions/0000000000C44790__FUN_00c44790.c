/* Ghidra address: 00c44790 */
/* Ghidra symbol: FUN_00c44790 */


void FUN_00c44790(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double local_58;
  double dStack_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  
  local_38 = *param_1;
  local_30 = param_1[1];
  local_48 = *param_2;
  local_40 = param_2[1];
  dVar1 = local_48 * local_48 + local_40 * local_40;
  if (dVar1 == 0.0) {
    FUN_00c44460(&local_58,0x46293e5939a08cea,0x46293e5939a08cea);
    *param_3 = local_58;
    param_3[1] = dStack_50;
  }
  else {
    *param_3 = (local_38 * local_48 + local_30 * local_40) / dVar1;
    param_3[1] = (local_30 * local_48 - local_38 * local_40) / dVar1;
  }
  return;
}


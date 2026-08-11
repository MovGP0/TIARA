/* Ghidra address: 0137c0d0 */
/* Ghidra symbol: FUN_0137c0d0 */


void FUN_0137c0d0(longlong param_1,undefined8 param_2,double *param_3,char param_4,char param_5)

{
  double dVar1;
  double local_30 [2];
  
  if (param_4 == '\0') {
    FUN_010c0d70(param_2,param_3,param_5,0xfe,0x3ff0000000000000);
  }
  else if (param_5 == '\0') {
    local_30[0] = (double)FUN_00c42750(*param_3 / 20.0);
    local_30[0] = local_30[0] * *(double *)(param_1 + 0xd8);
    FUN_010c0d70(param_2,local_30,0,0xfe,0x3ff0000000000000);
  }
  else {
    FUN_010c0d70(param_2,local_30,param_5,0xfe,0x3ff0000000000000);
    local_30[0] = (double)FUN_005264b0(local_30[0] / *(double *)(param_1 + 0xd8));
    local_30[0] = local_30[0] * 20.0;
    dVar1 = (double)FUN_010bfdb0(local_30,1);
    *param_3 = dVar1;
  }
  return;
}


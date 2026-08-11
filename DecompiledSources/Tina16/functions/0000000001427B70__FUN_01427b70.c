/* Ghidra address: 01427b70 */
/* Ghidra symbol: FUN_01427b70 */


void FUN_01427b70(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 double *param_5,double *param_6)

{
  double dVar1;
  double dVar2;
  undefined8 local_40;
  double local_38;
  double local_30 [5];
  
  FUN_01427ad0(param_1,param_3,param_4,local_30,&local_38,&local_40);
  if (1.0 < local_30[0]) {
    dVar1 = (double)FUN_00c42670(1.0 - local_38,0x4018000000000000);
    dVar1 = 376.99111843077515 / ((local_30[0] - local_38 * 0.44) + dVar1 + 2.42);
  }
  else {
    dVar1 = (double)FUN_0040c2f0(local_38 * 8.0 + local_30[0] * 0.25);
    dVar1 = dVar1 * 60.0;
  }
  dVar2 = (double)FUN_0040c760(local_40);
  *param_5 = dVar1 / dVar2;
  dVar1 = (double)FUN_0040c760(local_40);
  *param_6 = (param_2 * dVar1) / 300000000.0;
  return;
}


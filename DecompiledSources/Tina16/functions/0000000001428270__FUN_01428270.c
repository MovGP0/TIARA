/* Ghidra address: 01428270 */
/* Ghidra symbol: FUN_01428270 */


void FUN_01428270(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 double param_5)

{
  double dVar1;
  undefined8 local_30;
  undefined1 local_28 [8];
  undefined1 local_20 [24];
  
  FUN_01427ad0(param_1,param_3,param_4,local_20,local_28,&local_30);
  dVar1 = (double)FUN_0040c760(local_30);
  dVar1 = (double)FUN_00c43c40((param_5 * param_2 * dVar1) / 300000000.0,0x401921fb54442d18);
  FUN_00b90650(dVar1 * 360.0,0x4076800000000000);
  return;
}


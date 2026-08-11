/* Ghidra address: 014281e0 */
/* Ghidra symbol: FUN_014281e0 */


double FUN_014281e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   double param_5,double param_6)

{
  double dVar1;
  undefined8 local_20;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  FUN_01427ad0(param_1,param_3,param_4,local_10,local_18,&local_20);
  dVar1 = (double)FUN_0040c760(local_20);
  return ((param_6 / 360.0) * 300000000.0) / (param_5 * dVar1);
}


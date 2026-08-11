/* Ghidra address: 01884510 */
/* Ghidra symbol: FUN_01884510 */


void FUN_01884510(undefined8 param_1,double param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_0040c840(param_2 / (double)*(int *)PTR_DAT_020052f0);
  FUN_01950940(param_1,(double)(lVar1 * *(int *)PTR_DAT_020052f0) +
                       (double)*(int *)PTR_DAT_020052f0 / 2.0);
  return;
}


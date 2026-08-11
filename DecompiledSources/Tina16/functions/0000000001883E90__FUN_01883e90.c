/* Ghidra address: 01883e90 */
/* Ghidra symbol: FUN_01883e90 */


void FUN_01883e90(longlong param_1,double param_2)

{
  longlong lVar1;
  double dVar2;
  
  if (*(char *)(param_1 + 0x1a0) == '\x02') {
    lVar1 = FUN_0040c840(param_2 / *(double *)PTR_DAT_02005968);
    dVar2 = (double)lVar1 * *(double *)PTR_DAT_02005968;
  }
  else {
    lVar1 = FUN_0040c770(param_2 / *(double *)PTR_DAT_02005968);
    dVar2 = (double)lVar1 * *(double *)PTR_DAT_02005968;
  }
  FUN_01950900(param_1,dVar2);
  return;
}


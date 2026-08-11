/* Ghidra address: 01884580 */
/* Ghidra symbol: FUN_01884580 */


void FUN_01884580(longlong param_1,double param_2)

{
  longlong lVar1;
  double dVar2;
  
  if (*(char *)(param_1 + 0x1a0) == '\x04') {
    lVar1 = FUN_0040c840(param_2 / *(double *)PTR_DAT_02005968);
    dVar2 = (double)lVar1 * *(double *)PTR_DAT_02005968;
  }
  else {
    lVar1 = FUN_0040c770(param_2 / *(double *)PTR_DAT_02005968);
    dVar2 = (double)lVar1 * *(double *)PTR_DAT_02005968;
  }
  FUN_01950980(param_1,dVar2);
  return;
}


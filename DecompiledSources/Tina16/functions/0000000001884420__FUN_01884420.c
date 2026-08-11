/* Ghidra address: 01884420 */
/* Ghidra symbol: FUN_01884420 */


void FUN_01884420(longlong param_1,double param_2)

{
  longlong lVar1;
  double dVar2;
  
  if (0.0 <= param_2) {
    if (*(char *)(param_1 + 0x1a0) == '\x02') {
      lVar1 = FUN_0040c770(param_2 / *(double *)PTR_DAT_02005968);
      dVar2 = (double)lVar1 * *(double *)PTR_DAT_02005968 - *(double *)PTR_DAT_02005968 / 2.0;
    }
    else {
      lVar1 = FUN_0040c840(param_2 / *(double *)PTR_DAT_02005968);
      dVar2 = (double)lVar1 * *(double *)PTR_DAT_02005968 + *(double *)PTR_DAT_02005968 / 2.0;
    }
  }
  else {
    lVar1 = FUN_0040c840(param_2 / *(double *)PTR_DAT_02005968);
    dVar2 = (double)lVar1 * *(double *)PTR_DAT_02005968 - *(double *)PTR_DAT_02005968 / 2.0;
  }
  FUN_01950900(param_1,dVar2);
  return;
}


/* Ghidra address: 01950860 */
/* Ghidra symbol: FUN_01950860 */


double FUN_01950860(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  double dVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xf0);
  if ((lVar1 != 0) && (cVar2 = FUN_004113d0(lVar1,&PTR_FUN_01936058), cVar2 == '\0')) {
    dVar3 = (double)FUN_01950860(lVar1);
    return dVar3 + *(double *)(param_1 + 0xa0);
  }
  return *(double *)(param_1 + 0xa0);
}


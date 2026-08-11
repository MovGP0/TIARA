/* Ghidra address: 019508b0 */
/* Ghidra symbol: FUN_019508b0 */


double FUN_019508b0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  double dVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xf0);
  if ((lVar1 != 0) && (cVar2 = FUN_004113d0(lVar1,&PTR_FUN_01936058), cVar2 == '\0')) {
    dVar3 = (double)FUN_019508b0(lVar1);
    return dVar3 + *(double *)(param_1 + 0x98);
  }
  return *(double *)(param_1 + 0x98);
}


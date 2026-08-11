/* Ghidra address: 01884170 */
/* Ghidra symbol: FUN_01884170 */


double FUN_01884170(void)

{
  longlong lVar1;
  double dVar2;
  
  dVar2 = (double)FUN_019605b0();
  lVar1 = FUN_0040c770(dVar2 / (double)*(int *)PTR_DAT_020052f0);
  return (double)(lVar1 * *(int *)PTR_DAT_020052f0);
}


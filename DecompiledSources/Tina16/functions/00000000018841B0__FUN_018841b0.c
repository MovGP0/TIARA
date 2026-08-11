/* Ghidra address: 018841b0 */
/* Ghidra symbol: FUN_018841b0 */


double FUN_018841b0(void)

{
  longlong lVar1;
  double dVar2;
  
  dVar2 = (double)FUN_01960c20();
  lVar1 = FUN_0040c770(dVar2 / *(double *)PTR_DAT_02005968);
  return (double)lVar1 * *(double *)PTR_DAT_02005968;
}


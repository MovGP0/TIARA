/* Ghidra address: 01abfb00 */
/* Ghidra symbol: FUN_01abfb00 */


double FUN_01abfb00(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if ((lVar1 != 0) && (cVar2 = FUN_004113d0(lVar1,&PTR_FUN_01aae560), cVar2 != '\0')) {
    return *(double *)(param_1 + 0x78) + *(double *)(lVar1 + 0xf0);
  }
  return *(double *)(param_1 + 0x78);
}


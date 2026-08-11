/* Ghidra address: 01abfb40 */
/* Ghidra symbol: FUN_01abfb40 */


void FUN_01abfb40(longlong param_1,double param_2)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if ((lVar1 != 0) && (cVar2 = FUN_004113d0(lVar1,&PTR_FUN_01aae560), cVar2 != '\0')) {
    *(double *)(param_1 + 0x78) = param_2 - *(double *)(lVar1 + 0xf0);
    return;
  }
  *(double *)(param_1 + 0x78) = param_2;
  return;
}


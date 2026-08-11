/* Ghidra address: 00648630 */
/* Ghidra symbol: FUN_00648630 */


void FUN_00648630(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_006485b0(param_1);
  if ((lVar1 == 0) && (DAT_020122c0 != (code *)0x0)) {
    (*DAT_020122c0)(DAT_020122c8,param_1);
  }
  return;
}


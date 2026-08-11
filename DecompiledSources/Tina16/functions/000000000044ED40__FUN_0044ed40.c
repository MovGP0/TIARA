/* Ghidra address: 0044ed40 */
/* Ghidra symbol: FUN_0044ed40 */


void FUN_0044ed40(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_0044ec00(&DAT_0200c888);
  if (lVar1 == 0) {
    lVar1 = FUN_004095c0(0x10);
  }
  *(undefined8 *)(lVar1 + 8) = param_1;
  FUN_0044ebe0(&DAT_0200c680,lVar1);
  return;
}


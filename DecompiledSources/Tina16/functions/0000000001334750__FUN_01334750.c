/* Ghidra address: 01334750 */
/* Ghidra symbol: FUN_01334750 */


void FUN_01334750(void)

{
  undefined8 uVar1;
  
  DAT_02107850 = DAT_02107850 + 1;
  if (DAT_02107850 == 0) {
    FUN_01d42ec0(L"SteadyUt.Finalization.0");
    uVar1 = DAT_02107848;
    DAT_02107848 = 0;
    FUN_00410f20(uVar1);
    FUN_01d42ec0(L"SteadyUt.Finalization.1");
  }
  return;
}


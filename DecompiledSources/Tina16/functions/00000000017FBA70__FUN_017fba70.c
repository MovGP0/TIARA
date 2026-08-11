/* Ghidra address: 017fba70 */
/* Ghidra symbol: FUN_017fba70 */


void FUN_017fba70(void)

{
  undefined8 uVar1;
  
  DAT_02110178 = DAT_02110178 + 1;
  if (DAT_02110178 == 0) {
    FUN_01d42ec0(L"DDEUtil.Finalization.0");
    uVar1 = DAT_02110168;
    DAT_02110168 = 0;
    FUN_00410f20(uVar1);
    uVar1 = DAT_02110170;
    DAT_02110170 = 0;
    FUN_00410f20(uVar1);
    FUN_01d42ec0(L"DDEUtil.Finalization.1");
  }
  return;
}


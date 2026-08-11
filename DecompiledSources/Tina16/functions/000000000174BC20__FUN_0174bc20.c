/* Ghidra address: 0174bc20 */
/* Ghidra symbol: FUN_0174bc20 */


void FUN_0174bc20(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38));
  if (iVar1 != 0) {
    FUN_0173d100(param_1,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
  }
  return;
}


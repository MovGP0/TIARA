/* Ghidra address: 01be1430 */
/* Ghidra symbol: FUN_01be1430 */


void FUN_01be1430(longlong param_1)

{
  int iVar1;
  
  if (DAT_02111460 == 0) {
    DAT_02111460 = FUN_00410e60(&PTR_FUN_01be0af0,1);
  }
  if (param_1 != 0) {
    iVar1 = FUN_004aeba0(DAT_02111460,param_1);
    if (iVar1 == -1) {
      FUN_004ae7e0(DAT_02111460,param_1);
    }
  }
  return;
}


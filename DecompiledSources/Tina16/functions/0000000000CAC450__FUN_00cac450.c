/* Ghidra address: 00cac450 */
/* Ghidra symbol: FUN_00cac450 */


void FUN_00cac450(undefined8 param_1)

{
  int iVar1;
  
  if (DAT_01eaaf20 == 0) {
    DAT_01eaaf20 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  }
  iVar1 = FUN_004aeba0(DAT_01eaaf20,param_1);
  if (iVar1 == -1) {
    FUN_004ae7e0(DAT_01eaaf20,param_1);
  }
  return;
}


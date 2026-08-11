/* Ghidra address: 00649c60 */
/* Ghidra symbol: FUN_00649c60 */


void FUN_00649c60(longlong param_1,char param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (DAT_02012338 == 0) {
      DAT_02012338 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    }
    iVar1 = FUN_004aeba0(DAT_02012338,param_1);
    if (param_2 == '\0') {
      if (iVar1 != -1) {
        FUN_004ae870(DAT_02012338,iVar1);
      }
    }
    else if (iVar1 == -1) {
      FUN_004ae7e0(DAT_02012338,param_1);
    }
  }
  return;
}


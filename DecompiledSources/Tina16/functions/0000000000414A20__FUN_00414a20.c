/* Ghidra address: 00414a20 */
/* Ghidra symbol: FUN_00414a20 */


void FUN_00414a20(longlong *param_1,undefined8 param_2,int param_3,short param_4)

{
  int iVar1;
  
  if (param_3 < 1) {
    FUN_004144d0(param_1);
  }
  else {
    if (param_4 == 0) {
      param_4 = DAT_02006a28;
    }
    iVar1 = FUN_004146a0(0,0,param_2,param_3,param_4);
    FUN_00415d10(param_1,iVar1,0);
    if (iVar1 < 1) {
      FUN_004144d0(param_1);
    }
    else {
      FUN_004146a0(*param_1,iVar1,param_2,param_3,param_4);
      *(short *)(*param_1 + -0xc) = param_4;
    }
  }
  return;
}


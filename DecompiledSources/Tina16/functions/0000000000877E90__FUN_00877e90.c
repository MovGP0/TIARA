/* Ghidra address: 00877e90 */
/* Ghidra symbol: FUN_00877e90 */


longlong *
FUN_00877e90(longlong *param_1,longlong param_2,int param_3,int param_4,longlong *param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_0041b910(param_5);
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  iVar1 = (iVar1 - param_4) + 1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if ((-1 < param_3) && (param_3 < iVar1)) {
    iVar1 = param_3;
  }
  if (iVar1 < 1) {
    FUN_00419430(param_1,&DAT_0086e978);
  }
  else {
    if (param_5 == (longlong *)0x0) {
      FUN_008742b0(&param_5,0);
    }
    iVar2 = (**(code **)(*param_5 + 0x38))(param_5,param_2,param_4,iVar1);
    FUN_00419260(param_1,&DAT_0086e978,1,(longlong)iVar2);
    lVar3 = 0;
    if (*param_1 != 0) {
      lVar3 = *(longlong *)(*param_1 + -8);
    }
    if (0 < lVar3) {
      (**(code **)(*param_5 + 0x80))(param_5,param_2,param_4,iVar1,param_1,0);
    }
  }
  FUN_0041b800(&param_5);
  return param_1;
}


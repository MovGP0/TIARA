/* Ghidra address: 00878d40 */
/* Ghidra symbol: FUN_00878d40 */


void FUN_00878d40(longlong *param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = *(longlong *)(param_2 + -8);
  }
  lVar2 = lVar2 - param_3;
  if (lVar2 < 0) {
    lVar2 = 0;
  }
  iVar1 = (int)lVar2;
  if ((-1 < param_4) && (param_4 < iVar1)) {
    iVar1 = param_4;
  }
  if (0 < iVar1) {
    iVar3 = 0;
    if (*param_1 != 0) {
      iVar3 = (int)*(undefined8 *)(*param_1 + -8);
    }
    FUN_00419260(param_1,&DAT_0086e978,1,(longlong)(iVar3 + iVar1));
    FUN_00409a70(param_2 + param_3,*param_1 + (longlong)iVar3,(longlong)iVar1);
  }
  return;
}


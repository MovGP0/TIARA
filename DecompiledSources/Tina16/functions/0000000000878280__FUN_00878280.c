/* Ghidra address: 00878280 */
/* Ghidra symbol: FUN_00878280 */


undefined8 * FUN_00878280(undefined8 *param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = *(longlong *)(param_2 + -8);
  }
  lVar2 = lVar2 - param_4;
  if (lVar2 < 0) {
    lVar2 = 0;
  }
  iVar1 = (int)lVar2;
  if ((-1 < param_3) && (param_3 < iVar1)) {
    iVar1 = param_3;
  }
  FUN_00419260(param_1,&DAT_0086e978,1,(longlong)iVar1);
  if (0 < iVar1) {
    FUN_00409a70(param_2 + param_4,*param_1,(longlong)iVar1);
  }
  return param_1;
}


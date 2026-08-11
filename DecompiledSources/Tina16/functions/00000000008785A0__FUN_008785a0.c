/* Ghidra address: 008785a0 */
/* Ghidra symbol: FUN_008785a0 */


undefined8
FUN_008785a0(undefined8 param_1,longlong param_2,int param_3,int param_4,longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  
  FUN_0041b910(param_5);
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
  if (iVar1 < 1) {
    FUN_00414480(param_1);
  }
  else {
    if (param_5 == (longlong *)0x0) {
      FUN_008742b0(&param_5,0);
    }
    (**(code **)(*param_5 + 0xf8))(param_5,param_1,param_2,param_3,iVar1);
  }
  FUN_0041b800(&param_5);
  return param_1;
}


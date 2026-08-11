/* Ghidra address: 019c1860 */
/* Ghidra symbol: FUN_019c1860 */


undefined8
FUN_019c1860(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined1 local_48 [24];
  
  if (-1 < param_4) {
    param_4 = param_4 + 1;
    do {
      iVar1 = thunk_FUN_041ebb10(local_48,param_3,param_2);
      if (iVar1 != 0) {
        FUN_00414ad0(param_1,*param_5);
        return param_1;
      }
      param_5 = param_5 + 1;
      param_3 = param_3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  FUN_00414480(param_1);
  return param_1;
}


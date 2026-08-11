/* Ghidra address: 0086b790 */
/* Ghidra symbol: FUN_0086b790 */


undefined8 FUN_0086b790(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (-1 < param_4) {
    param_4 = param_4 + 1;
    do {
      uVar2 = FUN_0041b800(param_2);
      iVar1 = thunk_FUN_041d73d1(param_3,0,5,&LAB_0086b7ec,uVar2);
      if (iVar1 == 0) {
        return param_2;
      }
      param_3 = param_3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return param_2;
}


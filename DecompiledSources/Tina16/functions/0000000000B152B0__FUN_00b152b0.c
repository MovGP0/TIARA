/* Ghidra address: 00b152b0 */
/* Ghidra symbol: FUN_00b152b0 */


undefined8 FUN_00b152b0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  if (iVar1 < 1) {
    FUN_004144d0(param_1);
  }
  else {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = *(int *)(param_2 + -4);
    }
    uVar2 = FUN_00415ab0(param_2);
    FUN_00b14e80(param_1,uVar2,(longlong)iVar1 / 2 & 0xffffffff);
  }
  return param_1;
}


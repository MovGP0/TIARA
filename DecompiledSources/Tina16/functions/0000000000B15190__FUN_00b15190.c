/* Ghidra address: 00b15190 */
/* Ghidra symbol: FUN_00b15190 */


undefined8 * FUN_00b15190(undefined8 *param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = 0;
  if (param_2 != (char *)0x0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  if ((iVar1 != 0) && (*param_2 == '\x01')) {
    iVar1 = 0;
    if (param_2 != (char *)0x0) {
      iVar1 = *(int *)(param_2 + -4);
    }
    FUN_00416660(param_1,(longlong)(iVar1 + -1) / 2 & 0xffffffff);
    iVar1 = 0;
    if (param_2 != (char *)0x0) {
      iVar1 = *(int *)(param_2 + -4);
    }
    if (0 < iVar1 + -1) {
      iVar1 = 0;
      if (param_2 != (char *)0x0) {
        iVar1 = *(int *)(param_2 + -4);
      }
      uVar2 = FUN_00415f70(*param_1);
      FUN_00409a70(param_2 + 1,uVar2,(longlong)(iVar1 + -1));
    }
  }
  return param_1;
}


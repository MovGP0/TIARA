/* Ghidra address: 0061d8e0 */
/* Ghidra symbol: FUN_0061d8e0 */


undefined8 FUN_0061d8e0(undefined8 param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != (byte *)0x0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  iVar1 = 1;
  if (((iVar2 < 1) || (*param_2 < 0x21)) || (param_2[(longlong)iVar2 + -1] < 0x21)) {
    while ((iVar1 <= iVar2 && (param_2[(longlong)iVar1 + -1] < 0x21))) {
      iVar1 = iVar1 + 1;
    }
    if (iVar2 < iVar1) {
      FUN_004144d0(param_1);
    }
    else {
      while (param_2[(longlong)iVar2 + -1] < 0x21) {
        iVar2 = iVar2 + -1;
      }
      FUN_00415ad0(param_1,param_2,iVar1,(iVar2 - iVar1) + 1);
    }
  }
  else {
    FUN_00414bf0(param_1);
  }
  return param_1;
}


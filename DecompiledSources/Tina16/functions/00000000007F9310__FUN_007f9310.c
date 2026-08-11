/* Ghidra address: 007f9310 */
/* Ghidra symbol: FUN_007f9310 */


void FUN_007f9310(undefined8 param_1,char param_2,byte param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = thunk_FUN_04118143(param_1,0xffffffec);
  if (((param_2 != '\0') && ((uVar1 & 0x40000) == 0)) ||
     ((param_2 == '\0' && ((uVar1 & 0x40000) == 0x40000)))) {
    iVar2 = thunk_FUN_03d44949(param_1);
    bVar3 = iVar2 == 0;
    iVar2 = thunk_FUN_0419e3da(param_1);
    if (iVar2 != 0 || !bVar3) {
      thunk_FUN_03ab0e43(param_1,0);
    }
    if (param_2 == '\0') {
      thunk_FUN_03c9d277(param_1,0xffffffec,(longlong)(int)(uVar1 & 0xfffbffff));
    }
    else {
      thunk_FUN_03c9d277(param_1,0xffffffec,(longlong)(int)(uVar1 | 0x40000));
    }
    if (((iVar2 != 0 & param_3) != 0) || (!bVar3)) {
      if (bVar3) {
        thunk_FUN_03ab0e43(param_1,5);
      }
      else {
        thunk_FUN_03ab0e43(param_1,6);
      }
    }
  }
  return;
}


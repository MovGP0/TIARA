/* Ghidra address: 007f9610 */
/* Ghidra symbol: FUN_007f9610 */


undefined8 FUN_007f9610(undefined *param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  if ((param_1 != PTR_DAT_01e13ff0) && (param_1 != *(undefined **)(DAT_02012668 + 0x2d0))) {
    iVar1 = thunk_FUN_0419e3da(param_1);
    if (iVar1 != 0) {
      iVar1 = thunk_FUN_03986dbd(param_1);
      if (iVar1 != 0) {
        uVar2 = thunk_FUN_04118143(param_1,0xffffffec);
        if ((uVar2 & 8) == 0) {
          if (DAT_01e13ff8 == (undefined *)0x0) {
            DAT_01e13ff8 = param_1;
          }
        }
        else if (DAT_01e14000 == (undefined *)0x0) {
          DAT_01e14000 = param_1;
        }
      }
    }
  }
  return 0xffffffff;
}


/* Ghidra address: 0080c2c0 */
/* Ghidra symbol: FUN_0080c2c0 */


void FUN_0080c2c0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(char *)(param_1 + 0x193) == '\0') || (*(longlong *)(param_1 + 0xa8) == 0)) {
    lVar2 = *(longlong *)(param_1 + 0x2d0);
  }
  else {
    lVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa8));
  }
  if (lVar2 != 0) {
    lVar2 = thunk_FUN_041620f3(lVar2);
    if ((lVar2 != 0) && (lVar2 != *(longlong *)(param_1 + 0x2d0))) {
      iVar1 = thunk_FUN_0419e3da(lVar2);
      if (iVar1 != 0) {
        iVar1 = thunk_FUN_03986dbd(lVar2);
        if (iVar1 != 0) {
          thunk_FUN_039c4287(lVar2);
        }
      }
    }
  }
  return;
}


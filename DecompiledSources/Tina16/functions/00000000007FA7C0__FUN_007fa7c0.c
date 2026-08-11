/* Ghidra address: 007fa7c0 */
/* Ghidra symbol: FUN_007fa7c0 */


void FUN_007fa7c0(longlong param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != *(int *)(param_1 + 0x38)) {
    iVar1 = param_2;
    if (param_2 == 0) {
      iVar1 = thunk_FUN_0410f747(*(undefined4 *)
                                  (&DAT_01e140a8 + (ulonglong)*(byte *)(param_1 + 0x20) * 4));
    }
    *(int *)(param_1 + 0x38) = iVar1;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    FUN_007fb150(*(undefined8 *)(param_1 + 8));
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
  }
  return;
}


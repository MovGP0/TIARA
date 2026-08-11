/* Ghidra address: 016d43c0 */
/* Ghidra symbol: FUN_016d43c0 */


void FUN_016d43c0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((char)param_1[0xb1] != '\0') {
    if (param_1[0xb5] != 0) {
      if (*(char *)((longlong)param_1 + 0x4a5) == '\0') {
        FUN_004d1f00(param_1[0xb5]);
      }
      else {
        FUN_016d4e50(param_1);
      }
    }
    param_1[0xb5] = 0;
    thunk_FUN_041ba077(param_1[0xb4]);
    *(undefined1 *)(param_1 + 0xaf) = 0;
    FUN_016d4380(param_1,0);
    iVar2 = (int)param_1[0x94];
    iVar1 = 0;
    if (-1 < iVar2 + -1) {
      do {
        thunk_FUN_0417f059(param_1[0xb4],param_1[(longlong)iVar1 + 0xa5],0x30);
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (*(char *)((longlong)param_1 + 0x4a5) == '\0') {
      (**(code **)(*param_1 + 0x288))(param_1);
    }
  }
  return;
}


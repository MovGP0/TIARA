/* Ghidra address: 007496c0 */
/* Ghidra symbol: FUN_007496c0 */


void FUN_007496c0(longlong param_1,int param_2,int param_3,char param_4,char param_5)

{
  code *pcVar1;
  longlong lVar2;
  
  if ((param_2 != *(int *)(param_1 + 0x20)) || (param_3 != *(int *)(param_1 + 0x24))) {
    if (param_5 != '\0') {
      pcVar1 = (code *)FUN_00411550(param_1,0xffffffff);
      lVar2 = (*pcVar1)(param_1);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = FUN_00747010(lVar2,param_2,param_3);
      }
      if (lVar2 != 0) {
        FUN_007496c0(lVar2,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),0,0);
      }
    }
    *(int *)(param_1 + 0x20) = param_2;
    *(int *)(param_1 + 0x24) = param_3;
    if (param_4 == '\0') {
      if (0 < *(int *)(param_1 + 0x30)) {
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      }
    }
    else {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    }
    FUN_004b1830(param_1,0);
  }
  return;
}


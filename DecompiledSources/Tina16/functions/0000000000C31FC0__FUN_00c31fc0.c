/* Ghidra address: 00c31fc0 */
/* Ghidra symbol: FUN_00c31fc0 */


void FUN_00c31fc0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = thunk_FUN_039b2f93();
  FUN_00c31a80(param_1,param_2,param_3);
  if (*(char *)((longlong)param_1 + 9) != '\0') {
    iVar2 = FUN_00c1aa10(*(undefined8 *)(param_1[2] + 0x50));
    if (0 < iVar2) {
      if ((char)param_1[10] == '\0') {
        (**(code **)(*param_1 + 0x80))(param_1);
      }
      if (((char)param_1[10] != '\0') && ((char)param_1[0x12] != '\0')) {
        iVar2 = thunk_FUN_039b2f93();
        iVar1 = (int)param_1[0x10] - (iVar2 - iVar1);
        if (iVar1 < 1) {
          iVar1 = 1;
        }
        FUN_00c32a30(param_1,iVar1);
      }
    }
  }
  return;
}


/* Ghidra address: 00af4640 */
/* Ghidra symbol: FUN_00af4640 */


void FUN_00af4640(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined8 param_5,char *param_6)

{
  int iVar1;
  int iVar2;
  
  *param_6 = *(int *)(*(longlong *)(param_1 + 0x740) + 0x9c) < *(int *)(param_1 + 0x908);
  if (*param_6 != '\0') {
    iVar2 = *(int *)(*(longlong *)PTR_DAT_020054d8 + 0x14);
    if (iVar2 < 1) {
      iVar2 = FUN_00af6070(param_1);
      FUN_00af6080(param_1,iVar2 - param_4 / 2);
    }
    else if (param_4 < 1) {
      iVar1 = FUN_00af6070(param_1);
      FUN_00af6080(param_1,iVar1 + iVar2 * 0x10);
    }
    else {
      iVar1 = FUN_00af6070(param_1);
      FUN_00af6080(param_1,iVar1 + iVar2 * -0x10);
    }
  }
  return;
}


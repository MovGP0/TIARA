/* Ghidra address: 006d73d0 */
/* Ghidra symbol: FUN_006d73d0 */


longlong FUN_006d73d0(longlong param_1,undefined8 param_2,char param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(*(longlong *)(param_1 + 0x528) + 0x10) != 0) {
    iVar1 = FUN_004aeba0(*(longlong *)(param_1 + 0x528));
    iVar3 = iVar1;
    if (iVar1 == -1) {
      if (param_3 == '\0') {
        iVar1 = 0;
        iVar3 = iVar1;
      }
      else {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x528) + 0x10) + -1;
        iVar3 = iVar1;
      }
    }
    do {
      if (param_3 == '\0') {
        if (iVar1 == 0) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0x528) + 0x10);
        }
        iVar1 = iVar1 + -1;
      }
      else {
        iVar1 = iVar1 + 1;
        if (iVar1 == *(int *)(*(longlong *)(param_1 + 0x528) + 0x10)) {
          iVar1 = 0;
        }
      }
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x528),iVar1);
      if (param_4 == '\0') {
        return lVar2;
      }
      if (*(char *)(lVar2 + 0x4a0) != '\0') {
        return lVar2;
      }
    } while (iVar1 != iVar3);
  }
  return 0;
}


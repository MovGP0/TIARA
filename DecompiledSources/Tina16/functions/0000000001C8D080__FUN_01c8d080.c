/* Ghidra address: 01c8d080 */
/* Ghidra symbol: FUN_01c8d080 */


void FUN_01c8d080(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (param_4 == 0) {
    param_4 = *(longlong *)(param_1 + 0x2788);
  }
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x2780) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar2);
      if ((param_4 == *(longlong *)(lVar1 + 0x10)) &&
         ((*(longlong *)(lVar1 + 0x20) == 0 ||
          (*(char *)(*(longlong *)(lVar1 + 0x20) + 0x70) == '\x01')))) {
        FUN_0199e310(*(undefined8 *)(lVar1 + 8),param_2,param_3,0);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


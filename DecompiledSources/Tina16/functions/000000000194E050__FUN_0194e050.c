/* Ghidra address: 0194e050 */
/* Ghidra symbol: FUN_0194e050 */


void FUN_0194e050(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  FUN_0197bdf0(DAT_02110740);
  (**(code **)(*param_1 + 0x90))(param_1);
  iVar3 = *(int *)(DAT_02110740 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(DAT_02110740,iVar2);
      if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1c8) != 0)) &&
         (*(char *)(lVar1 + 0x1b1) != '\0')) {
        (**(code **)(*param_1 + 0x80))(param_1,*(undefined8 *)(lVar1 + 0x1c8),lVar1);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_0197be00(DAT_02110740);
  return;
}


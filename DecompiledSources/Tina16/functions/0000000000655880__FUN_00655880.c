/* Ghidra address: 00655880 */
/* Ghidra symbol: FUN_00655880 */


longlong FUN_00655880(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x378));
  iVar1 = iVar1 + 1;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x378) + 0x10) + -1;
  if (iVar1 <= iVar3) {
    iVar3 = (iVar3 - iVar1) + 1;
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x378),iVar1);
      if (*(longlong *)(lVar2 + 0x468) != 0) {
        return *(longlong *)(lVar2 + 0x468);
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}


/* Ghidra address: 00f08a40 */
/* Ghidra symbol: FUN_00f08a40 */


void FUN_00f08a40(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x6b0);
  if (*(char *)(*(longlong *)(lVar1 + 0x538) + 0xa9) != '\0') {
    iVar2 = *(int *)(*(longlong *)(lVar1 + 0x538) + 0x94) -
            *(int *)(*(longlong *)(lVar1 + 0x520) + 0x94);
    FUN_0064cc50(lVar1,*(int *)(lVar1 + 0x9c) + iVar2);
    FUN_0064cc50(*(longlong *)(lVar1 + 0x4b8),*(int *)(*(longlong *)(lVar1 + 0x4b8) + 0x9c) + iVar2)
    ;
    FUN_0064cc50(*(longlong *)(lVar1 + 0x508),*(int *)(*(longlong *)(lVar1 + 0x508) + 0x9c) + iVar2)
    ;
  }
  return;
}


/* Ghidra address: 01c83f50 */
/* Ghidra symbol: FUN_01c83f50 */


void FUN_01c83f50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x27a8);
  if ((lVar1 != 0) && (*(char *)(*(longlong *)(param_1 + 0xca8) + 0x80) != '\0')) {
    FUN_01c750d0(param_1,*(undefined4 *)(lVar1 + 0xa4),*(undefined4 *)(lVar1 + 0xa8),
                 *(int *)(lVar1 + 0xac) + *(int *)PTR_DAT_02002620,
                 *(int *)(lVar1 + 0xb0) + *(int *)PTR_DAT_02001fb0);
  }
  return;
}


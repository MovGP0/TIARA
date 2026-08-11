/* Ghidra address: 017d85d0 */
/* Ghidra symbol: FUN_017d85d0 */


void FUN_017d85d0(longlong param_1,longlong *param_2,int param_3,undefined4 param_4,int *param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int local_40;
  
  lVar1 = *param_2;
  lVar3 = param_2[2];
  *param_5 = *(int *)(param_1 + 8) + -1;
  local_40 = (int)lVar3;
  iVar2 = 0;
  if (-1 < local_40 + -1) {
    do {
      lVar3 = (longlong)iVar2;
      if ((param_3 <= *(int *)(lVar1 + 0x10 + lVar3 * 0x18)) &&
         (FUN_017d8580(param_1,*(undefined4 *)(lVar1 + 0x10 + lVar3 * 0x18),param_4),
         *(int *)(lVar1 + 0x10 + lVar3 * 0x18) < *param_5)) {
        *param_5 = *(int *)(lVar1 + 0x10 + lVar3 * 0x18);
      }
      iVar2 = iVar2 + 1;
      local_40 = local_40 + -1;
    } while (local_40 != 0);
  }
  return;
}


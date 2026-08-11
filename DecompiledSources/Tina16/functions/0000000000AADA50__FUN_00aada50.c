/* Ghidra address: 00aada50 */
/* Ghidra symbol: FUN_00aada50 */


void FUN_00aada50(longlong param_1,longlong *param_2,longlong param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_44;
  int local_40;
  int local_3c;
  
  local_44 = 100;
  local_40 = 0;
  iVar4 = 0;
  local_3c = param_5;
  if (param_4 <= param_5) {
    iVar5 = (param_4 - param_5) + -1;
    do {
      lVar3 = (longlong)local_3c;
      iVar1 = local_44;
      if ((*(char *)(param_3 + lVar3) == '\x03') &&
         (0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0xe8) + lVar3 * 4))) {
        local_40 = local_40 + 1;
        iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0xe8) + lVar3 * 4);
        iVar4 = iVar4 + iVar1;
        iVar1 = thunk_FUN_03f3ed25(*(undefined4 *)(*param_2 + lVar3 * 4),100,iVar1);
        if (iVar1 < local_44) {
          iVar1 = local_44;
        }
      }
      local_44 = iVar1;
      local_3c = local_3c + -1;
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0);
  }
  iVar4 = thunk_FUN_03f3ed25(local_44,iVar4,100);
  iVar5 = 0;
  iVar1 = 0;
  local_3c = param_5;
  if (param_4 <= param_5) {
    iVar6 = (param_4 - param_5) + -1;
    do {
      lVar3 = (longlong)local_3c;
      if ((*(char *)(param_3 + lVar3) == '\x03') &&
         (0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0xe8) + lVar3 * 4))) {
        if (local_40 < 2) {
          *(int *)(*param_2 + lVar3 * 4) = iVar4 - iVar5;
          return;
        }
        iVar1 = iVar1 + *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0xe8) + lVar3 * 4);
        iVar2 = thunk_FUN_03f3ed25(iVar1,local_44,100);
        *(int *)(*param_2 + lVar3 * 4) = iVar2 - iVar5;
        iVar5 = iVar5 + *(int *)(*param_2 + lVar3 * 4);
        local_40 = local_40 + -1;
      }
      local_3c = local_3c + -1;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0);
  }
  return;
}


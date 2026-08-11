/* Ghidra address: 006fb920 */
/* Ghidra symbol: FUN_006fb920 */


void FUN_006fb920(longlong param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  if (((*(ushort *)(param_1 + 0x34) & 1) == 0) && (*(int *)(param_1 + 0x534) < 1)) {
    FUN_006fd900(param_1);
    local_1c = FUN_006fd980(param_1);
    local_1c = local_1c + -1;
    if (param_2 <= local_1c) {
      iVar1 = (param_2 - local_1c) + -1;
      do {
        FUN_006fb710(param_1,local_1c);
        local_1c = local_1c + -1;
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0);
    }
    FUN_006fd910(param_1);
  }
  return;
}


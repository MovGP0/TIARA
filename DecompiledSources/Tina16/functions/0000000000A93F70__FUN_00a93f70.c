/* Ghidra address: 00a93f70 */
/* Ghidra symbol: FUN_00a93f70 */


void FUN_00a93f70(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 8) != 0) {
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 600);
      if (((lVar3 != 0) && (iVar1 = FUN_004aeba0(lVar3,param_1), -1 < iVar1)) &&
         (iVar1 = iVar1 + -1, -1 < iVar1)) {
        do {
          lVar2 = FUN_00a94970(lVar3,iVar1);
          if (*(int *)(*(longlong *)(param_1 + 8) + 0x18) !=
              *(int *)(*(longlong *)(lVar2 + 8) + 0x18)) {
            return;
          }
          lVar2 = FUN_00a94970(lVar3,iVar1);
          if (*(longlong *)(lVar2 + 0x60) != 0) {
            lVar3 = FUN_00a94970(lVar3,iVar1);
            *(undefined4 *)(lVar3 + 0x28) = param_2;
            return;
          }
          iVar1 = iVar1 + -1;
        } while (iVar1 != -1);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x28) = param_2;
    }
  }
  return;
}


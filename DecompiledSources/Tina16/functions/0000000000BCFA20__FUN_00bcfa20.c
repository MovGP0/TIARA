/* Ghidra address: 00bcfa20 */
/* Ghidra symbol: FUN_00bcfa20 */


undefined4 FUN_00bcfa20(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined4 local_34;
  undefined8 local_30;
  
  local_30 = 0;
  if (*(int *)(param_1 + 0x58) < 0) {
    iVar3 = 0;
    iVar5 = *(int *)(param_1 + 0x40);
    if (0 < iVar5) {
      lVar4 = *(longlong *)(param_1 + 0x38);
      iVar2 = 0;
      if (-1 < iVar5 + -1) {
        do {
          if ((*(byte *)(lVar4 + 0x20) & 4) != 0) {
            FUN_00bcf6d0(param_1,&local_30,iVar2);
          }
          iVar1 = *(int *)(lVar4 + 0x18);
          if (iVar3 < iVar1) {
            *(int *)(param_1 + 0x58) = iVar2;
            iVar3 = iVar1;
          }
          lVar4 = lVar4 + 0x28;
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  iVar5 = *(int *)(param_1 + 0x58);
  if ((iVar5 < 0) || (*(int *)(param_1 + 0x40) <= iVar5)) {
    local_34 = 0;
  }
  else {
    local_34 = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x18 + (longlong)iVar5 * 0x28);
  }
  FUN_00414480(&local_30);
  return local_34;
}


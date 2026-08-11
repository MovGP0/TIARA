/* Ghidra address: 004a0230 */
/* Ghidra symbol: FUN_004a0230 */


void FUN_004a0230(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 local_88 [2];
  longlong local_78;
  undefined8 local_40 [2];
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  uVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 8);
      if (*(uint *)(lVar1 + 0x10) <= uVar3) {
        FUN_00594f90();
      }
      local_78 = *(longlong *)
                  (*(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar3 * 8) + 0x18) + 8;
      local_40[0] = param_2;
      iVar2 = FUN_00596a10(local_78,local_40);
      if (-1 < iVar2) {
        return;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  lVar1 = *(longlong *)(param_1 + 8);
  local_88[0] = FUN_0049ee90(&DAT_004984f8,1,param_2);
  FUN_00597e50(lVar1 + 8,local_88);
  return;
}


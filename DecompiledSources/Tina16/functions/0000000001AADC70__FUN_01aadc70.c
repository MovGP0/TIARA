/* Ghidra address: 01aadc70 */
/* Ghidra symbol: FUN_01aadc70 */


void FUN_01aadc70(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 local_40 [2];
  
  if (DAT_02110a56 != '\0') {
    FUN_014f97f0(*(undefined8 *)PTR_DAT_02003c40);
    iVar1 = 1;
    for (uVar3 = (uint)*(ushort *)(param_1 + 0x10); uVar3 != 0; uVar3 = uVar3 - 1) {
      iVar4 = *(int *)(*(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x19c40) + -8 + (longlong)iVar1 * 8)
                        + 0x10) + 0x10);
      iVar2 = 0;
      if (-1 < iVar4 + -1) {
        do {
          local_40[0] = FUN_014f9500(*(undefined8 *)
                                      (*(longlong *)
                                        (*(longlong *)(param_1 + 0x19c40) + -8 + (longlong)iVar1 * 8
                                        ) + 0x10),iVar2);
          FUN_014f9860(*(undefined8 *)PTR_DAT_02003c40,local_40);
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar1 = iVar1 + 1;
    }
    iVar1 = 1;
    for (uVar3 = (uint)*(ushort *)(param_1 + 0x10); uVar3 != 0; uVar3 = uVar3 - 1) {
      iVar4 = *(int *)(*(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x19c40) + -8 + (longlong)iVar1 * 8)
                        + 8) + 0x10);
      iVar2 = 0;
      if (-1 < iVar4 + -1) {
        do {
          local_40[0] = FUN_014f9500(*(undefined8 *)
                                      (*(longlong *)
                                        (*(longlong *)(param_1 + 0x19c40) + -8 + (longlong)iVar1 * 8
                                        ) + 8),iVar2);
          FUN_014f9860(*(undefined8 *)PTR_DAT_02003c40,local_40);
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar1 = iVar1 + 1;
    }
  }
  return;
}


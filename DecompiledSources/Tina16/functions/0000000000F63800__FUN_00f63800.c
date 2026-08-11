/* Ghidra address: 00f63800 */
/* Ghidra symbol: FUN_00f63800 */


void FUN_00f63800(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_48 [24];
  
  iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x18) + 0x10);
  iVar2 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x18),iVar2);
      *(undefined8 *)(param_1 + 0x50) = uVar1;
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x50) + 0x74);
      if ((0 < iVar5) && (iVar3 = 0, -1 < iVar5 + -1)) {
        do {
          *(undefined4 *)(param_1 + 0x48) =
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80) + (longlong)iVar3 * 8);
          *(undefined4 *)(param_1 + 0x4c) =
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80) + 4 + (longlong)iVar3 * 8);
          FUN_00f6efb0(*(undefined8 *)(param_1 + 0x58),local_48,*(undefined8 *)(param_1 + 0x50),
                       iVar3);
          FUN_00f63480(*(undefined8 *)(param_1 + 0x80),local_48);
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}


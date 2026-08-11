/* Ghidra address: 00ab21e0 */
/* Ghidra symbol: FUN_00ab21e0 */


void FUN_00ab21e0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xbc);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar3 = FUN_00ac4a60(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x168),iVar4);
      uVar2 = FUN_00aab7e0(uVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x58),
                           *(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x18),
                           *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x60),
                           *(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x158),
                           *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),
                           *(undefined4 *)(param_1 + 0x68),
                           *(undefined4 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x138),
                           *(undefined4 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x13c),
                           0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x174)
                           ,*(undefined4 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x140),
                           *(undefined4 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x144),iVar4);
      *(undefined4 *)(param_1 + 0x60) = uVar2;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xb0);
  *(undefined1 *)(lVar1 + 8) = 2;
  *(int *)(lVar1 + 0xc) = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xcc) + -1;
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x13c);
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  *(int *)(lVar1 + 0x14) =
       *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0xc0) + iVar5 +
       *(int *)(param_1 + 0x3c);
  *(longlong *)
   (*(longlong *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x50) + 0x18) + 0xb8)
   + 0x730) = lVar1;
  return;
}


/* Ghidra address: 00c2d2f0 */
/* Ghidra symbol: FUN_00c2d2f0 */


void FUN_00c2d2f0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x40);
  if (*(int *)(lVar3 + 0x10) < 1) {
    iVar2 = FUN_00c1aa10();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar3 = FUN_00c2fce0(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 8) + 0x50),iVar5);
        if (lVar3 != *(longlong *)(param_1 + 0xb0)) {
          uVar4 = FUN_00c2fce0(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 8) + 0x50),iVar5);
          cVar1 = FUN_00c2a4a0(uVar4);
          if ((cVar1 != '\0') &&
             (lVar3 = FUN_00c2fce0(*(undefined8 *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 8) + 0x50),iVar5)
             , *(int *)(*(longlong *)(lVar3 + 0x40) + 0x10) == 0)) {
            lVar3 = FUN_00c2fce0(*(undefined8 *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 8) + 0x50),iVar5);
            FUN_00c2e3e0(*(undefined8 *)(lVar3 + 0x60));
            return;
          }
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    uVar4 = FUN_00c360e0(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 8));
    FUN_00c232f0(uVar4,DAT_01e9f560);
  }
  else {
    FUN_00c232f0(lVar3,DAT_01e9f560);
  }
  return;
}


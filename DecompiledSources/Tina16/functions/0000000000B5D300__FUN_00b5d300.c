/* Ghidra address: 00b5d300 */
/* Ghidra symbol: FUN_00b5d300 */


void FUN_00b5d300(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  ushort local_40;
  ushort local_3e;
  byte local_3c;
  byte local_3b;
  
  iVar2 = FUN_00b28660();
  iVar7 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar4 = FUN_00b28440(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x18),iVar7);
      uVar1 = *(ushort *)(lVar4 + 0x10);
      iVar3 = FUN_00b59a10(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8));
      uVar8 = (uint)uVar1;
      if ((int)uVar8 < iVar3) {
        if (*(char *)(lVar4 + 0x20) == '\a') {
          lVar5 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),uVar8);
          FUN_00b222c0(*(undefined8 *)(*(longlong *)(lVar5 + 0x40) + 0x10),
                       *(undefined8 *)(lVar4 + 0x18));
        }
        if (*(char *)(lVar4 + 0x20) == '\b') {
          iVar3 = FUN_00b22360(*(undefined8 *)(lVar4 + 0x18));
          if (0 < iVar3) {
            FUN_00b22330(*(undefined8 *)(lVar4 + 0x18),&local_40,0);
            lVar5 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),uVar8);
            *(uint *)(*(longlong *)(lVar5 + 0x40) + 0x18) = (uint)local_40;
            FUN_00b22330(*(undefined8 *)(lVar4 + 0x18),&local_40);
            lVar5 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),uVar1);
            *(uint *)(*(longlong *)(lVar5 + 0x40) + 0x1c) = (uint)local_3e;
          }
          iVar3 = FUN_00b22360(*(undefined8 *)(lVar4 + 0x18));
          if (1 < iVar3) {
            FUN_00b22330(*(undefined8 *)(lVar4 + 0x18),&local_40,1);
            lVar5 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),uVar1);
            *(uint *)(*(longlong *)(lVar5 + 0x40) + 0x20) = (uint)local_3c;
            FUN_00b22330(*(undefined8 *)(lVar4 + 0x18),&local_40,1);
            lVar5 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),uVar1);
            *(uint *)(*(longlong *)(lVar5 + 0x40) + 0x24) = (uint)local_3b;
          }
        }
        if (*(char *)(lVar4 + 0x20) == '\0') {
          lVar5 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),uVar1);
          uVar6 = FUN_00b572d0(*(undefined8 *)(lVar5 + 0x28));
          FUN_00b222c0(uVar6,*(undefined8 *)(lVar4 + 0x18));
          FUN_00b567e0(uVar6,*(undefined8 *)(lVar4 + 8));
        }
      }
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


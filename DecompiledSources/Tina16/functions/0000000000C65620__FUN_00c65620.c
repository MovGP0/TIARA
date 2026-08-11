/* Ghidra address: 00c65620 */
/* Ghidra symbol: FUN_00c65620 */


void FUN_00c65620(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar3 = (uint)*(ushort *)(param_2 + 0x10);
    if (*(longlong *)(param_1 + 0x10) != 0) {
      uVar3 = (uint)*(ushort *)(param_2 + 0x10) - *(int *)(*(longlong *)(param_1 + 0x10) + 0x98);
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 8) != 0) {
      uVar3 = uVar3 - *(int *)(lVar1 + 0x98);
    }
    uVar5 = (uint)*(ushort *)(param_2 + 0x12);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar4 = (uint)*(ushort *)(param_2 + 0x12);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 != 0) {
    if (lVar1 != 0) {
      uVar5 = uVar5 - *(int *)(lVar2 + 0x9c);
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      uVar4 = uVar4 - *(int *)(lVar2 + 0x9c);
    }
    FUN_0064cbf0(lVar2,*(undefined2 *)(param_2 + 0x10));
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_0064cbf0(*(longlong *)(param_1 + 8),uVar3);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_0064cc50(*(longlong *)(param_1 + 0x10),uVar4);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_0064cc50(*(longlong *)(param_1 + 0x20),uVar5);
  }
  *(int *)(param_1 + 0x98) =
       *(int *)(param_1 + 0x98) + ((uint)*(ushort *)(param_2 + 0x12) - *(int *)(param_1 + 0x88));
  *(int *)(param_1 + 0x94) =
       *(int *)(param_1 + 0x94) + ((uint)*(ushort *)(param_2 + 0x10) - *(int *)(param_1 + 0x84));
  *(uint *)(param_1 + 0x88) = (uint)*(ushort *)(param_2 + 0x12);
  *(uint *)(param_1 + 0x84) = (uint)*(ushort *)(param_2 + 0x10);
  return;
}


/* Ghidra address: 007e76b0 */
/* Ghidra symbol: FUN_007e76b0 */


void FUN_007e76b0(longlong param_1,longlong param_2)

{
  ushort *puVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  
  uVar2 = *(ushort *)(param_2 + 0xc0);
  if (uVar2 == 0) {
    iVar4 = FUN_007e2ef0();
    iVar6 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar5 = FUN_007e2f10(param_2,iVar6);
        FUN_007e76b0(param_1,uVar5);
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else if (*(int *)(param_1 + 0x20) < 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  else {
    bVar3 = 3;
    if ((uVar2 & 0x4000) != 0) {
      bVar3 = 0xb;
    }
    if ((uVar2 & 0x8000) != 0) {
      bVar3 = bVar3 | 0x10;
    }
    if ((uVar2 & 0x2000) != 0) {
      bVar3 = bVar3 | 4;
    }
    puVar1 = (ushort *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x20) * 6);
    *puVar1 = (ushort)bVar3;
    puVar1[1] = *(ushort *)(param_2 + 0xc0) & 0xff;
    puVar1[2] = *(ushort *)(param_2 + 0xa8);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  return;
}


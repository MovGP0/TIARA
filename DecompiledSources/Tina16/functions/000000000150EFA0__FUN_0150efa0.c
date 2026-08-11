/* Ghidra address: 0150efa0 */
/* Ghidra symbol: FUN_0150efa0 */


void FUN_0150efa0(longlong param_1)

{
  bool bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  short *psVar11;
  bool bVar12;
  undefined8 local_40 [2];
  longlong local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  FUN_00414b50(local_30,*(undefined8 *)(param_1 + 0x30));
  uVar3 = FUN_004170c0(&DAT_0150f1e4,local_30[0],1);
  FUN_00416e20(local_30,1,uVar3);
  uVar3 = FUN_004170c0(&DAT_0150f1f4,local_30[0],1);
  FUN_00416e20(local_30,uVar3,1);
  uVar9 = 0;
  if (local_30[0] != 0) {
    uVar9 = *(uint *)(local_30[0] + -4);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    bVar8 = (*(char *)(*(longlong *)(param_1 + 0x40) + 0x40) -
            *(char *)(*(longlong *)(param_1 + 0x40) + 0x3c)) + 1;
    if (uVar9 != bVar8) {
      uVar7 = (uint)bVar8;
      if ((int)uVar9 < (int)(uint)bVar8) {
        iVar4 = uVar9 + 1;
        if (iVar4 <= (int)uVar7) {
          iVar10 = (uVar7 - iVar4) + 1;
          do {
            FUN_00416780(local_40,*(undefined2 *)(PTR_DAT_02004598 + 4));
            FUN_00416ea0(local_40[0],local_30,iVar4);
            iVar4 = iVar4 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
      }
      else {
        FUN_00416e20(local_30,bVar8 + 1,(uVar9 - uVar7) + 1);
      }
    }
    iVar4 = 1;
    psVar11 = (short *)PTR_DAT_02004598;
    for (uVar9 = (uint)bVar8; PTR_DAT_02004598 = (undefined *)psVar11, uVar9 != 0; uVar9 = uVar9 - 1
        ) {
      bVar1 = false;
      sVar2 = *(short *)(local_30[0] + -2 + (longlong)iVar4 * 2);
      if ((ushort)(sVar2 - 0x60U) < 0x20) {
        bVar12 = (1 << ((byte)(sVar2 - 0x60U) & 0x1f) & 0x7fffffeU) != 0;
      }
      else {
        bVar12 = false;
      }
      if (bVar12) {
        sVar2 = sVar2 + -0x20;
      }
      cVar6 = '\0';
      do {
        if (sVar2 == *psVar11) {
          bVar1 = true;
          *(char *)(*(longlong *)(param_1 + 0x28) + (longlong)(iVar4 + -1)) = cVar6;
        }
        cVar6 = cVar6 + '\x01';
        psVar11 = psVar11 + 1;
      } while (cVar6 != '\x04');
      if (!bVar1) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x28) + (longlong)(iVar4 + -1)) = 5;
        lVar5 = FUN_00414de0(local_30);
        *(undefined2 *)(lVar5 + -2 + (longlong)iVar4 * 2) = *(undefined2 *)(PTR_DAT_02004598 + 10);
      }
      iVar4 = iVar4 + 1;
      psVar11 = (short *)PTR_DAT_02004598;
    }
  }
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  return;
}


/* Ghidra address: 01d00280 */
/* Ghidra symbol: FUN_01d00280 */


void FUN_01d00280(longlong param_1)

{
  short *psVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  uVar7 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x2f0) + 0xf2);
  iVar6 = 0;
  if (-1 < (int)(uVar7 - 1)) {
    do {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x2b8) + (longlong)iVar6 * 99);
      cVar4 = FUN_01d3d450(CONCAT62((int6)((ulonglong)((longlong)iVar6 * 99) >> 0x10),
                                    (ushort)*pbVar2));
      if (cVar4 != '\0') {
        psVar1 = (short *)(*(longlong *)(param_1 + 0x2f0) + 0xf6);
        *psVar1 = *psVar1 + 1;
      }
      if ((*(short *)(*(longlong *)(param_1 + 0x2f0) + 0xf4) == 0) &&
         (cVar4 = FUN_01d3d4b0(*pbVar2), cVar4 != '\0')) {
        *(undefined2 *)(*(longlong *)(param_1 + 0x2f0) + 0xf4) = 1;
      }
      if (*(short *)(*(longlong *)(param_1 + 0x2f0) + 0xf4) == 0) {
        *(undefined4 *)(param_1 + 0x2b4) = 0;
        bVar8 = false;
        while ((*(int *)(param_1 + 0x2b4) <= (int)(uint)pbVar2[1] && (!bVar8))) {
          bVar3 = pbVar2[(longlong)*(int *)(param_1 + 0x2b4) * 2 + 3];
          *(int *)(param_1 + 0x2b4) = *(int *)(param_1 + 0x2b4) + 1;
          bVar8 = bVar3 == 3;
        }
        if (bVar8) {
          *(undefined2 *)(*(longlong *)(param_1 + 0x2f0) + 0xf4) = 1;
        }
      }
      iVar6 = iVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (*(short *)(*(longlong *)(param_1 + 0x2f0) + 0xf6) != 0) {
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    uVar5 = FUN_004095c0((uint)*(ushort *)(*(longlong *)(param_1 + 0x2f0) + 0xf6) * 4);
    *(undefined8 *)(*(longlong *)(param_1 + 0x2f0) + 0x178) = uVar5;
    uVar7 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x2f0) + 0xf2);
    iVar6 = 0;
    if (-1 < (int)(uVar7 - 1)) {
      do {
        cVar4 = FUN_01d3d450(CONCAT62((int6)((ulonglong)((longlong)iVar6 * 99) >> 0x10),
                                      (ushort)*(byte *)(*(longlong *)(param_1 + 0x2b8) +
                                                       (longlong)iVar6 * 99)));
        if (cVar4 != '\0') {
          *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2f0) + 0x178) +
                  (longlong)*(int *)(param_1 + 0x2b4) * 4) = iVar6;
          *(int *)(param_1 + 0x2b4) = *(int *)(param_1 + 0x2b4) + 1;
        }
        iVar6 = iVar6 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return;
}


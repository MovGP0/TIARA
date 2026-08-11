/* Ghidra address: 01aab620 */
/* Ghidra symbol: FUN_01aab620 */


undefined1 FUN_01aab620(longlong param_1,undefined8 param_2,short param_3)

{
  byte *pbVar1;
  char *pcVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  ushort uVar8;
  char cVar9;
  short sVar10;
  bool bVar11;
  undefined1 local_39;
  
  lVar3 = FUN_004095c0(10000);
  uVar7 = 0;
  sVar10 = *(short *)(param_1 + 0x10);
  uVar8 = 1;
  if (sVar10 != 0) {
    puVar6 = (undefined8 *)(param_1 + 0x18);
    do {
      pbVar1 = (byte *)*puVar6;
      bVar11 = false;
      if (*pbVar1 != 0) {
        bVar4 = 0;
        do {
          bVar4 = bVar4 + 1;
          bVar11 = *(short *)(pbVar1 + (ulonglong)bVar4 * 2 + 0x41f6) == param_3;
          if (bVar11) break;
        } while (bVar4 < *pbVar1);
      }
      *(bool *)(lVar3 + -1 + (ulonglong)uVar8) = bVar11;
      uVar8 = uVar8 + 1;
      puVar6 = puVar6 + 1;
      sVar10 = sVar10 + -1;
    } while (sVar10 != 0);
  }
  sVar10 = *(short *)(param_1 + 0x10);
  uVar8 = 1;
  if (sVar10 != 0) {
    puVar6 = (undefined8 *)(param_1 + 0x18);
    uVar7 = 0;
    do {
      if (*(char *)(lVar3 + -1 + (ulonglong)uVar8) != '\0') {
        pcVar2 = (char *)*puVar6;
        uVar5 = 1;
        for (cVar9 = *pcVar2; cVar9 != '\0'; cVar9 = cVar9 + -1) {
          pcVar2[uVar5 + 0x587] =
               *(char *)(param_1 + 0x14ad8 + (ulonglong)*(ushort *)(pcVar2 + uVar5 * 2 + 0x41f6));
          uVar5 = (ulonglong)(byte)((char)uVar5 + 1);
        }
        cVar9 = (**(code **)(pcVar2 + 0x18))(*puVar6,param_2);
        if (cVar9 != '\0') {
          uVar7 = 1;
        }
        if (DAT_02110a55 != '\0') {
          return local_39;
        }
      }
      uVar8 = uVar8 + 1;
      puVar6 = puVar6 + 1;
      sVar10 = sVar10 + -1;
    } while (sVar10 != 0);
  }
  FUN_004095f0(lVar3);
  return uVar7;
}


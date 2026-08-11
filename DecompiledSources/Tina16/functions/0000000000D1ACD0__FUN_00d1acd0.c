/* Ghidra address: 00d1acd0 */
/* Ghidra symbol: FUN_00d1acd0 */


void FUN_00d1acd0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  
  lVar1 = param_1 + 0x30;
  FUN_00409a70(param_2,param_1 + 0x50,0x20);
  iVar7 = *(int *)(param_1 + 0x28);
  iVar6 = 0;
  do {
    iVar10 = 4;
    puVar9 = &DAT_01ebb7d8;
    do {
      uVar5 = 0;
      do {
        uVar8 = iVar6 * 2 + (uVar5 >> 1 & 1);
        uVar3 = *(uint *)(&DAT_01eb42c0 +
                         (ulonglong)(*(uint *)(lVar1 + (ulonglong)uVar5 * 4) & 0xff) * 4 +
                         (ulonglong)uVar8 * 0x400);
        puVar2 = (uint *)(lVar1 + (ulonglong)(uVar5 + 1 & 0xf) * 4);
        *puVar2 = *puVar2 ^ uVar3;
        puVar2 = (uint *)(lVar1 + (ulonglong)(uVar5 + 0xf & 0xf) * 4);
        *puVar2 = *puVar2 ^ uVar3;
        uVar3 = *(uint *)(&DAT_01eb42c0 +
                         (ulonglong)(*(uint *)(lVar1 + (ulonglong)(uVar5 + 1) * 4) & 0xff) * 4 +
                         (ulonglong)uVar8 * 0x400);
        puVar2 = (uint *)(lVar1 + (ulonglong)(uVar5 + 2 & 0xf) * 4);
        *puVar2 = *puVar2 ^ uVar3;
        puVar2 = (uint *)(lVar1 + (ulonglong)(uVar5 + 0x10 & 0xf) * 4);
        *puVar2 = *puVar2 ^ uVar3;
        uVar5 = uVar5 + 2;
      } while (uVar5 < 0x10);
      uVar4 = *puVar9;
      uVar5 = 0;
      do {
        uVar3 = *(uint *)(lVar1 + (ulonglong)uVar5 * 4);
        *(uint *)(lVar1 + (ulonglong)uVar5 * 4) =
             uVar3 >> ((byte)uVar4 & 0x1f) | uVar3 << (0x20 - (byte)uVar4 & 0x1f);
        uVar5 = uVar5 + 1;
      } while (uVar5 != 0x10);
      puVar9 = puVar9 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  uVar5 = 0;
  do {
    puVar2 = (uint *)(lVar1 + (ulonglong)uVar5 * 4);
    *puVar2 = *puVar2 ^ *(uint *)(lVar1 + (ulonglong)(0xf - uVar5) * 4);
    uVar5 = uVar5 + 1;
  } while (uVar5 != 8);
  return;
}


/* Ghidra address: 00a186b0 */
/* Ghidra symbol: FUN_00a186b0 */


void FUN_00a186b0(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  
  iVar4 = *(int *)(param_1 + 0x19c);
  if (0 < iVar4) {
    lVar2 = *param_4;
    lVar10 = 0;
    do {
      if ((ulonglong)*(uint *)(param_1 + 0x88) != 0) {
        puVar6 = *(undefined1 **)(lVar2 + lVar10 * 8);
        puVar11 = puVar6 + *(uint *)(param_1 + 0x88);
        puVar5 = *(undefined1 **)(param_3 + lVar10 * 8);
        puVar7 = puVar6 + 2;
        if (puVar6 + 2 < puVar11) {
          puVar7 = puVar11;
        }
        lVar3 = -1 - (longlong)puVar6;
        uVar8 = ((uint)((ulonglong)(puVar7 + lVar3) >> 1) & 0x7fffffff) + 1;
        if ((uVar8 & 7) != 0) {
          lVar9 = -((ulonglong)uVar8 & 7);
          do {
            uVar1 = *puVar5;
            puVar5 = puVar5 + 1;
            *puVar6 = uVar1;
            puVar6[1] = uVar1;
            puVar6 = puVar6 + 2;
            lVar9 = lVar9 + 1;
          } while (lVar9 != 0);
        }
        if ((undefined1 *)0xd < puVar7 + lVar3) {
          do {
            uVar1 = *puVar5;
            *puVar6 = uVar1;
            puVar6[1] = uVar1;
            uVar1 = puVar5[1];
            puVar6[2] = uVar1;
            puVar6[3] = uVar1;
            uVar1 = puVar5[2];
            puVar6[4] = uVar1;
            puVar6[5] = uVar1;
            uVar1 = puVar5[3];
            puVar6[6] = uVar1;
            puVar6[7] = uVar1;
            uVar1 = puVar5[4];
            puVar6[8] = uVar1;
            puVar6[9] = uVar1;
            uVar1 = puVar5[5];
            puVar6[10] = uVar1;
            puVar6[0xb] = uVar1;
            uVar1 = puVar5[6];
            puVar6[0xc] = uVar1;
            puVar6[0xd] = uVar1;
            uVar1 = puVar5[7];
            puVar6[0xe] = uVar1;
            puVar6[0xf] = uVar1;
            puVar6 = puVar6 + 0x10;
            puVar5 = puVar5 + 8;
          } while (puVar6 < puVar11);
        }
        iVar4 = *(int *)(param_1 + 0x19c);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar4);
  }
  return;
}


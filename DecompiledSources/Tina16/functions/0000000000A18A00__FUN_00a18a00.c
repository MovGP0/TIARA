/* Ghidra address: 00a18a00 */
/* Ghidra symbol: FUN_00a18a00 */


void FUN_00a18a00(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  longlong lVar12;
  
  if (0 < *(int *)(param_1 + 0x19c)) {
    lVar2 = *param_4;
    lVar12 = 0;
    uVar9 = 0;
    do {
      uVar4 = 0;
      if ((ulonglong)*(uint *)(param_1 + 0x88) != 0) {
        puVar5 = *(undefined1 **)(lVar2 + uVar9 * 8);
        puVar10 = puVar5 + *(uint *)(param_1 + 0x88);
        puVar6 = *(undefined1 **)(param_3 + lVar12 * 8);
        puVar11 = puVar5 + 2;
        if (puVar5 + 2 < puVar10) {
          puVar11 = puVar10;
        }
        lVar3 = -1 - (longlong)puVar5;
        uVar7 = ((uint)((ulonglong)(puVar11 + lVar3) >> 1) & 0x7fffffff) + 1;
        if ((uVar7 & 7) != 0) {
          lVar8 = -((ulonglong)uVar7 & 7);
          do {
            uVar1 = *puVar6;
            puVar6 = puVar6 + 1;
            *puVar5 = uVar1;
            puVar5[1] = uVar1;
            puVar5 = puVar5 + 2;
            lVar8 = lVar8 + 1;
          } while (lVar8 != 0);
        }
        if ((undefined1 *)0xd < puVar11 + lVar3) {
          do {
            uVar1 = *puVar6;
            *puVar5 = uVar1;
            puVar5[1] = uVar1;
            uVar1 = puVar6[1];
            puVar5[2] = uVar1;
            puVar5[3] = uVar1;
            uVar1 = puVar6[2];
            puVar5[4] = uVar1;
            puVar5[5] = uVar1;
            uVar1 = puVar6[3];
            puVar5[6] = uVar1;
            puVar5[7] = uVar1;
            uVar1 = puVar6[4];
            puVar5[8] = uVar1;
            puVar5[9] = uVar1;
            uVar1 = puVar6[5];
            puVar5[10] = uVar1;
            puVar5[0xb] = uVar1;
            uVar1 = puVar6[6];
            puVar5[0xc] = uVar1;
            puVar5[0xd] = uVar1;
            uVar1 = puVar6[7];
            puVar5[0xe] = uVar1;
            puVar5[0xf] = uVar1;
            puVar5 = puVar5 + 0x10;
            puVar6 = puVar6 + 8;
          } while (puVar5 < puVar10);
        }
        uVar4 = *(undefined4 *)(param_1 + 0x88);
      }
      FUN_00a1bca0(lVar2,uVar9 & 0xffffffff,lVar2,(uint)uVar9 | 1,1,uVar4);
      lVar12 = lVar12 + 1;
      uVar9 = uVar9 + 2;
    } while ((longlong)uVar9 < (longlong)*(int *)(param_1 + 0x19c));
  }
  return;
}


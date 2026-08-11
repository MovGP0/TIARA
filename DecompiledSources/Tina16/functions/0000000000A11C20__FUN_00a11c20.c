/* Ghidra address: 00a11c20 */
/* Ghidra symbol: FUN_00a11c20 */


void FUN_00a11c20(longlong param_1,longlong *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  undefined1 uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  
  if (0 < param_5) {
    uVar2 = *(uint *)(param_1 + 0x88);
    uVar8 = (ulonglong)(uVar2 & 3);
    do {
      if (uVar2 != 0) {
        lVar5 = *(longlong *)(*param_2 + (ulonglong)param_3 * 8);
        puVar7 = (undefined1 *)*param_4;
        if ((ulonglong)uVar2 - 1 < 3) {
          lVar4 = 0;
        }
        else {
          lVar4 = 0;
          do {
            uVar1 = *(undefined1 *)(lVar5 + lVar4);
            *puVar7 = uVar1;
            puVar7[1] = uVar1;
            puVar7[2] = uVar1;
            uVar1 = *(undefined1 *)(lVar5 + 1 + lVar4);
            puVar7[3] = uVar1;
            puVar7[4] = uVar1;
            puVar7[5] = uVar1;
            uVar1 = *(undefined1 *)(lVar5 + 2 + lVar4);
            puVar7[6] = uVar1;
            puVar7[7] = uVar1;
            puVar7[8] = uVar1;
            uVar1 = *(undefined1 *)(lVar5 + 3 + lVar4);
            puVar7[9] = uVar1;
            puVar7[10] = uVar1;
            puVar7[0xb] = uVar1;
            puVar7 = puVar7 + 0xc;
            lVar4 = lVar4 + 4;
          } while (uVar2 - uVar8 != lVar4);
        }
        if (uVar8 != 0) {
          puVar6 = (undefined1 *)(lVar5 + lVar4);
          lVar5 = -uVar8;
          do {
            uVar1 = *puVar6;
            *puVar7 = uVar1;
            puVar7[1] = uVar1;
            puVar7[2] = uVar1;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 3;
            lVar5 = lVar5 + 1;
          } while (lVar5 != 0);
        }
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      bVar3 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar3);
  }
  return;
}


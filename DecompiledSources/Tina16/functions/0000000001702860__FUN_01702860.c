/* Ghidra address: 01702860 */
/* Ghidra symbol: FUN_01702860 */


void FUN_01702860(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,char param_5
                 ,undefined1 *param_6,undefined1 *param_7)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  int local_38 [2];
  int local_30;
  
  *param_6 = 1;
  *param_7 = 1;
  if (param_5 == '\x01') {
    FUN_006ddff0(param_3,local_38,1);
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_2 + 0x498) + 0x80),0xffffff);
    iVar9 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x730) + 0x490) + 0x10) +
                    0x10) + -1;
    uVar8 = 1;
    if (0 < iVar9) {
      do {
        uVar7 = (ulonglong)uVar8;
        lVar4 = FUN_006da380(*(undefined8 *)(*(longlong *)(param_1 + 0x730) + 0x490),uVar7);
        if (uVar8 != 0) {
          local_38[0] = FUN_006d9ff0(lVar4);
        }
        local_30 = local_38[0] + *(int *)(lVar4 + 0x20);
        bVar1 = *(byte *)(lVar4 + 0x2c);
        if (bVar1 < 8) {
          bVar10 = ((int)CONCAT71((int7)(uVar7 >> 8),1) << (bVar1 & 0x1f) & 5U) != 0;
        }
        else {
          bVar10 = false;
        }
        if (bVar10) {
          local_38[0] = local_38[0] + 2;
        }
        if (bVar1 < 8 && (1 << (bVar1 & 0x1f) & 6U) != 0) {
          local_30 = local_30 + -2;
        }
        lVar2 = *(longlong *)(param_3 + 0x18);
        uVar5 = FUN_005ffa40(*(undefined8 *)(param_2 + 0x498));
        lVar3 = *(longlong *)(lVar2 + 0x40);
        uVar6 = 0;
        if (lVar3 != 0) {
          uVar6 = *(undefined4 *)(lVar3 + -4);
        }
        FUN_00429440(uVar5,*(undefined8 *)(lVar2 + 0x40),uVar6,local_38,
                     *(uint *)(&DAT_01f9779c + (ulonglong)*(byte *)(lVar4 + 0x2c) * 4) | 0x824);
        uVar8 = uVar8 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  return;
}


/* Ghidra address: 00a0c850 */
/* Ghidra symbol: FUN_00a0c850 */


longlong FUN_00a0c850(longlong *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  lVar6 = param_1[1];
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)(int)param_3 << 7;
  auVar3 = ZEXT416(0) << 0x40 | ZEXT816(0x3b9ac9e8);
  auVar4 = auVar3 / auVar2;
  uVar5 = auVar4._0_8_;
  iVar11 = auVar4._0_4_;
  if (iVar11 == 0) {
    puVar1 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar1 + 5) = 0x46;
    (*(code *)*puVar1)(param_1,SUB168(auVar3 % auVar2,0));
  }
  if ((int)param_4 < iVar11) {
    uVar5 = (ulonglong)param_4;
  }
  *(int *)(lVar6 + 0x94) = (int)uVar5;
  lVar6 = FUN_00a0c4e0(param_1,param_2,(ulonglong)param_4 << 3);
  if (param_4 != 0) {
    uVar9 = 0;
    do {
      uVar10 = (uint)uVar5;
      uVar8 = (ulonglong)(param_4 - uVar9);
      if (uVar10 < param_4 - uVar9) {
        uVar8 = uVar5;
      }
      uVar5 = uVar8;
      lVar7 = FUN_00a0c680(param_1,param_2,(ulonglong)param_3 * 0x80 * uVar5);
      if ((int)uVar5 != 0) {
        uVar10 = ~uVar10;
        if (uVar10 < ~param_4 + uVar9) {
          uVar10 = ~param_4 + uVar9;
        }
        iVar11 = uVar10 + 1;
        do {
          uVar8 = (ulonglong)uVar9;
          uVar9 = uVar9 + 1;
          *(longlong *)(lVar6 + uVar8 * 8) = lVar7;
          lVar7 = lVar7 + (ulonglong)param_3 * 0x80;
          iVar11 = iVar11 + 1;
        } while (iVar11 != 0);
      }
    } while (uVar9 < param_4);
  }
  return lVar6;
}


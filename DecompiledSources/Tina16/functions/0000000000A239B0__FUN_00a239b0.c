/* Ghidra address: 00a239b0 */
/* Ghidra symbol: FUN_00a239b0 */


void FUN_00a239b0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5,
                 uint param_6,uint param_7)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  short sVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int local_148 [66];
  
  if (param_7 != 0) {
    pcVar2 = *(code **)(*(longlong *)(param_1 + 0x1e8) + 0x10);
    lVar3 = *(longlong *)
             (*(longlong *)(param_1 + 0x1e8) + 0x18 + (longlong)*(int *)(param_2 + 0x10) * 8);
    uVar9 = 0;
    do {
      uVar8 = (ulonglong)param_6;
      lVar6 = 0;
      do {
        lVar4 = *(longlong *)(param_3 + (ulonglong)param_5 * 8 + lVar6);
        local_148[lVar6] = *(byte *)(lVar4 + uVar8) - 0x80;
        local_148[lVar6 + 1] = *(byte *)(lVar4 + 1 + uVar8) - 0x80;
        local_148[lVar6 + 2] = *(byte *)(lVar4 + 2 + uVar8) - 0x80;
        local_148[lVar6 + 3] = *(byte *)(lVar4 + 3 + uVar8) - 0x80;
        local_148[lVar6 + 4] = *(byte *)(lVar4 + 4 + uVar8) - 0x80;
        local_148[lVar6 + 5] = *(byte *)(lVar4 + 5 + uVar8) - 0x80;
        local_148[lVar6 + 6] = *(byte *)(lVar4 + 6 + uVar8) - 0x80;
        local_148[lVar6 + 7] = *(byte *)(lVar4 + 7 + uVar8) - 0x80;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0x40);
      (*pcVar2)(local_148);
      lVar6 = 0;
      do {
        iVar1 = *(int *)(lVar3 + lVar6 * 4);
        iVar7 = local_148[lVar6];
        if (iVar7 < 0) {
          iVar7 = (iVar1 >> 1) - iVar7;
          sVar5 = 0;
          if (iVar1 <= iVar7) {
            sVar5 = (short)(iVar7 / iVar1);
          }
          sVar5 = -sVar5;
        }
        else {
          iVar7 = iVar7 + (iVar1 >> 1);
          sVar5 = 0;
          if (iVar1 <= iVar7) {
            sVar5 = (short)(iVar7 / iVar1);
          }
        }
        *(short *)(param_4 + lVar6 * 2) = sVar5;
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x40);
      uVar9 = uVar9 + 1;
      param_6 = param_6 + 8;
      param_4 = param_4 + 0x80;
    } while (uVar9 != param_7);
  }
  return;
}


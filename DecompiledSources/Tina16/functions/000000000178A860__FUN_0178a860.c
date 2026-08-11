/* Ghidra address: 0178a860 */
/* Ghidra symbol: FUN_0178a860 */


void FUN_0178a860(longlong param_1,undefined4 param_2,longlong *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if (param_4 < param_5) {
    do {
      if (param_5 - param_4 == 1) {
        lVar6 = (longlong)param_4;
        lVar8 = (longlong)param_5;
        iVar4 = (**(code **)(*param_3 + 0x18))
                          (param_3,*(undefined4 *)(param_1 + lVar6 * 4),
                           *(undefined4 *)(param_1 + lVar8 * 4));
        if (iVar4 < 1) {
          return;
        }
        uVar1 = *(undefined4 *)(param_1 + lVar6 * 4);
        *(undefined4 *)(param_1 + lVar6 * 4) = *(undefined4 *)(param_1 + lVar8 * 4);
        *(undefined4 *)(param_1 + lVar8 * 4) = uVar1;
        return;
      }
      uVar1 = *(undefined4 *)
               (param_1 + (longlong)(int)(param_4 + ((uint)(param_5 - param_4) >> 1)) * 4);
      iVar4 = param_5;
      iVar7 = param_4;
      do {
        while (iVar5 = (**(code **)(*param_3 + 0x18))
                                 (param_3,*(undefined4 *)(param_1 + (longlong)iVar7 * 4),uVar1),
              iVar5 < 0) {
          iVar7 = iVar7 + 1;
        }
        while (iVar5 = (**(code **)(*param_3 + 0x18))
                                 (param_3,*(undefined4 *)(param_1 + (longlong)iVar4 * 4),uVar1),
              0 < iVar5) {
          iVar4 = iVar4 + -1;
        }
        if (iVar7 <= iVar4) {
          if (iVar7 != iVar4) {
            uVar2 = *(undefined4 *)(param_1 + (longlong)iVar7 * 4);
            *(undefined4 *)(param_1 + (longlong)iVar7 * 4) =
                 *(undefined4 *)(param_1 + (longlong)iVar4 * 4);
            *(undefined4 *)(param_1 + (longlong)iVar4 * 4) = uVar2;
          }
          iVar7 = iVar7 + 1;
          iVar4 = iVar4 + -1;
        }
      } while (iVar7 <= iVar4);
      if (param_5 - iVar7 < iVar4 - param_4) {
        iVar5 = param_4;
        iVar3 = iVar4;
        if (iVar7 < param_5) {
          FUN_0178a860(param_1,param_2,param_3,iVar7,param_5);
        }
      }
      else {
        iVar5 = iVar7;
        iVar3 = param_5;
        if (param_4 < iVar4) {
          FUN_0178a860(param_1,param_2,param_3,param_4,iVar4);
        }
      }
      param_5 = iVar3;
      param_4 = iVar5;
    } while (param_4 < param_5);
  }
  return;
}


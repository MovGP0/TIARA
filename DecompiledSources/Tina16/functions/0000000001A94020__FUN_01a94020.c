/* Ghidra address: 01a94020 */
/* Ghidra symbol: FUN_01a94020 */


void FUN_01a94020(longlong param_1,undefined4 param_2,longlong *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined8 local_30;
  
  if (param_4 < param_5) {
    do {
      if (param_5 - param_4 == 1) {
        lVar5 = (longlong)param_4;
        lVar7 = (longlong)param_5;
        iVar3 = (**(code **)(*param_3 + 0x18))(param_3,param_1 + lVar5 * 8,param_1 + lVar7 * 8);
        if (iVar3 < 1) {
          return;
        }
        uVar1 = *(undefined8 *)(param_1 + lVar5 * 8);
        *(undefined8 *)(param_1 + lVar5 * 8) = *(undefined8 *)(param_1 + lVar7 * 8);
        *(undefined8 *)(param_1 + lVar7 * 8) = uVar1;
        return;
      }
      local_30 = *(undefined8 *)
                  (param_1 + (longlong)(int)(param_4 + ((uint)(param_5 - param_4) >> 1)) * 8);
      iVar3 = param_5;
      iVar6 = param_4;
      do {
        while (iVar4 = (**(code **)(*param_3 + 0x18))
                                 (param_3,param_1 + (longlong)iVar6 * 8,&local_30), iVar4 < 0) {
          iVar6 = iVar6 + 1;
        }
        while (iVar4 = (**(code **)(*param_3 + 0x18))
                                 (param_3,param_1 + (longlong)iVar3 * 8,&local_30), 0 < iVar4) {
          iVar3 = iVar3 + -1;
        }
        if (iVar6 <= iVar3) {
          if (iVar6 != iVar3) {
            uVar1 = *(undefined8 *)(param_1 + (longlong)iVar6 * 8);
            *(undefined8 *)(param_1 + (longlong)iVar6 * 8) =
                 *(undefined8 *)(param_1 + (longlong)iVar3 * 8);
            *(undefined8 *)(param_1 + (longlong)iVar3 * 8) = uVar1;
          }
          iVar6 = iVar6 + 1;
          iVar3 = iVar3 + -1;
        }
      } while (iVar6 <= iVar3);
      if (param_5 - iVar6 < iVar3 - param_4) {
        iVar4 = param_4;
        iVar2 = iVar3;
        if (iVar6 < param_5) {
          FUN_01a94020(param_1,param_2,param_3,iVar6,param_5);
        }
      }
      else {
        iVar4 = iVar6;
        iVar2 = param_5;
        if (param_4 < iVar3) {
          FUN_01a94020(param_1,param_2,param_3,param_4,iVar3);
        }
      }
      param_5 = iVar2;
      param_4 = iVar4;
    } while (param_4 < param_5);
  }
  return;
}


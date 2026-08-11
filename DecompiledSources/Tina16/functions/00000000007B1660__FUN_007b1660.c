/* Ghidra address: 007b1660 */
/* Ghidra symbol: FUN_007b1660 */


void FUN_007b1660(longlong param_1,undefined4 param_2,longlong *param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int local_5c;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_5c = param_4;
  if (param_4 < param_5) {
    do {
      if (param_5 - local_5c == 1) {
        lVar9 = (longlong)local_5c;
        lVar11 = (longlong)param_5;
        iVar7 = (**(code **)(*param_3 + 0x18))
                          (param_3,param_1 + lVar9 * 0x18,param_1 + lVar11 * 0x18);
        if (iVar7 < 1) {
          return;
        }
        puVar1 = (undefined8 *)(param_1 + lVar9 * 0x18);
        uVar3 = *puVar1;
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        puVar1 = (undefined8 *)(param_1 + lVar9 * 0x18);
        puVar2 = (undefined8 *)(param_1 + lVar11 * 0x18);
        *puVar1 = *puVar2;
        puVar1[1] = puVar2[1];
        puVar1[2] = puVar2[2];
        puVar1 = (undefined8 *)(param_1 + lVar11 * 0x18);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        return;
      }
      puVar1 = (undefined8 *)
               (param_1 + (longlong)(int)(local_5c + ((uint)(param_5 - local_5c) >> 1)) * 0x18);
      local_40 = *puVar1;
      uStack_38 = puVar1[1];
      uStack_30 = puVar1[2];
      iVar7 = local_5c;
      iVar10 = param_5;
      do {
        while (iVar8 = (**(code **)(*param_3 + 0x18))
                                 (param_3,param_1 + (longlong)iVar7 * 0x18,&local_40), iVar8 < 0) {
          iVar7 = iVar7 + 1;
        }
        while (iVar8 = (**(code **)(*param_3 + 0x18))
                                 (param_3,param_1 + (longlong)iVar10 * 0x18,&local_40), 0 < iVar8) {
          iVar10 = iVar10 + -1;
        }
        if (iVar7 <= iVar10) {
          if (iVar7 != iVar10) {
            puVar1 = (undefined8 *)(param_1 + (longlong)iVar7 * 0x18);
            uVar3 = *puVar1;
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            puVar1 = (undefined8 *)(param_1 + (longlong)iVar7 * 0x18);
            puVar2 = (undefined8 *)(param_1 + (longlong)iVar10 * 0x18);
            *puVar1 = *puVar2;
            puVar1[1] = puVar2[1];
            puVar1[2] = puVar2[2];
            puVar1 = (undefined8 *)(param_1 + (longlong)iVar10 * 0x18);
            *puVar1 = uVar3;
            puVar1[1] = uVar4;
            puVar1[2] = uVar5;
          }
          iVar7 = iVar7 + 1;
          iVar10 = iVar10 + -1;
        }
      } while (iVar7 <= iVar10);
      if (param_5 - iVar7 < iVar10 - local_5c) {
        iVar8 = iVar10;
        iVar6 = local_5c;
        if (iVar7 < param_5) {
          FUN_007b1660(param_1,param_2,param_3,iVar7,param_5);
        }
      }
      else {
        iVar8 = param_5;
        iVar6 = iVar7;
        if (local_5c < iVar10) {
          FUN_007b1660(param_1,param_2,param_3,local_5c,iVar10);
        }
      }
      local_5c = iVar6;
      param_5 = iVar8;
    } while (local_5c < param_5);
  }
  return;
}


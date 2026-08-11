/* Ghidra address: 00da4180 */
/* Ghidra symbol: FUN_00da4180 */


void FUN_00da4180(longlong param_1,undefined4 param_2,longlong *param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int local_4c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_4c = param_4;
  if (param_4 < param_5) {
    do {
      if (param_5 - local_4c == 1) {
        lVar8 = (longlong)local_4c;
        lVar10 = (longlong)param_5;
        iVar6 = (**(code **)(*param_3 + 0x18))
                          (param_3,param_1 + lVar8 * 0x10,param_1 + lVar10 * 0x10);
        if (iVar6 < 1) {
          return;
        }
        puVar1 = (undefined8 *)(param_1 + lVar8 * 0x10);
        uVar3 = *puVar1;
        uVar4 = puVar1[1];
        puVar1 = (undefined8 *)(param_1 + lVar8 * 0x10);
        puVar2 = (undefined8 *)(param_1 + lVar10 * 0x10);
        *puVar1 = *puVar2;
        puVar1[1] = puVar2[1];
        puVar1 = (undefined8 *)(param_1 + lVar10 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        return;
      }
      puVar1 = (undefined8 *)
               (param_1 + (longlong)(int)(local_4c + ((uint)(param_5 - local_4c) >> 1)) * 0x10);
      local_38 = *puVar1;
      uStack_30 = puVar1[1];
      iVar6 = local_4c;
      iVar9 = param_5;
      do {
        while (iVar7 = (**(code **)(*param_3 + 0x18))
                                 (param_3,param_1 + (longlong)iVar6 * 0x10,&local_38), iVar7 < 0) {
          iVar6 = iVar6 + 1;
        }
        while (iVar7 = (**(code **)(*param_3 + 0x18))
                                 (param_3,param_1 + (longlong)iVar9 * 0x10,&local_38), 0 < iVar7) {
          iVar9 = iVar9 + -1;
        }
        if (iVar6 <= iVar9) {
          if (iVar6 != iVar9) {
            puVar1 = (undefined8 *)(param_1 + (longlong)iVar6 * 0x10);
            uVar3 = *puVar1;
            uVar4 = puVar1[1];
            puVar1 = (undefined8 *)(param_1 + (longlong)iVar6 * 0x10);
            puVar2 = (undefined8 *)(param_1 + (longlong)iVar9 * 0x10);
            *puVar1 = *puVar2;
            puVar1[1] = puVar2[1];
            puVar1 = (undefined8 *)(param_1 + (longlong)iVar9 * 0x10);
            *puVar1 = uVar3;
            puVar1[1] = uVar4;
          }
          iVar6 = iVar6 + 1;
          iVar9 = iVar9 + -1;
        }
      } while (iVar6 <= iVar9);
      if (param_5 - iVar6 < iVar9 - local_4c) {
        iVar7 = iVar9;
        iVar5 = local_4c;
        if (iVar6 < param_5) {
          FUN_00da4180(param_1,param_2,param_3,iVar6,param_5);
        }
      }
      else {
        iVar7 = param_5;
        iVar5 = iVar6;
        if (local_4c < iVar9) {
          FUN_00da4180(param_1,param_2,param_3,local_4c,iVar9);
        }
      }
      local_4c = iVar5;
      param_5 = iVar7;
    } while (local_4c < param_5);
  }
  return;
}


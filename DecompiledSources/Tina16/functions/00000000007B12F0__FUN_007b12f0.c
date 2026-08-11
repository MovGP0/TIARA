/* Ghidra address: 007b12f0 */
/* Ghidra symbol: FUN_007b12f0 */


void FUN_007b12f0(longlong param_1,undefined4 param_2,longlong *param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  int local_6c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_6c = param_4;
  if (param_4 < param_5) {
    do {
      if (param_5 - local_6c == 1) {
        lVar10 = (longlong)local_6c;
        lVar12 = (longlong)param_5;
        iVar8 = (**(code **)(*param_3 + 0x18))
                          (param_3,param_1 + lVar10 * 0x20,param_1 + lVar12 * 0x20);
        if (iVar8 < 1) {
          return;
        }
        puVar1 = (undefined8 *)(param_1 + lVar10 * 0x20);
        uVar3 = *puVar1;
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar1 = (undefined8 *)(param_1 + lVar10 * 0x20);
        puVar2 = (undefined8 *)(param_1 + lVar12 * 0x20);
        *puVar1 = *puVar2;
        puVar1[1] = puVar2[1];
        puVar1[2] = puVar2[2];
        puVar1[3] = puVar2[3];
        puVar1 = (undefined8 *)(param_1 + lVar12 * 0x20);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        return;
      }
      puVar1 = (undefined8 *)
               (param_1 + (longlong)(int)(local_6c + ((uint)(param_5 - local_6c) >> 1)) * 0x20);
      local_48 = *puVar1;
      uStack_40 = puVar1[1];
      uStack_38 = puVar1[2];
      uStack_30 = puVar1[3];
      iVar8 = local_6c;
      iVar11 = param_5;
      do {
        while (iVar9 = (**(code **)(*param_3 + 0x18))
                                 (param_3,param_1 + (longlong)iVar8 * 0x20,&local_48), iVar9 < 0) {
          iVar8 = iVar8 + 1;
        }
        while (iVar9 = (**(code **)(*param_3 + 0x18))
                                 (param_3,param_1 + (longlong)iVar11 * 0x20,&local_48), 0 < iVar9) {
          iVar11 = iVar11 + -1;
        }
        if (iVar8 <= iVar11) {
          if (iVar8 != iVar11) {
            puVar1 = (undefined8 *)(param_1 + (longlong)iVar8 * 0x20);
            uVar3 = *puVar1;
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            puVar1 = (undefined8 *)(param_1 + (longlong)iVar8 * 0x20);
            puVar2 = (undefined8 *)(param_1 + (longlong)iVar11 * 0x20);
            *puVar1 = *puVar2;
            puVar1[1] = puVar2[1];
            puVar1[2] = puVar2[2];
            puVar1[3] = puVar2[3];
            puVar1 = (undefined8 *)(param_1 + (longlong)iVar11 * 0x20);
            *puVar1 = uVar3;
            puVar1[1] = uVar4;
            puVar1[2] = uVar5;
            puVar1[3] = uVar6;
          }
          iVar8 = iVar8 + 1;
          iVar11 = iVar11 + -1;
        }
      } while (iVar8 <= iVar11);
      if (param_5 - iVar8 < iVar11 - local_6c) {
        iVar9 = iVar11;
        iVar7 = local_6c;
        if (iVar8 < param_5) {
          FUN_007b12f0(param_1,param_2,param_3,iVar8,param_5);
        }
      }
      else {
        iVar9 = param_5;
        iVar7 = iVar8;
        if (local_6c < iVar11) {
          FUN_007b12f0(param_1,param_2,param_3,local_6c,iVar11);
        }
      }
      local_6c = iVar7;
      param_5 = iVar9;
    } while (local_6c < param_5);
  }
  return;
}


/* Ghidra address: 00d58df0 */
/* Ghidra symbol: FUN_00d58df0 */


void FUN_00d58df0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_88;
  int local_84;
  int local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  iVar4 = FUN_004230a0(param_5);
  iVar5 = FUN_004230c0(param_5);
  if (iVar4 * iVar5 != 0) {
    FUN_004238d0(&local_78,0,0,iVar4,iVar5);
    FUN_00423b50(&local_78,*param_3,param_3[1]);
    cVar2 = FUN_00423b30(param_4);
    iVar6 = FUN_004230a0(param_3);
    iVar7 = iVar6 / iVar4;
    iVar6 = FUN_004230a0(param_3,(longlong)iVar6 % (longlong)iVar4 & 0xffffffff);
    if (iVar6 % iVar4 != 0) {
      iVar7 = iVar7 + 1;
    }
    iVar6 = FUN_004230c0(param_3);
    local_80 = iVar6 / iVar5;
    iVar6 = FUN_004230c0(param_3,(longlong)iVar6 % (longlong)iVar5 & 0xffffffff);
    if (iVar6 % iVar5 != 0) {
      local_80 = local_80 + 1;
    }
    local_88 = 0;
    if (-1 < iVar7) {
      iVar7 = iVar7 + 1;
      do {
        local_84 = 0;
        if (-1 < local_80) {
          iVar6 = local_80 + 1;
          do {
            local_48 = local_78;
            uStack_40 = uStack_70;
            FUN_00423b50(&local_48,local_88 * iVar4,local_84 * iVar5);
            FUN_004239d0(&local_48,&local_48,param_3);
            iVar8 = FUN_004230a0(&local_48);
            iVar9 = FUN_004230c0(&local_48);
            if ((iVar8 == 0) || (iVar9 == 0)) break;
            if ((iVar8 == iVar4) && (iVar9 == iVar5)) {
              if (cVar2 != '\0') {
                FUN_00d589a0(param_1,param_2,&local_48,param_5);
              }
              else {
                cVar3 = FUN_004239d0(local_68,param_4,&local_48);
                if (cVar3 != '\0') {
                  FUN_00d589a0(param_1,param_2,&local_48,param_5);
                }
              }
            }
            else {
              uVar1 = *param_5;
              local_58._0_4_ = (int)uVar1;
              local_58._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
              _local_50 = CONCAT44(local_58._4_4_ + iVar9,(int)local_58 + iVar8);
              local_58 = uVar1;
              if (cVar2 != '\0') {
                FUN_00d589a0(param_1,param_2,&local_48,&local_58);
              }
              else {
                cVar3 = FUN_004239d0(local_68,param_4,&local_48);
                if (cVar3 != '\0') {
                  FUN_00d589a0(param_1,param_2,&local_48,&local_58);
                }
              }
            }
            local_84 = local_84 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        local_88 = local_88 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}


/* Ghidra address: 019c0270 */
/* Ghidra symbol: FUN_019c0270 */


undefined8 FUN_019c0270(undefined8 param_1,undefined8 *param_2,undefined1 *param_3,int *param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_90;
  int local_8c;
  int local_88 [2];
  undefined1 local_80;
  int local_78;
  undefined1 local_70;
  int local_68;
  undefined1 local_60;
  int local_58;
  undefined1 local_50;
  undefined8 *local_48;
  int local_40;
  int iStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  local_48 = (undefined8 *)0x0;
  *param_3 = 0;
  *param_4 = 0;
  lVar5 = 0;
  if (param_2 != (undefined8 *)0x0) {
    lVar5 = param_2[-1];
  }
  if (lVar5 == 0) {
    FUN_00419430(param_1,&DAT_0147b748);
  }
  else {
    FUN_00419260(&local_48,&DAT_0147b748,1,1);
    *local_48 = *param_2;
    iVar9 = 0;
    if (param_2 != (undefined8 *)0x0) {
      iVar9 = (int)param_2[-1];
    }
    iVar9 = iVar9 + -1;
    local_90 = 1;
    if (0 < iVar9) {
      do {
        uVar4 = param_2[local_90 + -1];
        uVar1 = param_2[local_90];
        local_38._0_4_ = (int)uVar1;
        local_30._0_4_ = (int)uVar4;
        iVar7 = (int)local_38 - (int)local_30;
        local_38._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
        local_30._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
        iVar8 = local_38._4_4_ - local_30._4_4_;
        if ((iVar7 != 0) && (iVar8 != 0)) {
          local_88[0] = (int)local_30;
          local_80 = 0;
          local_78 = local_30._4_4_;
          local_70 = 0;
          local_68 = (int)local_38;
          local_60 = 0;
          local_58 = local_38._4_4_;
          local_50 = 0;
          local_38 = uVar1;
          local_30 = uVar4;
          uVar4 = FUN_0044d530(&PTR_FUN_004334c0,1,&DAT_019c0570,local_88,3);
          FUN_004134c0(uVar4);
          uVar1 = local_38;
          uVar4 = local_30;
        }
        local_30 = uVar4;
        local_38 = uVar1;
        uVar6 = iVar7 + iVar8 >> 0x1f;
        iVar3 = (iVar7 + iVar8 ^ uVar6) - uVar6;
        local_8c = 1;
        if (0 < iVar3) {
          do {
            cVar2 = FUN_00527030(iVar7);
            local_40 = (int)local_30 + cVar2 * local_8c;
            cVar2 = FUN_00527030(iVar8);
            iStack_3c = local_30._4_4_ + cVar2 * local_8c;
            lVar5 = 0;
            if (local_48 != (undefined8 *)0x0) {
              lVar5 = local_48[-1];
            }
            FUN_00419260(&local_48,&DAT_0147b748,1,lVar5 + 1);
            lVar5 = 0;
            if (local_48 != (undefined8 *)0x0) {
              lVar5 = local_48[-1];
            }
            local_48[lVar5 + -1] = CONCAT44(iStack_3c,local_40);
            local_8c = local_8c + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        local_90 = local_90 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    iVar9 = 0;
    if (local_48 != (undefined8 *)0x0) {
      iVar9 = (int)local_48[-1];
    }
    iVar7 = 0;
    if (param_2 != (undefined8 *)0x0) {
      iVar7 = (int)param_2[-1];
    }
    *param_4 = iVar9 - iVar7;
    *param_3 = 0 < *param_4;
    FUN_004194b0(param_1,local_48,&DAT_0147b748);
  }
  FUN_00419430(&local_48,&DAT_0147b748);
  return param_1;
}


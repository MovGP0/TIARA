/* Ghidra address: 00d39750 */
/* Ghidra symbol: FUN_00d39750 */


void FUN_00d39750(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  short sVar7;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_48;
  longlong local_40;
  int local_38;
  int local_34;
  ushort local_2e;
  int local_2c;
  undefined8 local_28;
  longlong local_20;
  
  local_70 = auStack_98;
  *(undefined1 *)(param_1 + 0x40) = 0;
  local_20 = FUN_005fe0d0(&PTR_FUN_005f54e0,1);
  local_40 = 0;
  local_38 = -1;
  local_28 = thunk_FUN_040ef593(*(undefined8 *)(param_1 + 8));
  FUN_005ffb10(local_20,local_28);
  FUN_005ff880(local_20,*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 0x110));
  lVar6 = *(longlong *)(local_20 + 0x70);
  local_58 = lVar6;
  uVar3 = FUN_00d39710(param_1);
  uVar3 = thunk_FUN_03f3ed25(*(undefined4 *)(*(longlong *)(local_58 + 0x18) + 0x28),uVar3,
                             *(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98));
  FUN_005fcc80(lVar6,uVar3);
  local_2c = *(int *)(param_2 + 8);
  if ((*(int *)(param_1 + 0x78) + -1 < local_2c) || (local_2c < 0)) {
    FUN_00788d60(param_1,1);
    iVar1 = *(int *)(param_1 + 100);
    if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x78))) {
      FUN_00d37890(param_1,local_20,iVar1);
    }
    *(undefined4 *)(param_1 + 100) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  else {
    if (*(char *)(param_1 + 0x60) != '\0') {
      local_60 = DAT_0201a180;
      if (DAT_0201a180 != 0) {
        local_60 = *(longlong *)(DAT_0201a180 + -8);
      }
      local_34 = (int)local_60;
      iVar1 = local_34;
      if ((int)local_60 != 0) {
        local_34._0_2_ = (short)local_60;
        local_2e = 0;
        do {
          uVar4 = (ulonglong)local_2e;
          local_48 = *(longlong *)(DAT_0201a180 + uVar4 * 0x18);
          if (local_48 == *(longlong *)(param_1 + 0x80)) {
            local_40 = *(longlong *)(DAT_0201a180 + 8 + uVar4 * 0x18);
            local_38 = *(int *)(DAT_0201a180 + 0x10 + uVar4 * 0x18);
            break;
          }
          local_2e = local_2e + 1;
          local_34._0_2_ = (short)local_34 + -1;
        } while ((short)local_34 != 0);
      }
      local_34 = iVar1;
      if (local_40 == *(longlong *)(param_1 + 8)) {
        FUN_00788d60(param_1,1);
      }
      else if ((((local_40 != *(longlong *)(param_1 + 8)) && (*(char *)(param_1 + 0x60) != '\0')) &&
               (local_40 != 0)) && ((*(char *)(param_1 + 99) == '\0' && (-1 < local_38)))) {
        thunk_FUN_041b2403(local_40,0x1e5,(longlong)local_38,0);
        *(undefined1 *)(param_1 + 99) = 1;
      }
      uVar5 = FUN_00d394b0(param_1,local_2c);
      cVar2 = FUN_00d3ad30(uVar5);
      if (cVar2 != '\0') {
        local_68 = DAT_0201a180;
        if (DAT_0201a180 != 0) {
          local_68 = *(longlong *)(DAT_0201a180 + -8);
        }
        local_34 = (int)local_68;
        if ((int)local_68 == 0) {
          FUN_00419260(&DAT_0201a180,&DAT_00d39648,1,1);
        }
        local_2e = 0;
        sVar7 = (short)local_34 + 1;
        do {
          lVar6 = FUN_00d39420(param_1,*(undefined8 *)(param_1 + 8));
          if (*(longlong *)(DAT_0201a180 + (ulonglong)local_2e * 0x18) != lVar6) {
            local_34 = local_34 + 1;
            FUN_00419260(&DAT_0201a180,&DAT_00d39648,1,(longlong)local_34);
            lVar6 = (longlong)(local_34 + -1);
            uVar5 = thunk_FUN_03ecce03(*(undefined8 *)(param_1 + 0x80),local_2c);
            *(undefined8 *)(DAT_0201a180 + lVar6 * 0x18) = uVar5;
            *(undefined8 *)(DAT_0201a180 + 8 + lVar6 * 0x18) = *(undefined8 *)(param_1 + 8);
            *(int *)(DAT_0201a180 + 0x10 + lVar6 * 0x18) = local_2c;
            break;
          }
          local_2e = local_2e + 1;
          sVar7 = sVar7 + -1;
        } while (sVar7 != 0);
      }
      if (*(char *)(param_1 + 0x60) != '\0') {
        FUN_00788d60(param_1,0);
        uVar5 = FUN_00788400(param_1,param_2);
        *(undefined8 *)(param_2 + 0x18) = uVar5;
        FUN_00788d60(param_1,1);
      }
      if (*(int *)(param_1 + 100) != local_2c) {
        FUN_00d37890(param_1,local_20,*(int *)(param_1 + 100));
        FUN_00d37890(param_1,local_20,local_2c);
        *(int *)(param_1 + 100) = local_2c;
      }
      FUN_00410f20(local_20);
      thunk_FUN_041a9b5c(*(undefined8 *)(param_1 + 8),local_28);
      *(undefined1 *)(param_1 + 0x40) = 1;
      return;
    }
    *(int *)(param_1 + 100) = local_2c;
    FUN_00d37890(param_1,local_20,local_2c);
    if (local_2c == *(int *)(param_1 + 0x78) + -1) {
      thunk_FUN_0413e052(*(undefined8 *)(param_1 + 8),0x4c9,0,0);
    }
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  FUN_00d39c50(0,local_70);
  return;
}


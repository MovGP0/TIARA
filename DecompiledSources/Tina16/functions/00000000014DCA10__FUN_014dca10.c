/* Ghidra address: 014dca10 */
/* Ghidra symbol: FUN_014dca10 */


longlong *
FUN_014dca10(longlong *param_1,short *param_2,byte param_3,longlong param_4,longlong param_5,
            longlong *param_6,longlong *param_7,byte *param_8,undefined8 param_9,undefined8 param_10
            ,undefined8 param_11,char param_12)

{
  char cVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  byte bVar9;
  int iVar10;
  bool bVar11;
  short local_146;
  int local_144;
  undefined1 local_140 [256];
  undefined8 local_40 [2];
  byte *local_30;
  
  local_40[0] = 0;
  if (param_3 < 0x47) {
    if (param_3 == 0x46) {
      local_146 = 0x36;
    }
    else if (param_3 == 0x42) {
      iVar10 = FUN_00414f50(param_8,&DAT_014dcfcc,(ulonglong)*param_8 + 1);
      if (iVar10 == 0) {
        local_146 = 0x85;
      }
      else {
        local_146 = 0x84;
      }
    }
    else if (param_3 == 0x45) {
      local_146 = 0x85;
    }
  }
  else if (param_3 == 0x47) {
    local_146 = 0x84;
  }
  else if (param_3 == 0x48) {
    local_146 = 0x37;
  }
  plVar5 = (longlong *)FUN_014db750(local_146);
  FUN_017bf050(plVar5,0,param_2);
  *(bool *)((longlong)plVar5 + 0x531) = *param_2 == 0x58;
  FUN_01d01990(plVar5,*(undefined4 *)(param_4 + 0x10));
  if ((local_146 == 0x84) || (local_146 == 0x85)) {
    local_144 = 0;
    if (-1 < *(int *)(param_4 + 0x10) + -3) {
      iVar10 = *(int *)(param_4 + 0x10) + -2;
      do {
        uVar6 = FUN_01d347d0(param_4,local_144 + 2);
        FUN_014dbb80(plVar5,local_144,uVar6,param_11);
        local_144 = local_144 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    iVar10 = *(int *)(param_4 + 0x10) + -2;
    iVar4 = (**(code **)(*param_7 + 0x28))(param_7,(longlong)iVar10 % 2 & 0xffffffff);
    FUN_01d01990(plVar5,*(int *)(param_4 + 0x10) + iVar4);
    iVar4 = (**(code **)(*param_7 + 0x28))();
    local_144 = 0;
    if (-1 < iVar4 + -1) {
      do {
        (**(code **)(*param_7 + 0x18))(param_7,local_40,local_144);
        FUN_00416910(local_140,local_40[0],0xff);
        uVar6 = (**(code **)(*param_7 + 0x30))(param_7,local_144);
        FUN_014dbc10(plVar5,local_144,local_140,uVar6,param_9,param_10,param_11);
        local_144 = local_144 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    cVar1 = (**(code **)(*param_6 + 0x28))(param_6);
    bVar9 = (char)(iVar10 / 2) + cVar1;
  }
  else {
    bVar9 = (**(code **)(*param_6 + 0x28))(param_6);
  }
  iVar10 = *(int *)(param_4 + 0x10);
  iVar4 = (**(code **)(*param_7 + 0x28))(param_7);
  iVar4 = iVar10 + -1 + iVar4;
  uVar6 = FUN_01d347d0(param_4,0);
  FUN_014dbb80(plVar5,iVar4 + -1,uVar6,param_11);
  uVar6 = FUN_01d347d0(param_4,1);
  FUN_014dbb80(plVar5,iVar4,uVar6,param_11);
  uVar2 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
  lVar7 = FUN_00409570(uVar2);
  plVar5[0x18] = lVar7;
  uVar6 = (**(code **)(*plVar5 + 0x2d0))(plVar5,0,&local_30);
  if (param_8 == (byte *)0x0) {
    local_30[0x40] = 0;
  }
  else {
    uVar6 = FUN_00414f50(param_8,&DAT_014dcfce,(ulonglong)*param_8 + 1);
    if ((int)uVar6 == 0) {
      local_30[0x40] = 1;
    }
    else {
      uVar6 = FUN_00414f50(param_8,&DAT_014dcfd3,(ulonglong)*param_8 + 1);
      if ((int)uVar6 == 0) {
        local_30[0x40] = 2;
      }
      else {
        uVar6 = FUN_00414f50(param_8,&DAT_014dcfd9,(ulonglong)*param_8 + 1);
        if ((int)uVar6 == 0) {
          local_30[0x40] = 3;
        }
        else {
          uVar6 = FUN_00414f50(param_8,&DAT_014dcfdf,(ulonglong)*param_8 + 1);
          if ((int)uVar6 == 0) {
            local_30[0x40] = 4;
          }
          else {
            uVar6 = FUN_00414f50(param_8,&DAT_014dcfe7,(ulonglong)*param_8 + 1);
            if ((int)uVar6 == 0) {
              local_30[0x40] = 5;
            }
            else {
              local_30[0x40] = 6;
            }
          }
        }
      }
    }
  }
  *local_30 = bVar9;
  if (local_30[0x40] < 8) {
    bVar11 = ((int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) << (local_30[0x40] & 0x1f) & 0xfcU) !=
             0;
  }
  else {
    bVar11 = false;
  }
  if (bVar11) {
    *(ushort *)(local_30 + 0x10) = (ushort)bVar9;
  }
  else {
    *(undefined2 *)(local_30 + 0x10) = *(undefined2 *)(param_5 + 0x10);
  }
  plVar8 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong **)(local_30 + 8) = plVar8;
  uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,param_6);
  if (local_30[0x40] < 8) {
    bVar11 = ((int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) << (local_30[0x40] & 0x1f) & 0xfcU) !=
             0;
  }
  else {
    bVar11 = false;
  }
  if (bVar11) {
    uVar6 = FUN_00409570((ulonglong)*(ushort *)(local_30 + 0x10) << 3);
    *(undefined8 *)(local_30 + 0x18) = uVar6;
    if (local_30[0x40] < 8) {
      bVar11 = ((int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) << (local_30[0x40] & 0x1f) & 0x28U)
               != 0;
    }
    else {
      bVar11 = false;
    }
    if (bVar11) {
      uVar3 = *(short *)(param_5 + 0x10) - 1;
      *(ushort *)(local_30 + 0x48) = uVar3;
      uVar6 = FUN_00409570((ulonglong)uVar3 << 3);
      *(undefined8 *)(local_30 + 0x50) = uVar6;
    }
  }
  else {
    uVar6 = FUN_00409570((ulonglong)*(ushort *)(local_30 + 0x10) << 3);
    *(undefined8 *)(local_30 + 0x18) = uVar6;
  }
  local_30[0x30] = param_3 == 0x42;
  local_30[0x31] = 0;
  if (param_12 != '\0') {
    FUN_014dc860(plVar5,param_5);
  }
  (**(code **)(*param_1 + 0x20))(param_1,plVar5);
  FUN_00414480(local_40);
  return plVar5;
}


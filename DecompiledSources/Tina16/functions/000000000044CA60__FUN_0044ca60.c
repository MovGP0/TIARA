/* Ghidra address: 0044ca60 */
/* Ghidra symbol: FUN_0044ca60 */


undefined8 FUN_0044ca60(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  short sVar1;
  int iVar2;
  ushort uVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  ushort local_42;
  int local_40;
  int local_3c;
  longlong local_38;
  char local_2d;
  uint local_2c;
  int local_28;
  int local_24;
  undefined8 local_20 [2];
  
  local_50 = auStack_98;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_24 = 1;
  FUN_00414480(param_1);
  FUN_0044b710(&local_38,param_2,param_3,param_4);
  FUN_0044b710(&local_58,param_2,0x1009,&DAT_0044cea0);
  uVar4 = 0;
  local_2c = FUN_0043fc50(local_58,1);
  if (local_2c < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)local_2c & 0x1f) & 0x38U) != 0
    ;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    while( true ) {
      local_40 = 0;
      if (local_38 != 0) {
        local_40 = *(int *)(local_38 + -4);
      }
      if (local_40 < local_24) break;
      local_42 = *(ushort *)(local_38 + -2 + (longlong)local_24 * 2);
      if ((local_42 < 0xd800) || (0xdfff < local_42)) {
        iVar5 = local_24 + -1;
        local_78 = 2;
        local_70 = 1;
        iVar2 = FUN_00456060(local_38,iVar5,&PTR_DAT_0044cec0,0);
        if (iVar2 == 0) {
          FUN_00416ad0(param_1,&DAT_0044ced4);
          local_24 = local_24 + 1;
        }
        else {
          local_78 = 4;
          local_70 = 1;
          iVar2 = FUN_00456060(local_38,iVar5,L"yyyy",0);
          if (iVar2 == 0) {
            FUN_00416ad0(param_1,L"eeee");
            local_24 = local_24 + 3;
          }
          else {
            local_78 = 2;
            local_70 = 1;
            iVar2 = FUN_00456060(local_38,iVar5,&PTR_LAB_0044cf18,0);
            if (iVar2 == 0) {
              FUN_00416ad0(param_1,&DAT_0044cf2c);
              local_24 = local_24 + 1;
            }
            else {
              sVar1 = *(short *)(local_38 + -2 + (longlong)local_24 * 2);
              uVar3 = sVar1 - 0x58;
              if (uVar3 < 0x40) {
                bVar6 = (1L << ((byte)uVar3 & 0x3f) & 0x200000002U) != 0;
              }
              else {
                bVar6 = false;
              }
              if (bVar6) {
                FUN_00416ad0(param_1,&LAB_0044cf48);
              }
              else {
                FUN_00416780(&local_68,sVar1);
                FUN_00416ad0(param_1,local_68);
              }
            }
          }
        }
        local_24 = local_24 + 1;
      }
      else {
        iVar2 = FUN_0044f6f0(local_38,local_24);
        local_28 = iVar2 / 2;
        FUN_00414480(local_20,(longlong)iVar2 % 2 & 0xffffffff);
        FUN_00416dc0(local_20,local_38,local_24);
        FUN_00416ad0(param_1,local_20[0]);
        FUN_00414480(local_20);
        local_24 = local_24 + local_28;
      }
    }
    FUN_0044ca00(auStack_98,param_1);
  }
  else {
    if (DAT_0200c444 < 0x20) {
      local_2d = (1 << ((byte)DAT_0200c444 & 0x1f) & 0x60010U) != 0;
    }
    else {
      local_2d = false;
    }
    if ((bool)local_2d == false) {
      FUN_00414ad0(param_1,local_38);
    }
    else {
      while( true ) {
        local_3c = 0;
        if (local_38 != 0) {
          local_3c = *(int *)(local_38 + -4);
        }
        if (local_3c < local_24) break;
        sVar1 = *(short *)(local_38 + -2 + (longlong)local_24 * 2);
        uVar3 = sVar1 - 0x40;
        if (uVar3 < 0x40) {
          bVar6 = (1L << ((byte)uVar3 & 0x3f) & 0x8000000080U) != 0;
        }
        else {
          bVar6 = false;
        }
        if (!bVar6) {
          FUN_00416780(&local_60,sVar1);
          FUN_00416ad0(param_1,local_60);
        }
        local_24 = local_24 + 1;
      }
    }
    FUN_0044ca00(auStack_98,param_1);
  }
  FUN_00414560(&local_68,3);
  FUN_00414480(&local_38);
  FUN_00414480(local_20);
  return param_1;
}


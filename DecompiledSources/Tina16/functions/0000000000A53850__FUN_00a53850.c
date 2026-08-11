/* Ghidra address: 00a53850 */
/* Ghidra symbol: FUN_00a53850 */


void FUN_00a53850(longlong param_1,undefined4 param_2,undefined4 param_3,byte *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  longlong lVar6;
  bool bVar7;
  int local_84;
  int local_80;
  uint local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50[0] = 0;
  local_40 = 0;
  FUN_00417600(local_38,&DAT_00401390,2);
  cVar1 = FUN_0046c390(param_1 + 0x168);
  if (cVar1 == '\0') {
    *param_4 = 6;
    param_4[4] = 0;
    param_4[5] = 0;
    param_4[6] = 0;
    param_4[7] = 0;
    *(undefined8 *)(param_4 + 0xc) = *(undefined8 *)param_4;
    *(undefined4 *)(param_4 + 0x14) = *(undefined4 *)(param_4 + 8);
  }
  else {
    FUN_00467e90(local_50,param_1 + 0x168);
    FUN_0043ea00(&local_40,local_50[0]);
    iVar3 = FUN_004170c0(&DAT_00a53d74,local_40,1);
    if (iVar3 < 1) {
      FUN_00414b50(local_38,local_40);
      local_80 = 1;
    }
    else {
      FUN_00416dc0(local_38,local_40,1,iVar3 + -1);
      FUN_00416dc0(&local_60,local_40,iVar3 + 1,0xff);
      FUN_0043ea00(&local_58,local_60);
      FUN_00414b50(local_30,local_58);
      local_80 = 2;
    }
    local_7c = 1;
    local_84 = 1;
    if (local_80 != 0) {
      do {
        pbVar5 = param_4;
        if (local_7c != 1) {
          pbVar5 = param_4 + 0xc;
        }
        *pbVar5 = 6;
        lVar6 = (longlong)local_84;
        pbVar4 = (byte *)FUN_00416db0(*(undefined8 *)(local_38 + lVar6 * 8 + -8),L"center");
        if ((int)pbVar4 == 0) {
          *pbVar5 = 1;
        }
        else {
          pbVar4 = (byte *)FUN_004170c0(&DAT_00a53da0,*(undefined8 *)(local_38 + lVar6 * 8 + -8),1);
          if ((int)pbVar4 < 1) {
            iVar3 = FUN_00416db0(*(undefined8 *)(local_38 + lVar6 * 8 + -8),L"left");
            pbVar4 = param_4;
            if (iVar3 == 0) {
              if (local_7c == 2) {
                *(undefined8 *)(param_4 + 0xc) = *(undefined8 *)param_4;
                *(undefined4 *)(param_4 + 0x14) = *(undefined4 *)(param_4 + 8);
              }
              *param_4 = 3;
            }
            else {
              iVar3 = FUN_00416db0(*(undefined8 *)(local_38 + (longlong)local_84 * 8 + -8),L"right")
              ;
              if (iVar3 == 0) {
                if (local_7c == 2) {
                  *(undefined8 *)(param_4 + 0xc) = *(undefined8 *)param_4;
                  *(undefined4 *)(param_4 + 0x14) = *(undefined4 *)(param_4 + 8);
                }
                *param_4 = 4;
              }
              else {
                iVar3 = FUN_00416db0(*(undefined8 *)(local_38 + (longlong)local_84 * 8 + -8),
                                     &DAT_00a53de0);
                if (iVar3 == 0) {
                  param_4[0xc] = 0;
                  pbVar4 = (byte *)(ulonglong)local_7c;
                  if (local_7c == 1) {
                    local_7c = 0;
                    pbVar4 = (byte *)0x0;
                  }
                }
                else {
                  pbVar4 = (byte *)FUN_00416db0(*(undefined8 *)
                                                 (local_38 + (longlong)local_84 * 8 + -8),L"bottom")
                  ;
                  if ((int)pbVar4 == 0) {
                    param_4[0xc] = 2;
                    pbVar4 = (byte *)(ulonglong)local_7c;
                    if (local_7c == 1) {
                      local_7c = 0;
                      pbVar4 = (byte *)0x0;
                    }
                  }
                }
              }
            }
          }
          else {
            *pbVar5 = 5;
          }
        }
        if (*pbVar5 < 8) {
          bVar7 = ((int)CONCAT71((int7)((ulonglong)pbVar4 >> 8),1) << (*pbVar5 & 0x1f) & 0x60U) != 0
          ;
        }
        else {
          bVar7 = false;
        }
        if (bVar7) {
          uVar2 = FUN_00a61c40(*(undefined8 *)(local_38 + lVar6 * 8 + -8),0,100,param_2,param_3,0);
          *(undefined4 *)(pbVar5 + 4) = uVar2;
        }
        local_84 = local_84 + 1;
        local_7c = local_7c + 1;
      } while (local_84 <= local_80);
    }
    if (local_80 == 1) {
      if (local_7c == 2) {
        param_4[0xc] = 1;
      }
      else {
        *param_4 = 1;
      }
    }
  }
  param_4[8] = 1;
  param_4[0x14] = 1;
  cVar1 = FUN_0046c390(param_1 + 0x180);
  if (cVar1 != '\0') {
    FUN_00467e90(&local_68,param_1 + 0x180);
    FUN_0043ea00(&local_40,local_68);
    iVar3 = FUN_00416db0(local_40,L"no-repeat");
    if (iVar3 == 0) {
      param_4[8] = 0;
      param_4[0x14] = 0;
    }
    else {
      iVar3 = FUN_00416db0(local_40,L"repeat-x");
      if (iVar3 == 0) {
        param_4[0x14] = 0;
      }
      else {
        iVar3 = FUN_00416db0(local_40,L"repeat-y");
        if (iVar3 == 0) {
          param_4[8] = 0;
        }
      }
    }
  }
  param_4[9] = 0;
  cVar1 = FUN_0046c390(param_1 + 0x198);
  if (cVar1 != '\0') {
    FUN_00467e90(&local_78,param_1 + 0x198);
    FUN_0043ea00(&local_70,local_78);
    iVar3 = FUN_00416db0(local_70,L"fixed");
    if (iVar3 == 0) {
      param_4[9] = 1;
    }
  }
  param_4[0x15] = param_4[9];
  FUN_00414560(&local_78,6);
  FUN_00414480(&local_40);
  FUN_00417840(local_38,&DAT_00401390,2);
  return;
}


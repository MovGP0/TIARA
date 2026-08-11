/* Ghidra address: 00588510 */
/* Ghidra symbol: FUN_00588510 */


undefined8 FUN_00588510(undefined8 param_1,undefined8 param_2,undefined8 *param_3,char param_4)

{
  byte *pbVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte *local_18;
  byte *local_10;
  
  local_68 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  FUN_0046f180(param_1);
  pbVar1 = *(byte **)*param_3;
  uVar4 = (ulonglong)*pbVar1;
  if (uVar4 < 10) {
    if (uVar4 != 9) {
      if (uVar4 < 6) {
        if (uVar4 == 5) {
          FUN_0058ce80(&local_38,param_2,param_3);
          FUN_00468a10(param_1,local_38);
          goto code_r0x00588912;
        }
        if (1 < uVar4 - 1) {
          if (uVar4 == 3) {
            if (param_4 == '\0') {
              lVar3 = FUN_00589390(pbVar1);
              if ((undefined *)**(undefined8 **)(lVar3 + 9) == &DAT_00401008) {
                uVar2 = FUN_0058ada0(param_2,param_3);
                FUN_00468820(param_1,uVar2);
              }
              else {
                uVar5 = FUN_0058ada0(param_2,param_3);
                FUN_00468700(param_1,uVar5);
              }
            }
            else {
              FUN_0058b270(&local_20,param_2,param_3);
              FUN_00468a10(param_1,local_20);
            }
            goto code_r0x00588912;
          }
          if (uVar4 == 4) {
            uVar5 = FUN_0058d490(param_2,param_3);
            FUN_00468860(param_1,uVar5);
            goto code_r0x00588912;
          }
          goto LAB_005888d0;
        }
      }
      else {
        if (uVar4 == 6) {
          if (param_4 == '\0') {
            uVar5 = FUN_0058ada0(param_2,param_3);
            FUN_00468700(param_1,uVar5);
          }
          else {
            FUN_0058c300(&local_28,param_2,param_3,0);
            FUN_00468a10(param_1,local_28);
          }
          goto code_r0x00588912;
        }
        if (uVar4 != 7) {
          if (uVar4 == 8) {
            FUN_00589350(&local_30,pbVar1);
            FUN_00468a10(param_1,local_30);
            goto code_r0x00588912;
          }
          goto LAB_005888d0;
        }
      }
    }
    uVar5 = FUN_0058ada0(param_2,param_3);
    FUN_00468700(param_1,uVar5);
  }
  else {
    if (uVar4 < 0x11) {
      if (uVar4 == 0x10) {
        local_18 = pbVar1 + 1;
        local_10 = local_18;
        if (*(longlong *)(pbVar1 + (ulonglong)*local_18 + 2 + 8) <
            *(longlong *)(pbVar1 + (ulonglong)*local_18 + 2)) {
          uVar5 = FUN_0058f3f0(param_2,param_3);
          FUN_00468670(param_1,uVar5);
        }
        else {
          uVar5 = FUN_0058f3f0(param_2,param_3);
          FUN_00468700(param_1,uVar5);
        }
        goto code_r0x00588912;
      }
      if (uVar4 == 10) {
        FUN_0058d360(&local_48,param_2,param_3);
        FUN_00468910(param_1,local_48);
        goto code_r0x00588912;
      }
      if (uVar4 == 0xb) {
        FUN_0058d190(&local_40,param_2,param_3);
        FUN_004689d0(param_1,local_40);
        goto code_r0x00588912;
      }
      if (uVar4 == 0xc) {
        FUN_0058d710(param_1,param_2,param_3);
        goto code_r0x00588912;
      }
    }
    else {
      if (uVar4 == 0x11) {
        uVar5 = FUN_0058f4b0(param_2,param_3);
        FUN_0046d0b0(param_1,uVar5,*(undefined8 *)*param_3);
        goto code_r0x00588912;
      }
      if (uVar4 == 0x12) {
        FUN_0058ce80(&local_50,param_2,param_3);
        FUN_00468a10(param_1,local_50);
        goto code_r0x00588912;
      }
    }
LAB_005888d0:
    FUN_00589350(&local_68,pbVar1);
    local_60 = local_68;
    local_58 = 0x11;
    uVar5 = FUN_0044d8d0(&PTR_FUN_00587ce8,1,PTR_PTR_02002938,&local_60,0);
    FUN_004134c0(uVar5);
  }
code_r0x00588912:
  FUN_00414480(&local_68);
  FUN_00414480(&local_50);
  FUN_004144d0(&local_48);
  FUN_00414520(&local_40);
  FUN_00414560(&local_38,4);
  return param_1;
}


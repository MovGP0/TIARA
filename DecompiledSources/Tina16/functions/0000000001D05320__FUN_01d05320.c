/* Ghidra address: 01d05320 */
/* Ghidra symbol: FUN_01d05320 */


undefined8
FUN_01d05320(longlong *param_1,undefined8 param_2,char param_3,undefined1 param_4,undefined8 param_5
            )

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 *local_50;
  short *local_40;
  undefined2 local_32;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_50 = auStack_88;
  local_58 = 0;
  local_20[0] = 0;
  local_28 = 0;
  FUN_00414610(param_5);
  FUN_00414480(param_2);
  sVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
  if (sVar4 == 0x39) {
    lVar1 = param_1[0x35];
    if (lVar1 == 0) {
      FUN_00414ad0(param_2,L" MACRO");
    }
    else {
      if (*(longlong *)(lVar1 + 0x38) == 0) {
        FUN_00414ad0(param_2,L" MACRO");
      }
      else {
        FUN_00416ba0(param_2,&DAT_01d05954,*(undefined8 *)(param_1[0x35] + 0x38));
      }
      if ((*(byte *)(lVar1 + 99) & 2) != 0) {
        FUN_00414480(param_2);
      }
    }
    goto code_r0x01d058af;
  }
  uVar5 = (**(code **)(*param_1 + 0xf8))(param_1);
  if (9999 < uVar5) {
    sVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
    if (sVar4 != 0x2901) {
      sVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
      if (sVar4 != 0x2902) {
        sVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
        if (sVar4 != 0x2900) {
          uVar6 = (**(code **)(*param_1 + 0xf8))(param_1);
          cVar2 = FUN_01d3d600(uVar6);
          if (cVar2 == '\0') {
            sVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
            if (sVar4 != 0x2903) {
              uVar6 = (**(code **)(*param_1 + 0xf8))(param_1);
              cVar2 = FUN_01d3d5c0(uVar6);
              if (cVar2 == '\0') {
                cVar2 = FUN_01d3d920(param_1,4,0,&local_32);
                if (cVar2 == '\0') {
                  FUN_01d03640(param_1,local_20,param_5);
                }
                else {
                  cVar2 = FUN_01cfdf80(param_1,0);
                  if (cVar2 != '\0') {
                    (**(code **)(*param_1 + 0x2d0))(param_1,local_32,&local_40);
                    FUN_004169a0(local_20,local_40);
                  }
                }
                FUN_00416ba0(param_2,&DAT_01d05954,local_20[0]);
                goto code_r0x01d058af;
              }
            }
          }
        }
      }
    }
  }
  cVar2 = FUN_01cfdf80(param_1,0);
  if (cVar2 == '\0') goto code_r0x01d058af;
  bVar3 = (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_40);
  if (bVar3 < 8) {
    if (bVar3 == 7) {
      FUN_004169a0(local_20,local_40);
    }
    else if (bVar3 < 4) {
      if (bVar3 == 3) {
        FUN_004167a0(&local_28,*(undefined8 *)(local_40 + 4));
        local_30 = FUN_00b8f030(local_28);
        local_68 = CONCAT71(local_68._1_7_,1);
        FUN_00b8fd60(&local_28,local_30,param_4,0);
        FUN_00416ba0(local_20,local_28,&PTR_DAT_01d05980);
      }
      else if (bVar3 == 1) {
        FUN_004169a0(local_20,local_40);
      }
      else {
        if (bVar3 != 2) goto LAB_01d05887;
        FUN_0043f750(local_20,(longlong)*local_40);
      }
    }
    else if (bVar3 == 4) {
      FUN_004169a0(local_20,local_40);
    }
    else if (bVar3 == 6) {
      FUN_004167a0(&local_28,*(undefined8 *)(local_40 + 4));
      local_30 = FUN_00b8f030(local_28);
      local_68 = CONCAT71(local_68._1_7_,1);
      FUN_00b8fd60(&local_28,local_30,param_4,0);
      FUN_00416ba0(local_20,local_28,&PTR_DAT_01d05980);
      if (param_3 != '\0') {
        local_68 = CONCAT71(local_68._1_7_,1);
        FUN_00b8fd60(&local_58,(double)*(float *)(local_40 + 8),param_4,1);
        local_68 = local_58;
        local_60 = &LAB_01d05994;
        FUN_00416cd0(local_20,4,local_20[0],&DAT_01d05954);
      }
    }
    else {
LAB_01d05887:
      FUN_00414480(local_20);
    }
  }
  else if (bVar3 == 9) {
    FUN_004169a0(local_20,local_40);
  }
  else if (bVar3 == 0xd) {
    FUN_004167a0(&local_28,*(undefined8 *)(local_40 + 8));
    local_30 = FUN_00b8f030(local_28);
    local_68 = CONCAT71(local_68._1_7_,1);
    FUN_00b8fd60(&local_28,local_30,param_4,0);
    FUN_00414b50(local_20,local_28);
  }
  else if (bVar3 == 0x10) {
    local_68 = CONCAT71(local_68._1_7_,1);
    FUN_00b8fd60(local_20,*(undefined8 *)local_40,param_4,0);
  }
  else {
    if (bVar3 != 0x13) goto LAB_01d05887;
    FUN_00e0c170(local_20,param_1);
  }
  if (local_20[0] != 0) {
    FUN_00416ba0(param_2,&DAT_01d05954,local_20[0]);
  }
code_r0x01d058af:
  FUN_00414480(&local_58);
  FUN_00414560(&local_28,2);
  FUN_00414480(&param_5);
  return param_2;
}


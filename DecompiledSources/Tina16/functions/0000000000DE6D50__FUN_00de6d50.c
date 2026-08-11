/* Ghidra address: 00de6d50 */
/* Ghidra symbol: FUN_00de6d50 */


void FUN_00de6d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                 longlong param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 local_res18 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_34;
  longlong local_30 [2];
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  uVar2 = (**(code **)(&PTR_PTR_01ed7fa8)[param_4])
                    ((&PTR_PTR_01ed7fa8)[param_4],1,local_res18[0],param_4);
  FUN_00de5b90(*(undefined8 *)(param_5 + 0x10),uVar2);
  uVar3 = (ulonglong)param_4;
  if (uVar3 < 0xd) {
    if (uVar3 != 0xc) {
      if (7 < uVar3) {
        if (uVar3 - 8 < 2) {
          FUN_004c0450(param_2,&local_58);
          if (param_4 == 8) {
            uVar2 = FUN_004113f0(uVar2,&PTR_FUN_00de3358);
            FUN_00de55a0(uVar2,0);
          }
          else if (param_4 == 9) {
            uVar2 = FUN_004113f0(uVar2,&PTR_FUN_00de3358);
            FUN_00de55a0(uVar2,1);
          }
        }
        else if (uVar3 == 10) {
          FUN_004c23c0(param_2);
          FUN_004bea90(param_2,&local_34,4);
          uVar4 = FUN_004095c0((longlong)local_34);
          FUN_004bea90(param_2,uVar4,(longlong)local_34);
          uVar2 = FUN_004113f0(uVar2,&PTR_FUN_00de36d8);
          FUN_00de5740(uVar2,uVar4,local_34);
          FUN_004095f0(uVar4,(longlong)local_34);
        }
        else if (uVar3 == 0xb) {
          FUN_004c23c0(param_2);
          while (FUN_004c1d80(param_2,local_30), local_30[0] != 0) {
            uVar4 = FUN_004113f0(uVar2,&PTR_FUN_00de3980);
            FUN_00de5900(uVar4,local_30[0]);
          }
        }
        goto code_r0x00de719f;
      }
      if ((uVar3 == 7) || (uVar3 == 0)) goto LAB_00de7093;
      if (uVar3 - 2 < 3) {
        uVar2 = FUN_004113f0(uVar2,&PTR_FUN_00de23f0);
        uVar1 = FUN_004c06c0(param_2);
        FUN_00de50a0(uVar2,uVar1);
        goto code_r0x00de719f;
      }
      if (uVar3 == 5) {
        uVar4 = FUN_004113f0(uVar2,&PTR_FUN_00de2770);
        uVar2 = FUN_004c02a0(param_2);
        FUN_00de51a0(uVar4,uVar2);
        goto code_r0x00de719f;
      }
      if (uVar3 != 6) goto code_r0x00de719f;
    }
    uVar2 = FUN_004113f0(uVar2,&PTR_FUN_00de3150);
    FUN_004c1ed0(param_2,&local_50);
    FUN_00de5510(uVar2,local_50);
  }
  else {
    if (uVar3 < 0x13) {
      if (uVar3 != 0x12) {
        if (uVar3 != 0xd) {
          if (uVar3 == 0xf) {
            uVar2 = FUN_004113f0(uVar2,&PTR_FUN_00de2960);
            uVar4 = FUN_004c0350(param_2);
            FUN_00de5280(uVar2,uVar4);
          }
          else if (uVar3 == 0x10) {
            uVar2 = FUN_004113f0(uVar2,&PTR_FUN_00de2b50);
            uVar4 = FUN_004c03b0(param_2);
            FUN_00de5380(uVar2,uVar4);
          }
          else if (uVar3 == 0x11) {
            uVar4 = FUN_004113f0(uVar2,&PTR_FUN_00de2d48);
            uVar2 = FUN_004c0400(param_2);
            FUN_00de5460(uVar4,uVar2);
          }
          goto code_r0x00de719f;
        }
LAB_00de7093:
        FUN_004c0450(param_2,&local_60);
        goto code_r0x00de719f;
      }
    }
    else {
      if (uVar3 == 0x13) {
        uVar2 = FUN_004113f0(uVar2,&PTR_FUN_00de3db8);
        uVar4 = FUN_004c0750(param_2);
        FUN_00de59a0(uVar2,uVar4);
        goto code_r0x00de719f;
      }
      if (uVar3 != 0x14) {
        if (uVar3 == 0x15) {
          uVar4 = FUN_004113f0(uVar2,&PTR_FUN_00de3fa8);
          uVar2 = FUN_004c02f0(param_2);
          FUN_00de5a80(uVar4,uVar2);
        }
        goto code_r0x00de719f;
      }
    }
    uVar2 = FUN_004113f0(uVar2,&PTR_FUN_00de2f38);
    FUN_004c23a0(param_2,&local_40);
    FUN_004168e0(&local_48,local_40);
    FUN_00de5490(uVar2,local_48);
  }
code_r0x00de719f:
  FUN_00414560(&local_60,3);
  FUN_00414520(&local_48);
  FUN_00414480(&local_40);
  FUN_00414480(local_30);
  FUN_00414480(local_res18);
  return;
}


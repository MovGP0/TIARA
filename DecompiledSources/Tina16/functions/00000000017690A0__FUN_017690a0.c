/* Ghidra address: 017690a0 */
/* Ghidra symbol: FUN_017690a0 */


void FUN_017690a0(longlong *param_1,undefined8 *param_2,undefined8 param_3,ushort param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  ushort local_2a;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  FUN_01d312f0(*param_2,local_20);
  FUN_00414ad0(param_1 + 7,local_20[0]);
  FUN_01d312f0(*param_2,local_20);
  iVar2 = FUN_004170c0(&LAB_017696f0,local_20[0],1);
  if (iVar2 < 1) {
    FUN_00414ad0(param_1 + 8,local_20[0]);
  }
  else {
    uVar3 = FUN_004170c0(&LAB_017696f0,local_20[0],1);
    FUN_00416dc0(local_40,local_20[0],1,uVar3);
    FUN_0043e130(&local_28,local_40[0]);
    iVar2 = FUN_004170c0(&LAB_017696f0,local_20[0],1);
    uVar3 = 0;
    if (local_20[0] != 0) {
      uVar3 = *(undefined4 *)(local_20[0] + -4);
    }
    FUN_00416dc0(param_1 + 8,local_20[0],iVar2 + 1,uVar3);
  }
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_017611c0);
  if ((cVar1 == '\0') || (param_4 < 0x16)) {
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_01761b48);
    if ((cVar1 != '\0') && (0x17 < param_4)) goto LAB_0176924a;
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_01763148);
    if ((cVar1 != '\0') && (0x3d < param_4)) goto LAB_0176924a;
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_017649b8);
    if ((cVar1 != '\0') && (0x12 < param_4)) goto LAB_0176924a;
    FUN_01d312f0(*param_2,local_20);
  }
  else {
LAB_0176924a:
    FUN_01d314e0(*param_2,local_20);
  }
  FUN_00b928f0(&local_48,local_20[0],0);
  FUN_00414b50(local_20,local_48);
  FUN_00415dd0(&local_58,local_20[0],0);
  FUN_00b0d000(&local_50,local_58,0xfde9);
  FUN_004168b0(param_1 + 9,local_50);
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_017611c0);
  if ((cVar1 == '\0') || (param_4 < 0x16)) {
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_01761b48);
    if ((cVar1 != '\0') && (0x17 < param_4)) goto LAB_01769339;
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_01763148);
    if ((cVar1 != '\0') && (0x3d < param_4)) goto LAB_01769339;
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_017649b8);
    if ((cVar1 != '\0') && (0x12 < param_4)) goto LAB_01769339;
    FUN_01d312f0(*param_2,local_20);
  }
  else {
LAB_01769339:
    FUN_01d316c0(*param_2,local_20);
  }
  FUN_00414ad0(param_1 + 10,local_20[0]);
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_017611c0);
  if ((cVar1 == '\0') || (param_4 < 0x15)) {
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_01761b48);
    if ((cVar1 != '\0') && (0x16 < param_4)) goto LAB_017693dd;
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_01763148);
    if ((cVar1 != '\0') && (0x2f < param_4)) goto LAB_017693dd;
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_017649b8);
    if (cVar1 != '\0') goto LAB_017693dd;
    FUN_01d312f0(*param_2,local_20);
  }
  else {
LAB_017693dd:
    FUN_01d314e0(*param_2,local_20);
  }
  (**(code **)(*param_1 + 0x10))(param_1,local_20[0]);
  FUN_01d30f00(*param_2,(longlong)param_1 + 99,1);
  FUN_01d30f00(*param_2,param_1 + 0xe,1);
  FUN_00410f20(param_1[0xd]);
  param_1[0xd] = 0;
  FUN_01d30f00(*param_2,&local_2a,2);
  if (local_2a < 2) {
    if (local_2a == 1) {
      uVar5 = FUN_01768e50(param_1,local_28);
      lVar6 = FUN_00c3f320(uVar5);
      param_1[0xd] = lVar6;
      FUN_01768da0(param_1,lVar6);
    }
    else if (param_1[8] != 0) {
      FUN_01768c30(param_1,param_1[8]);
    }
  }
  else {
    plVar4 = (longlong *)FUN_00c3d400(&LAB_00c3a6d0,1);
    param_1[0xd] = (longlong)plVar4;
    (**(code **)(*plVar4 + 0x30))(plVar4,*param_2,local_2a);
    FUN_01768da0(param_1,param_1[0xd]);
    *(undefined1 *)(param_1[0xd] + 0xd) = 1;
  }
  if (param_4 < 0x12) {
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_017649b8);
    if (cVar1 != '\0') goto LAB_0176952c;
    *(undefined1 *)((longlong)param_1 + 0x61) = 0;
    FUN_00414480(param_1 + 6);
    lVar6 = FUN_00448ed0();
    param_1[0x12] = lVar6;
    param_1[0x11] = param_1[0x11];
  }
  else {
LAB_0176952c:
    FUN_01d312f0(*param_2,local_20);
    FUN_00414ad0(param_1 + 6,local_20[0]);
    FUN_01d30f00(*param_2,param_1 + 0x12,8);
    FUN_01d30f00(*param_2,param_1 + 0x11,8);
    FUN_01d30f00(*param_2,(longlong)param_1 + 0x61,1);
  }
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_017611c0);
  if ((cVar1 == '\0') || (param_4 < 0x17)) {
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_01761b48);
    if ((cVar1 == '\0') || (param_4 < 0x21)) {
      cVar1 = FUN_004113d0(param_1,&PTR_FUN_01763148);
      if ((cVar1 == '\0') || (param_4 < 0x3f)) {
        cVar1 = FUN_004113d0(param_1,&PTR_FUN_017649b8);
        if ((cVar1 == '\0') || (param_4 < 0x14)) goto code_r0x01769664;
      }
    }
  }
  FUN_01d316c0(*param_2,param_1 + 0xf);
code_r0x01769664:
  FUN_004144d0(&local_58);
  FUN_00414520(&local_50);
  FUN_00414560(&local_48,2);
  FUN_00414560(&local_28,2);
  return;
}


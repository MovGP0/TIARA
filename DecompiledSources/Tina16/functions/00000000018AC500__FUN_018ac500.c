/* Ghidra address: 018ac500 */
/* Ghidra symbol: FUN_018ac500 */


void FUN_018ac500(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  if ((char)param_1[0xa6] == '\0') {
    lVar5 = (**(code **)(*param_1 + 0x268))(param_1);
    if (*(char *)(*(longlong *)(lVar5 + 0x1a0) + 0x18) != '\0') {
      uVar6 = (**(code **)(*param_1 + 0x268))(param_1);
      plVar7 = (longlong *)FUN_0196f540(uVar6);
      uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,param_4);
      local_20 = uVar8;
      if (param_4 < 0x32) {
        local_20._4_4_ = (undefined4)(uVar8 >> 0x20);
        uVar3 = local_20._4_4_;
        FUN_018a74b0(param_1[0xaa],uVar8 & 0xffffffff,uVar3);
        lVar5 = param_1[0xaa];
        iVar2 = (**(code **)(*param_1 + 0x1a0))(param_1,2);
        FUN_018a74d0(lVar5,(*(int *)(lVar5 + 0x98) - iVar2) + -0x1a);
      }
    }
    if (param_4 == 0) {
      FUN_018a9020(param_1,1);
      lVar5 = (**(code **)(*param_1 + 0x268))(param_1);
      if (*(char *)(*(longlong *)(lVar5 + 0x1a0) + 0x18) != '\0') {
        FUN_018aba70(param_1);
      }
      lVar5 = param_1[1];
      cVar1 = FUN_004113d0(lVar5,&PTR_FUN_018a1608);
      if (cVar1 != '\0') {
        uVar6 = FUN_0180bfb0();
        FUN_01809b60(uVar6,local_30,L"clCancel");
        FUN_0064de00(*(undefined8 *)(lVar5 + 0x790),local_30[0]);
      }
      uVar3 = FUN_00427dd0();
      *(undefined4 *)(param_1 + 0xa9) = uVar3;
    }
    else if (param_4 == 1) {
      iVar2 = FUN_00427dd0();
      uVar4 = iVar2 - (int)param_1[0xa9];
      *(uint *)(param_1 + 0xa9) = uVar4;
      if (uVar4 < 5) {
        *(undefined4 *)(param_1 + 0xa9) = 0x32;
      }
      else if (uVar4 < 10) {
        *(undefined4 *)(param_1 + 0xa9) = 0x14;
      }
      else {
        *(undefined4 *)(param_1 + 0xa9) = 5;
      }
      FUN_018a9020(param_1,1);
      lVar5 = (**(code **)(*param_1 + 0x268))(param_1);
      if (*(char *)(*(longlong *)(lVar5 + 0x1a0) + 0x18) != '\0') {
        FUN_018aba70(param_1);
      }
    }
    else if (param_4 % (int)param_1[0xa9] == 0) {
      FUN_018a9b10(param_1);
      lVar5 = (**(code **)(*param_1 + 0x268))(param_1);
      if (*(char *)(*(longlong *)(lVar5 + 0x1a0) + 0x18) != '\0') {
        FUN_018a70e0(param_1[0xaa]);
      }
    }
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  }
  else {
    FUN_018a9b10(param_1);
  }
  FUN_00414480(local_30);
  return;
}


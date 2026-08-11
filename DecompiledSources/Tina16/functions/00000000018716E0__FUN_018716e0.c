/* Ghidra address: 018716e0 */
/* Ghidra symbol: FUN_018716e0 */


undefined8
FUN_018716e0(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong local_70;
  longlong lStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  uVar6 = 0;
  local_48 = param_1[0x10];
  local_40 = param_1[0x11];
  iVar3 = (**(code **)(*param_1 + 200))(param_1);
  local_48 = CONCAT44(local_48._4_4_,(int)local_40 - iVar3);
  local_60 = FUN_00498310(param_4,param_5);
  cVar2 = FUN_004231e0(&local_48,&local_60);
  if (cVar2 != '\0') {
    lVar4 = FUN_0181a5c0(&PTR_FUN_0186ba78,1,param_2);
    param_1[0x14] = lVar4;
    *(longlong **)(lVar4 + 0x628) = param_1;
    *(code **)(lVar4 + 0x620) = FUN_018713e0;
    lVar4 = (**(code **)(*param_1 + 0xe0))(param_1);
    param_1[0xf] = lVar4;
    (**(code **)(*param_1 + 0xd8))(param_1,&local_50,&local_54,&local_58);
    FUN_00498350(&local_70,0,0,local_54,local_58);
    param_1[0x12] = local_70;
    param_1[0x13] = lStack_68;
    lVar4 = FUN_004113f0(param_2,&PTR_FUN_00640c18);
    if (lVar4 == 0) {
      lVar4 = *(longlong *)(*(longlong *)PTR_DAT_02005950 + 0xd8);
    }
    uVar5 = FUN_0064d1f0(lVar4,&local_50);
    local_50._4_4_ = (undefined4)(uVar5 >> 0x20);
    uVar1 = local_50._4_4_;
    local_50 = uVar5;
    (**(code **)(*(longlong *)param_1[0x14] + 400))
              ((longlong *)param_1[0x14],uVar5 & 0xffffffff,uVar1,local_54,local_58);
    cVar2 = (**(code **)(*param_1 + 0xd0))(param_1);
    if (cVar2 == '\0') {
      FUN_00410f20(param_1[0xf]);
      FUN_00410f20(param_1[0x14]);
    }
    else {
      FUN_008059a0(param_1[0x14]);
      *(undefined1 *)(param_1 + 10) = 1;
      uVar6 = 1;
      *(undefined1 *)((longlong)param_1 + 0x71) = 1;
    }
  }
  return uVar6;
}


/* Ghidra address: 00c679f0 */
/* Ghidra symbol: FUN_00c679f0 */


void FUN_00c679f0(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4,
                 undefined8 *param_5,byte param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  
  local_60 = auStack_88;
  local_40 = *param_5;
  local_38 = param_5[1];
  local_50 = FUN_004113f0(param_2,&PTR_FUN_0083a758);
  if ((*(longlong *)(param_1 + 0x768) != 0) && (param_4 == 0)) {
    if ((param_6 & 2) != 0) {
      FUN_005fdab0(*(undefined8 *)(*(longlong *)(local_50 + 0x490) + 0x80),0xff000002);
      (**(code **)(**(longlong **)(local_50 + 0x490) + 0xa8))
                (*(longlong **)(local_50 + 0x490),&local_40);
    }
    local_30 = (longlong *)FUN_0060cbe0(&PTR_FUN_005fa0c8,1);
    uVar5 = FUN_00416740(*(undefined8 *)(param_1 + 0x768));
    local_48 = thunk_FUN_0418004c(*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0),uVar5,
                                  param_3);
    FUN_0060d3b0(local_30,local_48);
    if (local_30 != (longlong *)0x0) {
      iVar1 = (int)local_40;
      iVar3 = (**(code **)(*local_30 + 0x60))(local_30);
      iVar2 = local_40._4_4_;
      iVar4 = (**(code **)(*local_30 + 0x48))(local_30);
      (**(code **)(**(longlong **)(local_50 + 0x490) + 0x88))
                (*(longlong **)(local_50 + 0x490),(iVar1 + ((int)local_38 - iVar1) / 2) - iVar3 / 2,
                 (iVar2 + (local_38._4_4_ - iVar2) / 2) - iVar4 / 2,local_30);
    }
    FUN_00410f20(local_30);
  }
  return;
}


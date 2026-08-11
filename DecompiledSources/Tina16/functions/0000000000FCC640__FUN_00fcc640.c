/* Ghidra address: 00fcc640 */
/* Ghidra symbol: FUN_00fcc640 */


void FUN_00fcc640(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  double local_60;
  double local_58;
  int local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined8 local_28;
  undefined8 local_20;
  
  local_90 = auStack_108;
  local_d8 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  local_20 = 0;
  local_28 = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0));
  *(undefined4 *)(param_1 + 0x840) = uVar1;
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x268))(*(longlong **)(param_1 + 0x6e0),uVar1);
  *(undefined8 *)(param_1 + 0x820) =
       *(undefined8 *)(param_1 + 0x7b8 + (longlong)*(int *)(param_1 + 0x840) * 8);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))(*(longlong **)(param_1 + 0x730));
  if (iVar2 == 0) {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f0),1);
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0))
    ;
    *(undefined4 *)(param_1 + 0xc7c) = uVar1;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0))
    ;
    *(int *)(param_1 + 0x840) = iVar2;
    *(undefined8 *)(param_1 + 0x820) = *(undefined8 *)(param_1 + 0x7b8 + (longlong)iVar2 * 8);
    local_40 = *(undefined4 *)(param_1 + 0xc20);
    uVar4 = FUN_00fcc4a0(param_1,local_40,1.0 / *(double *)(param_1 + 0x820));
    *(undefined8 *)(param_1 + 0x830) = uVar4;
    *(double *)(param_1 + 0x838) =
         ((*(double *)(param_1 + 0x830) - *(double *)(param_1 + 0x820)) /
         *(double *)(param_1 + 0x820)) * 10000.0;
    lVar3 = FUN_0040c840(*(undefined8 *)(param_1 + 0x838));
    uVar4 = FUN_0040c850((double)lVar3 / 100.0);
    *(undefined8 *)(param_1 + 0x838) = uVar4;
    if (2.0 < *(double *)(param_1 + 0x838)) {
      local_40 = 1;
      uVar4 = FUN_00fcc4a0(param_1,1,1.0 / *(double *)(param_1 + 0x820));
      *(undefined8 *)(param_1 + 0x830) = uVar4;
      *(undefined4 *)(param_1 + 0xc20) = 1;
    }
    *(double *)(param_1 + 0x838) =
         ((*(double *)(param_1 + 0x830) - *(double *)(param_1 + 0x820)) /
         *(double *)(param_1 + 0x820)) * 10000.0;
    lVar3 = FUN_0040c840(*(undefined8 *)(param_1 + 0x838));
    *(double *)(param_1 + 0x838) = (double)lVar3 / 100.0;
    local_e8 = (undefined1 *)CONCAT71(local_e8._1_7_,1);
    FUN_00b8fd60(&local_a0,*(undefined8 *)(param_1 + 0x830),0,1);
    FUN_00416ba0(&local_98,L"Baud: ",local_a0);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x708),local_98);
    FUN_00414480(&local_20);
    local_80 = *(undefined8 *)(param_1 + 0x838);
    FUN_00448450(&local_20,local_80,PTR_DAT_02004830);
    local_e8 = &LAB_00fcd014;
    FUN_00416cd0(&local_a8,3,L"Error: ",local_20);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x718),local_a8);
    FUN_00414480(&local_20);
    *(undefined4 *)(param_1 + 0xc20) = 1;
    local_48 = 1;
    local_4c = 0x10000;
    local_60 = 1.0 / *(double *)(param_1 + 0x820);
    local_58 = *(double *)(param_1 + 0xce8) / 6.0;
    FUN_00468860(&local_78,(local_58 * local_60) / 1.0);
    local_44 = FUN_00462650(&local_78);
    *(int *)(param_1 + 0xc24) = local_4c - local_44;
    FUN_00f61040(&local_b0,local_4c - local_44);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_b0);
  }
  else {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))(*(longlong **)(param_1 + 0x730))
    ;
    if (iVar2 == 1) {
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f0),1);
      uVar4 = FUN_00fcc330(param_1,1.0 / *(double *)(param_1 + 0x820));
      *(undefined8 *)(param_1 + 0x830) = uVar4;
      *(double *)(param_1 + 0x838) =
           ((*(double *)(param_1 + 0x830) - *(double *)(param_1 + 0x820)) /
           *(double *)(param_1 + 0x820)) * 10000.0;
      lVar3 = FUN_0040c840(*(undefined8 *)(param_1 + 0x838));
      uVar4 = FUN_0040c850((double)lVar3 / 100.0);
      *(undefined8 *)(param_1 + 0x838) = uVar4;
      local_4c = 0x10000;
      local_60 = 1.0 / *(double *)(param_1 + 0x820);
      local_58 = *(double *)(param_1 + 0xce8) / 6.0;
      FUN_00468860(&local_78,local_58 * local_60);
      local_44 = FUN_00462650(&local_78);
      *(int *)(param_1 + 0xc30) = local_4c - local_44;
      *(undefined4 *)(param_1 + 0xc3c) = 2;
      *(undefined4 *)(param_1 + 0xc38) = 4;
      FUN_00f61040(&local_b8,local_4c - local_44);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_b8);
    }
    else {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))
                        (*(longlong **)(param_1 + 0x730));
      if (iVar2 == 2) {
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f0),1);
        uVar4 = FUN_00fcc040(param_1,param_1 + 0x818,param_1 + 0x81c,
                             *(undefined8 *)(param_1 + 0x820));
        *(undefined8 *)(param_1 + 0x830) = uVar4;
        FUN_0043f750(&local_c0,*(undefined4 *)(param_1 + 0x844));
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_c0);
      }
    }
  }
  *(double *)(param_1 + 0x838) =
       ((*(double *)(param_1 + 0x830) - *(double *)(param_1 + 0x820)) / *(double *)(param_1 + 0x820)
       ) * 10000.0;
  lVar3 = FUN_0040c840(*(undefined8 *)(param_1 + 0x838));
  *(double *)(param_1 + 0x838) = (double)lVar3 / 100.0;
  local_e8 = (undefined1 *)CONCAT71(local_e8._1_7_,1);
  FUN_00b8fd60(&local_d0,*(undefined8 *)(param_1 + 0x830),0,1);
  FUN_00416ba0(&local_c8,L"Baud: ",local_d0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x708),local_c8);
  FUN_00414480(&local_28);
  local_88 = *(undefined8 *)(param_1 + 0x838);
  FUN_00448450(&local_28,local_88,PTR_DAT_02004830);
  local_e8 = &LAB_00fcd014;
  FUN_00416cd0(&local_d8,3,L"Error: ",local_28);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x718),local_d8);
  FUN_00414480(&local_28);
  FUN_00414560(&local_d8,9);
  FUN_00460ba0(&local_78);
  FUN_00414560(&local_28,2);
  return;
}


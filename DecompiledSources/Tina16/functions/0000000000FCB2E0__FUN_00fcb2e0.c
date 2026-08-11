/* Ghidra address: 00fcb2e0 */
/* Ghidra symbol: FUN_00fcb2e0 */


void FUN_00fcb2e0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_40;
  double local_38;
  undefined4 local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_50 = auStack_a8;
  local_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_20[0] = 0;
  local_28 = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0));
  *(undefined4 *)(param_1 + 0xc7c) = uVar1;
  local_2c = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))
                       (*(longlong **)(param_1 + 0x6e0));
  *(undefined8 *)(param_1 + 0x820) = *(undefined8 *)(param_1 + 0x7b8 + (longlong)local_2c * 8);
  FUN_00414480(local_20);
  lVar3 = FUN_0040c840(*(double *)(param_1 + 0x820) + 0.5);
  local_38 = (double)lVar3;
  FUN_00448450(local_20,local_38,PTR_DAT_02004830);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),local_20[0]);
  FUN_00414480(local_20);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))(*(longlong **)(param_1 + 0x730));
  if (iVar2 == 2) {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f0),1);
    uVar4 = FUN_00fcc040(param_1,param_1 + 0x818,param_1 + 0x81c,*(undefined8 *)(param_1 + 0x820));
    *(undefined8 *)(param_1 + 0x830) = uVar4;
    FUN_0043f750(&local_58,*(undefined4 *)(param_1 + 0x844));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_58);
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x128))(*(longlong **)(param_1 + 0x6f0),0);
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
    }
    else {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))
                        (*(longlong **)(param_1 + 0x730));
      if (iVar2 == 0) {
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f0),1);
        local_30 = *(undefined4 *)(param_1 + 0xc20);
        uVar4 = FUN_00fcc4a0(param_1,local_30,1.0 / *(double *)(param_1 + 0x820));
        *(undefined8 *)(param_1 + 0x830) = uVar4;
        *(double *)(param_1 + 0x838) =
             ((*(double *)(param_1 + 0x830) - *(double *)(param_1 + 0x820)) /
             *(double *)(param_1 + 0x820)) * 10000.0;
        lVar3 = FUN_0040c840(*(undefined8 *)(param_1 + 0x838));
        uVar4 = FUN_0040c850((double)lVar3 / 100.0);
        *(undefined8 *)(param_1 + 0x838) = uVar4;
        if (2.0 < *(double *)(param_1 + 0x838)) {
          local_30 = 1;
          uVar4 = FUN_00fcc4a0(param_1,1,1.0 / *(double *)(param_1 + 0x820));
          *(undefined8 *)(param_1 + 0x830) = uVar4;
          *(undefined4 *)(param_1 + 0xc20) = 1;
        }
      }
    }
  }
  *(double *)(param_1 + 0x838) =
       ((*(double *)(param_1 + 0x830) - *(double *)(param_1 + 0x820)) / *(double *)(param_1 + 0x820)
       ) * 10000.0;
  lVar3 = FUN_0040c840(*(undefined8 *)(param_1 + 0x838));
  *(double *)(param_1 + 0x838) = (double)lVar3 / 100.0;
  local_88 = (undefined1 *)CONCAT71(local_88._1_7_,1);
  FUN_00b8fd60(&local_68,*(undefined8 *)(param_1 + 0x830),0,1);
  FUN_00416ba0(&local_60,L"Baud: ",local_68);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x708),local_60);
  FUN_00414480(&local_28);
  local_40 = *(undefined8 *)(param_1 + 0x838);
  FUN_00448450(&local_28,local_40,PTR_DAT_02004830);
  local_88 = &LAB_00fcb988;
  FUN_00416cd0(&local_70,3,L"Error: ",local_28);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x718),local_70);
  FUN_00414480(&local_28);
  FUN_00fcc640(param_1,param_2);
  FUN_00414560(&local_70,4);
  FUN_00414560(&local_28,2);
  return;
}


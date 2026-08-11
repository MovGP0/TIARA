/* Ghidra address: 00fae6c0 */
/* Ghidra symbol: FUN_00fae6c0 */


void FUN_00fae6c0(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong local_48;
  double local_40;
  double local_38;
  int local_2c;
  int local_28;
  int local_24;
  undefined8 local_20 [2];
  
  local_50 = auStack_a8;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  local_20[0] = 0;
  FUN_00fadad0(param_1,&local_48,L"BRG16");
  if (local_48 == 0) {
    local_28 = 0x10;
    *(undefined4 *)(param_1 + 0x7fc) = 0;
    *(undefined4 *)(param_1 + 0x7f8) = 1;
  }
  else {
    local_28 = 4;
    *(undefined4 *)(param_1 + 0x7fc) = 1;
    *(undefined4 *)(param_1 + 0x7f8) = 1;
  }
  local_24 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))
                       (*(longlong **)(param_1 + 0x6e0));
  *(undefined8 *)(param_1 + 0x7e8) = *(undefined8 *)(param_1 + 0x790 + (longlong)local_24 * 8);
  local_2c = FUN_0040c840(*(double *)(param_1 + 0xc98) /
                          ((double)local_28 * *(double *)(param_1 + 0x7e8)) - 0.5);
  *(int *)(param_1 + 0x7f0) = local_2c % 0x100;
  *(int *)(param_1 + 0x7f4) = (int)((longlong)local_2c / 0x100);
  FUN_0043f750(&local_58,(longlong)local_2c / 0x100 & 0xffffffff);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x700),local_58);
  (**(code **)(**(longlong **)(param_1 + 0x700) + 0x128))(*(longlong **)(param_1 + 0x700),0);
  FUN_0043f750(&local_60,*(undefined4 *)(param_1 + 0x7f0));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x708),local_60);
  (**(code **)(**(longlong **)(param_1 + 0x708) + 0x128))(*(longlong **)(param_1 + 0x708),0);
  local_38 = *(double *)(param_1 + 0xc98) / (double)(local_28 * (local_2c + 1));
  local_88 = (undefined1 *)CONCAT71(local_88._1_7_,1);
  FUN_00b8fd60(&local_70,local_38,0,1);
  FUN_00416ba0(&local_68,L"Baud: ",local_70);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x710),local_68);
  local_40 = ((local_38 - *(double *)(param_1 + 0x7e8)) / *(double *)(param_1 + 0x7e8)) * 10000.0;
  lVar1 = FUN_0040c840(local_40);
  local_40 = (double)lVar1 / 100.0;
  FUN_00414480(local_20);
  FUN_00448450(local_20,local_40,PTR_DAT_02004830);
  local_88 = &LAB_00faeaf4;
  FUN_00416cd0(&local_78,3,L"Error: ",local_20[0]);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x718),local_78);
  FUN_00414480(local_20);
  FUN_00414560(&local_78,5);
  FUN_00414480(&local_48);
  FUN_00414480(local_20);
  return;
}


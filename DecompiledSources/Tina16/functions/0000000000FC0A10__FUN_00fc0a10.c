/* Ghidra address: 00fc0a10 */
/* Ghidra symbol: FUN_00fc0a10 */


void FUN_00fc0a10(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  int local_40;
  int local_3c;
  double local_38;
  double local_30;
  int local_24;
  undefined8 local_20 [2];
  
  local_50 = auStack_a8;
  local_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_20[0] = 0;
  local_3c = 8;
  local_24 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))
                       (*(longlong **)(param_1 + 0x700));
  *(undefined8 *)(param_1 + 0x820) =
       *(undefined8 *)(param_1 + 0x798 + (longlong)(local_24 + *(int *)(param_1 + 0x808)) * 8);
  local_40 = FUN_0040c840(*(double *)(param_1 + 0xcc8) /
                          ((double)local_3c * *(double *)(param_1 + 0x820)) - 0.5);
  *(int *)(param_1 + 0x82c) = local_40 % 0x100;
  *(int *)(param_1 + 0x828) = local_40 / 0x100;
  FUN_0043f750(&local_58,local_40);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x718),local_58);
  (**(code **)(**(longlong **)(param_1 + 0x718) + 0x128))(*(longlong **)(param_1 + 0x718),0);
  local_30 = *(double *)(param_1 + 0xcc8) / (double)(local_3c * (local_40 + 1));
  local_88 = (undefined1 *)CONCAT71(local_88._1_7_,1);
  FUN_00b8fd60(&local_68,local_30,0,1);
  FUN_00416ba0(&local_60,L"Baud: ",local_68);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x708),local_60);
  local_38 = ((local_30 - *(double *)(param_1 + 0x820)) / *(double *)(param_1 + 0x820)) * 10000.0;
  lVar1 = FUN_0040c840(local_38);
  local_38 = (double)lVar1 / 100.0;
  FUN_00414480(local_20);
  FUN_00448450(local_20,local_38,PTR_DAT_02004830);
  local_88 = &LAB_00fc0d64;
  FUN_00416cd0(&local_70,3,L"Error: ",local_20[0]);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x710),local_70);
  FUN_00414480(local_20);
  FUN_00414560(&local_70,4);
  FUN_00414480(local_20);
  return;
}


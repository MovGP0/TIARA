/* Ghidra address: 00fbdeb0 */
/* Ghidra symbol: FUN_00fbdeb0 */


void FUN_00fbdeb0(longlong param_1)

{
  int iVar1;
  undefined1 auStack_c8 [32];
  undefined *local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  double local_38;
  double local_30;
  double local_28;
  undefined8 local_20 [2];
  
  local_60 = auStack_c8;
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_68 = 0;
  local_50 = 0;
  local_20[0] = 0;
  local_48 = 0x400;
  (**(code **)(**(longlong **)(param_1 + 0x700) + 0x268))
            (*(longlong **)(param_1 + 0x700),*(undefined4 *)(param_1 + 0xad8));
  FUN_0043f750(&local_68,*(undefined4 *)(param_1 + 0xae0));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x708),local_68);
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x268))
            (*(longlong **)(param_1 + 0x6e0),*(undefined4 *)(param_1 + 0xae4));
  (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))
            (*(longlong **)(param_1 + 0x6f0),*(undefined4 *)(param_1 + 0xae8));
  (**(code **)(**(longlong **)(param_1 + 0x720) + 0x268))
            (*(longlong **)(param_1 + 0x720),*(undefined4 *)(param_1 + 0xaec));
  (**(code **)(**(longlong **)(param_1 + 0x728) + 0x268))
            (*(longlong **)(param_1 + 0x728),*(undefined1 *)(param_1 + 0xaf0));
  (**(code **)(**(longlong **)(param_1 + 0x730) + 0x268))
            (*(longlong **)(param_1 + 0x730),*(undefined1 *)(param_1 + 0xaf1));
  (**(code **)(**(longlong **)(param_1 + 0x778) + 0x268))
            (*(longlong **)(param_1 + 0x778),*(undefined1 *)(param_1 + 0xaf2));
  FUN_00414480(local_20);
  local_58 = *(undefined8 *)(param_1 + 0xc60);
  FUN_00448450(local_20,local_58,PTR_DAT_02004830);
  FUN_00416ba0(&local_70,local_20[0],&DAT_00fbe334);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x780),local_70);
  FUN_00414480(local_20);
  local_28 = *(double *)(param_1 + 0xc60);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))(*(longlong **)(param_1 + 0x700));
  local_44 = *(int *)(param_1 + 0x794 + (longlong)iVar1 * 4);
  local_3c = 0x100 - *(int *)(param_1 + 0xadc);
  local_30 = (1.0 / local_28) * (double)local_3c * (double)local_44;
  FUN_00b90440(*(undefined8 *)(param_1 + 0x750),local_30);
  local_a8._0_1_ = 1;
  FUN_00b8fd60(&local_80,local_30,*PTR_DAT_02005310,0);
  FUN_00416ba0(&local_78,L"Time: ",local_80);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x758),local_78);
  FUN_00f61040(&local_88,*(undefined4 *)(param_1 + 0xadc));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),local_88);
  local_38 = (double)(local_40 * local_48) / *(double *)(param_1 + 0x7b8);
  local_a8 = (undefined *)CONCAT71(local_a8._1_7_,1);
  FUN_00b8fd60(&local_98,local_38,*PTR_DAT_02005310,0);
  local_a8 = &DAT_00fbe388;
  FUN_00416cd0(&local_90,3,L"Time max: ",local_98);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x738),local_90);
  FUN_00414560(&local_98,7);
  FUN_00414480(&local_50);
  FUN_00414480(local_20);
  return;
}


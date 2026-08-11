/* Ghidra address: 00fba6a0 */
/* Ghidra symbol: FUN_00fba6a0 */


void FUN_00fba6a0(longlong param_1)

{
  int iVar1;
  undefined1 auStack_e8 [32];
  undefined *local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  double local_38;
  double local_30;
  double local_28;
  undefined8 local_20 [2];
  
  local_60 = auStack_e8;
  local_b0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_50 = 0;
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))
            (*(longlong **)(param_1 + 0x6f0),*(undefined4 *)(param_1 + 0xb70));
  (**(code **)(**(longlong **)(param_1 + 0x738) + 0x268))
            (*(longlong **)(param_1 + 0x738),*(undefined4 *)(param_1 + 0xb74));
  (**(code **)(**(longlong **)(param_1 + 0x758) + 0x268))
            (*(longlong **)(param_1 + 0x758),*(undefined4 *)(param_1 + 0xb78));
  FUN_00f61040(&local_68,*(undefined4 *)(param_1 + 0xb80));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x708),local_68);
  FUN_00f61040(&local_70,*(undefined4 *)(param_1 + 0xb84));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x710),local_70);
  FUN_00f61040(&local_78,*(undefined4 *)(param_1 + 0xb88));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x730),local_78);
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x268))
            (*(longlong **)(param_1 + 0x6e0),*(undefined4 *)(param_1 + 0xb8c));
  (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x268))
            (*(longlong **)(param_1 + 0x6f8),*(undefined4 *)(param_1 + 0xb90));
  (**(code **)(**(longlong **)(param_1 + 0x800) + 0x268))
            (*(longlong **)(param_1 + 0x800),*(undefined4 *)(param_1 + 0xb94));
  (**(code **)(**(longlong **)(param_1 + 0x808) + 0x268))
            (*(longlong **)(param_1 + 0x808),*(undefined4 *)(param_1 + 0xb98));
  (**(code **)(**(longlong **)(param_1 + 0x810) + 0x268))
            (*(longlong **)(param_1 + 0x810),*(undefined4 *)(param_1 + 0xb9c));
  (**(code **)(**(longlong **)(param_1 + 0x740) + 0x268))
            (*(longlong **)(param_1 + 0x740),*(undefined1 *)(param_1 + 0xba0));
  (**(code **)(**(longlong **)(param_1 + 0x748) + 0x268))
            (*(longlong **)(param_1 + 0x748),*(undefined1 *)(param_1 + 0xba1));
  (**(code **)(**(longlong **)(param_1 + 0x750) + 0x268))
            (*(longlong **)(param_1 + 0x750),*(undefined1 *)(param_1 + 0xba2));
  local_28 = *(double *)(param_1 + 0xd30);
  FUN_00414480(local_20);
  FUN_00448450(local_20,local_28,PTR_DAT_02004830);
  FUN_00416ba0(&local_80,local_20[0],&DAT_00fbad58);
  FUN_0064de00(*(undefined8 *)(param_1 + 2000),local_80);
  FUN_00414480(local_20);
  FUN_0043e130(&local_88,*(undefined8 *)(param_1 + 0xd48));
  iVar1 = FUN_004170c0(L"ATTINY26",local_88,1);
  if (iVar1 == 0) {
    FUN_0043e130(&local_90,*(undefined8 *)(param_1 + 0xd48));
    iVar1 = FUN_004170c0(L"ATTINY24",local_90,1);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                        (*(longlong **)(param_1 + 0x6f0));
      local_48 = *(int *)(param_1 + 0x81c + (longlong)iVar1 * 4);
      local_3c = *(int *)(param_1 + 0x830);
      local_44 = 0x10000;
    }
    else {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))
                        (*(longlong **)(param_1 + 0x758));
      local_48 = *(int *)(param_1 + 0x87c + (longlong)iVar1 * 4);
      local_3c = *(int *)(param_1 + 0x89c);
      local_44 = 0x100;
    }
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x260))(*(longlong **)(param_1 + 0x738))
    ;
    local_48 = *(int *)(param_1 + 0x83c + (longlong)iVar1 * 4);
    local_3c = *(int *)(param_1 + 0x878);
    local_44 = 0x100;
  }
  local_40 = local_44 - *(int *)(param_1 + 0xb7c);
  local_30 = (1.0 / local_28) * (double)local_40 * (double)local_48;
  FUN_00b90440(*(undefined8 *)(param_1 + 0x780),local_30);
  local_c8._0_1_ = 1;
  FUN_00b8fd60(&local_a0,local_30,*PTR_DAT_02005310,0);
  FUN_00416ba0(&local_98,L"Time: ",local_a0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x798),local_98);
  FUN_00f61040(&local_a8,*(undefined4 *)(param_1 + 0xb7c));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),local_a8);
  local_38 = (double)(local_44 * local_3c) / *(double *)(param_1 + 0xd38);
  local_c8 = (undefined *)CONCAT71(local_c8._1_7_,1);
  FUN_00b8fd60(&local_b8,local_38,*PTR_DAT_02005310,0);
  local_c8 = &DAT_00fbadec;
  FUN_00416cd0(&local_b0,3,L"Time max: ",local_b8);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x778),local_b0);
  FUN_00414560(&local_b8,0xb);
  FUN_00414480(&local_50);
  FUN_00414480(local_20);
  return;
}


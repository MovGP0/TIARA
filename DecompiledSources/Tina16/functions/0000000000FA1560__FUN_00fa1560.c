/* Ghidra address: 00fa1560 */
/* Ghidra symbol: FUN_00fa1560 */


void FUN_00fa1560(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_148 [32];
  undefined *local_128;
  wchar_t *local_120;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 local_70;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  double local_40;
  double local_38;
  double local_30;
  undefined8 local_20 [2];
  
  local_80 = auStack_148;
  local_110 = 0;
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_58 = 0;
  local_60 = 0;
  local_20[0] = 0;
  local_128 = (undefined *)CONCAT71(local_128._1_7_,1);
  FUN_00450070(&local_58,*(undefined8 *)(param_1 + 0x880),&DAT_00fa264c,&DAT_00fa2660);
  if (*(int *)(param_1 + 0x870) == 8) {
    local_128 = (undefined *)local_58;
    local_120 = L".inc";
    FUN_00416cd0(&local_60,4,*(undefined8 *)PTR_DAT_02005598,L"\\VHDL\\MCU\\Include\\PIC18\\");
  }
  else {
    local_128 = (undefined *)local_58;
    local_120 = L".inc";
    FUN_00416cd0(&local_60,4,*(undefined8 *)PTR_DAT_02005598,L"\\VHDL\\MCU\\Include\\");
  }
  FUN_00440a20(local_60,1);
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong **)(param_1 + 0x8e8) = plVar3;
  (**(code **)(*plVar3 + 0xd8))(plVar3,local_60);
  local_64 = FUN_00fa5d30(param_1,&DAT_00fa2700);
  if (local_64 == -1) {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7c0),0);
    (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x268))(*(longlong **)(param_1 + 0x7c0),0);
  }
  else {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7c0),1);
  }
  local_4c = 0x10000;
  FUN_00414480(local_20);
  local_70 = *(undefined8 *)(param_1 + 0x858);
  FUN_00448450(local_20,local_70,PTR_DAT_02004830);
  FUN_00416ba0(&local_88,local_20[0],&DAT_00fa2718);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x750),local_88);
  FUN_00414480(local_20);
  cVar1 = *(char *)(param_1 + 0x8f1);
  if (((cVar1 == '\x02') || (cVar1 == '\x0e')) || (cVar1 == '\v')) {
    (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x268))
              (*(longlong **)(param_1 + 0x6c0),*(undefined4 *)(param_1 + 0x944));
    *(undefined4 *)(param_1 + 0x878) = *(undefined4 *)(param_1 + 0x944);
    FUN_00f61040(&local_90,*(undefined4 *)(param_1 + 0x948));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),local_90);
    FUN_00f61040(&local_98,*(undefined4 *)(param_1 + 0x94c));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7d8),local_98);
    FUN_00f61040(&local_a0,*(undefined4 *)(param_1 + 0x950));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7e8),local_a0);
    (**(code **)(**(longlong **)(param_1 + 0x7f8) + 0x268))
              (*(longlong **)(param_1 + 0x7f8),*(undefined4 *)(param_1 + 0x954));
    (**(code **)(**(longlong **)(param_1 + 0x808) + 0x268))
              (*(longlong **)(param_1 + 0x808),*(undefined4 *)(param_1 + 0x958));
    (**(code **)(**(longlong **)(param_1 + 0x818) + 0x268))
              (*(longlong **)(param_1 + 0x818),*(undefined4 *)(param_1 + 0x95c));
    (**(code **)(**(longlong **)(param_1 + 0x830) + 0x268))
              (*(longlong **)(param_1 + 0x830),*(undefined4 *)(param_1 + 0x960));
    (**(code **)(**(longlong **)(param_1 + 0x838) + 0x268))
              (*(longlong **)(param_1 + 0x838),*(undefined4 *)(param_1 + 0x964));
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))
              (*(longlong **)(param_1 + 0x6f0),*(undefined1 *)(param_1 + 0x968));
    (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x268))
              (*(longlong **)(param_1 + 0x6f8),*(undefined1 *)(param_1 + 0x969));
    (**(code **)(**(longlong **)(param_1 + 0x700) + 0x268))
              (*(longlong **)(param_1 + 0x700),*(undefined1 *)(param_1 + 0x96a));
    (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x268))
              (*(longlong **)(param_1 + 0x6e8),*(undefined1 *)(param_1 + 0x96b));
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x268))
              (*(longlong **)(param_1 + 0x708),*(undefined1 *)(param_1 + 0x96c));
    (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x268))
              (*(longlong **)(param_1 + 0x7c0),*(undefined1 *)(param_1 + 0x96c));
    if (*(int *)(param_1 + 0x870) == 8) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))
                        (*(longlong **)(param_1 + 0x7c0));
      if (cVar1 == '\0') {
        local_4c = 0x100;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x268))
              (*(longlong **)(param_1 + 0x710),*(undefined1 *)(param_1 + 0x96d));
    (**(code **)(**(longlong **)(param_1 + 0x718) + 0x268))
              (*(longlong **)(param_1 + 0x718),*(undefined1 *)(param_1 + 0x96e));
    (**(code **)(**(longlong **)(param_1 + 0x720) + 0x268))
              (*(longlong **)(param_1 + 0x720),*(undefined1 *)(param_1 + 0x96f));
    *(undefined1 *)(param_1 + 0x890) = *(undefined1 *)(param_1 + 0x970);
    local_48 = local_4c - *(int *)(param_1 + 0x948);
    FUN_00f61040(&local_a8,*(int *)(param_1 + 0x948));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),local_a8);
  }
  if (*(char *)(param_1 + 0x8f1) == '\x0f') {
    (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x268))
              (*(longlong **)(param_1 + 0x6c0),*(undefined4 *)(param_1 + 0x9b4));
    *(undefined4 *)(param_1 + 0x878) = *(undefined4 *)(param_1 + 0x9b4);
    FUN_00f61040(&local_b0,*(undefined4 *)(param_1 + 0x9b8));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),local_b0);
    FUN_00f61040(&local_b8,*(undefined4 *)(param_1 + 0x9bc));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7d8),local_b8);
    FUN_00f61040(&local_c0,*(undefined4 *)(param_1 + 0x9c0));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7e8),local_c0);
    (**(code **)(**(longlong **)(param_1 + 0x7f8) + 0x268))
              (*(longlong **)(param_1 + 0x7f8),*(undefined4 *)(param_1 + 0x9d0));
    (**(code **)(**(longlong **)(param_1 + 0x808) + 0x268))
              (*(longlong **)(param_1 + 0x808),*(undefined4 *)(param_1 + 0x9d4));
    (**(code **)(**(longlong **)(param_1 + 0x818) + 0x268))
              (*(longlong **)(param_1 + 0x818),*(undefined4 *)(param_1 + 0x9d8));
    (**(code **)(**(longlong **)(param_1 + 0x830) + 0x268))
              (*(longlong **)(param_1 + 0x830),*(undefined4 *)(param_1 + 0x9e4));
    (**(code **)(**(longlong **)(param_1 + 0x838) + 0x268))
              (*(longlong **)(param_1 + 0x838),*(undefined4 *)(param_1 + 0x9ec));
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))
              (*(longlong **)(param_1 + 0x6f0),*(undefined1 *)(param_1 + 0xa24));
    (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x268))
              (*(longlong **)(param_1 + 0x6f8),*(undefined1 *)(param_1 + 0x9f4));
    (**(code **)(**(longlong **)(param_1 + 0x700) + 0x268))
              (*(longlong **)(param_1 + 0x700),*(undefined1 *)(param_1 + 0x9f5));
    (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x268))
              (*(longlong **)(param_1 + 0x6e8),*(undefined1 *)(param_1 + 0x9f9));
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x268))
              (*(longlong **)(param_1 + 0x708),*(undefined1 *)(param_1 + 0x9fa));
    (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x268))
              (*(longlong **)(param_1 + 0x7c0),*(undefined1 *)(param_1 + 0x9fa));
    if (*(int *)(param_1 + 0x870) == 8) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))
                        (*(longlong **)(param_1 + 0x7c0));
      if (cVar1 == '\0') {
        local_4c = 0x100;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x268))
              (*(longlong **)(param_1 + 0x710),*(undefined1 *)(param_1 + 0x9fb));
    (**(code **)(**(longlong **)(param_1 + 0x718) + 0x268))
              (*(longlong **)(param_1 + 0x718),*(undefined1 *)(param_1 + 0x9fc));
    *(undefined1 *)(param_1 + 0x890) = *(undefined1 *)(param_1 + 0x9fd);
    local_48 = local_4c - *(int *)(param_1 + 0x9b8);
    FUN_00f61040(&local_c8,*(int *)(param_1 + 0x9b8));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),local_c8);
  }
  if (*(char *)(param_1 + 0x8f1) == '\x10') {
    (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x268))
              (*(longlong **)(param_1 + 0x6c0),*(undefined4 *)(param_1 + 0xa2c));
    *(undefined4 *)(param_1 + 0x878) = *(undefined4 *)(param_1 + 0xa2c);
    FUN_00f61040(&local_d0,*(undefined4 *)(param_1 + 0xa30));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),local_d0);
    FUN_00f61040(&local_d8,*(undefined4 *)(param_1 + 0xa34));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7d8),local_d8);
    FUN_00f61040(&local_e0,*(undefined4 *)(param_1 + 0xa38));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7e8),local_e0);
    (**(code **)(**(longlong **)(param_1 + 0x7f8) + 0x268))
              (*(longlong **)(param_1 + 0x7f8),*(undefined4 *)(param_1 + 0xa48));
    (**(code **)(**(longlong **)(param_1 + 0x808) + 0x268))
              (*(longlong **)(param_1 + 0x808),*(undefined4 *)(param_1 + 0xa4c));
    (**(code **)(**(longlong **)(param_1 + 0x818) + 0x268))
              (*(longlong **)(param_1 + 0x818),*(undefined4 *)(param_1 + 0xa50));
    (**(code **)(**(longlong **)(param_1 + 0x830) + 0x268))
              (*(longlong **)(param_1 + 0x830),*(undefined4 *)(param_1 + 0xa5c));
    (**(code **)(**(longlong **)(param_1 + 0x838) + 0x268))
              (*(longlong **)(param_1 + 0x838),*(undefined4 *)(param_1 + 0xa64));
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))
              (*(longlong **)(param_1 + 0x6f0),*(undefined1 *)(param_1 + 0xa9c));
    (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x268))
              (*(longlong **)(param_1 + 0x6f8),*(undefined1 *)(param_1 + 0xa6c));
    (**(code **)(**(longlong **)(param_1 + 0x700) + 0x268))
              (*(longlong **)(param_1 + 0x700),*(undefined1 *)(param_1 + 0xa6d));
    (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x268))
              (*(longlong **)(param_1 + 0x6e8),*(undefined1 *)(param_1 + 0xa71));
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x268))
              (*(longlong **)(param_1 + 0x708),*(undefined1 *)(param_1 + 0xa72));
    (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x268))
              (*(longlong **)(param_1 + 0x7c0),*(undefined1 *)(param_1 + 0xa72));
    if (*(int *)(param_1 + 0x870) == 8) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))
                        (*(longlong **)(param_1 + 0x7c0));
      if (cVar1 == '\0') {
        local_4c = 0x100;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x268))
              (*(longlong **)(param_1 + 0x710),*(undefined1 *)(param_1 + 0xa73));
    (**(code **)(**(longlong **)(param_1 + 0x718) + 0x268))
              (*(longlong **)(param_1 + 0x718),*(undefined1 *)(param_1 + 0xa74));
    *(undefined1 *)(param_1 + 0x890) = *(undefined1 *)(param_1 + 0xa76);
    local_48 = local_4c - *(int *)(param_1 + 0xa30);
    FUN_00f61040(&local_e8,*(int *)(param_1 + 0xa30));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),local_e8);
  }
  *(undefined1 *)(param_1 + 0x874) = 1;
  FUN_00fa4d70(param_1,param_2);
  *(undefined1 *)(param_1 + 0x874) = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0));
  local_50 = *(int *)(param_1 + 0x844 + (longlong)iVar2 * 4);
  local_44 = *(int *)(param_1 + 0x850);
  local_30 = *(double *)(param_1 + 0x858) / 4.0;
  local_38 = (1.0 / local_30) * (double)local_48 * (double)local_50;
  FUN_00b90440(*(undefined8 *)(param_1 + 0x758),local_38);
  local_128._0_1_ = 1;
  FUN_00b8fd60(&local_f8,local_38,*PTR_DAT_02005310,0);
  FUN_00416ba0(&local_f0,L"Time: ",local_f8);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x738),local_f0);
  local_40 = (double)(local_4c * local_44) / local_30;
  local_128 = (undefined *)CONCAT71(local_128._1_7_,1);
  FUN_00b8fd60(&local_108,local_40,*PTR_DAT_02005310,0);
  local_128 = &DAT_00fa276c;
  FUN_00416cd0(&local_100,3,L"Time max: ",local_108);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x740),local_100);
  (**(code **)(**(longlong **)(param_1 + 0x770) + 0x268))
            (*(longlong **)(param_1 + 0x770),*(undefined1 *)(param_1 + 0xbac));
  *(undefined4 *)(param_1 + 0x894) = *(undefined4 *)(param_1 + 0xbb0);
  FUN_00f61040(&local_110,*(undefined4 *)(param_1 + 0xbb0));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x778),local_110);
  local_48 = 0x10000 - *(int *)(param_1 + 0x894);
  local_38 = (1.0 / *(double *)(param_1 + 0x868)) * (double)local_48 *
             (double)*(int *)(param_1 + 0x850) * 4.0;
  FUN_00b90440(*(undefined8 *)(param_1 + 0x7b8),local_38);
  FUN_00414560(&local_110,0x12);
  FUN_00414560(&local_60,2);
  FUN_00414480(local_20);
  return;
}


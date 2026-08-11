/* Ghidra address: 01745600 */
/* Ghidra symbol: FUN_01745600 */


void FUN_01745600(longlong param_1,longlong *param_2,longlong *param_3,ulonglong param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *local_res18;
  ulonglong local_res20;
  undefined1 auStack_138 [32];
  wchar_t *local_118;
  uint local_110;
  undefined8 local_108;
  ulonglong local_100;
  longlong *local_f8;
  ulonglong local_f0;
  uint local_e8;
  uint local_e0;
  undefined1 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_48;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  byte local_29;
  byte *local_28;
  undefined8 local_20 [2];
  
  local_80 = auStack_138;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  local_90 = (longlong *)0x0;
  local_70 = (longlong *)0x0;
  local_78 = 0;
  local_20[0] = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if (param_2 == (longlong *)0x0) {
LAB_017456dd:
    if (local_res18 == (longlong *)0x0) goto LAB_01745bfd;
  }
  else {
    cVar2 = FUN_0175ad40(param_1,param_2);
    if (cVar2 == '\0') goto LAB_017456dd;
  }
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (*(char *)((longlong)plVar1 + 0xb) == '\0') {
    (**(code **)(*plVar1 + 0x2d0))(plVar1,0,&local_28);
    local_29 = *local_28;
    local_48 = 1;
    do {
      FUN_01744c90(param_1,&local_68,(undefined1)local_48);
      local_118 = (wchar_t *)&local_34;
      local_108._0_1_ = 1;
      local_110._0_1_ = local_res18 == (longlong *)0x0;
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_68,local_64,&local_30);
      local_118 = (wchar_t *)&local_3c;
      local_110 = CONCAT31(local_110._1_3_,local_res18 == (longlong *)0x0);
      local_108 = CONCAT71(local_108._1_7_,1);
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_60,local_5c,&local_38);
      if (param_2 != (longlong *)0x0) {
        if (local_48 == local_29) {
          local_118 = (wchar_t *)CONCAT44(local_118._4_4_,local_3c);
          local_110 = 0xff;
          (**(code **)(*param_2 + 0x60))(param_2,local_30,local_34,local_38);
        }
        else {
          local_110 = (**(code **)(*param_2 + 0xd0))(param_2,0);
          local_118 = (wchar_t *)CONCAT44(local_118._4_4_,local_3c);
          (**(code **)(*param_2 + 0x60))(param_2,local_30,local_34,local_38);
        }
      }
      if (local_res18 != (longlong *)0x0) {
        (**(code **)(*local_res18 + 0x100))(local_res18,&local_90);
        (**(code **)(*local_90 + 0x100))(local_90,&local_88,L"interactive");
        cVar2 = FUN_0043fc50(local_88,0);
        if (cVar2 == '\0') {
          local_118 = (wchar_t *)CONCAT44(local_118._4_4_,local_34);
          local_110 = local_38;
          local_108 = CONCAT44(local_108._4_4_,local_3c);
          local_100 = CONCAT44(local_100._4_4_,1);
          local_f8 = (longlong *)CONCAT44(local_f8._4_4_,0xff);
          local_f0 = CONCAT44(local_f0._4_4_,0xff);
          FUN_01243a40(&local_70,local_res18,local_res20,local_30);
          FUN_00414480(local_20);
          FUN_0043f750(local_20,local_48);
          FUN_00416ba0(&local_a0,&DAT_01745d88,local_20[0]);
          (**(code **)(*local_70 + 0x108))(local_70,L"showif",local_a0);
          FUN_00414480(local_20);
        }
        else if (local_48 == local_29) {
          local_118 = (wchar_t *)CONCAT44(local_118._4_4_,local_34);
          local_110 = local_38;
          local_108 = CONCAT44(local_108._4_4_,local_3c);
          local_100 = CONCAT44(local_100._4_4_,1);
          local_f8 = (longlong *)CONCAT44(local_f8._4_4_,0xff);
          local_f0 = CONCAT44(local_f0._4_4_,0xff);
          FUN_01243a40(&local_98,local_res18,local_res20,local_30);
        }
      }
      FUN_017451e0(param_1,&local_78,local_48);
      local_30 = (int)(local_30 + local_38) / 2;
      local_34 = (local_34 + local_3c) / 2;
      if (param_2 != (longlong *)0x0) {
        uVar3 = (**(code **)(*param_2 + 0xd8))(param_2,0);
        local_118 = (wchar_t *)CONCAT71(local_118._1_7_,1);
        local_110 = local_110 & 0xffffff00;
        local_108 = 0x3ff3333333333333;
        local_100 = 0x3ff3333333333333;
        local_f8 = (longlong *)CONCAT44(local_f8._4_4_,uVar3);
        local_f0 = CONCAT44(local_f0._4_4_,*(undefined4 *)((longlong)param_2 + 0xfc));
        local_e8 = 300;
        local_e0 = local_e0 & 0xffffff00;
        local_d8 = 0;
        local_d0 = param_2[0x21];
        local_c8 = local_78;
        local_c0 = 0;
        local_b8 = 0;
        FUN_01a98770(param_2,local_30,local_34,1);
      }
      if (local_res18 != (longlong *)0x0) {
        local_118 = (wchar_t *)CONCAT71(local_118._1_7_,1);
        local_110 = CONCAT31(local_110._1_3_,1);
        local_108 = 0x3ff3333333333333;
        local_100 = local_100 & 0xffffffff00000000;
        local_f8 = local_res18;
        local_f0 = local_res20;
        FUN_01244970(&local_78,&local_30,&local_34,0);
        local_118 = L"Arial";
        local_110 = local_30;
        local_108 = CONCAT44(local_108._4_4_,local_34);
        local_100 = local_100 & 0xffffffff00000000;
        local_f8 = (longlong *)CONCAT44(local_f8._4_4_,0xd);
        local_f0 = local_f0 & 0xffffffffffffff00;
        local_e8 = local_e8 & 0xffffff00;
        local_e0 = 0;
        FUN_012444f0(&local_a8,local_res18,local_res20,local_78);
      }
      local_48 = local_48 + 1;
    } while (local_48 != 5);
  }
LAB_01745bfd:
  FUN_0041b800(&local_a8);
  FUN_00414480(&local_a0);
  FUN_00417840(&local_98,&LAB_00b9fca0,2);
  FUN_00414480(&local_88);
  FUN_00414480(&local_78);
  FUN_0041b800(&local_70);
  FUN_00414480(local_20);
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}


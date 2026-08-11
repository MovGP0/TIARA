/* Ghidra address: 0198f380 */
/* Ghidra symbol: FUN_0198f380 */


void FUN_0198f380(longlong *param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                 longlong *param_5,char param_6,undefined1 param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  longlong *local_res20;
  ulonglong in_stack_fffffffffffffe18;
  ulonglong in_stack_fffffffffffffe20;
  undefined *in_stack_fffffffffffffe28;
  undefined8 local_138;
  int local_12c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  ulonglong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  int local_b0 [2];
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  uint local_5c;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  undefined4 local_2c;
  
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_d8 = (longlong *)0x0;
  local_e0 = (longlong *)0x0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_38 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_50 = (longlong *)0x0;
  local_58 = 0;
  local_res20 = param_4;
  FUN_0041b910(param_4);
  FUN_0041b910(param_5);
  uVar5 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  uVar6 = FUN_004b6930(&PTR_FUN_00478280,1);
  if ((param_6 != '\0') && (cVar1 = FUN_01995410(param_1), cVar1 == '\0')) {
    (**(code **)(*param_1 + 0x78))(param_1,0,param_7,0);
  }
  cVar1 = FUN_01995600(param_1,0,0);
  if (cVar1 != '\0') {
    FUN_017ccae0(param_2,uVar6);
    FUN_017cd0b0(param_2,uVar6,0,0);
    if (param_5 != (longlong *)0x0) {
      local_138 = thunk_FUN_040ef593(0);
      in_stack_fffffffffffffe20 = 0;
      in_stack_fffffffffffffe28 = (undefined *)0x0;
      FUN_01299960(&local_38,param_5,&PTR_DAT_0198fe98,0,
                   in_stack_fffffffffffffe18 & 0xffffffffffffff00,0,0);
      (**(code **)(*param_5 + 0x148))(param_5,&local_40,L"circuit");
      (**(code **)(*local_38 + 0x98))(local_38,&local_80,local_40);
    }
    plVar7 = (longlong *)FUN_01995660(param_1,1,0);
    while (plVar7 != (longlong *)0x0) {
      iVar2 = (**(code **)(*plVar7 + 0x1c8))();
      local_12c = 0;
      if (-1 < iVar2 + -1) {
        do {
          iVar3 = (**(code **)(*plVar7 + 0x210))(plVar7,local_12c);
          if (-1 < iVar3) {
            FUN_017cd4e0(&local_58,param_2,iVar3,uVar6,0);
            iVar4 = FUN_004aeba0(uVar5,(longlong)iVar3);
            if (iVar4 == -1) {
              FUN_004ae7e0(uVar5,(longlong)iVar3);
              (**(code **)(*plVar7 + 0x1f0))(plVar7,local_12c,&local_5c,&local_60);
              if (param_3 != 0) {
                FUN_00416cd0(&local_88,3,&DAT_0198fec8,local_58,&DAT_0198fec8);
                in_stack_fffffffffffffe20 = in_stack_fffffffffffffe20 & 0xffffffffffffff00;
                in_stack_fffffffffffffe28 = (undefined *)0x3feccccccccccccd;
                FUN_01a98910(param_3,local_5c,local_60,1,1,in_stack_fffffffffffffe20,
                             0x3feccccccccccccd,0x3feccccccccccccd,0xff,
                             *(undefined4 *)(param_3 + 0xfc),300,0,0,
                             *(undefined8 *)(param_3 + 0x108),local_88,0,&local_70,0,0xffff,0x800000
                             ,0);
              }
              if (param_5 != (longlong *)0x0) {
                (**(code **)(*param_5 + 0x148))(param_5,&local_48,L"text");
                (**(code **)(*local_40 + 0x98))(local_40,&local_90,local_48);
                local_a8 = 0;
                local_b0[0] = iVar3;
                FUN_00442f70(&local_a0,&PTR_DAT_0198ff1c,local_b0,0);
                FUN_00416ba0(&local_98,L"Text_",local_a0);
                (**(code **)(*local_48 + 0x108))(local_48,&PTR_DAT_0198fef0,local_98);
                (**(code **)(*local_48 + 0x108))(local_48,L"type",L"graphnode");
                uVar9 = 0;
                if (local_58 != 0) {
                  uVar9 = *(undefined4 *)(local_58 + -4);
                }
                uVar8 = FUN_00416740(local_58);
                local_2c = FUN_00b94d60(local_138,uVar8,uVar9);
                local_74._0_2_ = (short)local_2c;
                local_5c = local_5c - (int)(short)local_74 / 2;
                local_74._2_2_ = (short)((uint)local_2c >> 0x10);
                local_60 = local_60 - (int)local_74._2_2_ / 2;
                local_74 = local_2c;
                FUN_0043f750(&local_c0,local_5c);
                FUN_0043f750(&local_c8,local_60);
                uVar8 = local_c8;
                FUN_00416cd0(&local_b8,3,local_c0,&DAT_0198ff88,local_c8);
                uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
                (**(code **)(*local_48 + 0x108))(local_48,L"position",local_b8);
                in_stack_fffffffffffffe20 = in_stack_fffffffffffffe20 & 0xffffffffffffff00;
                in_stack_fffffffffffffe28 =
                     (undefined *)((ulonglong)in_stack_fffffffffffffe28 & 0xffffffffffffff00);
                FUN_01294320(param_5,local_48,local_58,L"Arial",CONCAT44(uVar9,8),
                             in_stack_fffffffffffffe20,in_stack_fffffffffffffe28,1,0xff,0xffff);
              }
              if (local_res20 != (longlong *)0x0) {
                (**(code **)(*local_res20 + 0x100))(local_res20,&local_d0);
                if (local_d0 != 0) {
                  (**(code **)(*local_res20 + 0x100))(local_res20,&local_e0);
                  FUN_017ff4f0(plVar7,&local_f0);
                  FUN_0043f750(&local_f8,local_12c);
                  in_stack_fffffffffffffe28 = &DAT_0198fff4;
                  in_stack_fffffffffffffe20 = local_f8;
                  FUN_00416cd0(&local_e8,5,L"circuit/node[@id=\"",local_f0,&DAT_0198ffe4,local_f8,
                               &DAT_0198fff4);
                  (**(code **)(*local_e0 + 0xd8))(local_e0,&local_d8,local_e8);
                  FUN_0041b890(&local_50,local_d8,&DAT_0198fffa);
                  if (local_50 != (longlong *)0x0) {
                    if (param_3 != 0) {
                      FUN_01a98380(param_3,local_70,local_6c,&local_70,&local_6c);
                      FUN_01a98380(param_3,local_68,local_64,&local_68,&local_64);
                    }
                    FUN_0043f750(&local_100,local_70);
                    (**(code **)(*local_50 + 0x108))(local_50,L"left",local_100);
                    FUN_0043f750(&local_108,local_6c);
                    (**(code **)(*local_50 + 0x108))(local_50,&DAT_01990030,local_108);
                    FUN_0043f750(&local_110,local_68);
                    (**(code **)(*local_50 + 0x108))(local_50,L"right",local_110);
                    FUN_0043f750(&local_118,local_64);
                    (**(code **)(*local_50 + 0x108))(local_50,L"bottom",local_118);
                  }
                }
              }
            }
          }
          local_12c = local_12c + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_01995800(param_1,1,0);
      plVar7 = (longlong *)FUN_01995660(param_1,1);
    }
    if (param_5 != (longlong *)0x0) {
      thunk_FUN_041a9b5c(0,local_138);
    }
  }
  FUN_00410f20(uVar6);
  FUN_00410f20(uVar5);
  FUN_00414560(&local_118,7);
  FUN_0041b800(&local_e0);
  FUN_0041b800(&local_d8);
  FUN_0041b800(&local_d0);
  FUN_00414560(&local_c8,3);
  FUN_00414560(&local_a0,2);
  FUN_0041b800(&local_90);
  FUN_00414480(&local_88);
  FUN_0041b800(&local_80);
  FUN_00414480(&local_58);
  FUN_00417840(&local_50,&LAB_00b9fca0,4);
  FUN_00417840(&local_res20,&DAT_00b9fc60,2);
  return;
}


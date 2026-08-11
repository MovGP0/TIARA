/* Ghidra address: 01581c60 */
/* Ghidra symbol: FUN_01581c60 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01581c60(longlong param_1,undefined8 *param_2,ushort *param_3,ushort *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ushort *puVar6;
  undefined8 *puVar7;
  ushort *local_res20;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong *local_130;
  undefined8 uStack_128;
  undefined1 *local_120;
  undefined4 local_104;
  ushort *local_100;
  longlong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  ushort local_72;
  ushort local_70;
  undefined2 local_6e;
  ushort local_6c;
  undefined4 local_6a;
  undefined4 local_66;
  int local_62;
  uint local_5e;
  undefined2 local_5a;
  short local_58 [6];
  int local_4c;
  longlong local_48;
  longlong local_40;
  undefined8 local_30;
  
  local_120 = auStack_168;
  local_130 = (longlong *)0x0;
  uStack_128 = 0;
  local_98 = 0;
  puVar6 = &local_72;
  for (lVar5 = 8; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)puVar6 = *(undefined8 *)param_3;
    param_3 = param_3 + 4;
    puVar6 = puVar6 + 4;
  }
  *puVar6 = *param_3;
  FUN_004179d0(&local_72,&DAT_015764a8);
  if (*(int *)(*(longlong *)(param_1 + 0x30) + 0x10) == 0xffff) {
    uVar4 = FUN_0044d710(&PTR_FUN_01576898,1,PTR_PTR_02005890);
    FUN_004134c0(uVar4);
  }
  FUN_004b6dc0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x28));
  local_4c = *(int *)(param_1 + 0x28);
  if ((local_72 & 0xff) < 0x14) {
    local_72 = (local_72 & 0xff00) + 0x14;
  }
  if (local_70 < 0x14) {
    local_70 = 0x14;
  }
  local_a0 = local_48;
  local_a8 = local_48;
  if (local_48 != 0) {
    local_a8 = *(longlong *)(local_48 + -8);
  }
  local_5a = (undefined2)local_a8;
  local_b0 = local_40;
  local_b8 = local_40;
  if (local_40 != 0) {
    local_b8 = *(longlong *)(local_40 + -8);
  }
  local_58[0] = (short)local_b8;
  if (param_4 == (ushort *)0x0) {
    local_res20 = &local_72;
  }
  else {
    local_c0 = *(longlong *)(param_4 + 0x15);
    local_c8 = local_c0;
    if (local_c0 != 0) {
      local_c8 = *(longlong *)(local_c0 + -8);
    }
    param_4[0xc] = (ushort)local_c8;
    local_d0 = *(longlong *)(param_4 + 0x19);
    local_d8 = local_d0;
    if (local_d0 != 0) {
      local_d8 = *(longlong *)(local_d0 + -8);
    }
    param_4[0xd] = (ushort)local_d8;
    local_res20 = param_4;
  }
  local_e0 = *(longlong *)(local_res20 + 0x1d);
  local_e8 = local_e0;
  if (local_e0 != 0) {
    local_e8 = *(longlong *)(local_e0 + -8);
  }
  local_res20[0xe] = (ushort)local_e8;
  local_84 = DAT_01f654dc;
  FUN_0157cb00(*(undefined8 *)(param_1 + 0x10),DAT_01f654dc,4);
  FUN_0157caa0(*(undefined8 *)(param_1 + 0x10),local_70,2);
  FUN_0157caa0(*(undefined8 *)(param_1 + 0x10),local_6e,2);
  FUN_0157caa0(*(undefined8 *)(param_1 + 0x10),local_6c,2);
  FUN_0157cb00(*(undefined8 *)(param_1 + 0x10),local_6a,4);
  FUN_0157cb00(*(undefined8 *)(param_1 + 0x10),local_66,4);
  FUN_0157cb00(*(undefined8 *)(param_1 + 0x10),local_62,4);
  FUN_0157cb00(*(undefined8 *)(param_1 + 0x10),local_5e,4);
  FUN_0157caa0(*(undefined8 *)(param_1 + 0x10),local_5a,2);
  FUN_0157caa0(*(undefined8 *)(param_1 + 0x10),local_58[0],2);
  FUN_0157ca00(*(undefined8 *)(param_1 + 0x10),local_48,local_5a);
  if (local_58[0] != 0) {
    FUN_0157ca00(*(undefined8 *)(param_1 + 0x10),local_40,local_58[0]);
  }
  local_90 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x10));
  local_80 = FUN_004b6da0(param_2);
  iVar2 = (**(code **)*param_2)(param_2);
  local_5e = iVar2 - (int)local_80;
  FUN_00417c40(param_1 + 0x68,&local_72,&DAT_015764a8);
  FUN_015837f0(DAT_0210ee78,&local_130,(undefined1)local_6c);
  local_30 = (**(code **)(*local_130 + 0x18))
                       (local_130,*(undefined8 *)(param_1 + 0x10),param_1,&local_72);
  cVar1 = FUN_004113d0(local_30,&PTR_FUN_00626df0);
  if (cVar1 != '\0') {
    lVar5 = FUN_004113f0(local_30,&PTR_FUN_00626df0);
    *(longlong *)(lVar5 + 0x28) = param_1;
    *(code **)(lVar5 + 0x20) = FUN_0157fa40;
  }
  FUN_004b8ba0(local_30,param_2,local_5e);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    local_148 = FUN_004b6da0(local_30);
    (**(code **)(param_1 + 0x50))
              (*(undefined8 *)(param_1 + 0x58),param_1,*(undefined8 *)(param_1 + 0x60),
               param_1 + 0x68);
  }
  FUN_00410f20(local_30);
  FUN_00417740(param_1 + 0x68,&DAT_015764a8);
  puVar7 = (undefined8 *)(param_1 + 0x68);
  for (lVar5 = 8; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = 0;
  local_62 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x10));
  local_62 = local_62 - (int)local_90;
  FUN_004b6dc0(param_2,local_80);
  FUN_00419260(&local_98,&DAT_00406578,1,0x4000);
  while( true ) {
    lVar5 = FUN_004b6da0(param_2);
    if ((longlong)(ulonglong)local_5e <= lVar5) break;
    local_f0 = local_98;
    if (local_98 != 0) {
      local_f0 = *(ulonglong *)(local_98 - 8);
    }
    uVar3 = FUN_004b72d0(param_2,&local_98,local_f0 & 0xffffffff);
    local_66 = FUN_00634c80(local_66,local_98,uVar3);
  }
  *(uint *)(local_res20 + 10) = local_5e;
  *(int *)(local_res20 + 8) = local_62;
  *(undefined4 *)(local_res20 + 6) = local_66;
  uVar4 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  FUN_004b6dc0(*(undefined8 *)(param_1 + 0x10),local_4c + 4);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_70,2);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_6e,2);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_6c,2);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_6a,4);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_66,4);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_62,4);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_5e,4);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_5a,2);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),local_58,2);
  local_f8 = *(longlong *)(param_1 + 0x30);
  local_100 = local_res20;
  local_104 = FUN_00597ec0(local_f8 + 8,local_res20);
  FUN_00417740(&local_130,&DAT_01577948);
  FUN_00419430(&local_98,&DAT_00406578);
  FUN_00417740(&local_72,&DAT_015764a8);
  return;
}


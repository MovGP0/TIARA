/* Ghidra address: 00cb7a10 */
/* Ghidra symbol: FUN_00cb7a10 */


void FUN_00cb7a10(longlong param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  longlong *local_b0;
  uint *local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  char local_29;
  longlong local_28;
  uint local_1c [3];
  
  local_40 = auStack_d8;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_28 = 0;
  local_29 = *(char *)(param_1 + 0x102);
  (**(code **)(**(longlong **)(param_1 + 0x120) + 0xc0))
            (*(longlong **)(param_1 + 0x120),*(undefined8 *)(param_1 + 0xf0));
  (**(code **)(**(longlong **)(param_1 + 0x120) + 200))
            (*(longlong **)(param_1 + 0x120),*(undefined2 *)(param_1 + 0x100));
  plVar3 = *(longlong **)(param_1 + 0x120);
  *(char *)((longlong)plVar3 + 0x1ab) = local_29;
  (**(code **)(*plVar3 + 0x138))(plVar3);
  FUN_00419260(&local_28,&DAT_0086e978,1,0xff);
  FUN_00cb64e0(param_1,*(undefined8 *)(param_1 + 0x120));
  if (local_29 == '\0') {
    local_b8 = 3;
    local_b0 = &local_28;
    local_a8 = local_1c;
    FUN_00cb57c0(param_1,*(undefined8 *)(param_1 + 0x120),L"0.0.0.0",0);
  }
  else {
    local_b8 = 3;
    local_b0 = &local_28;
    local_a8 = local_1c;
    FUN_00cb57c0(param_1,*(undefined8 *)(param_1 + 0x120),&LAB_00cb80ec,0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x120) + 0x130))
            (*(longlong **)(param_1 + 0x120),local_28,local_1c[0],0);
  (**(code **)(**(longlong **)(param_1 + 0x120) + 0x188))
            (*(longlong **)(param_1 + 0x120),&local_28,2,0);
  bVar1 = *(byte *)(local_28 + 1);
  if (bVar1 < 5) {
    if (bVar1 == 4) {
      FUN_0041ddd0(&local_68,PTR_PTR_02004320);
      uVar4 = FUN_0086dfd0(&PTR_FUN_00ca7f20,1,local_68);
      FUN_004134c0(uVar4);
      goto LAB_00cb7eb1;
    }
    if (bVar1 == 0) goto LAB_00cb7eb1;
    if (bVar1 == 1) {
      FUN_0041ddd0(&local_50,PTR_PTR_020029a0);
      uVar4 = FUN_0086dfd0(&PTR_FUN_00ca7b08,1,local_50);
      FUN_004134c0(uVar4);
      goto LAB_00cb7eb1;
    }
    if (bVar1 == 2) {
      FUN_0041ddd0(&local_58,PTR_PTR_02001690);
      uVar4 = FUN_0086dfd0(&PTR_FUN_00ca7c60,1,local_58);
      FUN_004134c0(uVar4);
      goto LAB_00cb7eb1;
    }
    if (bVar1 == 3) {
      FUN_0041ddd0(&local_60,PTR_PTR_02001d18);
      uVar4 = FUN_0086dfd0(&PTR_FUN_00ca7dc0,1,local_60);
      FUN_004134c0(uVar4);
      goto LAB_00cb7eb1;
    }
  }
  else {
    if (bVar1 == 5) {
      FUN_0041ddd0(&local_70,PTR_PTR_02002ac0);
      uVar4 = FUN_0086dfd0(&PTR_FUN_00ca8088,1,local_70);
      FUN_004134c0(uVar4);
      goto LAB_00cb7eb1;
    }
    if (bVar1 == 6) {
      FUN_0041ddd0(&local_78,PTR_PTR_02002f40);
      uVar4 = FUN_0086dfd0(&PTR_FUN_00ca81f0,1,local_78);
      FUN_004134c0(uVar4);
      goto LAB_00cb7eb1;
    }
    if (bVar1 == 7) {
      FUN_0041ddd0(&local_80,PTR_PTR_020022a0);
      uVar4 = FUN_0086dfd0(&PTR_FUN_00ca8350,1,local_80);
      FUN_004134c0(uVar4);
      goto LAB_00cb7eb1;
    }
    if (bVar1 == 8) {
      FUN_0041ddd0(&local_88,PTR_DAT_020052c8);
      uVar4 = FUN_0086dfd0(&PTR_FUN_00ca84a8,1,local_88);
      FUN_004134c0(uVar4);
      goto LAB_00cb7eb1;
    }
  }
  FUN_0041ddd0(&local_90,PTR_PTR_02004140);
  uVar4 = FUN_0086dfd0(&PTR_FUN_00ca75d8,1,local_90);
  FUN_004134c0(uVar4);
LAB_00cb7eb1:
  (**(code **)(**(longlong **)(param_1 + 0x120) + 0x188))
            (*(longlong **)(param_1 + 0x120),&local_28,2,0);
  cVar2 = *(char *)(local_28 + 1);
  if (cVar2 == '\x01') {
    local_1c[0] = 6;
    local_29 = '\0';
  }
  else if (cVar2 == '\x03') {
    local_1c[0] = *(byte *)(local_28 + 4) + 2;
  }
  else if (cVar2 == '\x04') {
    local_1c[0] = 0x12;
    local_29 = '\x01';
  }
  uVar6 = (ulonglong)local_1c[0];
  (**(code **)(**(longlong **)(param_1 + 0x120) + 0x188))
            (*(longlong **)(param_1 + 0x120),&local_28,uVar6,0);
  lVar5 = FUN_004113f0(*(undefined8 *)(param_1 + 0x120),&PTR_FUN_00cb3a38);
  uVar4 = CONCAT62((int6)(uVar6 >> 0x10),(ushort)*(byte *)(local_28 + 4));
  FUN_00c8f680(param_2,*(undefined8 *)(*(longlong *)(lVar5 + 0x158) + 0x38),
               CONCAT22((short)((ulonglong)uVar4 >> 8),
                        (short)((int)uVar4 << 8) + (ushort)*(byte *)(local_28 + 5)),local_29);
  (**(code **)(*param_2 + 0x58))(param_2);
  FUN_00414560(&local_98,0xb);
  FUN_00419430(&local_28,&DAT_0086e978);
  return;
}


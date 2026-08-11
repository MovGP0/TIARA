/* Ghidra address: 00cb6950 */
/* Ghidra symbol: FUN_00cb6950 */


void FUN_00cb6950(longlong param_1,longlong *param_2,undefined8 param_3,undefined2 param_4)

{
  byte bVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong *local_f0;
  int *local_e8;
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
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 local_4b;
  undefined1 local_4a [17];
  char local_39;
  longlong local_38;
  int local_2c;
  longlong *local_28;
  longlong *local_20;
  
  local_60 = auStack_118;
  local_d8 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_38 = 0;
  local_20 = (longlong *)FUN_00882aa0(&PTR_FUN_00cb2a30,1,0);
  FUN_00419260(&local_38,&DAT_0086e978,1,0xff);
  (**(code **)(*param_2 + 0x1f8))(param_2,0);
  (**(code **)(*local_20 + 200))(local_20,param_2);
  (**(code **)(*local_20 + 0x148))(local_20,*(undefined8 *)(param_1 + 0xf0));
  (**(code **)(*local_20 + 0x158))(local_20,*(undefined1 *)(param_1 + 0x102));
  (**(code **)(*local_20 + 0x150))(local_20,*(undefined2 *)(param_1 + 0x100));
  (**(code **)(*local_20 + 0x160))(local_20);
  (**(code **)(*param_2 + 0x1f8))(param_2,param_1);
  FUN_00cb64e0(param_1,param_2);
  local_f8 = CONCAT71(local_f8._1_7_,2);
  local_f0 = &local_38;
  local_e8 = &local_2c;
  FUN_00cb57c0(param_1,param_2,param_3,param_4);
  (**(code **)(*param_2 + 0x130))(param_2,local_38,local_2c,0);
  (**(code **)(*param_2 + 0x188))(param_2,&local_38,4,0);
  bVar1 = *(byte *)(local_38 + 1);
  if (bVar1 < 5) {
    if (bVar1 == 4) {
      FUN_0041ddd0(&local_88,PTR_PTR_02004320);
      uVar4 = FUN_0086dfd0(&PTR_FUN_00ca7f20,1,local_88);
      FUN_004134c0(uVar4);
      goto LAB_00cb6e51;
    }
    if (bVar1 == 0) goto LAB_00cb6e51;
    if (bVar1 == 1) {
      FUN_0041ddd0(&local_70,PTR_PTR_020029a0);
      uVar4 = FUN_0086dfd0(&PTR_FUN_00ca7b08,1,local_70);
      FUN_004134c0(uVar4);
      goto LAB_00cb6e51;
    }
    if (bVar1 == 2) {
      FUN_0041ddd0(&local_78,PTR_PTR_02001690);
      uVar4 = FUN_0086dfd0(&PTR_FUN_00ca7c60,1,local_78);
      FUN_004134c0(uVar4);
      goto LAB_00cb6e51;
    }
    if (bVar1 == 3) {
      FUN_0041ddd0(&local_80,PTR_PTR_02001d18);
      uVar4 = FUN_0086dfd0(&PTR_FUN_00ca7dc0,1,local_80);
      FUN_004134c0(uVar4);
      goto LAB_00cb6e51;
    }
  }
  else {
    if (bVar1 == 5) {
      FUN_0041ddd0(&local_90,PTR_PTR_02002ac0);
      uVar4 = FUN_0086dfd0(&PTR_FUN_00ca8088,1,local_90);
      FUN_004134c0(uVar4);
      goto LAB_00cb6e51;
    }
    if (bVar1 == 6) {
      FUN_0041ddd0(&local_98,PTR_PTR_02002f40);
      uVar4 = FUN_0086dfd0(&PTR_FUN_00ca81f0,1,local_98);
      FUN_004134c0(uVar4);
      goto LAB_00cb6e51;
    }
    if (bVar1 == 7) {
      FUN_0041ddd0(&local_a0,PTR_PTR_020022a0);
      uVar4 = FUN_0086dfd0(&PTR_FUN_00ca8350,1,local_a0);
      FUN_004134c0(uVar4);
      goto LAB_00cb6e51;
    }
    if (bVar1 == 8) {
      FUN_0041ddd0(&local_a8,PTR_DAT_020052c8);
      uVar4 = FUN_0086dfd0(&PTR_FUN_00ca84a8,1,local_a8);
      FUN_004134c0(uVar4);
      goto LAB_00cb6e51;
    }
  }
  FUN_0041ddd0(&local_b0,PTR_PTR_02004140);
  uVar4 = FUN_0086dfd0(&PTR_FUN_00ca75d8,1,local_b0);
  FUN_004134c0(uVar4);
LAB_00cb6e51:
  local_39 = *(char *)(local_38 + 3);
  if (local_39 == '\x01') {
    local_2c = 6;
  }
  else if (local_39 == '\x03') {
    local_2c = *(byte *)(local_38 + 4) + 2;
  }
  else if (local_39 == '\x04') {
    local_2c = 0x12;
  }
  (**(code **)(*param_2 + 0x188))(param_2,&local_38,local_2c,0);
  if (local_39 == '\x01') {
    uVar4 = 0;
    FUN_008783b0(&local_b8,local_38,0);
    uVar4 = CONCAT62((int6)((ulonglong)uVar4 >> 0x10),(ushort)*(byte *)(local_38 + 4));
    FUN_00c8f680(param_2[0x2b],local_b8,
                 CONCAT22((short)((ulonglong)uVar4 >> 8),
                          (short)((int)uVar4 << 8) + (ushort)*(byte *)(local_38 + 5)),0);
  }
  else if (local_39 == '\x03') {
    local_4b = *(undefined1 *)((longlong)param_2 + 0x1ab);
    local_f8 = 0;
    FUN_008785a0(&local_c8,local_38,0,local_2c + -2);
    uVar2 = local_4b;
    uVar4 = local_c8;
    FUN_0089c5a0(*(undefined8 *)PTR_DAT_020050b0,&local_c0,local_c8,local_4b);
    uVar4 = CONCAT62((int6)((ulonglong)uVar4 >> 0x10),(ushort)*(byte *)(local_38 + 4));
    FUN_00c8f680(param_2[0x2b],local_c0,
                 CONCAT22((short)((ulonglong)uVar4 >> 8),
                          (short)((int)uVar4 << 8) + (ushort)*(byte *)(local_38 + 5)),uVar2);
  }
  else if (local_39 == '\x04') {
    uVar4 = 0;
    FUN_00878500(local_38,local_4a,0);
    FUN_008758e0(&local_d0,local_4a);
    uVar4 = CONCAT62((int6)((ulonglong)uVar4 >> 0x10),(ushort)*(byte *)(local_38 + 0x10));
    FUN_00c8f680(param_2[0x2b],local_d0,
                 CONCAT22((short)((ulonglong)uVar4 >> 8),
                          (short)((int)uVar4 << 8) + (ushort)*(byte *)(local_38 + 0x11)),1);
  }
  (**(code **)(*local_20 + 200))(local_20,0);
  plVar3 = local_20;
  local_28 = local_20;
  local_20 = (longlong *)0x0;
  FUN_00410f20(plVar3);
  FUN_00414560(&local_d8,0xf);
  FUN_00419430(&local_38,&DAT_0086e978);
  return;
}


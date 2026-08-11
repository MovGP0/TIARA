/* Ghidra address: 00cb7230 */
/* Ghidra symbol: FUN_00cb7230 */


char FUN_00cb7230(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
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
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined1 local_40 [16];
  longlong local_30;
  
  local_b0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_30 = 0;
  FUN_00419260(&local_30,&DAT_0086e978,1,0xff);
  cVar4 = FUN_00c8fa10(param_2[0x2b],param_3);
  if (cVar4 == '\0') goto code_r0x00cb770d;
  (**(code **)(*param_2 + 0x188))(param_2,&local_30,4,0);
  bVar1 = *(byte *)(local_30 + 1);
  if (bVar1 < 5) {
    if (bVar1 == 4) {
      FUN_0041ddd0(&local_68,PTR_PTR_02004320);
      uVar5 = FUN_0086dfd0(&PTR_FUN_00ca7f20,1,local_68);
      FUN_004134c0(uVar5);
    }
    else if (bVar1 != 0) {
      if (bVar1 == 1) {
        FUN_0041ddd0(local_50,PTR_PTR_020029a0);
        uVar5 = FUN_0086dfd0(&PTR_FUN_00ca7b08,1,local_50[0]);
        FUN_004134c0(uVar5);
      }
      else if (bVar1 == 2) {
        FUN_0041ddd0(&local_58,PTR_PTR_02001690);
        uVar5 = FUN_0086dfd0(&PTR_FUN_00ca7c60,1,local_58);
        FUN_004134c0(uVar5);
      }
      else {
        if (bVar1 != 3) goto LAB_00cb754e;
        FUN_0041ddd0(&local_60,PTR_PTR_02001d18);
        uVar5 = FUN_0086dfd0(&PTR_FUN_00ca7dc0,1,local_60);
        FUN_004134c0(uVar5);
      }
    }
  }
  else if (bVar1 == 5) {
    FUN_0041ddd0(&local_70,PTR_PTR_02002ac0);
    uVar5 = FUN_0086dfd0(&PTR_FUN_00ca8088,1,local_70);
    FUN_004134c0(uVar5);
  }
  else if (bVar1 == 6) {
    FUN_0041ddd0(&local_78,PTR_PTR_02002f40);
    uVar5 = FUN_0086dfd0(&PTR_FUN_00ca81f0,1,local_78);
    FUN_004134c0(uVar5);
  }
  else if (bVar1 == 7) {
    FUN_0041ddd0(&local_80,PTR_PTR_020022a0);
    uVar5 = FUN_0086dfd0(&PTR_FUN_00ca8350,1,local_80);
    FUN_004134c0(uVar5);
  }
  else if (bVar1 == 8) {
    FUN_0041ddd0(&local_88,PTR_DAT_020052c8);
    uVar5 = FUN_0086dfd0(&PTR_FUN_00ca84a8,1,local_88);
    FUN_004134c0(uVar5);
  }
  else {
LAB_00cb754e:
    FUN_0041ddd0(&local_90,PTR_PTR_02004140);
    uVar5 = FUN_0086dfd0(&PTR_FUN_00ca75d8,1,local_90);
    FUN_004134c0(uVar5);
  }
  cVar2 = *(char *)(local_30 + 3);
  if (cVar2 == '\x01') {
    iVar6 = 6;
  }
  else if (cVar2 == '\x03') {
    iVar6 = *(byte *)(local_30 + 4) + 2;
  }
  else {
    iVar6 = 0x12;
  }
  (**(code **)(*param_2 + 0x188))(param_2,&local_30,iVar6,0);
  if (cVar2 == '\x01') {
    uVar5 = 0;
    FUN_008783b0(&local_98,local_30,0);
    uVar5 = CONCAT62((int6)((ulonglong)uVar5 >> 0x10),(ushort)*(byte *)(local_30 + 4));
    FUN_00c8f680(param_2[0x2b],local_98,
                 CONCAT22((short)((ulonglong)uVar5 >> 8),
                          (short)((int)uVar5 << 8) + (ushort)*(byte *)(local_30 + 5)),0);
  }
  else if (cVar2 == '\x03') {
    uVar3 = *(undefined1 *)((longlong)param_2 + 0x1ab);
    FUN_008785a0(&local_a8,local_30,0,iVar6 + -2,0);
    uVar5 = local_a8;
    FUN_0089c5a0(*(undefined8 *)PTR_DAT_020050b0,&local_a0,local_a8,uVar3);
    uVar5 = CONCAT62((int6)((ulonglong)uVar5 >> 0x10),(ushort)*(byte *)(local_30 + 4));
    FUN_00c8f680(param_2[0x2b],local_a0,
                 CONCAT22((short)((ulonglong)uVar5 >> 8),
                          (short)((int)uVar5 << 8) + (ushort)*(byte *)(local_30 + 5)),uVar3);
  }
  else {
    uVar5 = 0;
    FUN_00878500(local_30,local_40,0);
    FUN_008758e0(&local_b0,local_40);
    uVar5 = CONCAT62((int6)((ulonglong)uVar5 >> 0x10),(ushort)*(byte *)(local_30 + 0x10));
    FUN_00c8f680(param_2[0x2b],local_b0,
                 CONCAT22((short)((ulonglong)uVar5 >> 8),
                          (short)((int)uVar5 << 8) + (ushort)*(byte *)(local_30 + 0x11)),1);
  }
code_r0x00cb770d:
  FUN_00414560(&local_b0,0xd);
  FUN_00419430(&local_30,&DAT_0086e978);
  return cVar4;
}


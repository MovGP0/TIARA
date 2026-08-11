/* Ghidra address: 00cb5a70 */
/* Ghidra symbol: FUN_00cb5a70 */


void FUN_00cb5a70(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined2 param_4)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  longlong *local_b0;
  int *local_a8;
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
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong local_28;
  int local_1c [3];
  
  local_30 = auStack_d8;
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
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  FUN_00cb64e0(param_1,param_2);
  FUN_00419260(&local_28,&DAT_0086e978,1,0xff);
  local_b8 = 1;
  local_b0 = &local_28;
  local_a8 = local_1c;
  FUN_00cb57c0(param_1,param_2,param_3,param_4);
  FUN_00878280(&local_38,local_28,local_1c[0],0);
  FUN_004194b0(&local_28,local_38,&DAT_0086e978);
  FUN_00cb0c10(param_2,local_28,0xffffffff,0);
  (**(code **)(*param_2 + 0x188))(param_2,&local_28,5,0);
  bVar1 = *(byte *)(local_28 + 1);
  if (bVar1 < 5) {
    if (bVar1 == 4) {
      FUN_0041ddd0(&local_60,PTR_PTR_02004320);
      uVar3 = FUN_0086dfd0(&PTR_FUN_00ca7f20,1,local_60);
      FUN_004134c0(uVar3);
      goto LAB_00cb5e82;
    }
    if (bVar1 == 0) goto LAB_00cb5e82;
    if (bVar1 == 1) {
      FUN_0041ddd0(&local_48,PTR_PTR_020029a0);
      uVar3 = FUN_0086dfd0(&PTR_FUN_00ca7b08,1,local_48);
      FUN_004134c0(uVar3);
      goto LAB_00cb5e82;
    }
    if (bVar1 == 2) {
      FUN_0041ddd0(&local_50,PTR_PTR_02001690);
      uVar3 = FUN_0086dfd0(&PTR_FUN_00ca7c60,1,local_50);
      FUN_004134c0(uVar3);
      goto LAB_00cb5e82;
    }
    if (bVar1 == 3) {
      FUN_0041ddd0(&local_58,PTR_PTR_02001d18);
      uVar3 = FUN_0086dfd0(&PTR_FUN_00ca7dc0,1,local_58);
      FUN_004134c0(uVar3);
      goto LAB_00cb5e82;
    }
  }
  else {
    if (bVar1 == 5) {
      FUN_0041ddd0(&local_68,PTR_PTR_02002ac0);
      uVar3 = FUN_0086dfd0(&PTR_FUN_00ca8088,1,local_68);
      FUN_004134c0(uVar3);
      goto LAB_00cb5e82;
    }
    if (bVar1 == 6) {
      FUN_0041ddd0(&local_70,PTR_PTR_02002f40);
      uVar3 = FUN_0086dfd0(&PTR_FUN_00ca81f0,1,local_70);
      FUN_004134c0(uVar3);
      goto LAB_00cb5e82;
    }
    if (bVar1 == 7) {
      FUN_0041ddd0(&local_78,PTR_PTR_020022a0);
      uVar3 = FUN_0086dfd0(&PTR_FUN_00ca8350,1,local_78);
      FUN_004134c0(uVar3);
      goto LAB_00cb5e82;
    }
    if (bVar1 == 8) {
      FUN_0041ddd0(&local_80,PTR_DAT_020052c8);
      uVar3 = FUN_0086dfd0(&PTR_FUN_00ca84a8,1,local_80);
      FUN_004134c0(uVar3);
      goto LAB_00cb5e82;
    }
  }
  FUN_0041ddd0(&local_88,PTR_PTR_02004140);
  uVar3 = FUN_0086dfd0(&PTR_FUN_00ca75d8,1,local_88);
  FUN_004134c0(uVar3);
LAB_00cb5e82:
  cVar2 = *(char *)(local_28 + 3);
  if (cVar2 == '\x01') {
    local_1c[0] = 6;
  }
  else if (cVar2 == '\x03') {
    local_1c[0] = *(byte *)(local_28 + 4) + 2;
  }
  else if (cVar2 == '\x04') {
    local_1c[0] = 0x12;
  }
  (**(code **)(*param_2 + 0x188))(param_2,&local_28,local_1c[0] + -1,0);
  FUN_00414560(&local_90,0xb);
  FUN_00419430(&local_38,&DAT_0086e978);
  FUN_00419430(&local_28,&DAT_0086e978);
  return;
}


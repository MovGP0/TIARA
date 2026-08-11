/* Ghidra address: 015825c0 */
/* Ghidra symbol: FUN_015825c0 */


void FUN_015825c0(longlong *param_1,undefined8 param_2,longlong param_3,byte param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined1 *local_b0;
  longlong local_a0;
  longlong local_98;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  ushort local_62 [2];
  undefined2 local_5e;
  ushort local_5c;
  undefined4 local_5a;
  undefined4 local_4e;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_42;
  int local_40;
  longlong local_38 [3];
  undefined8 *local_20;
  
  local_b0 = auStack_108;
  local_d0 = 0;
  local_c8 = 0;
  local_70 = 0;
  FUN_00417580(local_62,&DAT_015764a8);
  (**(code **)(*param_1 + 0x10))(param_1,param_2);
  if (*(byte *)(param_1 + 1) < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (*(byte *)(param_1 + 1) & 0x1f) &
            0xcU) != 0;
  }
  else {
    bVar4 = false;
  }
  if (!bVar4) {
    uVar3 = FUN_0044d710(&PTR_FUN_01576898,1,PTR_PTR_02004a30);
    FUN_004134c0(uVar3);
  }
  cVar1 = FUN_01584880(DAT_0210ee78,param_4);
  if (cVar1 == '\0') {
    FUN_0157d140(&local_c8,param_4);
    local_c0 = local_c8;
    local_b8 = 0x11;
    local_e8 = 0;
    uVar3 = FUN_0044d8d0(&PTR_FUN_01576898,1,PTR_PTR_02004c00,&local_c0);
    FUN_004134c0(uVar3);
  }
  FUN_0040d200(local_62,0x42,0);
  local_5e = 0;
  FUN_00414ad0(param_1 + 0xc,param_2);
  local_20 = (undefined8 *)FUN_004b9860(&PTR_FUN_0047c498,1,param_2,0x20);
  local_62[0] = 0;
  local_5e = 0;
  local_5c = (ushort)param_4;
  FUN_005d1640(param_2,1);
  local_e8 = CONCAT31(local_e8._1_3_,1);
  FUN_005d0b90(param_2,local_80,local_88,&local_78);
  local_5a = FUN_0157c790(local_78);
  local_4e = (**(code **)*local_20)(local_20);
  local_42 = 0;
  FUN_005d1640(param_2,1);
  uVar2 = FUN_00440f60(param_2,1);
  local_8c = FUN_005d1570(uVar2);
  local_8a = local_8c;
  local_40 = FUN_005d1460(local_8c);
  if (local_62[0] >> 8 == 3) {
    local_40 = local_40 << 0x10;
  }
  if (param_3 == 0) {
    FUN_00441920(&local_70,param_2);
  }
  else {
    FUN_00414b50(&local_70,param_3);
  }
  FUN_0157d600(local_62,(char)param_1[9]);
  uVar3 = (**(code **)(*param_1 + 0x28))(param_1,local_62);
  FUN_00459ca0(uVar3,&local_d0,local_70);
  FUN_004194b0(local_38,local_d0,&DAT_00406578);
  local_98 = local_38[0];
  local_a0 = local_38[0];
  if (local_38[0] != 0) {
    local_a0 = *(longlong *)(local_38[0] + -8);
  }
  local_4a = (undefined2)local_a0;
  local_48 = 0;
  FUN_01581c60(param_1,local_20,local_62,0);
  FUN_00410f20(local_20);
  FUN_00414480(param_1 + 0xc);
  FUN_00419430(&local_d0,&DAT_00406578);
  FUN_00414480(&local_c8);
  FUN_00414480(&local_70);
  FUN_00417740(local_62,&DAT_015764a8);
  return;
}


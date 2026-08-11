/* Ghidra address: 01582bc0 */
/* Ghidra symbol: FUN_01582bc0 */


void FUN_01582bc0(longlong *param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                 undefined2 param_5)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  ushort local_5a [2];
  undefined2 local_56;
  ushort local_54;
  undefined4 local_52;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3a;
  int local_38;
  longlong local_30 [4];
  
  local_88 = 0;
  local_80 = 0;
  FUN_00417580(local_5a,&DAT_015764a8);
  (**(code **)(*param_1 + 0x10))(param_1,param_3);
  if (*(byte *)(param_1 + 1) < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (*(byte *)(param_1 + 1) & 0x1f) &
            0xcU) != 0;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    uVar2 = FUN_0044d710(&PTR_FUN_01576898,1,PTR_PTR_02004a30);
    FUN_004134c0(uVar2);
  }
  cVar1 = FUN_01584880(DAT_0210ee78,param_4);
  if (cVar1 == '\0') {
    FUN_0157d140(&local_80,param_4);
    local_78 = local_80;
    local_70 = 0x11;
    uVar2 = FUN_0044d8d0(&PTR_FUN_01576898,1,PTR_PTR_02004c00,&local_78,0);
    FUN_004134c0(uVar2);
  }
  FUN_0040d200(local_5a,0x42,0);
  local_5a[0] = 0;
  local_56 = 0;
  local_54 = (ushort)param_4;
  FUN_00448ed0();
  local_52 = FUN_0157c790();
  local_3a = 0;
  local_38 = FUN_005d1460(param_5);
  if (local_5a[0] >> 8 == 3) {
    local_38 = local_38 << 0x10;
  }
  FUN_0157d600(local_5a,(char)param_1[9]);
  uVar2 = (**(code **)(*param_1 + 0x28))(param_1,local_5a);
  FUN_00459ca0(uVar2,&local_88,param_3);
  FUN_004194b0(local_30,local_88,&DAT_00406578);
  local_42 = 0;
  if (local_30[0] != 0) {
    local_42 = (undefined2)*(undefined8 *)(local_30[0] + -8);
  }
  local_40 = 0;
  FUN_01581c60(param_1,param_2,local_5a,0);
  FUN_00419430(&local_88,&DAT_00406578);
  FUN_00414480(&local_80);
  FUN_00417740(local_5a,&DAT_015764a8);
  return;
}


/* Ghidra address: 015829e0 */
/* Ghidra symbol: FUN_015829e0 */


void FUN_015829e0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_res20;
  undefined1 auStack_88 [32];
  uint local_68;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_88;
  local_48 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00419500(param_2);
  (**(code **)(*param_1 + 0x10))(param_1,local_res18);
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
  local_49 = local_res20;
  cVar1 = FUN_01584880(DAT_0210ee78,local_res20);
  if (cVar1 == '\0') {
    FUN_0157d140(&local_48,local_49);
    local_40 = local_48;
    local_38 = 0x11;
    local_68 = 0;
    uVar2 = FUN_0044d8d0(&PTR_FUN_01576898,1,PTR_PTR_02004c00,&local_40);
    FUN_004134c0(uVar2);
  }
  local_20 = FUN_004ba230(&PTR_FUN_0047d028,1,local_res10);
  local_68 = local_68 & 0xffff0000;
  FUN_01582bc0(param_1,local_20,local_res18,local_49);
  FUN_00410f20(local_20);
  FUN_00414480(&local_48);
  FUN_00419430(&local_res10,&DAT_00406578);
  return;
}


/* Ghidra address: 00894de0 */
/* Ghidra symbol: FUN_00894de0 */


undefined8 * FUN_00894de0(longlong *param_1,undefined8 *param_2,undefined8 param_3,byte param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined1 *local_60;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  longlong local_20 [2];
  
  local_60 = auStack_a8;
  if (param_4 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 & 0x1f) & 3U) != 0;
  }
  else {
    bVar4 = false;
  }
  puVar1 = auStack_a8;
  if (!bVar4) {
    FUN_0089bf30(param_1);
    puVar1 = local_60;
  }
  local_60 = puVar1;
  FUN_0040d200(&local_50,0x30,0);
  local_4c = *(undefined4 *)(PTR_DAT_02003dc0 + (ulonglong)param_4 * 4);
  local_48 = 1;
  local_50 = 4;
  local_20[0] = 0;
  uVar3 = FUN_00416740(param_3);
  local_54 = (**(code **)PTR_DAT_02004ad8)(uVar3,0,&local_50,local_20);
  if (local_54 != 0) {
    uVar2 = FUN_0088f280(local_54);
    (**(code **)(*param_1 + 0x98))(param_1,uVar2);
  }
  FUN_004169f0(param_2,0x401);
  uVar3 = FUN_00416740(*param_2);
  local_88 = 0;
  local_80 = 0;
  local_78 = 4;
  local_54 = (**(code **)PTR_DAT_02003278)
                       (*(undefined8 *)(local_20[0] + 0x20),*(undefined4 *)(local_20[0] + 0x10),
                        uVar3,0x401);
  if (local_54 != 0) {
    uVar2 = FUN_0088f280(local_54);
    (**(code **)(*param_1 + 0x98))(param_1,uVar2);
  }
  uVar3 = FUN_00416740(*param_2);
  FUN_004167d0(param_2,uVar3);
  (**(code **)PTR_DAT_02003340)(local_20[0]);
  return param_2;
}


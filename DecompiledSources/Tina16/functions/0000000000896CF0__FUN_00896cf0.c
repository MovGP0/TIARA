/* Ghidra address: 00896cf0 */
/* Ghidra symbol: FUN_00896cf0 */


undefined8 FUN_00896cf0(longlong *param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  bool bVar5;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  undefined8 local_60;
  int local_54;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined4 local_48;
  longlong local_20 [2];
  
  local_70 = auStack_98;
  local_60 = 0;
  if (param_4 < 8) {
    bVar5 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 & 0x1f) & 3U) != 0;
  }
  else {
    bVar5 = false;
  }
  puVar1 = auStack_98;
  if (!bVar5) {
    FUN_0089bf30(param_1);
    puVar1 = local_70;
  }
  local_70 = puVar1;
  FUN_0040d200(local_50,0x30,0);
  local_4c = *(undefined4 *)(PTR_DAT_02003dc0 + (ulonglong)param_4 * 4);
  local_48 = 1;
  local_20[0] = 0;
  cVar2 = FUN_008927e0();
  if (cVar2 == '\0') {
    FUN_00414b50(&local_60,param_3);
  }
  else {
    FUN_00892820(&local_60,param_3);
  }
  uVar4 = FUN_00416740(local_60);
  local_54 = (**(code **)PTR_DAT_02004ad8)(uVar4,0,local_50,local_20);
  if (local_54 != 0) {
    uVar3 = FUN_0088f280(local_54);
    (**(code **)(*param_1 + 0x98))(param_1,uVar3);
  }
  if (param_4 == 0) {
    FUN_00891ce0(param_1,param_2,*(longlong *)(local_20[0] + 0x20) + 4,0);
  }
  else {
    FUN_00891ce0(param_1,param_2,*(longlong *)(local_20[0] + 0x20) + 8,1);
  }
  (**(code **)PTR_DAT_02003340)(local_20[0]);
  FUN_00414480(&local_60);
  return param_2;
}


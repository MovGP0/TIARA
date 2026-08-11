/* Ghidra address: 005bac30 */
/* Ghidra symbol: FUN_005bac30 */


undefined8 FUN_005bac30(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  int local_88 [2];
  undefined1 local_80;
  longlong *local_78;
  undefined1 local_70;
  longlong *local_68;
  undefined1 local_60;
  longlong *local_58;
  undefined1 local_50;
  int local_48;
  undefined1 local_40;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  FUN_00414b50(local_30,L"%1:.2d:%2:.2d:%3:.2d");
  lVar1 = *param_1;
  lVar2 = lVar1 % 864000000000;
  if (lVar1 < 0) {
    lVar2 = -lVar2;
  }
  iVar3 = (int)(lVar1 / 864000000000);
  if (iVar3 != 0) {
    FUN_00416ba0(local_30,L"%0:d.",local_30[0]);
  }
  iVar4 = (int)(lVar2 % 10000000);
  if (iVar4 != 0) {
    FUN_00416ad0(local_30,L".%4:.7d");
  }
  local_80 = 0;
  local_90 = (lVar2 / 36000000000) % 0x18;
  local_78 = &local_90;
  local_70 = 0x10;
  local_98 = (lVar2 / 600000000) % 0x3c;
  local_68 = &local_98;
  local_60 = 0x10;
  local_a0 = (lVar2 / 10000000) % 0x3c;
  local_58 = &local_a0;
  local_50 = 0x10;
  local_40 = 0;
  local_88[0] = iVar3;
  local_48 = iVar4;
  FUN_00442f70(param_2,local_30[0],local_88,4);
  FUN_00414480(local_30);
  return param_2;
}


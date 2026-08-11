/* Ghidra address: 014dbc10 */
/* Ghidra symbol: FUN_014dbc10 */


void FUN_014dbc10(longlong *param_1,undefined4 param_2,byte *param_3,longlong param_4,
                 longlong param_5,undefined8 param_6,longlong param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong local_348;
  undefined1 local_340 [256];
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined1 local_228 [256];
  byte local_128 [264];
  
  local_238 = 0;
  local_240 = 0;
  local_230 = 0;
  lVar4 = (ulonglong)*param_3 + 1;
  pbVar5 = local_128;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pbVar5 = *param_3;
    param_3 = param_3 + 1;
    pbVar5 = pbVar5 + 1;
  }
  local_348 = param_4;
  if (*(int *)(param_4 + 0x18) == -1) {
    local_348 = FUN_016bc3a0(param_7,local_128);
  }
  if ((local_348 == 0) && (param_5 != 0)) {
    lVar4 = FUN_016c7b00(param_7,param_5);
    if (lVar4 == 0) {
      FUN_016a4020(*(undefined8 *)(param_7 + 0x10),0xd,param_5,0xffffffff);
    }
    for (iVar2 = 0; iVar2 < *(int *)(*(longlong *)(lVar4 + 0x10) + 0x10); iVar2 = iVar2 + 1) {
      lVar3 = FUN_01d347d0(*(longlong *)(lVar4 + 0x10),iVar2);
      iVar1 = FUN_00414f50(*(undefined8 *)(lVar3 + 8),local_128,
                           (ulonglong)**(byte **)(lVar3 + 8) + 1);
      if (iVar1 == 0) break;
    }
    if (iVar2 < *(int *)(*(longlong *)(lVar4 + 0x10) + 0x10)) {
      local_348 = FUN_01d347d0(param_6,iVar2);
    }
    else {
      local_228[0] = 0;
      iVar2 = 0;
      if (param_1[0x13] != 0) {
        iVar2 = *(int *)(param_1[0x13] + -4);
      }
      while ((0 < iVar2 && (*(short *)(param_1[0x13] + -2 + (longlong)iVar2 * 2) != 0x2e))) {
        iVar2 = iVar2 + -1;
      }
      FUN_00416dc0(&local_230,param_1[0x13],1,iVar2);
      FUN_00416910(local_228,local_230,0xff);
      FUN_004154b0(&local_238,local_228,0);
      FUN_004154b0(&local_240,local_128,0);
      FUN_004155b0(&local_238,local_240);
      FUN_00415560(local_340,local_238,0xff);
      local_348 = FUN_016bc3a0(param_7,local_340);
    }
  }
  if (local_348 == 0) {
    FUN_016a4020(*(undefined8 *)(param_7 + 0x10),0x20,local_128,0xffffffff);
  }
  (**(code **)(*param_1 + 0x208))(param_1,param_2,*(undefined4 *)(local_348 + 0x18),0);
  if (*(longlong *)(local_348 + 8) != 0) {
    (**(code **)(*param_1 + 0x238))(param_1,param_2,*(longlong *)(local_348 + 8));
  }
  if (*(char *)(param_7 + 0x9aa) != '\0') {
    (**(code **)(*param_1 + 0x228))(param_1,param_2,*(undefined4 *)(local_348 + 0x1c));
  }
  FUN_00414590(&local_240,2);
  FUN_00414480(&local_230);
  return;
}


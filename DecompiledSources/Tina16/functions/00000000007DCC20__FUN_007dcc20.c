/* Ghidra address: 007dcc20 */
/* Ghidra symbol: FUN_007dcc20 */


void FUN_007dcc20(undefined8 *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  uint local_2c;
  
  local_40 = *param_1;
  uStack_38 = param_1[1];
  local_44 = 0;
  local_48 = 0;
  iVar2 = 0;
  iVar3 = 0;
  local_50 = param_2;
  if (param_2 != 0) {
    iVar2 = FUN_007e2ef0(param_2);
  }
  if (param_3 != 0) {
    iVar3 = FUN_007e2ef0(param_3);
  }
  cVar1 = '\0';
  while ((cVar1 == '\0' && ((local_44 < iVar2 || (local_48 < iVar3))))) {
    local_2c = 0xff;
    bVar5 = 0xff;
    if (local_44 < iVar2) {
      lVar4 = FUN_007e2f10(local_50,local_44);
      local_2c = (uint)*(byte *)(lVar4 + 0x87);
    }
    if (local_48 < iVar3) {
      lVar4 = FUN_007e2f10(param_3,local_48);
      bVar5 = *(byte *)(lVar4 + 0x87);
    }
    if ((int)(uint)bVar5 < (int)local_2c) {
      local_2c = (uint)bVar5;
      cVar1 = FUN_007dcba0(auStack_78,&local_48,param_3,&local_40);
    }
    else {
      cVar1 = FUN_007dcba0(auStack_78,&local_44,local_50,&local_40);
    }
    while ((local_44 < iVar2 &&
           (lVar4 = FUN_007e2f10(local_50,local_44),
           (int)(uint)*(byte *)(lVar4 + 0x87) <= (int)local_2c))) {
      local_44 = local_44 + 1;
    }
    while ((local_48 < iVar3 &&
           (lVar4 = FUN_007e2f10(param_3,local_48),
           (int)(uint)*(byte *)(lVar4 + 0x87) <= (int)local_2c))) {
      local_48 = local_48 + 1;
    }
  }
  return;
}


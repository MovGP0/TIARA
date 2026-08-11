/* Ghidra address: 00ad6fb0 */
/* Ghidra symbol: FUN_00ad6fb0 */


void FUN_00ad6fb0(longlong param_1,undefined8 param_2,char param_3)

{
  short sVar1;
  longlong lVar2;
  bool bVar3;
  ushort uVar4;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined8 local_58;
  char local_49;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined1 local_32;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c [3];
  
  local_40 = (undefined4 *)0x0;
  local_48 = (undefined4 *)0x0;
  local_58 = param_2;
  local_49 = param_3;
  local_28 = FUN_00a722e0(0,0);
  local_31 = 0;
  FUN_00414480(&local_40);
  local_1c[0] = 1;
  if (*(char *)(*(longlong *)(param_1 + 0x510) + 0x44) == -0x5e) {
    if (local_49 != '\0') {
      local_68 = local_1c;
      FUN_00ad6d80(auStack_88,&local_28,&local_31,&local_40);
    }
    lVar2 = *(longlong *)(param_1 + 0x510);
    while( true ) {
      sVar1 = *(short *)(lVar2 + 0x20);
      if ((((ushort)(sVar1 - 9U) < 2) || (uVar4 = sVar1 - 0xc, uVar4 < 2)) || (uVar4 == 0x14)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (!bVar3) break;
      FUN_00ad1170(lVar2);
    }
    FUN_00ad4730(*(undefined8 *)(param_1 + 0x510));
  }
  if (*(char *)(*(longlong *)(param_1 + 0x510) + 0x44) == -0x5c) {
    while (*(char *)(*(longlong *)(param_1 + 0x510) + 0x44) == -0x5c) {
      if (local_49 != '\0') {
        local_30 = local_28;
        local_32 = local_31;
        FUN_00414b50(&local_48,local_40);
        local_20 = 1;
        local_68 = &local_20;
        FUN_00ad6d80(auStack_88,&local_30,&local_32,&local_48);
        local_68 = local_48;
        FUN_00aacb00(local_58,local_20,&local_30,local_32);
      }
      lVar2 = *(longlong *)(param_1 + 0x510);
      while( true ) {
        sVar1 = *(short *)(lVar2 + 0x20);
        if ((((ushort)(sVar1 - 9U) < 2) || (uVar4 = sVar1 - 0xc, uVar4 < 2)) || (uVar4 == 0x14)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (!bVar3) break;
        FUN_00ad1170(lVar2);
      }
      FUN_00ad4730(*(undefined8 *)(param_1 + 0x510));
    }
  }
  else if (local_49 != '\0') {
    local_68 = local_40;
    FUN_00aacb00(local_58,local_1c[0],&local_28,local_31);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x510) + 0x44) == -0x5d) {
    FUN_00ad4730(*(undefined8 *)(param_1 + 0x510));
  }
  FUN_00414560(&local_48,2);
  return;
}


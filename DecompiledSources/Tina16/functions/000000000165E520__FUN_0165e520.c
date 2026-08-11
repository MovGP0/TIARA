/* Ghidra address: 0165e520 */
/* Ghidra symbol: FUN_0165e520 */


void FUN_0165e520(longlong param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auStack_88 [36];
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar4 = (longlong)(int)(param_2 + param_3) / 2 & 0xffffffff;
  local_64 = param_2;
  local_60 = param_3;
  local_5c = param_2;
  do {
    while( true ) {
      uVar5 = (uint)uVar4;
      cVar3 = FUN_0165e350(auStack_88,local_5c,uVar4);
      if (cVar3 == '\0') break;
      local_5c = local_5c + 1;
    }
    while (cVar3 = FUN_0165e350(auStack_88,uVar4,param_3), cVar3 != '\0') {
      param_3 = param_3 - 1;
    }
    if ((int)local_5c <= (int)param_3) {
      if ((uVar5 == local_5c) || (uVar5 == param_3)) {
        uVar4 = (ulonglong)(uVar5 ^ local_5c ^ param_3);
      }
      puVar1 = (undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1c8) +
               (longlong)(int)local_5c * 0x28);
      local_50 = *puVar1;
      uStack_48 = puVar1[1];
      uStack_40 = puVar1[2];
      uStack_38 = puVar1[3];
      uStack_30 = puVar1[4];
      puVar1 = (undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1c8) +
               (longlong)(int)local_5c * 0x28);
      puVar2 = (undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1c8) +
               (longlong)(int)param_3 * 0x28);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[4] = puVar2[4];
      puVar1 = (undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1c8) +
               (longlong)(int)param_3 * 0x28);
      *puVar1 = local_50;
      puVar1[1] = uStack_48;
      puVar1[2] = uStack_40;
      puVar1[3] = uStack_38;
      puVar1[4] = uStack_30;
      local_5c = local_5c + 1;
      param_3 = param_3 - 1;
    }
  } while ((int)local_5c <= (int)param_3);
  if ((int)local_64 < (int)param_3) {
    FUN_0165e520(param_1,local_64,param_3);
  }
  if ((int)local_5c < (int)local_60) {
    FUN_0165e520(param_1,local_5c,local_60);
  }
  return;
}


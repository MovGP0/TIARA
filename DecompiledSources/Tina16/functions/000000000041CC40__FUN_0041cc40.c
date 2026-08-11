/* Ghidra address: 0041cc40 */
/* Ghidra symbol: FUN_0041cc40 */


void FUN_0041cc40(longlong param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  longlong local_28;
  
  local_40 = auStack_68;
  if (*(char *)(param_1 + 0x1298) == '\0') {
    puVar1 = auStack_68;
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar2 = FUN_00411cf0();
      LOCK();
      local_28 = *(longlong *)(param_1 + 0x18);
      if (local_28 == 0) {
        *(longlong *)(param_1 + 0x18) = lVar2;
        local_28 = 0;
      }
      UNLOCK();
      puVar1 = local_40;
      if (local_28 != 0) {
        FUN_00411d90(local_28);
        puVar1 = local_40;
      }
    }
    local_40 = puVar1;
    FUN_00411f00(*(undefined8 *)(param_1 + 0x18),0xffffffff);
    if (*(char *)(param_1 + 0x1298) == '\0') {
      iVar3 = 0xc5;
      local_30 = param_1 + 0x20;
      do {
        FUN_0041c970(local_30);
        local_30 = local_30 + 0x18;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      *(undefined1 *)(param_1 + 0x1298) = 1;
    }
    FUN_004120d0(*(undefined8 *)(param_1 + 0x18));
  }
  return;
}


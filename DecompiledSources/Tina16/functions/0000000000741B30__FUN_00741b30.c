/* Ghidra address: 00741b30 */
/* Ghidra symbol: FUN_00741b30 */


void FUN_00741b30(longlong param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_50 [16];
  undefined1 *local_40;
  longlong *local_30;
  longlong *local_28;
  undefined1 local_19;
  
  local_40 = auStack_88;
  puVar2 = auStack_88;
  if ((*(ushort *)(param_1 + 0x34) & 0x10) != 0) {
    local_28 = *(longlong **)(param_1 + 0x310);
    FUN_005fd670(local_28[0xf],1);
    FUN_005fdcb0(local_28[0x10],1);
    local_68 = *(undefined4 *)(param_1 + 0x9c);
    (**(code **)(*local_28 + 0xf8))(local_28,0,0,*(undefined4 *)(param_1 + 0x98));
    puVar2 = local_40;
  }
  local_40 = puVar2;
  local_19 = *(undefined1 *)(param_1 + 0x344);
  *(undefined1 *)(param_1 + 0x344) = 1;
  if (((*(uint *)(param_1 + 0xa4) & 0x8000) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x318) + 0x18) != 0)) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x318) + 0x18);
    cVar3 = (**(code **)(*plVar1 + 0x98))(plVar1);
    if (cVar3 == '\0') {
      FUN_00741a20(auStack_88,*(undefined8 *)(param_1 + 0x310));
      goto code_r0x00741c8e;
    }
  }
  local_30 = *(longlong **)(param_1 + 0x310);
  FUN_007418a0(param_1,local_50);
  (**(code **)(*local_30 + 0x110))
            (local_30,local_50,*(undefined8 *)(*(longlong *)(param_1 + 0x318) + 0x18));
code_r0x00741c8e:
  *(undefined1 *)(param_1 + 0x344) = local_19;
  return;
}


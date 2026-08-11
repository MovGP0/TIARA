/* Ghidra address: 00c48630 */
/* Ghidra symbol: FUN_00c48630 */


void FUN_00c48630(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  uint local_24;
  undefined8 local_20 [2];
  
  local_40 = auStack_68;
  local_20[0] = 0;
  do {
    *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x30) = 1;
    uVar2 = FUN_00427dd0();
    *(ulonglong *)(*(longlong *)(param_1 + 0x30) + 0x28) = (ulonglong)uVar2;
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0x18);
    *plVar1 = *plVar1 + 1;
    local_2c = 0;
    if (DAT_01ea40d8 != 0) {
      local_2c = *(undefined4 *)(DAT_01ea40d8 + -4);
    }
    FUN_00415d10(local_20,local_2c,0);
    local_38 = FUN_00414df0(local_20);
    local_30 = 0;
    if (DAT_01ea40d8 != 0) {
      local_30 = *(undefined4 *)(DAT_01ea40d8 + -4);
    }
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x18))(*(longlong **)(param_1 + 0x40),local_38);
    iVar3 = FUN_00415a60(local_20[0],DAT_01ea40d8);
    if (iVar3 == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x40) + 0x18))
                (*(longlong **)(param_1 + 0x40),&local_24);
      if (0x100000 < local_24) {
        FUN_00c48570(param_1,L"DoRead invalid packet size");
      }
      local_28 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x40));
      local_28 = local_28 + local_24;
      if (*(longlong *)(param_1 + 0x70) != 0) {
        (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x78),param_1);
      }
      FUN_004b6dc0(*(undefined8 *)(param_1 + 0x40),local_28);
    }
    else {
      FUN_00c48570(param_1,L"DoRead invalid packet header");
      FUN_00c48c30(param_1);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x30) = 0;
    uVar4 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x40));
    *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8) = uVar4;
  } while (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x18) <
           *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10));
  FUN_004144d0(local_20);
  return;
}


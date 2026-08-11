/* Ghidra address: 00628510 */
/* Ghidra symbol: FUN_00628510 */


void FUN_00628510(longlong param_1,byte param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  local_50 = auStack_78;
  FUN_00411a80(param_1,param_2);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  lVar3 = FUN_004b6da0(*(undefined8 *)(param_1 + 8));
  if (lVar3 != *(longlong *)(param_1 + 0x18)) {
    FUN_004b6dc0(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 0x18));
  }
  while( true ) {
    uVar1 = FUN_0062a930(param_1 + 0x30,4);
    iVar2 = FUN_00627da0(uVar1);
    if (iVar2 == 1) break;
    local_10 = *(longlong *)(param_1 + 0x88);
    local_18 = local_10;
    if (local_10 != 0) {
      local_18 = *(longlong *)(local_10 + -8);
    }
    FUN_004b8a80(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x88),
                 local_18 - *(int *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x88);
    local_20 = *(longlong *)(param_1 + 0x88);
    local_28 = local_20;
    if (local_20 != 0) {
      local_28 = *(longlong *)(local_20 + -8);
    }
    *(undefined4 *)(param_1 + 0x48) = (undefined4)local_28;
  }
  local_30 = *(longlong *)(param_1 + 0x88);
  local_38 = local_30;
  if (local_30 != 0) {
    local_38 = *(longlong *)(local_30 + -8);
  }
  if (*(int *)(param_1 + 0x48) < local_38) {
    local_40 = *(longlong *)(param_1 + 0x88);
    local_48 = local_40;
    if (local_40 != 0) {
      local_48 = *(longlong *)(local_40 + -8);
    }
    FUN_004b8a80(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x88),
                 local_48 - *(int *)(param_1 + 0x48));
  }
  FUN_006297a0(param_1 + 0x30);
  FUN_00410ef0(param_1,param_2 & 0xfc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


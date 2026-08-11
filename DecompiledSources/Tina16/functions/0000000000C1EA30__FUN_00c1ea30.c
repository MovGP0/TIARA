/* Ghidra address: 00c1ea30 */
/* Ghidra symbol: FUN_00c1ea30 */


longlong FUN_00c1ea30(longlong param_1,char param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  byte local_1d;
  int local_1c;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00c1e140(local_res8,0,param_3,param_4);
  local_1c = 0;
  local_1d = 0;
  do {
    *(uint *)(local_res8 + 0x418 + (longlong)local_1c * 4) = (uint)local_1d;
    *(uint *)(local_res8 + 0x418 + (longlong)-local_1c * 4) = -(uint)local_1d;
    local_1d = local_1d + 1;
    local_1c = local_1c + 1;
  } while (local_1c < 8);
  for (; local_1c < 0x20; local_1c = local_1c + 1) {
    *(uint *)(local_res8 + 0x418 + (longlong)local_1c * 4) = (uint)local_1d;
    *(uint *)(local_res8 + 0x418 + (longlong)-local_1c * 4) = -(uint)local_1d;
    local_1d = local_1d + ((byte)local_1c & 1);
  }
  for (; local_1c < 0x100; local_1c = local_1c + 1) {
    *(uint *)(local_res8 + 0x418 + (longlong)local_1c * 4) = (uint)local_1d;
    *(uint *)(local_res8 + 0x418 + (longlong)-local_1c * 4) = -(uint)local_1d;
  }
  uVar2 = FUN_004095c0((longlong)((*(int *)(local_res8 + 0x18) + 4) * 4));
  *(undefined8 *)(local_res8 + 0x818) = uVar2;
  uVar2 = FUN_004095c0((longlong)((*(int *)(local_res8 + 0x18) + 4) * 4));
  *(undefined8 *)(local_res8 + 0x820) = uVar2;
  uVar2 = FUN_004095c0((longlong)((*(int *)(local_res8 + 0x18) + 4) * 4));
  *(undefined8 *)(local_res8 + 0x828) = uVar2;
  uVar2 = FUN_004095c0((longlong)((*(int *)(local_res8 + 0x18) + 4) * 4));
  *(undefined8 *)(local_res8 + 0x830) = uVar2;
  uVar2 = FUN_004095c0((longlong)((*(int *)(local_res8 + 0x18) + 4) * 4));
  *(undefined8 *)(local_res8 + 0x838) = uVar2;
  uVar2 = FUN_004095c0((longlong)((*(int *)(local_res8 + 0x18) + 4) * 4));
  *(undefined8 *)(local_res8 + 0x840) = uVar2;
  uVar2 = FUN_004095c0((longlong)((*(int *)(local_res8 + 0x18) + 4) * 4));
  *(undefined8 *)(local_res8 + 0x848) = uVar2;
  uVar2 = FUN_004095c0((longlong)((*(int *)(local_res8 + 0x18) + 4) * 4));
  *(undefined8 *)(local_res8 + 0x850) = uVar2;
  uVar2 = FUN_004095c0((longlong)((*(int *)(local_res8 + 0x18) + 4) * 4));
  *(undefined8 *)(local_res8 + 0x858) = uVar2;
  *(undefined4 *)(local_res8 + 0x8ac) = 1;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}


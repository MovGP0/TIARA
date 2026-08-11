/* Ghidra address: 00a3f660 */
/* Ghidra symbol: FUN_00a3f660 */


longlong FUN_00a3f660(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong local_res8;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  byte *local_30;
  uint local_20;
  int local_1c;
  
  local_40 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_00a3f5c0(local_res8,0,param_3);
  uVar3 = FUN_004095c0(0x400);
  *(undefined8 *)(local_res8 + 0x10) = uVar3;
  uVar2 = thunk_FUN_041a3f2d(param_3,0,0x100,uVar3);
  *(undefined4 *)(local_res8 + 8) = uVar2;
  uVar3 = FUN_004095c0(0x10000);
  *(undefined8 *)(local_res8 + 0x18) = uVar3;
  local_1c = 0;
  do {
    *(undefined2 *)(*(longlong *)(local_res8 + 0x18) + (longlong)local_1c * 2) = 0xffff;
    local_1c = local_1c + 1;
  } while (local_1c != 0x8000);
  iVar4 = *(int *)(local_res8 + 8);
  local_1c = 0x8000;
  if ((0 < iVar4) && (local_1c = 0, -1 < iVar4 + -1)) {
    do {
      local_30 = (byte *)(*(longlong *)(local_res8 + 0x10) + (longlong)local_1c * 4);
      local_20 = (uint)(*local_30 >> 3) | (uint)(local_30[1] & 0xf8) * 4 |
                 (uint)(local_30[2] & 0xf8) << 7;
      if (*(short *)(*(longlong *)(local_res8 + 0x18) + (longlong)(int)local_20 * 2) == -1) {
        *(undefined2 *)(*(longlong *)(local_res8 + 0x18) + (longlong)(int)local_20 * 2) =
             (undefined2)local_1c;
      }
      local_1c = local_1c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}


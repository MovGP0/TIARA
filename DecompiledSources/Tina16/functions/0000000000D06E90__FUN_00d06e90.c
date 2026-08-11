/* Ghidra address: 00d06e90 */
/* Ghidra symbol: FUN_00d06e90 */


void FUN_00d06e90(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  short *local_38;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  bool local_12;
  char local_11;
  
  local_40 = auStack_88;
  local_48 = 0;
  local_50 = 0;
  local_11 = '\x01';
  local_12 = true;
  if ((*(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 8) + 0x205) & 0x80) == 0) {
    iVar1 = *(int *)(param_1 + 0x90);
    if ((-1 < iVar1) && (local_2c = 0, -1 < iVar1)) {
      iVar1 = iVar1 + 1;
      local_38 = *(short **)(param_1 + 0x44);
      do {
        if (*(int *)(param_1 + 0x4c) == (int)*local_38) {
          local_11 = '\0';
          local_12 = (*(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 8) + 0x205) & 0x400)
                     == 0;
          break;
        }
        local_38 = local_38 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  else {
    local_11 = '\0';
    local_12 = (*(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 8) + 0x205) & 0x400) == 0;
  }
  if (local_11 == '\0') {
    local_28 = 0;
    local_40 = auStack_88;
  }
  else {
    local_28 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  }
  if (local_11 == '\0' && local_12 == false) {
    local_20 = 0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x18);
    local_20 = *(undefined8 *)(lVar2 + 0x118);
    *(undefined8 *)(lVar2 + 0x118) = local_28;
  }
  FUN_00d03810(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 8),
               *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10),
               *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x18));
  if (local_11 != '\0') {
    FUN_004b6dc0(local_28,0);
    FUN_00d05dc0(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 8),&local_48);
    lVar2 = FUN_00d05df0(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 8));
    FUN_008b0660(&local_50,local_28,*(undefined8 *)(lVar2 + 0x20));
    local_68 = local_50;
    uVar3 = FUN_00d00470(&PTR_FUN_00d002a0,1,*(undefined4 *)(param_1 + 0x4c),local_48);
    FUN_004134c0(uVar3);
  }
  if (local_11 != '\0' || local_12 != false) {
    *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x18) + 0x118) = local_20;
  }
  if (local_11 != '\0') {
    FUN_00410f20(local_28);
  }
  FUN_00414560(&local_50,2);
  return;
}


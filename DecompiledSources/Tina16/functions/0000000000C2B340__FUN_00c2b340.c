/* Ghidra address: 00c2b340 */
/* Ghidra symbol: FUN_00c2b340 */


void FUN_00c2b340(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  char local_41;
  char *local_40;
  undefined1 *local_38;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined8 *local_20;
  
  local_60 = auStack_88;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x140) + 0x40);
  (**(code **)(*plVar2 + 0x30))(plVar2);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x40);
  iVar1 = *(int *)(lVar3 + 0x10);
  if ((iVar1 != 0) && (iVar1 != 0x100)) {
    local_24 = FUN_00c232f0(lVar3,DAT_01e9f560);
    local_41 = '\0';
    local_20 = (undefined8 *)FUN_00c1b520(&PTR_FUN_00c1af80,1,param_2,3);
    uVar5 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x140) + 0x4f);
    local_28 = 0;
    if (-1 < (int)(uVar5 - 1)) {
      do {
        local_40 = (char *)(**(code **)*local_20)(local_20,local_28);
        local_38 = (undefined1 *)FUN_00c2a3f0(*(undefined8 *)(param_1 + 0x140),local_28);
        uVar4 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x140) + 0x4d);
        local_2c = 0;
        if (-1 < (int)(uVar4 - 1)) {
          do {
            if (*local_40 != '\0') {
              *local_38 = (undefined1)local_24;
              local_41 = '\x01';
            }
            local_40 = local_40 + 1;
            local_38 = local_38 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        local_28 = local_28 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    FUN_00410f20(local_20);
    if (local_41 == '\0') {
      FUN_00c23420(*(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x40),local_24);
    }
    else {
      FUN_00c2b2f0(param_1,local_24);
    }
  }
  return;
}


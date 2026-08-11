/* Ghidra address: 00b68310 */
/* Ghidra symbol: FUN_00b68310 */


void FUN_00b68310(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  char local_3b;
  ushort local_3a;
  ushort local_38;
  ushort local_36;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  undefined8 local_28;
  longlong *local_20;
  
  local_50 = auStack_78;
  local_28 = 0;
  local_30 = 0;
  local_34 = 0;
  local_3b = '\0';
  local_2c = FUN_00b17280(*(undefined8 *)(param_1 + 0x20));
  local_38 = 0;
  local_20 = (longlong *)FUN_00b5ab80(&DAT_00b5a598,1,*(undefined8 *)(param_1 + 0x20));
  if (local_30 < local_2c) {
    do {
      FUN_00b172f0(*(undefined8 *)(param_1 + 0x20),local_30);
      cVar2 = FUN_00b173f0(*(undefined8 *)(param_1 + 0x20),&local_36);
      if (cVar2 == '\0') break;
      cVar2 = FUN_00b173f0(*(undefined8 *)(param_1 + 0x20),&local_3a);
      if (cVar2 == '\0') break;
      if (local_3a != 0) {
        FUN_00415d10(&local_28,local_3a,0);
        uVar3 = FUN_00414df0(&local_28);
        cVar2 = FUN_00b17450(*(undefined8 *)(param_1 + 0x20),uVar3,local_3a);
        if (cVar2 == '\0') break;
      }
      local_30 = FUN_00b172d0(*(undefined8 *)(param_1 + 0x20));
      FUN_00b172f0(*(undefined8 *)(param_1 + 0x20),local_34);
      lVar1 = local_20[2];
      *(uint *)(lVar1 + 0x10) = (uint)local_36;
      *(uint *)(lVar1 + 0x14) = (uint)local_3a;
      (**(code **)(**(longlong **)(lVar1 + 8) + 8))(*(longlong **)(lVar1 + 8),local_3a);
      FUN_004b6dc0(*(undefined8 *)(local_20[2] + 8),0);
      uVar3 = FUN_00414df0(&local_28);
      FUN_00b258a0(*(undefined8 *)(local_20[2] + 8),uVar3);
      FUN_00b5b370(local_20);
      local_34 = FUN_00b172d0(*(undefined8 *)(param_1 + 0x20));
      if ((local_38 == 0x2f) && (local_3b == '\0')) {
        FUN_00b5ada0(local_20,param_1 + 0x40);
        local_3b = '\x01';
      }
      local_38 = local_36;
    } while (local_30 < local_2c);
  }
  FUN_00b172f0(*(undefined8 *)(param_1 + 0x20),local_34);
  FUN_00b5b530(local_20);
  (**(code **)(*local_20 + -0x20))(local_20,1);
  FUN_004144d0(&local_28);
  return;
}


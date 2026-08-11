/* Ghidra address: 00803c80 */
/* Ghidra symbol: FUN_00803c80 */


void FUN_00803c80(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  char local_1d;
  int local_1c [3];
  
  local_28 = 0;
  local_50 = param_1;
  if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
    if (*(int *)(*(longlong *)(param_2 + 0x10) + 4) == 1) {
      for (lVar4 = FUN_006485b0(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x10)); lVar4 != 0;
          lVar4 = *(longlong *)(lVar4 + 0x78)) {
        cVar2 = FUN_00803c10(auStack_88,lVar4);
        if (cVar2 != '\0') break;
      }
      if (lVar4 == 0) goto LAB_00803e0e;
      local_68 = &local_28;
      FUN_00803c40(auStack_88,lVar4,&local_1d,local_1c);
      local_38 = 0;
      local_34 = 0;
      local_30 = FUN_0064d1f0(lVar4,&local_38);
    }
    else {
      local_1d = '\x01';
      local_1c[0] = FUN_00803bb0(auStack_88,*(undefined8 *)(param_1 + 0x500));
      if (local_1c[0] == 0) {
        local_1c[0] = FUN_00803bb0(auStack_88,*(undefined8 *)(local_50 + 0xe8));
      }
      local_40 = 0;
      local_3c = 0;
      local_30 = FUN_0064d1f0(local_50,&local_40);
    }
    if (((*(byte *)(local_50 + 0x4d0) & 8) == 0) || (local_1d != '\x01')) {
      if (local_1d == '\x01') {
        FUN_0080dac0(DAT_02012668,local_1c[0]);
      }
      else if (local_1d == '\0') {
        FUN_0080da00(DAT_02012668,local_28);
      }
    }
    else {
      local_48 = local_30;
      uVar1 = local_48;
      local_48._0_4_ = (uint)local_30;
      uVar5 = (uint)local_48 & 0xffff;
      local_48._4_4_ = (int)((ulonglong)local_30 >> 0x20);
      uVar3 = local_48._4_4_ << 0x10;
      local_48 = uVar1;
      FUN_0080db80(DAT_02012668,0xd,(longlong)(int)(uVar5 | uVar3));
      FUN_0080db80(DAT_02012668,8,(longlong)local_1c[0]);
    }
  }
LAB_00803e0e:
  FUN_00414480(&local_28);
  return;
}


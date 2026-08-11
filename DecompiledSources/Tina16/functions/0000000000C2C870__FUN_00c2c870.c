/* Ghidra address: 00c2c870 */
/* Ghidra symbol: FUN_00c2c870 */


void FUN_00c2c870(longlong param_1,longlong *param_2,int *param_3,char param_4,char param_5)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_c8 [32];
  uint local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  uint local_88;
  uint local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined1 *local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  longlong local_38;
  longlong local_30;
  
  local_50 = auStack_c8;
  puVar2 = auStack_c8;
  if (((param_4 == '\0') || (cVar3 = FUN_00c2a4a0(param_1), puVar2 = local_50, cVar3 == '\0')) ||
     (cVar3 = FUN_00c28c30(param_1), puVar2 = local_50, cVar3 == '\0')) {
    local_50 = puVar2;
    if (param_5 == '\0') {
      uVar5 = FUN_00c29a40(param_1);
      (**(code **)(*param_2 + 0x110))(param_2,param_3,uVar5);
    }
    else {
      local_48 = *param_3 + (uint)*(ushort *)(param_1 + 0x49);
      local_40 = local_48 + (uint)*(ushort *)(param_1 + 0x4d);
      while (local_48 < param_3[2]) {
        local_44 = param_3[1] + (uint)*(ushort *)(param_1 + 0x4b);
        local_3c = local_44 + (uint)*(ushort *)(param_1 + 0x4f);
        while (local_44 < param_3[3]) {
          uVar5 = FUN_00c29a40(param_1);
          (**(code **)(*param_2 + 0x110))(param_2,&local_48,uVar5);
          iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8));
          local_44 = local_44 + iVar4;
          iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8));
          local_3c = local_3c + iVar4;
        }
        iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8));
        local_48 = local_48 + iVar4;
        iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8));
        local_40 = local_40 + iVar4;
      }
    }
  }
  else {
    local_30 = 0;
    local_38 = 0;
    uVar5 = thunk_FUN_04137b5f(0);
    local_38 = FUN_00c1a300(uVar5);
    local_30 = thunk_FUN_041a19a1(local_38,*(undefined8 *)(param_1 + 0x18));
    if (param_5 == '\0') {
      uVar5 = FUN_005ffa40(param_2);
      iVar4 = *param_3;
      iVar1 = param_3[1];
      uVar6 = FUN_00c29a40(param_1);
      uVar6 = FUN_00609e10(uVar6);
      local_a0 = FUN_005ffa40(uVar6);
      local_a8 = param_3[3] - iVar1;
      local_98 = 0;
      local_90 = 0;
      local_88 = (uint)*(ushort *)(param_1 + 0x4d);
      local_80 = (uint)*(ushort *)(param_1 + 0x4f);
      local_78 = local_38;
      local_70 = 0;
      local_68 = 0;
      FUN_00c2c0f0(uVar5,iVar4,iVar1,param_3[2] - iVar4);
    }
    else {
      local_48 = *param_3 + (uint)*(ushort *)(param_1 + 0x49);
      local_40 = local_48 + (uint)*(ushort *)(param_1 + 0x4d);
      while (local_48 < param_3[2]) {
        local_44 = param_3[1] + (uint)*(ushort *)(param_1 + 0x4b);
        local_3c = local_44 + (uint)*(ushort *)(param_1 + 0x4f);
        while (local_44 < param_3[3]) {
          uVar5 = FUN_005ffa40(param_2);
          uVar6 = FUN_00c29a40(param_1);
          uVar6 = FUN_00609e10(uVar6);
          local_a0 = FUN_005ffa40(uVar6);
          local_a8 = (uint)*(ushort *)(param_1 + 0x4f);
          local_98 = 0;
          local_90 = 0;
          local_88 = (uint)*(ushort *)(param_1 + 0x4d);
          local_80 = (uint)*(ushort *)(param_1 + 0x4f);
          local_78 = local_38;
          local_70 = 0;
          local_68 = 0;
          FUN_00c2c0f0(uVar5,local_48,local_44,*(undefined2 *)(param_1 + 0x4d));
          iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8));
          local_44 = local_44 + iVar4;
          iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8));
          local_3c = local_3c + iVar4;
        }
        iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8));
        local_48 = local_48 + iVar4;
        iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8));
        local_40 = local_40 + iVar4;
      }
    }
    (**(code **)(*param_2 + 0x48))(param_2);
    if (local_30 != 0) {
      thunk_FUN_041a19a1(local_38,local_30);
    }
    if (local_38 != 0) {
      thunk_FUN_041a2fd8(local_38);
    }
  }
  return;
}


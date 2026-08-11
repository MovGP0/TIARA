/* Ghidra address: 0060bf20 */
/* Ghidra symbol: FUN_0060bf20 */


void FUN_0060bf20(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 local_460 [1024];
  undefined4 local_60;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined2 local_58;
  undefined2 local_56;
  undefined2 local_52;
  int local_50;
  int local_48;
  int local_44;
  uint local_40;
  int local_3c [3];
  
  FUN_0040d200(&local_52,0xe,0);
  local_52 = 0x4d42;
  puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x60) + 0x30);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_0060a3b0(param_1);
    if ((*(short *)(*(longlong *)(param_1 + 0x60) + 0x6e) == 0x20) &&
       (*(char *)(param_1 + 0x68) == '\x01')) {
      FUN_0060a1e0(param_1);
    }
    lVar3 = *(longlong *)(param_1 + 0x60);
    local_3c[0] = 0;
    if (*(longlong *)(lVar3 + 0x28) != 0) {
      FUN_00601790(*(longlong *)(lVar3 + 0x28),&local_44,local_3c,*(undefined4 *)(lVar3 + 0x80));
      if (*(char *)(lVar3 + 0x39) != '\0') {
        local_44 = 0xc;
        if (*(ushort *)(lVar3 + 0x6e) < 9) {
          local_44 = (1 << ((byte)*(ushort *)(lVar3 + 0x6e) & 0x1f)) * 3 + 0xc;
        }
      }
      local_3c[0] = local_3c[0] + local_44 + 0xe;
      FUN_0040d200(&local_52,0xe,0);
      local_52 = 0x4d42;
      if (*(ushort *)(lVar3 + 0x6e) < 9) {
        plVar5 = (longlong *)FUN_00609e10(param_1);
        (**(code **)(*plVar5 + 0x58))(plVar5,1);
        uVar6 = thunk_FUN_041a19a1(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x60),
                                   *(undefined8 *)(lVar3 + 0x28));
        uVar6 = FUN_005fffe0(uVar6);
        local_40 = thunk_FUN_041fe7d8(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x60),0,0x100,
                                      local_460);
        thunk_FUN_041a19a1(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x60),uVar6);
      }
      else {
        local_40 = 0;
      }
      uVar1 = *(uint *)(lVar3 + 0x80);
      if ((uVar1 != 0) && (uVar1 < local_40)) {
        local_40 = uVar1;
      }
      if ((((*(char *)(lVar3 + 0x39) == '\0') && (local_40 == 0)) &&
          (*(longlong *)(lVar3 + 0x20) != 0)) && (*(char *)(lVar3 + 0x38) == '\0')) {
        local_40 = FUN_00600c50(*(undefined8 *)(lVar3 + 0x20),local_460,0xff);
        if (8 < *(ushort *)(lVar3 + 0x6e)) {
          local_3c[0] = local_3c[0] + local_40 * 4;
          local_44 = local_44 + local_40 * 4;
        }
      }
      local_50 = local_3c[0];
      local_48 = local_44 + 0xe;
    }
    if (param_3 != '\0') {
      FUN_004b89e0(param_2,local_3c,4);
    }
    if (local_3c[0] != 0) {
      FUN_00607e10(lVar3 + 0x40);
      if (local_40 != 0) {
        if ((*(uint *)(lVar3 + 0x80) == 0) || (*(uint *)(lVar3 + 0x80) != local_40)) {
          *(uint *)(lVar3 + 0x80) = local_40;
        }
        if (*(char *)(lVar3 + 0x39) != '\0') {
          FUN_00600830(local_460,&local_40);
        }
      }
      if (*(char *)(lVar3 + 0x39) == '\0') {
        FUN_004b89e0(param_2,&local_52,0xe);
        FUN_004b89e0(param_2,lVar3 + 0x60,0x28);
        if ((8 < *(ushort *)(lVar3 + 0x6e)) && ((*(uint *)(lVar3 + 0x70) & 3) != 0)) {
          FUN_004b89e0(param_2,lVar3 + 0x88,0xc);
        }
      }
      else {
        local_60 = 0xc;
        local_5c = *(undefined2 *)(lVar3 + 100);
        local_5a = *(undefined2 *)(lVar3 + 0x68);
        local_58 = 1;
        local_56 = *(undefined2 *)(lVar3 + 0x6e);
        FUN_004b89e0(param_2,&local_52,0xe);
        FUN_004b89e0(param_2,&local_60,0xc);
      }
      FUN_004b89e0(param_2,local_460,local_40 * (byte)(&DAT_01dee839)[*(byte *)(lVar3 + 0x39)]);
      FUN_004b89e0(param_2,*(undefined8 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x74));
    }
  }
  else {
    local_3c[0] = (**(code **)*puVar2)(puVar2);
    if (param_3 != '\0') {
      FUN_004b89e0(param_2,local_3c,4);
    }
    puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x60) + 0x30);
    uVar4 = (**(code **)*puVar2)(puVar2);
    (**(code **)(*param_2 + 0x20))(param_2,puVar2[1],uVar4);
  }
  return;
}

